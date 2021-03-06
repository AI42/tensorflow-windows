// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/python/training/checkpoint_state.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/python/training/checkpoint_state.pb.h"

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

const ::google::protobuf::Descriptor* CheckpointState_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CheckpointState_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto() {
  protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tensorflow/python/training/checkpoint_state.proto");
  GOOGLE_CHECK(file != NULL);
  CheckpointState_descriptor_ = file->message_type(0);
  static const int CheckpointState_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckpointState, model_checkpoint_path_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckpointState, all_model_checkpoint_paths_),
  };
  CheckpointState_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CheckpointState_descriptor_,
      CheckpointState::default_instance_,
      CheckpointState_offsets_,
      -1,
      -1,
      -1,
      sizeof(CheckpointState),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckpointState, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckpointState, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CheckpointState_descriptor_, &CheckpointState::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto() {
  delete CheckpointState::default_instance_;
  delete CheckpointState_reflection_;
}

void protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n1tensorflow/python/training/checkpoint_"
    "state.proto\022\ntensorflow\"T\n\017CheckpointSta"
    "te\022\035\n\025model_checkpoint_path\030\001 \001(\t\022\"\n\032all"
    "_model_checkpoint_paths\030\002 \003(\tb\006proto3", 157);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/python/training/checkpoint_state.proto", &protobuf_RegisterTypes);
  CheckpointState::default_instance_ = new CheckpointState();
  CheckpointState::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto {
  StaticDescriptorInitializer_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto() {
    protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CheckpointState::kModelCheckpointPathFieldNumber;
const int CheckpointState::kAllModelCheckpointPathsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CheckpointState::CheckpointState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.CheckpointState)
}

void CheckpointState::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

CheckpointState::CheckpointState(const CheckpointState& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tensorflow.CheckpointState)
}

void CheckpointState::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  model_checkpoint_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

CheckpointState::~CheckpointState() {
  // @@protoc_insertion_point(destructor:tensorflow.CheckpointState)
  SharedDtor();
}

void CheckpointState::SharedDtor() {
  model_checkpoint_path_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void CheckpointState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CheckpointState::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CheckpointState_descriptor_;
}

const CheckpointState& CheckpointState::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
  return *default_instance_;
}

CheckpointState* CheckpointState::default_instance_ = NULL;

CheckpointState* CheckpointState::New(::google::protobuf::Arena* arena) const {
  CheckpointState* n = new CheckpointState;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CheckpointState::Clear() {
  model_checkpoint_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  all_model_checkpoint_paths_.Clear();
}

bool CheckpointState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.CheckpointState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string model_checkpoint_path = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_model_checkpoint_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->model_checkpoint_path().data(), this->model_checkpoint_path().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.CheckpointState.model_checkpoint_path"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_all_model_checkpoint_paths;
        break;
      }

      // repeated string all_model_checkpoint_paths = 2;
      case 2: {
        if (tag == 18) {
         parse_all_model_checkpoint_paths:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_all_model_checkpoint_paths()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->all_model_checkpoint_paths(this->all_model_checkpoint_paths_size() - 1).data(),
            this->all_model_checkpoint_paths(this->all_model_checkpoint_paths_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.CheckpointState.all_model_checkpoint_paths"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_all_model_checkpoint_paths;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.CheckpointState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.CheckpointState)
  return false;
#undef DO_
}

void CheckpointState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.CheckpointState)
  // optional string model_checkpoint_path = 1;
  if (this->model_checkpoint_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->model_checkpoint_path().data(), this->model_checkpoint_path().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.CheckpointState.model_checkpoint_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->model_checkpoint_path(), output);
  }

  // repeated string all_model_checkpoint_paths = 2;
  for (int i = 0; i < this->all_model_checkpoint_paths_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->all_model_checkpoint_paths(i).data(), this->all_model_checkpoint_paths(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.CheckpointState.all_model_checkpoint_paths");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->all_model_checkpoint_paths(i), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.CheckpointState)
}

::google::protobuf::uint8* CheckpointState::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.CheckpointState)
  // optional string model_checkpoint_path = 1;
  if (this->model_checkpoint_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->model_checkpoint_path().data(), this->model_checkpoint_path().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.CheckpointState.model_checkpoint_path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->model_checkpoint_path(), target);
  }

  // repeated string all_model_checkpoint_paths = 2;
  for (int i = 0; i < this->all_model_checkpoint_paths_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->all_model_checkpoint_paths(i).data(), this->all_model_checkpoint_paths(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.CheckpointState.all_model_checkpoint_paths");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->all_model_checkpoint_paths(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.CheckpointState)
  return target;
}

int CheckpointState::ByteSize() const {
  int total_size = 0;

  // optional string model_checkpoint_path = 1;
  if (this->model_checkpoint_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->model_checkpoint_path());
  }

  // repeated string all_model_checkpoint_paths = 2;
  total_size += 1 * this->all_model_checkpoint_paths_size();
  for (int i = 0; i < this->all_model_checkpoint_paths_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->all_model_checkpoint_paths(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CheckpointState::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const CheckpointState* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CheckpointState>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CheckpointState::MergeFrom(const CheckpointState& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  all_model_checkpoint_paths_.MergeFrom(from.all_model_checkpoint_paths_);
  if (from.model_checkpoint_path().size() > 0) {

    model_checkpoint_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.model_checkpoint_path_);
  }
}

void CheckpointState::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CheckpointState::CopyFrom(const CheckpointState& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CheckpointState::IsInitialized() const {

  return true;
}

void CheckpointState::Swap(CheckpointState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CheckpointState::InternalSwap(CheckpointState* other) {
  model_checkpoint_path_.Swap(&other->model_checkpoint_path_);
  all_model_checkpoint_paths_.UnsafeArenaSwap(&other->all_model_checkpoint_paths_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CheckpointState::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CheckpointState_descriptor_;
  metadata.reflection = CheckpointState_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CheckpointState

// optional string model_checkpoint_path = 1;
void CheckpointState::clear_model_checkpoint_path() {
  model_checkpoint_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& CheckpointState::model_checkpoint_path() const {
  // @@protoc_insertion_point(field_get:tensorflow.CheckpointState.model_checkpoint_path)
  return model_checkpoint_path_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CheckpointState::set_model_checkpoint_path(const ::std::string& value) {
  
  model_checkpoint_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.CheckpointState.model_checkpoint_path)
}
 void CheckpointState::set_model_checkpoint_path(const char* value) {
  
  model_checkpoint_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.CheckpointState.model_checkpoint_path)
}
 void CheckpointState::set_model_checkpoint_path(const char* value, size_t size) {
  
  model_checkpoint_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CheckpointState.model_checkpoint_path)
}
 ::std::string* CheckpointState::mutable_model_checkpoint_path() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.CheckpointState.model_checkpoint_path)
  return model_checkpoint_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* CheckpointState::release_model_checkpoint_path() {
  
  return model_checkpoint_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void CheckpointState::set_allocated_model_checkpoint_path(::std::string* model_checkpoint_path) {
  if (model_checkpoint_path != NULL) {
    
  } else {
    
  }
  model_checkpoint_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_checkpoint_path);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CheckpointState.model_checkpoint_path)
}

// repeated string all_model_checkpoint_paths = 2;
int CheckpointState::all_model_checkpoint_paths_size() const {
  return all_model_checkpoint_paths_.size();
}
void CheckpointState::clear_all_model_checkpoint_paths() {
  all_model_checkpoint_paths_.Clear();
}
 const ::std::string& CheckpointState::all_model_checkpoint_paths(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_.Get(index);
}
 ::std::string* CheckpointState::mutable_all_model_checkpoint_paths(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_.Mutable(index);
}
 void CheckpointState::set_all_model_checkpoint_paths(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.CheckpointState.all_model_checkpoint_paths)
  all_model_checkpoint_paths_.Mutable(index)->assign(value);
}
 void CheckpointState::set_all_model_checkpoint_paths(int index, const char* value) {
  all_model_checkpoint_paths_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
 void CheckpointState::set_all_model_checkpoint_paths(int index, const char* value, size_t size) {
  all_model_checkpoint_paths_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
 ::std::string* CheckpointState::add_all_model_checkpoint_paths() {
  return all_model_checkpoint_paths_.Add();
}
 void CheckpointState::add_all_model_checkpoint_paths(const ::std::string& value) {
  all_model_checkpoint_paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
 void CheckpointState::add_all_model_checkpoint_paths(const char* value) {
  all_model_checkpoint_paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
 void CheckpointState::add_all_model_checkpoint_paths(const char* value, size_t size) {
  all_model_checkpoint_paths_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
CheckpointState::all_model_checkpoint_paths() const {
  // @@protoc_insertion_point(field_list:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
CheckpointState::mutable_all_model_checkpoint_paths() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return &all_model_checkpoint_paths_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
