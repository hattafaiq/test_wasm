include(C:/MurniSN/test_wasm/test_qt_wasm/stack2/build/Desktop_Qt_6_8_1_llvm_mingw_64_bit-Debug/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/stak2-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE C:/MurniSN/test_wasm/test_qt_wasm/stack2/build/Desktop_Qt_6_8_1_llvm_mingw_64_bit-Debug/stak2.exe
    GENERATE_QT_CONF
)
