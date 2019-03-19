# Scripts
All scripts in this directory are meant to be run **only** in this directory due to the way the scripts are written. 

## Stuff you should know
These scripts are meant to do specific things and as such, must be modified before they are run. For example. ggbgfx-sprites88-95 is meant to (as the name implies) use the ggbgfx-cli command, ggbgfx-sprite, to convert .png files to .c files. The script takes care of file copying and cleanup as well.

That being said, before running a script, either make sure it's intended purpose is what you want, or create a new one, copy the contents into the new .bat file and modify it to what you want it to do. 

## Dependencies
- [node.js](https://nodejs.org/)
- [ggbgfx-cli](https://www.npmjs.com/package/ggbgfx-cli)

## Technical Stuff
Each script is written as a .bat file specifically for Windows, but cross-platform functionality is soon to come, specifically for Mac OS (due to these two OSes being my primaries)
