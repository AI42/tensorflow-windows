# Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

project(PROJECT_TENSORFLOW)

if(NOT MSVC)
	set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
endif()

# -----------------------------------------------------------------------------
# 3rdparty

# engen3
include(${CMAKE_SOURCE_DIR}/3rdparty/eigen3/eigen3.cmake)

# zlib
add_subdirectory(${CMAKE_SOURCE_DIR}/3rdparty/zlib)

# png
add_subdirectory(${CMAKE_SOURCE_DIR}/3rdparty/png)

# jpeg
add_subdirectory(${CMAKE_SOURCE_DIR}/3rdparty/jpeg)

# Protobuf
add_subdirectory(${CMAKE_SOURCE_DIR}/3rdparty/protobuf)

# -----------------------------------------------------------------------------
# tensorflow

# tensorflow
add_subdirectory(${CMAKE_SOURCE_DIR}/tensorflow)

# -----------------------------------------------------------------------------
# END
