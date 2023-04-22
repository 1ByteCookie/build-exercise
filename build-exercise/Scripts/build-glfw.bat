
@echo off

set configuration=%1
set platform=%2

cd ../Dependencies/glfw

mkdir out
cd out

cmake ../

cmake --build %cd% --config %configuration%
