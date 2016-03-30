# Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

project(TENSORFLOW)

cmake_minimum_required(VERSION 3.4)

#------------------------------------------------------------------------------

if(NOT MSVC)
	set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
endif()

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
	set(OS win64)
else()
	set(OS win32)
endif()

set(TF_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/tensorflow-0.7.1)

#------------------------------------------------------------------------------

# engen3
include(${CMAKE_SOURCE_DIR}/3rdparty/eigen3/eigen3.cmake)

#------------------------------------------------------------------------------

include_directories(AFTER
	${TF_ROOT}/tensorflow
)

set(TF_CORE_SRC
	./dummy.cc
)

add_library(tensorflowdll SHARED
	${TF_CORE_SRC}
)

if(WIN32)
	set_target_properties(tensorflowdll
		PROPERTIES OUTPUT_NAME "tensorflow-${OS}"
	)
else()
	set_target_properties(tensorflowdll
		PROPERTIES OUTPUT_NAME "tensorflow"
	)
endif()

install(TARGETS tensorflowdll
	RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
	LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/bin
	ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
)

#------------------------------------------------------------------------------
# END

