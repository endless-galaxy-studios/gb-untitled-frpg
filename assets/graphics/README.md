# Graphics
This folder contains all graphics, both .png files and .c files.

## Color Palette
RGB: 224 248 208
Hexadecimal: #E0F8D0
Palette Color: Light Green

RGB: 136  192 112
Hexadecimal: #88C070
Palette Color: Green

RGB: 52 104 86
Hexadecimal: #346856
Palette Color: Dark Green
Usage: Background Color

RGB: 8 24 32
Hexadecimal: #081820
Palette Color: Deep Dark Green
Usage: Blacks

## Programs Used
- [Aseprite](https://www.aseprite.org/)
- [Piskel](https://www.piskelapp.com/)

## How to convert tilesets for the GameBoy Palette
First of all, you will definitely need to download the two applications above. Using Piskel, open the tileset.png you want to use. Select the option to "Import as spritesheet" and set the frame size to 16x16 (or whatever dimensions your tileset is.) On the right hand side, click on "Export", select the "PNG" tab and hit Download right under "Spritesheet layout options". Name it whatever. 

Open Aseprite, click on "File" then "Open" and select the file you just saved. Using the Eyedropper tool, select the colors and change them according to the Color Palette above by following this process:
1. Select the color
2. Click on "Edit" in the menu bar
3. Click on "Replace Color"
4. Click on the "To" box and change the hexadecimal value to the color you want to replace
5. Hit "OK"

This will change all the colors in the tilset to the color that you defined, thus making less work for yourself in the long run. Once you change all the colors, save the tileset. Now your tileset is in GameBoy colors!

If you want to use sprites on the GameBoy (say, a character or an enemy skeleton) then keep going.

Now click on "File" in the menu bar and then "Import Sprite Sheet". Hit "Select File" and choose the file you just saved. Make sure the width and height are set to the dimensions of your sprite sheet that you defined in Piskel. Click on "Import". Now click on "File" again and then "Save As...". Create a new folder (call it anything you want) and name your file anything you want, ending in "001". When you hit "OK", a box will pop up saying the following:
"Do you want to export the animation in xxx files?
filename 001.png, filename 002.png,.."

Hit "Agree" and let everything export. Copy and paste the "ggbgfx-sprites88-95.bat" file in assets\scripts and rename it. Modify that script according to what you need converted into a .c file. Now you have yourself sprites to implement into your GameBoy game!
