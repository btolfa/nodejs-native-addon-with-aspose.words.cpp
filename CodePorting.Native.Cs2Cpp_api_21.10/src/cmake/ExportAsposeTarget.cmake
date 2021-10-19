include("${CMAKE_CURRENT_LIST_DIR}/GuessCompilerPrefix.cmake")

function(GetExportFilename _ret)
    GUESS_COMPILER_PREFIX(_compiler)
    
    # Check multi-config generators
    if (CMAKE_CONFIGURATION_TYPES AND NOT FORCE_CMAKE_CONFIGURATION_TYPES)
        # Multi-config generators define properties for all configurations
        set(${_ret} "CodePorting.Native.Cs2Cpp-targets-${_compiler}.cmake" PARENT_SCOPE)
    else()
        set(${_ret} "CodePorting.Native.Cs2Cpp-targets-${CMAKE_BUILD_TYPE}-${_compiler}.cmake" PARENT_SCOPE)
    endif()
endfunction()

function(FindExportFile _ret _dir)
    GUESS_COMPILER_PREFIX(_compiler)
    
    # Check multi-config generators
    if (EXISTS "${_dir}/CodePorting.Native.Cs2Cpp-targets-${_compiler}.cmake")
        # Multi-config generators define properties for all configurations
        set(${_ret} "CodePorting.Native.Cs2Cpp-targets-${_compiler}.cmake" PARENT_SCOPE)
    elseif(EXISTS "${_dir}/CodePorting.Native.Cs2Cpp-targets-${CMAKE_BUILD_TYPE}-${_compiler}.cmake")
        set(${_ret} "CodePorting.Native.Cs2Cpp-targets-${CMAKE_BUILD_TYPE}-${_compiler}.cmake" PARENT_SCOPE)
    else()
        message(SEND_ERROR "Can't find CodePorting.Native.Cs2Cpp targets file for ${CMAKE_BUILD_TYPE} configuration and ${_compiler} compiler in ${_dir}")
    endif()
endfunction()

function(GetInstallFilename _ret)
    GUESS_COMPILER_PREFIX(_compiler)
    set(${_ret} "CodePorting.Native.Cs2Cpp-targets-${_compiler}.cmake" PARENT_SCOPE)
endfunction()

function(ExportAsposeTarget _target)
    GetExportFilename(_exportFile)
    export(TARGETS ${_target} NAMESPACE Aspose:: APPEND FILE "${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/${_exportFile}")
endfunction()