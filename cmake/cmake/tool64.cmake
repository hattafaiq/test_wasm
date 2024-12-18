set(CMAKE_C_COMPILER clang-16)
set(CMAKE_CXX_COMPILER clang++-16)
set(CMAKE_CXX_FLAGS "-stdlib=libc++ -fsanitize=undefined,address")
set(CMAKE_BUILD_TYPE "Debug")
#set(CMAKE_EXE_LINKER_FLAGS "-stdlib=libc++ ")
#set(CMAKE_SHARED_LINKER_FLAGS "-stdlib=libc++")

set(CMAKE_BUILD_RPATH "$ORIGIN/../lib:/../lib:../lib")
set(CMAKE_INSTALL_RPATH "$ORIGIN/../lib:/../lib:../lib")


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(ENV{PKG_CONFIG_PATH} "/opt/common/vcpkg_git/installed/x64-linux/lib/pkgconfig/")
 
