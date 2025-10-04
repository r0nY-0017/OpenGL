@echo off
if exist "d:\Coding\OpenGL\main.exe" del "d:\Coding\OpenGL\main.exe"
g++ "d:\Coding\OpenGL\main.cpp" -o "d:\Coding\OpenGL\main.exe" -IC:/msys64/mingw64/include -LC:/msys64/mingw64/lib -lfreeglut -lopengl32 -lglu32 -Wl,--stack,16777216
if %errorlevel% equ 0 (
    echo [--- Build Successful...!!! ---]
    "d:\Coding\OpenGL\main.exe"
) else (
    echo Build Failed...!!!
)
pause