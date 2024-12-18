set(CMAKE_C_COMPILER "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/cl.exe")
set(CMAKE_CXX_COMPILER "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.40.33807/bin/Hostx64/x64/cl.exe")
#set(CMAKE_CXX_FLAGS "-stdlib=libc++ -fsanitize=undefined,address")
set(CMAKE_BUILD_TYPE "Release")
#set(CMAKE_EXE_LINKER_FLAGS "-stdlib=libc++ ")
#set(CMAKE_SHARED_LINKER_FLAGS "-stdlib=libc++")
set(CMAKE_CXX_FLAGS " -pthread")
set(CMAKE_C_FLAGS " -pthread")
#set(THREADS_PREFER_PTHREAD_FLAG ON)
set(CMAKE_BUILD_RPATH "$ORIGIN:$ORIGIN/../libs:/../libs:../libs")
#set(CMAKE_INSTALL_RPATH "$ORIGIN/../lib:/../lib:../lib")

#set(CMAKE_BUILD_RPATH "$ORIGIN")
#set(CMAKE_INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../../lib:$ORIGIN:$ORIGIN/../lib")


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(ENV{PKG_CONFIG_PATH} "C:/MurniSN/Project_cpp/vcpkg-master/vcpkg-master/installed/x64-windows/lib/pkgconfig")