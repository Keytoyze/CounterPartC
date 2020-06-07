set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

project(cpc)

cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)

find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)

BISON_TARGET(parser
        ${CMAKE_SOURCE_DIR}/src/cpc.y
        ${CMAKE_CURRENT_BINARY_DIR}/Parser.cpp
        COMPILE_FLAGS "--defines=${CMAKE_CURRENT_BINARY_DIR}/Parser.hpp --verbose")
FLEX_TARGET(lexer
        ${CMAKE_SOURCE_DIR}/src/cpc.l
        ${CMAKE_CURRENT_BINARY_DIR}/Scanner.cpp)
ADD_FLEX_BISON_DEPENDENCY(lexer parser)

#find_package(LLVM REQUIRED CONFIG)
#
#message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
#message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${CMAKE_SOURCE_DIR}/src/ ${CMAKE_BINARY_DIR})
#add_definitions(${LLVM_DEFINITIONS})
#add_executable(simple-tool tool.cpp)


file(GLOB_RECURSE SOURCE_FILES "src/*.cpp" "src/*.h")

add_executable(
        ${CMAKE_PROJECT_NAME}
        ${SOURCE_FILES}
        "src/IR/context.cpp"
        "src/ast/render.cpp"
        "src/IR/CodeOptimization.cpp"
        ${FLEX_lexer_OUTPUTS}
        ${BISON_parser_OUTPUTS} )

target_include_directories(${CMAKE_PROJECT_NAME}
        PRIVATE
        .
        ${CMAKE_CURRENT_BINARY_DIR})
set_property(TARGET ${CMAKE_PROJECT_NAME}
        PROPERTY CXX_STANDARD 14)

# llvm_map_components_to_libnames(llvm_libs support core irreader all)
# target_link_libraries(yapc ${llvm_libs})