::build script via cmd
SET CMAKEDIR=C:\Qt\Tools\CMake_64\bin
SET PATH=%CMAKEDIR%
cmake -B build\build_qt6em_vcpkg ^
-DTARGET_MACHINE=PAYC ^
-DCMAKE_CXX_STANDARD=20 ^
-DVCPKG_HOST_TRIPLET=wasm32-emscripten -DVCPKG_TARGET_TRIPLET=wasm32-emscripten ^
-DNODE_JS_EXECUTABLE:FILEPATH=C:/MurniSN/test_wasm/emsdk/node/20.18.0_64bit/bin/node.exe ^
-DCMAKE_BUILD_TYPE=Release -DCMAKE_C_COMPILER:FILEPATH=C:/MurniSN/test_wasm/emsdk/upstream/emscripten/emcc.bat ^
-DEMSCRIPTEN_GENERATE_BITCODE_STATIC_LIBRARIES:BOOL=OFF -DEMSCRIPTEN:BOOL=1 -DEMSCRIPTEN_FORCE_COMPILERS:BOOL=ON ^
-DCMAKE_TOOLCHAIN_FILE:FILEPATH=C:/Qt/6.8.1/wasm_multithread/lib/cmake/Qt6/qt.toolchain.cmake ^
::-DCMAKE_TOOLCHAIN_FILE=C:\MurniSN\Project_cpp\vcpkg-master\vcpkg-master\scripts\buildsystems\vcpkg.cmake ^
-DCMAKE_INSTALL_PREFIX=C:\MurniSN\test_wasm\test_qt_wasm\stack2\build\WebAssembly_Qt_6_8_1_multi_threaded-Debug ^
-DCMAKE_PREFIX_PATH:PATH=C:/Qt/6.8.1/wasm_multithread -G "Ninja" .