# .\screenshot.ps1
# Author: Arend
# Description:
# 	This tool is responsible for converting editor previews from the files
# 	that Arma 3 spits out, to the files that Arma 3 is able to use as editor
# 	previews.
#
# Instructions:
# 	Generate the screenshots by going into the Editor in Arma 3:
# 	1. Go to 'Tools >> Debug Console'
# 	2. Paste this code into the Debug Console: `[nil, "all", [], [], ["B_NorwayArmy"]] spawn BIS_fnc_exportEditorPreviews;`
# 	3. Close the Debug Console (ESC key does the trick)
# 	4. Watch Arma 3 do magic
# 	5. Execute this script, following the prompts
# 	6. Demand a cookie from Arend, you deserve it!


# Source: https://gallery.technet.microsoft.com/scriptcenter/Resize-Image-A-PowerShell-3d26ef68
function Resize-Image
{
    Param([Parameter(Mandatory=$true)][string]$InputFile, [string]$OutputFile, [int32]$Width, [int32]$Height, [int32]$Scale, [Switch]$Display)

    # Add System.Drawing assembly
    Add-Type -AssemblyName System.Drawing

    # Open image file
    $img = [System.Drawing.Image]::FromFile((Get-Item $InputFile))

    # Define new resolution
    if($Width -gt 0) { [int32]$new_width = $Width }
    elseif($Scale -gt 0) { [int32]$new_width = $img.Width * ($Scale / 100) }
    else { [int32]$new_width = $img.Width / 2 }
    if($Height -gt 0) { [int32]$new_height = $Height }
    elseif($Scale -gt 0) { [int32]$new_height = $img.Height * ($Scale / 100) }
    else { [int32]$new_height = $img.Height / 2 }

    # Create empty canvas for the new image
    $img2 = New-Object System.Drawing.Bitmap($new_width, $new_height)

    # Draw new image on the empty canvas
    $graph = [System.Drawing.Graphics]::FromImage($img2)
    $graph.DrawImage($img, 0, 0, $new_width, $new_height)

    # Create window to display the new image
    if($Display)
    {
        Add-Type -AssemblyName System.Windows.Forms
        $win = New-Object Windows.Forms.Form
        $box = New-Object Windows.Forms.PictureBox
        $box.Width = $new_width
        $box.Height = $new_height
        $box.Image = $img2
        $win.Controls.Add($box)
        $win.AutoSize = $true
        $win.ShowDialog()
    }

    # Save the image
    if($OutputFile -ne "")
    {
        $img2.Save($OutputFile);
        $True
    } else {
    	$False
    }
}

function Get-UserFolder {
	# We store the Arma 3 user profile name for future runs
	$userFileName = "user.txt"
	$userFilePath = ($PSScriptRoot + "\$userFileName")
	$armaProfilesFolder = [Environment]::GetFolderPath("MyDocuments") + "\Arma 3"

	if (-Not (Test-Path -Path $userFilePath)) {
		$user = Read-Host -Prompt "What is your Arma 3 profile name?`n`nCopy this from whichever of these two it's in:`n`t'Documents\Arma 3 - Other Profiles\[tell me the name of this folder]'`n`t'Documents\Arma 3\[tell me the name of this folder]'"
		if ($user -eq "") {
			Write-Error "No input given!"
			Get-UserFolder
			return
		}

		if (-Not (Test-Path -Path "$armaProfilesFolder\$user") -And -Not (Test-Path -Path "$($armaProfilesFolder) - Other Profiles\$user")) {
			Write-Error "Couldn't find your User Profiles folder!"
			Get-UserFolder
			return
		} else {
			if (-Not (Test-Path -Path "$armaProfilesFolder\$user")) {
				$armaProfilesFolder = $armaProfilesFolder + " - Other Profiles"
			}
		}

		New-Item -Path $PSScriptRoot -Name $userFileName -ItemType "file" -Value "$armaProfilesFolder\$user" -Force | Out-Null
		"$armaProfilesFolder\$user"
	} else {
		$userFolder = Get-Content $userFilePath

		if (-Not (Test-Path -Path $userFolder)) {
			Write-Error "Couldn't find your User Profiles folder!"
			Get-UserFolder
		} else {
			$userFolder
		}
	}
}

# Begin actual script
$userFolder = Get-UserFolder

$addonName = Read-Host -Prompt "Addon name (name of the folder under 'addons\') [Default: bnorway]"
if ($addonName -eq "") {
	$addonName = "bnorway"
}

$screenshotsFolder = "$userFolder\Screenshots\EditorPreviews\@2BNB Extras"
$addonPreviewsFolderRelative = "\addons\$addonName\data\preview"
$addonPreviewsFolder = (Split-Path -Parent $PSScriptRoot) + $addonPreviewsFolderRelative

if (-Not (Test-Path -Path $screenshotsFolder)) {
	Write-Error "You haven't yet exported any screenshots! Do so with this code:`n[nil, `"all`", [], [], [`"B_NorwayArmy`"]] spawn BIS_fnc_exportEditorPreviews;"
	return
}

if (-Not (Test-Path -Path $addonPreviewsFolder)) {
	Write-Error "Output folder doesn't exist!"
	return
}

$succeeded = 0
$failed = 0
foreach ($image in Get-ChildItem -File $screenshotsFolder) {
		$outputFile = ($addonPreviewsFolder + "\" + ((($image.Name).replace("_2IC_", "_IC_2IC_")).replace("_1IC_", "_IC_2IC_")).replace(".png", ".jpg"))
		$outputFileName = ((($image.Name).replace("_2IC_", "_IC_2IC_")).replace("_1IC_", "_IC_2IC_")).replace(".png", ".jpg")

	if (Resize-Image -InputFile $image.FullName -OutputFile $outputFile -Width 455 -Height 256) {
		Write-Output "$image saved to $addonPreviewsFolderRelative\$outputFileName"
		$succeeded += 1
	} else {
		Write-Output "$image save failed"
		$failed += 1
	}
}

if ($succeeded -gt 0) {
	Write-Output "`n`tSucceeded: $succeeded`n`tFailed: $failed"
}
