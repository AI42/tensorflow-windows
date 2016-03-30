# Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

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

