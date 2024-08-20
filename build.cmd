@echo off
setlocal EnableDelayedExpansion EnableExtensions
cls
color

call "C:\Program Files (x86)\Microsoft Visual Studio\VC98\Bin\vcvars32.bat"

if not exist build mkdir build
pushd build

cl -Feopenside.dll -Tc..\code\main.c -G6 -LD -Od -W4 -Zi -link -incremental:no -map -opt:ref -noentry -nodefaultlib -def:..\code\exports.def user32.lib

if not exist _game_ mkdir _game_
if exist openside.dll copy openside.dll ..\_game_\

popd

pause
