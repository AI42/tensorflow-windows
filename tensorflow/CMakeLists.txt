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

set(TF_PB_HDR
	${TF_ROOT}/tensorflow/core/example/example.pb.h
	${TF_ROOT}/tensorflow/core/example/feature.pb.h
	${TF_ROOT}/tensorflow/core/framework/allocation_description.pb.h
	${TF_ROOT}/tensorflow/core/framework/attr_value.pb.h
	${TF_ROOT}/tensorflow/core/framework/config.pb.h
	${TF_ROOT}/tensorflow/core/framework/device_attributes.pb.h
	${TF_ROOT}/tensorflow/core/framework/function.pb.h
	${TF_ROOT}/tensorflow/core/framework/graph.pb.h
	${TF_ROOT}/tensorflow/core/framework/kernel_def.pb.h
	${TF_ROOT}/tensorflow/core/framework/op_def.pb.h
	${TF_ROOT}/tensorflow/core/framework/step_stats.pb.h
	${TF_ROOT}/tensorflow/core/framework/summary.pb.h
	${TF_ROOT}/tensorflow/core/framework/tensor.pb.h
	${TF_ROOT}/tensorflow/core/framework/tensor_description.pb.h
	${TF_ROOT}/tensorflow/core/framework/tensor_shape.pb.h
	${TF_ROOT}/tensorflow/core/framework/tensor_slice.pb.h
	${TF_ROOT}/tensorflow/core/framework/types.pb.h
	${TF_ROOT}/tensorflow/core/framework/variable.pb.h
	${TF_ROOT}/tensorflow/core/framework/versions.pb.h
	${TF_ROOT}/tensorflow/core/kernels/reader_base.pb.h
	${TF_ROOT}/tensorflow/core/lib/core/error_codes.pb.h
	${TF_ROOT}/tensorflow/core/protobuf/meta_graph.pb.h
	${TF_ROOT}/tensorflow/core/protobuf/queue_runner.pb.h
	${TF_ROOT}/tensorflow/core/protobuf/saver.pb.h
	${TF_ROOT}/tensorflow/core/util/event.pb.h
	${TF_ROOT}/tensorflow/core/util/saved_tensor_slice.pb.h
	${TF_ROOT}/tensorflow/python/training/checkpoint_state.pb.h
	${TF_ROOT}/tensorflow/python/util/protobuf/compare_test.pb.h
)

set(TF_PB_SRC
	${TF_ROOT}/tensorflow/core/example/example.pb.cc
	${TF_ROOT}/tensorflow/core/example/feature.pb.cc
	${TF_ROOT}/tensorflow/core/framework/allocation_description.pb.cc
	${TF_ROOT}/tensorflow/core/framework/attr_value.pb.cc
	${TF_ROOT}/tensorflow/core/framework/config.pb.cc
	${TF_ROOT}/tensorflow/core/framework/device_attributes.pb.cc
	${TF_ROOT}/tensorflow/core/framework/function.pb.cc
	${TF_ROOT}/tensorflow/core/framework/graph.pb.cc
	${TF_ROOT}/tensorflow/core/framework/kernel_def.pb.cc
	${TF_ROOT}/tensorflow/core/framework/op_def.pb.cc
	${TF_ROOT}/tensorflow/core/framework/step_stats.pb.cc
	${TF_ROOT}/tensorflow/core/framework/summary.pb.cc
	${TF_ROOT}/tensorflow/core/framework/tensor.pb.cc
	${TF_ROOT}/tensorflow/core/framework/tensor_description.pb.cc
	${TF_ROOT}/tensorflow/core/framework/tensor_shape.pb.cc
	${TF_ROOT}/tensorflow/core/framework/tensor_slice.pb.cc
	${TF_ROOT}/tensorflow/core/framework/types.pb.cc
	${TF_ROOT}/tensorflow/core/framework/variable.pb.cc
	${TF_ROOT}/tensorflow/core/framework/versions.pb.cc
	${TF_ROOT}/tensorflow/core/kernels/reader_base.pb.cc
	${TF_ROOT}/tensorflow/core/lib/core/error_codes.pb.cc
	${TF_ROOT}/tensorflow/core/protobuf/meta_graph.pb.cc
	${TF_ROOT}/tensorflow/core/protobuf/queue_runner.pb.cc
	${TF_ROOT}/tensorflow/core/protobuf/saver.pb.cc
	${TF_ROOT}/tensorflow/core/util/event.pb.cc
	${TF_ROOT}/tensorflow/core/util/saved_tensor_slice.pb.cc
	${TF_ROOT}/tensorflow/python/training/checkpoint_state.pb.cc
	${TF_ROOT}/tensorflow/python/util/protobuf/compare_test.pb.cc
)

set(TF_CORE_SRC
	./dummy.cc
)

# cc_library

# lib
# core
# core_cpu

# lib_internal -> protos_all_cc

add_library(tensorflowdll SHARED
	${TF_CORE_SRC}

	${TF_PB_HDR}
	${TF_PB_SRC}
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


target_link_libraries(tensorflowdll
	libprotobuf
)

install(TARGETS tensorflowdll
	RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
	LIBRARY DESTINATION ${CMAKE_SOURCE_DIR}/bin
	ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
)

#------------------------------------------------------------------------------
# END

