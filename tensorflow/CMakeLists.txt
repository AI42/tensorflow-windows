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

# protobuf
include_directories(AFTER
	${CMAKE_SOURCE_DIR}/3rdparty/protobuf/protobuf-3.0.0-beta-2/src
)

#------------------------------------------------------------------------------

include_directories(AFTER
	${TF_ROOT}
)

include(tensorflow_pb.cmake)
include(tensorflow_lib_internal.cmake)

add_library(tensorflow_pb_lib STATIC
	${TF_PB_HDR}
	${TF_PB_SRC}
)
#add_library(tensorflow_lib_internal_lib STATIC
#	${TD_LIB_INTERNAL_HDR}
#	${TD_LIB_INTERNAL_SRC}
#)

# cc_library

# lib
# core
# core_cpu

# lib_internal -> protos_all_cc

add_library(tensorflowdll SHARED
	./dummy.cc
)
target_link_libraries(tensorflowdll
	libprotobuf
	tensorflow_pb_lib
	#tensorflow_lib_internal_lib
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

