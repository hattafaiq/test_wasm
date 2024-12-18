set(CMAKE_C_COMPILER /media/clang+llvm-18.1.8-aarch64-linux-gnu/bin/clang)
set(CMAKE_CXX_COMPILER /media/clang+llvm-18.1.8-aarch64-linux-gnu/bin/clang++)
set(CMAKE_BUILD_TYPE "Release")
SET(CMAKE_CXX_FLAGS " -pthread -g")

set(CMAKE_INSTALL_RPATH "$ORIGIN/../lib:/../lib:../lib")

set(CMAKE_BUILD_RPATH "$ORIGIN:$ORIGIN/../lib:/../lib:../lib")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(ENV{PKG_CONFIG_PATH} "/media/vcpkg/installed/arm64-linux-release-dynamic/lib/pkgconfig")
 
