# 2BNB Extras
This mod is being developed to offer members of the 2nd Battalion, Nord Brigade custom configs and game enhancements.



## Dependencies
- CBA
- TFAR 1.0 (BETA)
- RHS AFRF
- RHS USAF
- RHS GREF
- Project OPFOR
- GRAD Sling Helmet


# Credits
- GRAD developer, for their [gruppe_adler_mod](https://github.com/gruppe-adler/gruppe_adler_mod) and allowing us to use parts of it for the basis of some of our addons
- Tittoffer and Martin M. from Norwegian Task Force for access to their assets made available to us with permission from the [NorwegianTaskForce Github](https://github.com/Tittoffer/NorwegianTaskForce/), which we then modified and built upon to make them our own


# For Developers of this mod
## Install
We have a build system to allow for key signing and addon compiling.

### Requirements
1. Git for Windows
1. Windows PowerShell v5.1 or higher

To set up your system to use the build script:
- Open Windows PowerShell as Administrator and execute `set-executionpolicy remotesigned`
- In the future, always use PowerShell as Admin

### Windows
If on Windows, use the `tools\make.ps1` file to build the mod for you. It will build the mod, sign the addons, include the public key in the `keys` folder, and also copy across all files found in the `extras` folder, as well as the files specified in the file `tools\support-files.txt`.

The build script will NOT leave the private key in the `keys` folder. It will delete it instead, to avoid any accidental uploading or distribution.

Be aware, that the names of the `.bisign` and `.bikey` files depend on the latest tag on git. This means that, if you wish to upload a release, it is advised to first tag the latest git commit, and then build the mod. That way you have a nice version, such as `bnb_e_v1.0.3.bikey` rather than `bnb_e_v1.0.3-g0558b0c.bikey`.

## Naming conventions
To make the names of this mod less likely to run into problems in the future regarding the inclusion of a number in the name:
- for code: bnb_e
- for urls: 2bnb-extras
- for presentation: 2BNB Extras

### Prefixes
The prefix `bnb_e_` should be used where appropriate to avoid any potential name clashes with other mods.

## Contact
For any questions, contact Arend or Ford on the 2nd Battalion, Nord Brigade [Discord](https://discord.gg/DRaWNyf).
