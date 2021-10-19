cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

project(aspose.words)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(aspose.words SHARED src/greeting.cpp src/greeting.hpp src/index.cpp)
set_target_properties(aspose.words PROPERTIES PREFIX "" SUFFIX ".node")
target_include_directories(aspose.words PRIVATE ${CMAKE_JS_INC})

# Include node-addon-api wrappers
execute_process(COMMAND node -p "require('node-addon-api').include"
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        OUTPUT_VARIABLE NODE_ADDON_API_DIR
        )
string(REPLACE "\n" "" NODE_ADDON_API_DIR ${NODE_ADDON_API_DIR})
string(REPLACE "\"" "" NODE_ADDON_API_DIR ${NODE_ADDON_API_DIR})
target_include_directories(aspose.words PRIVATE ${NODE_ADDON_API_DIR})

target_compile_definitions(aspose.words PRIVATE NAPI_VERSION=3)


find_package(CodePorting.Native.Cs2Cpp REQUIRED CONFIG PATHS ${CMAKE_CURRENT_SOURCE_DIR} NO_DEFAULT_PATH)
find_package(Aspose.Words.Cpp REQUIRED CONFIG PATHS ${CMAKE_CURRENT_SOURCE_DIR} NO_DEFAULT_PATH)
find_package(Threads REQUIRED)


target_link_libraries(aspose.words ${CMAKE_JS_LIB} Aspose::Words Threads::Threads)
target_compile_options(aspose.words PRIVATE $<$<CXX_COMPILER_ID:MSVC>:/wd4244 /wd4250 /wd4267 /MP /bigobj /utf-8>)

add_custom_command(TARGET aspose.words POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_RUNTIME_DLLS:aspose.words> $<TARGET_FILE_DIR:aspose.words>
  COMMAND_EXPAND_LISTS
  )