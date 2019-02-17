param(
      [string] $remove = $False
)

$projectRoot    = Split-Path -Parent $PSScriptRoot
$toolsPath		= "$projectRoot\tools"
$buildPath      = "$projectRoot\.build\@2BNB Extras"
$releasePage    = "https://github.com/KoffeinFlummi/armake/releases"
$downloadPage   = "https://github.com/KoffeinFlummi/armake/releases/download/v{0}/armake_v{0}.zip"
$armake         = "$projectRoot\tools\armake.exe"
$tag            = git describe --tag | %{$_ -replace "-.*-", "-"}
$privateKeyFile = "$buildPath\keys\bnb_e_$tag.biprivatekey"
$timestamp      = Get-Date -UFormat "%T"
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12


function Get-Extras {
	param (
	       [string] $type = $False
	)

	if (Test-Path -Path "$toolsPath\support-files.txt") {
		$supportFilesRegex = Get-Content "$toolsPath\support-files.txt"
	} else {
		$supportFilesRegex = "mod.cpp"
	}

	$supportFiles = @(Get-ChildItem -Path "$projectRoot\extras\*")
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

	if ($remove -eq "all") {
		Remove-Item "$buildPath" -Recurse
	} elseif ($remove -eq "extras") {
		$items = $(Get-Extras "Name") -join ","
		iex "Remove-Item -Path '$buildPath\*' -include $items"
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
    if (Test-Path $armake) {
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
	$keysPath = Split-Path -Parent $privateKeyFile
	if (Test-Path -Path "$keysPath\*") {
		Remove-Item "$keysPath\*"
		Remove-Item "$buildPath\addons\*.bisign"

	    Write-Output "  [$timestamp] Updating key pairs for $tag"
	    & $armake keygen -f "keys\bnb_e_$tag"
	} else {
	    Write-Output "  [$timestamp] Creating key pairs for $tag"
	    & $armake keygen -f "keys\bnb_e_$tag"
	}


    if (!(Test-Path -Path $privateKeyFile)) {
        Write-Error "[$timestamp] Failed to generate key pairs $privateKeyFile"
    }
}


function Build-Directory {
    param(
        [Parameter(Mandatory=$True)]
        $directory
    )

    $component = $directory.Name
    $fullPath  = $directory.FullName
    $parent    = $directory.Parent
    $binPath   = "$buildPath\$parent\bnb_e_$component.pbo"

    if (Test-Path -Path $binPath) {
        Remove-Item $binPath
        Write-Output "  [$timestamp] Updating PBO $component"
        & $armake build -f -w unquoted-string -k $privateKeyFile $fullPath $binPath
    } else {
        Write-Output "  [$timestamp] Creating PBO $component"
        & $armake build -f -w unquoted-string -k $privateKeyFile $fullPath $binPath
    }

    if ($LastExitCode -ne 0) {
        Write-Error "[$timestamp] Failed to build $component."
    }
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
        foreach ($folder in "addons") {
            New-Item "$buildPath\$folder" -ItemType "directory" -Force | Out-Null
            foreach ($component in Get-ChildItem -Directory "$PSScriptRoot\..\$folder") {
                Build-Directory $component
            }
        }

	    # Cleanup the private key file in preparation for uploading to Steam Workshop
    	Remove-Item $privateKeyFile;
    }

    Set-Location $origLocation

    Copy-Extras
}
Main
