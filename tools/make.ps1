param(
	[string] $remove = $False
)

$projectRoot    = Split-Path -Parent $PSScriptRoot
$toolsPath      = "$projectRoot\tools"
$buildPath      = "$projectRoot\.build\@2BNB Extras"
$cachePath      = "$projectRoot\.build\cache"
$modPrefix      = "bnb_e_"
$releasePage    = "https://github.com/KoffeinFlummi/armake/releases"
$downloadPage   = "https://github.com/KoffeinFlummi/armake/releases/download/v{0}/armake_v{0}.zip"
$armake         = "$projectRoot\tools\armake.exe"
$tag            = git describe --tag | %{$_ -replace "-.*-", "-"}
$privateKeyFile = "$cachePath\keys\$modPrefix$tag.biprivatekey"
$publicKeyFile  = "$buildPath\keys\$modPrefix$tag.bikey"
$timestamp      = Get-Date -UFormat "%T"
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12


function Get-FullFileHash {
	param (
		[String] $Algo = "MD5"
	)

	$hashes = @()

	foreach ($file in $input) {
		$string = $file.FullName

		# http://jongurgul.com/blog/get-stringhash-get-filehash/
		$StringBuilder = New-Object System.Text.StringBuilder
		[System.Security.Cryptography.HashAlgorithm]::Create($Algo).ComputeHash([System.Text.Encoding]::UTF8.GetBytes($string))|%{
			[Void]$StringBuilder.Append($_.ToString("x2"))
		}

		$hash = Get-FileHash $file.FullName -Algorithm $Algo
		$hash.Hash = $hash.Hash + $StringBuilder.ToString()

		$hashes += $hash
	}

	return $hashes
}


function Get-Hash {
	[Cmdletbinding()]
	param(
		[Parameter(Mandatory=$True)]
		[ValidateScript({
			if(Test-Path -Path $_ -ErrorAction SilentlyContinue)
			{
				return $true
			}
			else
			{
				throw "$($_) is not a valid path."
			}
		})]
		[string]$Path,
		[string]$Algo = "MD5"
	)
	$temp = [System.IO.Path]::GetTempFileName()

	if (Test-Path -Path $Path -PathType Container) {
		# Get child-file hashes
		gci -File -Recurse $Path | Get-FullFileHash $Algo | select -ExpandProperty Hash | Out-File $temp -Append -NoNewline
		# Hash directory in case that has changed
		Get-Item $Path | Get-FileHash -Algorithm $Algo | Out-File $temp -Append -NoNewline

		$hash = Get-FileHash $temp -Algorithm $Algo
		Remove-Item $temp

	} elseif (Test-Path -Path $Path -PathType Leaf) {
		$hash = Get-FileHash $Path -Algorithm $Algo

	} else {
		Write-Output "  [$timestamp] Get-Hash unknown PathType: $Path"
	}

	$hash.Path = $Path
	return $hash
}


function Get-Extras {
	param (
		[string] $type = $False
	)

	if (Test-Path -Path "$toolsPath\support-files.txt") {
		$supportFilesRegex = Get-Content "$toolsPath\support-files.txt"
	} else {
		$supportFilesRegex = "mod.cpp"
	}

	$supportFiles = @()

	if (Test-Path -Path "$projectRoot\extras") {
		$supportFiles += Get-ChildItem -Path "$projectRoot\extras\*"
	}

	$supportFiles += Get-ChildItem -Path "$projectRoot\*" | Where-Object -FilterScript {$_.Name -match $supportFilesRegex}

	if ($type -ne $False) {
		$supportFilesArray = @()
		foreach ($file in $supportFiles) {
			$supportFilesArray += $file.$($type)
		}

		$supportFilesArray
	} else {
		$supportFiles
	}
}


function Remove {
	$origLocation = Get-Location
	Set-Location "$projectRoot\.build"

	Switch ($remove) {
		"all" { Remove-Item "$buildPath" -Recurse -ErrorAction SilentlyContinue }
		"extras" {
			$items = $(Get-Extras "Name") -join ","
			iex "Remove-Item -Path '$buildPath\*' -include $items"
		}
		"addons" { Remove-Item "$buildPath\addons\*" }
		"cache" { Remove-Item "$cachePath" -Recurse -ErrorAction SilentlyContinue }
	}

	Set-Location $origLocation
}


function Compare-VersionNewerThan {
	param(
		[Parameter(Mandatory=$True)]
		$version1,

		[Parameter(Mandatory=$True)]
		$version2
	)

	$version1 = $version1.Split(".") | % {[int] $_}
	$version2 = $version2.Split(".") | % {[int] $_}

	$newer = $False
	for ($i = 0; $i -lt $version1.Length; $i++) {
		if ($version1[$i] -gt $version2[$i]) {
			$newer = $True
			break
		}
	}

	$newer
}


function Get-InstalledArmakeVersion {
	if (Test-Path -Path $armake) {
		$version = & $armake --version
		$version = $version.Substring(1)
	} else {
		$version = "0.0.0"
	}

	$version
}


function Get-LatestArmakeVersion {
	$client = New-Object Net.WebClient
	$content = $client.DownloadString($releasePage)
	$client.dispose()

	$match = $content -match "<a href="".*?/releases/download/v(.*?)/.*?.zip"".*?>"
	if (!$match) {
		Write-Error "[$timestamp] Failed to find valid armake download link."
		$version = "0.0.0"
	} else {
		$version = $matches[1]
	}

	$version
}


function Update-Armake {
	param(
		[Parameter(Mandatory=$True)]
		$url
	)

	New-Item "$PSScriptRoot\temp" -ItemType "directory" -Force | Out-Null

	Write-Output "Downloading armake..."
	$client = New-Object Net.WebClient
	$client.DownloadFile($url, "$PSScriptRoot\temp\armake.zip")
	$client.dispose()

	Write-Output "Download complete, unpacking..."
	Expand-Archive "$PSScriptRoot\temp\armake.zip" "$PSScriptRoot\temp\armake"
	Remove-Item "$PSScriptRoot\temp\armake.zip"

	if ([Environment]::Is64BitProcess) {
		$binary = Get-ChildItem -Path "$PSScriptRoot\temp\armake" -Include "*.exe" -Recurse | Where-Object {$_.Name -match ".*w64.exe"}
	} else {
		$binary = Get-ChildItem -Path "$PSScriptRoot\temp\armake" -Include "*.exe" -Recurse | Where-Object {$_.Name -match ".*w64.exe"}
	}
	Move-Item $binary.FullName $armake -Force

	Remove-Item "$PSScriptRoot\temp" -Recurse -Force
}


function Create-Private-Key {
	$cachedKeysPath = Split-Path -Parent $privateKeyFile
	$binKeysPath    = Split-Path -Parent $publicKeyFile

	# Do we need to clean up first?
	if (Test-Path -Path "$binKeysPath\*" -Exclude "$modPrefix$tag.*") {
		Remove-Item "$cachedKeysPath\*" -Exclude "$modPrefix$tag.*"
		Remove-Item "$binKeysPath\*" -Exclude "$modPrefix$tag.*"
		Remove-Item "$buildPath\addons\*.bisign" -Exclude "*$tag.bisign"

		Write-Output "  [$timestamp] Cleaning up old keys. Current tag: $tag"
	}


	if (!((Test-Path -Path $privateKeyFile) -And (Test-Path -Path $publicKeyFile))) {
		Write-Output "  [$timestamp] Creating key pairs for $tag"
		& $armake keygen -f "$buildPath\keys\$modPrefix$tag"

		New-Item "$cachePath\keys" -ItemType "directory" -ErrorAction SilentlyContinue | Out-Null
		Move-Item -Path "$buildPath\keys\$modPrefix$tag.biprivatekey" -Destination $privateKeyFile -Force
	}

	# Re-check the work done above to verify they exist
	if (!((Test-Path -Path $privateKeyFile) -And (Test-Path -Path $publicKeyFile))) {
		Write-Error "[$timestamp] Failed to generate key pairs $privateKeyFile"
	}
}


function Check-Obsolete {
	param(
		[Parameter(Mandatory=$True)]
		$addonPbo
	)

	$pboName = $addonPbo.Name
	$addon = $pboName.Replace($modPrefix, '').Replace('.pbo', '')
	$sourcePath = "$projectRoot\addons\$addon"

	if (Select-String -Pattern "optional_" -InputObject $pboName -SimpleMatch -Quiet) {
		$addon = $pboName.Replace($modPrefix + "optional_", '')
		$sourcePath = "$projectRoot\optionals\$addon"
	}

	if (!(Test-Path -Path $sourcePath)) {
		Remove-Item "$buildPath\addons\$pboName"
		Remove-Item "$buildPath\addons\$($pboName).$modPrefix$tag.bisign" -ErrorAction SilentlyContinue
		Write-Output "  [$timestamp] Deleting obsolete PBO $pboName"
	}
}


function Build-PBO {
	param(
		[Parameter(Mandatory=$True)]
		$Source,
		$Parent = "addons",
		$Prebuilt = $False
	)

	$otherPrefix = ""
	if ($prebuilt) {
		$otherPrefix = "optional_"
	}

	$component = $source.Name
	$fullPath  = $source.FullName
	$hash      = Get-Hash $fullPath | select -ExpandProperty Hash
	$binPath   = "$buildPath\$Parent\$modPrefix$otherPrefix$component"

	# If it's a directory, then it doesn't have it's own extension, so add it
	if (!($prebuilt)) {
		$binPath = $binPath + ".pbo"
	}

	if (Test-Path -Path "$cachePath\addons\$component") {
		$cachedHash = Get-Content "$cachePath\addons\$component"

		if ($hash -eq $cachedHash -And @(Test-Path -Path $binPath)) {
			if (!(Test-Path -Path "$binPath.$modPrefix$tag.bisign")) {
				Write-Output "  [$timestamp] Updating bisign for $component"
				& $armake sign -f $privateKeyFile $binPath
				return
			} else {
				return "  [$timestamp] Skipping $component"
			}
		}
	} else {
		if (!(Test-Path -Path "$cachePath\addons")) {
			New-Item "$cachePath\addons" -ItemType "directory" | Out-Null
		}
	}

	if (Test-Path -Path $binPath) {
		Remove-Item $binPath

		if ($prebuilt) {
			Write-Output "  [$timestamp] Updating pre-built PBO $component"
			Copy-Item -Path $fullPath -Destination $binPath -Force
			& $armake sign -f $privateKeyFile $binPath
		} else {
			Write-Output "  [$timestamp] Updating PBO $component"
			& $armake build -f -w unquoted-string -k $privateKeyFile $fullPath $binPath
		}
	} else {

		if ($prebuilt) {
			Write-Output "  [$timestamp] Copying pre-built PBO $component"
			Copy-Item -Path $fullPath -Destination $binPath -Force
			& $armake sign -f $privateKeyFile $binPath
		} else {
			Write-Output "  [$timestamp] Creating PBO $component"
			& $armake build -f -w unquoted-string -k $privateKeyFile $fullPath $binPath
		}
	}

	if ($LastExitCode -ne 0) {
		Write-Error "[$timestamp] Failed to build $component."
	}

	# Store this for later comparisons
	$hash | Out-File "$cachePath\addons\$component" -NoNewline
}


function Copy-Extras {
	$supportFiles = Get-Extras

	# Switch from tools dir to projectRoot dir
	$origLocation = Get-Location
	Set-Location -Path $projectRoot

	foreach ($file in $supportFiles) {
		$fileName = $(Get-ChildItem $file).Name

		Write-Output "  [$timestamp] Copying $fileName"
		& Copy-Item -Path $file -Destination $buildPath -Force -Recurse

		if ($LastExitCode -ne 0) {
			Write-Error "[$timestamp] Failed to copy $fileName."
		}
	}

	Set-Location $origLocation
}


function Main {
	if ($remove -ne $False) {
		Remove
		return
	}

	$installed = Get-InstalledArmakeVersion
	$latest    = Get-LatestArmakeVersion

	if (Compare-VersionNewerThan $latest $installed) {
		Write-Output "Found newer version of armake:" "  Installed: $installed" "  Latest: $latest"
		Update-Armake ($downloadPage -f $latest)
		Write-Output "Update complete, armake up-to-date."
	}

	New-Item "$buildPath" -ItemType "directory" -Force | Out-Null
	New-Item "$buildPath\keys" -ItemType "directory" -Force | Out-Null

	# Switch from tools dir to buildPath dir
	$origLocation = Get-Location
	Set-Location -Path $buildPath

	Create-Private-Key

	if (Test-Path -Path $privateKeyFile) {
		New-Item "$buildPath\addons" -ItemType "directory" -Force | Out-Null

		foreach ($component in Get-ChildItem -File "$projectRoot\optionals") {
			Build-PBO $component -Prebuilt $True
		}

		foreach ($component in Get-ChildItem -Directory "$projectRoot\addons") {
			Build-PBO $component
		}

		foreach ($component in @(Get-ChildItem "$buildPath\addons\*.pbo")) {
			Check-Obsolete $component
		}
	}

	Set-Location $origLocation

	Copy-Extras
}
Main
