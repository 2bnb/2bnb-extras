# 2BNB Extras
This mod is being developed to offer members of the 2nd Battalion, Nord Brigade custom configs and game enhancements.

## Dependencies
- CBA
- TFAR 1.0 (BETA)
- RHS GREF
- DrongosAPS
- GRAD Sling Helmet


# For Developers of this mod
## Install
We have a build system to allow for key signing and addon compiling.

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
