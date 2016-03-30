// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/types.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/framework/types.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

namespace {

const ::google::protobuf::EnumDescriptor* DataType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2ftypes_2eproto() {
  protobuf_AddDesc_tensorflow_2fcore_2fframework_2ftypes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tensorflow/core/framework/types.proto");
  GOOGLE_CHECK(file != NULL);
  DataType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tensorflow_2fcore_2fframework_2ftypes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2ftypes_2eproto() {
}

void protobuf_AddDesc_tensorflow_2fcore_2fframework_2ftypes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n%tensorflow/core/framework/types.proto\022"
    "\ntensorflow*\324\004\n\010DataType\022\016\n\nDT_INVALID\020\000"
    "\022\014\n\010DT_FLOAT\020\001\022\r\n\tDT_DOUBLE\020\002\022\014\n\010DT_INT3"
    "2\020\003\022\014\n\010DT_UINT8\020\004\022\014\n\010DT_INT16\020\005\022\013\n\007DT_IN"
    "T8\020\006\022\r\n\tDT_STRING\020\007\022\020\n\014DT_COMPLEX64\020\010\022\014\n"
    "\010DT_INT64\020\t\022\013\n\007DT_BOOL\020\n\022\014\n\010DT_QINT8\020\013\022\r"
    "\n\tDT_QUINT8\020\014\022\r\n\tDT_QINT32\020\r\022\017\n\013DT_BFLOA"
    "T16\020\016\022\r\n\tDT_QINT16\020\017\022\016\n\nDT_QUINT16\020\020\022\r\n\t"
    "DT_UINT16\020\021\022\020\n\014DT_FLOAT_REF\020e\022\021\n\rDT_DOUB"
    "LE_REF\020f\022\020\n\014DT_INT32_REF\020g\022\020\n\014DT_UINT8_R"
    "EF\020h\022\020\n\014DT_INT16_REF\020i\022\017\n\013DT_INT8_REF\020j\022"
    "\021\n\rDT_STRING_REF\020k\022\024\n\020DT_COMPLEX64_REF\020l"
    "\022\020\n\014DT_INT64_REF\020m\022\017\n\013DT_BOOL_REF\020n\022\020\n\014D"
    "T_QINT8_REF\020o\022\021\n\rDT_QUINT8_REF\020p\022\021\n\rDT_Q"
    "INT32_REF\020q\022\023\n\017DT_BFLOAT16_REF\020r\022\021\n\rDT_Q"
    "INT16_REF\020s\022\022\n\016DT_QUINT16_REF\020t\022\021\n\rDT_UI"
    "NT16_REF\020uB)\n\030org.tensorflow.frameworkB\013"
    "TypesProtosP\001b\006proto3", 701);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/framework/types.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2ftypes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2ftypes_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2ftypes_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fframework_2ftypes_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fframework_2ftypes_2eproto_;
const ::google::protobuf::EnumDescriptor* DataType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DataType_descriptor_;
}
bool DataType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)