// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpcHeader.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rpcHeader.pb.h"

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

namespace burger {
namespace rpc {

namespace {

const ::google::protobuf::Descriptor* RpcHeader_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcHeader_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_rpcHeader_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_rpcHeader_2eproto() {
  protobuf_AddDesc_rpcHeader_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "rpcHeader.proto");
  GOOGLE_CHECK(file != NULL);
  RpcHeader_descriptor_ = file->message_type(0);
  static const int RpcHeader_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcHeader, servicename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcHeader, methodname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcHeader, argssize_),
  };
  RpcHeader_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RpcHeader_descriptor_,
      RpcHeader::default_instance_,
      RpcHeader_offsets_,
      -1,
      -1,
      -1,
      sizeof(RpcHeader),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcHeader, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcHeader, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_rpcHeader_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RpcHeader_descriptor_, &RpcHeader::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_rpcHeader_2eproto() {
  delete RpcHeader::default_instance_;
  delete RpcHeader_reflection_;
}

void protobuf_AddDesc_rpcHeader_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_rpcHeader_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017rpcHeader.proto\022\nburger.rpc\"F\n\tRpcHead"
    "er\022\023\n\013serviceName\030\001 \001(\014\022\022\n\nmethodName\030\002 "
    "\001(\014\022\020\n\010argsSize\030\003 \001(\rb\006proto3", 109);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rpcHeader.proto", &protobuf_RegisterTypes);
  RpcHeader::default_instance_ = new RpcHeader();
  RpcHeader::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_rpcHeader_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_rpcHeader_2eproto {
  StaticDescriptorInitializer_rpcHeader_2eproto() {
    protobuf_AddDesc_rpcHeader_2eproto();
  }
} static_descriptor_initializer_rpcHeader_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcHeader::kServiceNameFieldNumber;
const int RpcHeader::kMethodNameFieldNumber;
const int RpcHeader::kArgsSizeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcHeader::RpcHeader()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:burger.rpc.RpcHeader)
}

void RpcHeader::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RpcHeader::RpcHeader(const RpcHeader& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:burger.rpc.RpcHeader)
}

void RpcHeader::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  servicename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  methodname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  argssize_ = 0u;
}

RpcHeader::~RpcHeader() {
  // @@protoc_insertion_point(destructor:burger.rpc.RpcHeader)
  SharedDtor();
}

void RpcHeader::SharedDtor() {
  servicename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  methodname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void RpcHeader::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcHeader::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcHeader_descriptor_;
}

const RpcHeader& RpcHeader::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_rpcHeader_2eproto();
  return *default_instance_;
}

RpcHeader* RpcHeader::default_instance_ = NULL;

RpcHeader* RpcHeader::New(::google::protobuf::Arena* arena) const {
  RpcHeader* n = new RpcHeader;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RpcHeader::Clear() {
// @@protoc_insertion_point(message_clear_start:burger.rpc.RpcHeader)
  servicename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  methodname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  argssize_ = 0u;
}

bool RpcHeader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:burger.rpc.RpcHeader)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes serviceName = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_servicename()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_methodName;
        break;
      }

      // optional bytes methodName = 2;
      case 2: {
        if (tag == 18) {
         parse_methodName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_methodname()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_argsSize;
        break;
      }

      // optional uint32 argsSize = 3;
      case 3: {
        if (tag == 24) {
         parse_argsSize:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &argssize_)));

        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:burger.rpc.RpcHeader)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:burger.rpc.RpcHeader)
  return false;
#undef DO_
}

void RpcHeader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:burger.rpc.RpcHeader)
  // optional bytes serviceName = 1;
  if (this->servicename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->servicename(), output);
  }

  // optional bytes methodName = 2;
  if (this->methodname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->methodname(), output);
  }

  // optional uint32 argsSize = 3;
  if (this->argssize() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->argssize(), output);
  }

  // @@protoc_insertion_point(serialize_end:burger.rpc.RpcHeader)
}

::google::protobuf::uint8* RpcHeader::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:burger.rpc.RpcHeader)
  // optional bytes serviceName = 1;
  if (this->servicename().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->servicename(), target);
  }

  // optional bytes methodName = 2;
  if (this->methodname().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->methodname(), target);
  }

  // optional uint32 argsSize = 3;
  if (this->argssize() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->argssize(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:burger.rpc.RpcHeader)
  return target;
}

int RpcHeader::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:burger.rpc.RpcHeader)
  int total_size = 0;

  // optional bytes serviceName = 1;
  if (this->servicename().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->servicename());
  }

  // optional bytes methodName = 2;
  if (this->methodname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->methodname());
  }

  // optional uint32 argsSize = 3;
  if (this->argssize() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->argssize());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RpcHeader::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:burger.rpc.RpcHeader)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const RpcHeader* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RpcHeader>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:burger.rpc.RpcHeader)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:burger.rpc.RpcHeader)
    MergeFrom(*source);
  }
}

void RpcHeader::MergeFrom(const RpcHeader& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:burger.rpc.RpcHeader)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.servicename().size() > 0) {

    servicename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.servicename_);
  }
  if (from.methodname().size() > 0) {

    methodname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.methodname_);
  }
  if (from.argssize() != 0) {
    set_argssize(from.argssize());
  }
}

void RpcHeader::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:burger.rpc.RpcHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcHeader::CopyFrom(const RpcHeader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:burger.rpc.RpcHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcHeader::IsInitialized() const {

  return true;
}

void RpcHeader::Swap(RpcHeader* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcHeader::InternalSwap(RpcHeader* other) {
  servicename_.Swap(&other->servicename_);
  methodname_.Swap(&other->methodname_);
  std::swap(argssize_, other->argssize_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RpcHeader::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcHeader_descriptor_;
  metadata.reflection = RpcHeader_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RpcHeader

// optional bytes serviceName = 1;
void RpcHeader::clear_servicename() {
  servicename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RpcHeader::servicename() const {
  // @@protoc_insertion_point(field_get:burger.rpc.RpcHeader.serviceName)
  return servicename_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcHeader::set_servicename(const ::std::string& value) {
  
  servicename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:burger.rpc.RpcHeader.serviceName)
}
 void RpcHeader::set_servicename(const char* value) {
  
  servicename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:burger.rpc.RpcHeader.serviceName)
}
 void RpcHeader::set_servicename(const void* value, size_t size) {
  
  servicename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:burger.rpc.RpcHeader.serviceName)
}
 ::std::string* RpcHeader::mutable_servicename() {
  
  // @@protoc_insertion_point(field_mutable:burger.rpc.RpcHeader.serviceName)
  return servicename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcHeader::release_servicename() {
  // @@protoc_insertion_point(field_release:burger.rpc.RpcHeader.serviceName)
  
  return servicename_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcHeader::set_allocated_servicename(::std::string* servicename) {
  if (servicename != NULL) {
    
  } else {
    
  }
  servicename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), servicename);
  // @@protoc_insertion_point(field_set_allocated:burger.rpc.RpcHeader.serviceName)
}

// optional bytes methodName = 2;
void RpcHeader::clear_methodname() {
  methodname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RpcHeader::methodname() const {
  // @@protoc_insertion_point(field_get:burger.rpc.RpcHeader.methodName)
  return methodname_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcHeader::set_methodname(const ::std::string& value) {
  
  methodname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:burger.rpc.RpcHeader.methodName)
}
 void RpcHeader::set_methodname(const char* value) {
  
  methodname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:burger.rpc.RpcHeader.methodName)
}
 void RpcHeader::set_methodname(const void* value, size_t size) {
  
  methodname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:burger.rpc.RpcHeader.methodName)
}
 ::std::string* RpcHeader::mutable_methodname() {
  
  // @@protoc_insertion_point(field_mutable:burger.rpc.RpcHeader.methodName)
  return methodname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcHeader::release_methodname() {
  // @@protoc_insertion_point(field_release:burger.rpc.RpcHeader.methodName)
  
  return methodname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcHeader::set_allocated_methodname(::std::string* methodname) {
  if (methodname != NULL) {
    
  } else {
    
  }
  methodname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), methodname);
  // @@protoc_insertion_point(field_set_allocated:burger.rpc.RpcHeader.methodName)
}

// optional uint32 argsSize = 3;
void RpcHeader::clear_argssize() {
  argssize_ = 0u;
}
 ::google::protobuf::uint32 RpcHeader::argssize() const {
  // @@protoc_insertion_point(field_get:burger.rpc.RpcHeader.argsSize)
  return argssize_;
}
 void RpcHeader::set_argssize(::google::protobuf::uint32 value) {
  
  argssize_ = value;
  // @@protoc_insertion_point(field_set:burger.rpc.RpcHeader.argsSize)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace rpc
}  // namespace burger

// @@protoc_insertion_point(global_scope)
