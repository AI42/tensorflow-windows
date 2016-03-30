:: Copyright 2016 <chaishushan{AT}gmail.com>. All rights reserved.
:: Use of this source code is governed by a BSD-style
:: license that can be found in the LICENSE file.

@echo off

setlocal

cd %~dp0

cd %~dp0\tensorflow-0.7.1

:: cd tensorflow-0.7.1
:: go run ..\tools\lsdir.go . "\.proto$"

protoc.exe --cpp_out=.                                       ^
	.\tensorflow\core\example\example.proto                  ^
	.\tensorflow\core\example\feature.proto                  ^
	.\tensorflow\core\framework\allocation_description.proto ^
	.\tensorflow\core\framework\attr_value.proto             ^
	.\tensorflow\core\framework\config.proto                 ^
	.\tensorflow\core\framework\device_attributes.proto      ^
	.\tensorflow\core\framework\function.proto               ^
	.\tensorflow\core\framework\graph.proto                  ^
	.\tensorflow\core\framework\kernel_def.proto             ^
	.\tensorflow\core\framework\op_def.proto                 ^
	.\tensorflow\core\framework\step_stats.proto             ^
	.\tensorflow\core\framework\summary.proto                ^
	.\tensorflow\core\framework\tensor.proto                 ^
	.\tensorflow\core\framework\tensor_description.proto     ^
	.\tensorflow\core\framework\tensor_shape.proto           ^
	.\tensorflow\core\framework\tensor_slice.proto           ^
	.\tensorflow\core\framework\types.proto                  ^
	.\tensorflow\core\framework\variable.proto               ^
	.\tensorflow\core\framework\versions.proto               ^
	.\tensorflow\core\kernels\reader_base.proto              ^
	.\tensorflow\core\lib\core\error_codes.proto             ^
	.\tensorflow\core\protobuf\meta_graph.proto              ^
	.\tensorflow\core\protobuf\queue_runner.proto            ^
	.\tensorflow\core\protobuf\saver.proto                   ^
	.\tensorflow\core\util\event.proto                       ^
	.\tensorflow\core\util\saved_tensor_slice.proto          ^
	.\tensorflow\python\training\checkpoint_state.proto      ^
	.\tensorflow\python\util\protobuf\compare_test.proto     

cd %~dp0

