#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Aspose::CodePorting.Native.Cs2Cpp" for configuration "Release"
set_property(TARGET Aspose::CodePorting.Native.Cs2Cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Aspose::CodePorting.Native.Cs2Cpp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libaspose_cpp_gcc6.so"
  IMPORTED_SONAME_RELEASE "libaspose_cpp_gcc6.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Aspose::CodePorting.Native.Cs2Cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_Aspose::CodePorting.Native.Cs2Cpp "${_IMPORT_PREFIX}/lib/libaspose_cpp_gcc6.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
