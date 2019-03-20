@echo off

mkdir ..\graphics\sprites_c\temp\ 2>nul

echo Switching to sprites_png directory...
echo.
cd ..\graphics\sprites_png

echo Copying sprites to temp directory...
echo.
xcopy sprite_089.png ..\sprites_c\temp /q
xcopy sprite_090.png ..\sprites_c\temp /q
xcopy sprite_091.png ..\sprites_c\temp /q
xcopy sprite_092.png ..\sprites_c\temp /q
xcopy sprite_093.png ..\sprites_c\temp /q
xcopy sprite_094.png ..\sprites_c\temp /q
xcopy sprite_095.png ..\sprites_c\temp /q
xcopy sprite_096.png ..\sprites_c\temp /q

echo Switching to temp directory...
echo.
cd ..\sprites_c\temp

echo Converting sprites to .c files...
echo.
call ggbgfx sprite -o characterSprite_down1.c sprite_089.png
call ggbgfx sprite -o characterSprite_down2.c sprite_090.png
call ggbgfx sprite -o characterSprite_up1.c sprite_091.png
call ggbgfx sprite -o characterSprite_up2.c sprite_092.png
call ggbgfx sprite -o characterSprite_right1.c sprite_093.png
call ggbgfx sprite -o characterSprite_right2.c sprite_094.png
call ggbgfx sprite -o characterSprite_left1.c sprite_095.png
call ggbgfx sprite -o characterSprite_left2.c sprite_096.png

echo Copying .c files to sprites_c directory...
echo.
xcopy characterSprite_down1.c ..\ /q
xcopy characterSprite_down2.c ..\ /q
xcopy characterSprite_up1.c ..\ /q
xcopy characterSprite_up2.c ..\ /q
xcopy characterSprite_right1.c ..\ /q
xcopy characterSprite_right2.c ..\ /q
xcopy characterSprite_left1.c ..\ /q
xcopy characterSprite_left2.c ..\ /q

echo Deleting all temporary files...
echo.
cd ..\
rmdir temp\ /Q /S

echo Moving back to original directory...
echo.
cd ..\..\scripts

echo All done!
echo.
pause
cls