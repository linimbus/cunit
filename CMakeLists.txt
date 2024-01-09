cmake_minimum_required (VERSION 2.6)

# Install dir set
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
set(LIB_DEST_DIR ${CMAKE_INSTALL_PREFIX}/lib)

link_directories(${LIB_DEST_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)

option(ENABLE_32 "Enable build -m32 options." OFF)
option(ENABLE_DEBUG "Enable build debug options." OFF)

if (ENABLE_32)
    message(STATUS "using -m32")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")
endif(ENABLE_32)

if (ENABLE_DEBUG)
    message(STATUS "using -g -g3 -ggdb3 -gdwarf-2")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -g3 -ggdb3 -gdwarf-2")
else (ENABLE_DEBUG)
    message(STATUS "using -O2")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2")
endif(ENABLE_DEBUG)

add_subdirectory(src)
add_subdirectory(example)
