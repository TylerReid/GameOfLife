@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x64
@echo on
cl *.c /W4 /TP /nologo /FeGrid.exe

Grid.exe
