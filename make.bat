
@echo off
SET ORICUTRON="..\..\..\oricutron\"

SET ORIGIN_PATH=%CD%
rem SET PATH=%PATH%;%cc65%


del release\*.* /q
%cc65%\cl65 -ttelestrat src\telestrat.c -o release\telestra ..\oric-common\lib\ca65\telestrat\print.s
%cc65%\cl65 -ttelestrat src\circles.c -o release\circles  ..\oric-common\lib\ca65\telestrat\hires.s ..\oric-common\lib\ca65\telestrat\graphics.s
%cc65%\cl65 -ttelestrat src\readkeyboard.c -o release\readkb
%cc65%\cl65 -ttelestrat src\rs232.c -o release\rs232
%cc65%\cl65 -ttelestrat src\cc65test.c -o release\cc65test
%cc65%\cl65 -ttelestrat src\hello.c -o release\hello
%cc65%\cl65 -ttelestrat src\debug.c -o release\debug  ..\oric-common\lib\ca65\telestrat\hires.s
%cc65%\cl65 -ttelestrat src\fread.c -o release\fread  ..\oric-common\lib\ca65\telestrat\hires.s
%cc65%\cl65 -ttelestrat src\params.c -o release\params ..\oric-common\lib\ca65\telestrat\hires.s
%cc65%\cl65 -ttelestrat src\argc.c -o release\argc
%cc65%\cl65 -ttelestrat src\filetest.c -o release\filetest
%cc65%\cl65 -ttelestrat src\tgi.c -o release\tgi
%cc65%\cl65 -ttelestrat src\joystick.c -o release\joystick
%cc65%\cl65 -ttelestrat src\mkdirtest.c -o release\md

%OSDK%\bin\xa.exe src\hello.asm -o hello
%OSDK%\bin\xa.exe src\rs232.asm -o release\rs

%OSDK%\bin\xa.exe src\detectVia2.asm -o detect.o
%OSDK%\bin\header.exe -a0  detect.o detect.tap $1000

copy release\* ..\..\..\oricutron\usbdrive\\bin\

IF "%1"=="NORUN" GOTO End
copy release\* C:\Users\plifp\OneDrive\oric\oricutron\usbdrive\bin

cd %ORICUTRON%
OricutronV6 -mt -d teledisks\stratsed.dsk
rem Oricutron_ch376V3 -mt -d teledisks\stratsed.dsk
cd %ORIGIN_PATH%
:End