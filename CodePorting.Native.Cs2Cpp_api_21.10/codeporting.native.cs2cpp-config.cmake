include("${CMAKE_CURRENT_LIST_DIR}/src/cmake/ExportAsposeTarget.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/src/cmake/FixFilePathPrefix.cmake")

# if component list empty find all dependences
set(_find_all_dependencies FALSE)
if (NOT Asposecpplib_FIND_COMPONENTS)
    set(_find_all_dependencies TRUE)
endif()

set(ASPOSE_ROOT "${CMAKE_CURRENT_LIST_DIR}")

if (WIN32)
    GetExportFilename(_exportFilename)
    include("${CMAKE_CURRENT_LIST_DIR}/lib/${_exportFilename}")
    unset(_exportFilename)
else()
    if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
      set(_COMPILER "clang3_libstdcpp")
    endif()

    if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
      set(_COMPILER "gcc6")
    endif()

    if (CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")
        set(_COMPILER "appleclang12")
    endif()

    include("${CMAKE_CURRENT_LIST_DIR}/lib/CodePorting.Native.Cs2Cpp-targets-${_COMPILER}.cmake")
    unset(_COMPILER)
endif()

add_library(CodePorting.Native.Cs2Cpp INTERFACE IMPORTED)
set_target_properties(CodePorting.Native.Cs2Cpp PROPERTIES INTERFACE_LINK_LIBRARIES "Aspose::CodePorting.Native.Cs2Cpp")
