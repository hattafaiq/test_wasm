set QT4DIR=D:\kantor\cplus\qt5\5.12.12\msvc2017\bin
set LLVMDIR=C:\Program Files (x86)\LLVM\bin
::blum diunduh lg atau compile qtnya...
SET WINSDKDIR=C:\Program Files (x86)\Windows Kits\10\bin\10.0.22621.0\x86
SET CMAKEDIR=C:\Program Files\CMake\bin
SET ATLDIR=C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.33.31629\atlmfc
SET LIB=%LIB%;%ATLDIR%\lib\x86
SET INCLUDE=%INCLUDE%;%ATLDIR%\include
::set GODIR=C:\go\bin
set NASMDIR=C:\nasm-2.15.03
SET PY=D:\kantor\cplus\macam\py3
SET GIT=D:\kantor\cplus\gitwindows\bin
SET PATH=%PY%;%PATH%;%QT4DIR%;%WINSDKDIR%;%CMAKEDIR%;%GODIR%;%NASMDIR%;%LLVMDIR%;%GIT%
cd /d C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\
vcvarsall.bat x86 10.0.22621.0 /vcvars_ver=14.29.30133
