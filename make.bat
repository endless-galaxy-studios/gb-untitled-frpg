@echo off
echo.

IF EXIST bin\main.gb (
    xcopy bin\main.gb bin\previous /Y /q
    del bin\main.gb
)

mkdir bin\temp 2>nul
mkdir bin\previous\ 2>nul

IF EXIST src\main.c (
    c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o bin\temp\main.o src\main.c

    IF EXIST bin\temp\main.o (
        c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -o bin\main.gb bin\temp\main.o
    ) ELSE (
        echo.
        echo main.o cannot be found, meaning that main.c did not compile!
        echo.

        EXIT 1
    ) 

    rmdir bin\temp\ /Q /S
    del bin\main.map
    del bin\main.sym
) ELSE (
    echo.
    echo main.c either cannot be found or does not exist!
    echo.

    EXIT 1
)

cls