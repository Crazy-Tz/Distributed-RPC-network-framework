// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friend.proto

#include "friend.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_friend_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_resultCode_friend_2eproto;
namespace myfriend {
class resultCodeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<resultCode> _instance;
} _resultCode_default_instance_;
class FriendRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<FriendRequest> _instance;
} _FriendRequest_default_instance_;
class FriendResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<FriendResponse> _instance;
} _FriendResponse_default_instance_;
}  // namespace myfriend
static void InitDefaultsscc_info_FriendRequest_friend_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::myfriend::_FriendRequest_default_instance_;
    new (ptr) ::myfriend::FriendRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::myfriend::FriendRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_FriendRequest_friend_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_FriendRequest_friend_2eproto}, {}};

static void InitDefaultsscc_info_FriendResponse_friend_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::myfriend::_FriendResponse_default_instance_;
    new (ptr) ::myfriend::FriendResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::myfriend::FriendResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_FriendResponse_friend_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_FriendResponse_friend_2eproto}, {
      &scc_info_resultCode_friend_2eproto.base,}};

static void InitDefaultsscc_info_resultCode_friend_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::myfriend::_resultCode_default_instance_;
    new (ptr) ::myfriend::resultCode();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::myfriend::resultCode::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_resultCode_friend_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_resultCode_friend_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_friend_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_friend_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* file_level_service_descriptors_friend_2eproto[1];

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_friend_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::myfriend::resultCode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::myfriend::resultCode, errcode_),
  PROTOBUF_FIELD_OFFSET(::myfriend::resultCode, errmsg_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::myfriend::FriendRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::myfriend::FriendRequest, name_),
  PROTOBUF_FIELD_OFFSET(::myfriend::FriendRequest, pws_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::myfriend::FriendResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::myfriend::FriendResponse, result_),
  PROTOBUF_FIELD_OFFSET(::myfriend::FriendResponse, friends_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::myfriend::resultCode)},
  { 7, -1, sizeof(::myfriend::FriendRequest)},
  { 14, -1, sizeof(::myfriend::FriendResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::myfriend::_resultCode_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::myfriend::_FriendRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::myfriend::_FriendResponse_default_instance_),
};

const char descriptor_table_protodef_friend_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014friend.proto\022\010myfriend\"-\n\nresultCode\022\017"
  "\n\007errcode\030\001 \001(\005\022\016\n\006errmsg\030\002 \001(\014\"*\n\rFrien"
  "dRequest\022\014\n\004name\030\001 \001(\014\022\013\n\003pws\030\002 \001(\014\"G\n\016F"
  "riendResponse\022$\n\006result\030\001 \001(\0132\024.myfriend"
  ".resultCode\022\017\n\007friends\030\002 \003(\0142V\n\020FriendSe"
  "rviceRpc\022B\n\rgetFriendlist\022\027.myfriend.Fri"
  "endRequest\032\030.myfriend.FriendResponseB\003\200\001"
  "\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_friend_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_friend_2eproto_sccs[3] = {
  &scc_info_FriendRequest_friend_2eproto.base,
  &scc_info_FriendResponse_friend_2eproto.base,
  &scc_info_resultCode_friend_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_friend_2eproto_once;
static bool descriptor_table_friend_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_friend_2eproto = {
  &descriptor_table_friend_2eproto_initialized, descriptor_table_protodef_friend_2eproto, "friend.proto", 289,
  &descriptor_table_friend_2eproto_once, descriptor_table_friend_2eproto_sccs, descriptor_table_friend_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_friend_2eproto::offsets,
  file_level_metadata_friend_2eproto, 3, file_level_enum_descriptors_friend_2eproto, file_level_service_descriptors_friend_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_friend_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_friend_2eproto), true);
namespace myfriend {

// ===================================================================

void resultCode::InitAsDefaultInstance() {
}
class resultCode::_Internal {
 public:
};

resultCode::resultCode()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:myfriend.resultCode)
}
resultCode::resultCode(const resultCode& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  errmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_errmsg().empty()) {
    errmsg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.errmsg_);
  }
  errcode_ = from.errcode_;
  // @@protoc_insertion_point(copy_constructor:myfriend.resultCode)
}

void resultCode::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_resultCode_friend_2eproto.base);
  errmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  errcode_ = 0;
}

resultCode::~resultCode() {
  // @@protoc_insertion_point(destructor:myfriend.resultCode)
  SharedDtor();
}

void resultCode::SharedDtor() {
  errmsg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void resultCode::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const resultCode& resultCode::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_resultCode_friend_2eproto.base);
  return *internal_default_instance();
}


void resultCode::Clear() {
// @@protoc_insertion_point(message_clear_start:myfriend.resultCode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  errmsg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  errcode_ = 0;
  _internal_metadata_.Clear();
}

const char* resultCode::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 errcode = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          errcode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes errmsg = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_errmsg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* resultCode::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:myfriend.resultCode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 errcode = 1;
  if (this->errcode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_errcode(), target);
  }

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_errmsg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:myfriend.resultCode)
  return target;
}

size_t resultCode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:myfriend.resultCode)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_errmsg());
  }

  // int32 errcode = 1;
  if (this->errcode() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_errcode());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void resultCode::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:myfriend.resultCode)
  GOOGLE_DCHECK_NE(&from, this);
  const resultCode* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<resultCode>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:myfriend.resultCode)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:myfriend.resultCode)
    MergeFrom(*source);
  }
}

void resultCode::MergeFrom(const resultCode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:myfriend.resultCode)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.errmsg().size() > 0) {

    errmsg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.errmsg_);
  }
  if (from.errcode() != 0) {
    _internal_set_errcode(from._internal_errcode());
  }
}

void resultCode::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:myfriend.resultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void resultCode::CopyFrom(const resultCode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:myfriend.resultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool resultCode::IsInitialized() const {
  return true;
}

void resultCode::InternalSwap(resultCode* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  errmsg_.Swap(&other->errmsg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(errcode_, other->errcode_);
}

::PROTOBUF_NAMESPACE_ID::Metadata resultCode::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void FriendRequest::InitAsDefaultInstance() {
}
class FriendRequest::_Internal {
 public:
};

FriendRequest::FriendRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:myfriend.FriendRequest)
}
FriendRequest::FriendRequest(const FriendRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  pws_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_pws().empty()) {
    pws_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.pws_);
  }
  // @@protoc_insertion_point(copy_constructor:myfriend.FriendRequest)
}

void FriendRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_FriendRequest_friend_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  pws_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

FriendRequest::~FriendRequest() {
  // @@protoc_insertion_point(destructor:myfriend.FriendRequest)
  SharedDtor();
}

void FriendRequest::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  pws_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void FriendRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const FriendRequest& FriendRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_FriendRequest_friend_2eproto.base);
  return *internal_default_instance();
}


void FriendRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:myfriend.FriendRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  pws_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* FriendRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes pws = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_pws();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* FriendRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:myfriend.FriendRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes name = 1;
  if (this->name().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_name(), target);
  }

  // bytes pws = 2;
  if (this->pws().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_pws(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:myfriend.FriendRequest)
  return target;
}

size_t FriendRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:myfriend.FriendRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_name());
  }

  // bytes pws = 2;
  if (this->pws().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_pws());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FriendRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:myfriend.FriendRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const FriendRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<FriendRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:myfriend.FriendRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:myfriend.FriendRequest)
    MergeFrom(*source);
  }
}

void FriendRequest::MergeFrom(const FriendRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:myfriend.FriendRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.pws().size() > 0) {

    pws_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.pws_);
  }
}

void FriendRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:myfriend.FriendRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FriendRequest::CopyFrom(const FriendRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:myfriend.FriendRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FriendRequest::IsInitialized() const {
  return true;
}

void FriendRequest::InternalSwap(FriendRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  pws_.Swap(&other->pws_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata FriendRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void FriendResponse::InitAsDefaultInstance() {
  ::myfriend::_FriendResponse_default_instance_._instance.get_mutable()->result_ = const_cast< ::myfriend::resultCode*>(
      ::myfriend::resultCode::internal_default_instance());
}
class FriendResponse::_Internal {
 public:
  static const ::myfriend::resultCode& result(const FriendResponse* msg);
};

const ::myfriend::resultCode&
FriendResponse::_Internal::result(const FriendResponse* msg) {
  return *msg->result_;
}
FriendResponse::FriendResponse()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:myfriend.FriendResponse)
}
FriendResponse::FriendResponse(const FriendResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      friends_(from.friends_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_result()) {
    result_ = new ::myfriend::resultCode(*from.result_);
  } else {
    result_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:myfriend.FriendResponse)
}

void FriendResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_FriendResponse_friend_2eproto.base);
  result_ = nullptr;
}

FriendResponse::~FriendResponse() {
  // @@protoc_insertion_point(destructor:myfriend.FriendResponse)
  SharedDtor();
}

void FriendResponse::SharedDtor() {
  if (this != internal_default_instance()) delete result_;
}

void FriendResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const FriendResponse& FriendResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_FriendResponse_friend_2eproto.base);
  return *internal_default_instance();
}


void FriendResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:myfriend.FriendResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  friends_.Clear();
  if (GetArenaNoVirtual() == nullptr && result_ != nullptr) {
    delete result_;
  }
  result_ = nullptr;
  _internal_metadata_.Clear();
}

const char* FriendResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .myfriend.resultCode result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_result(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated bytes friends = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_friends();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* FriendResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:myfriend.FriendResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .myfriend.resultCode result = 1;
  if (this->has_result()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::result(this), target, stream);
  }

  // repeated bytes friends = 2;
  for (int i = 0, n = this->_internal_friends_size(); i < n; i++) {
    const auto& s = this->_internal_friends(i);
    target = stream->WriteBytes(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:myfriend.FriendResponse)
  return target;
}

size_t FriendResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:myfriend.FriendResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes friends = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(friends_.size());
  for (int i = 0, n = friends_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      friends_.Get(i));
  }

  // .myfriend.resultCode result = 1;
  if (this->has_result()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *result_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FriendResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:myfriend.FriendResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const FriendResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<FriendResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:myfriend.FriendResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:myfriend.FriendResponse)
    MergeFrom(*source);
  }
}

void FriendResponse::MergeFrom(const FriendResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:myfriend.FriendResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  friends_.MergeFrom(from.friends_);
  if (from.has_result()) {
    _internal_mutable_result()->::myfriend::resultCode::MergeFrom(from._internal_result());
  }
}

void FriendResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:myfriend.FriendResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FriendResponse::CopyFrom(const FriendResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:myfriend.FriendResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FriendResponse::IsInitialized() const {
  return true;
}

void FriendResponse::InternalSwap(FriendResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  friends_.InternalSwap(&other->friends_);
  swap(result_, other->result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata FriendResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

FriendServiceRpc::~FriendServiceRpc() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* FriendServiceRpc::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_friend_2eproto);
  return file_level_service_descriptors_friend_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* FriendServiceRpc::GetDescriptor() {
  return descriptor();
}

void FriendServiceRpc::getFriendlist(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::myfriend::FriendRequest*,
                         ::myfriend::FriendResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method getFriendlist() not implemented.");
  done->Run();
}

void FriendServiceRpc::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_friend_2eproto[0]);
  switch(method->index()) {
    case 0:
      getFriendlist(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::myfriend::FriendRequest*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::myfriend::FriendResponse*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& FriendServiceRpc::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::myfriend::FriendRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& FriendServiceRpc::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::myfriend::FriendResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

FriendServiceRpc_Stub::FriendServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
FriendServiceRpc_Stub::FriendServiceRpc_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
FriendServiceRpc_Stub::~FriendServiceRpc_Stub() {
  if (owns_channel_) delete channel_;
}

void FriendServiceRpc_Stub::getFriendlist(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::myfriend::FriendRequest* request,
                              ::myfriend::FriendResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace myfriend
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::myfriend::resultCode* Arena::CreateMaybeMessage< ::myfriend::resultCode >(Arena* arena) {
  return Arena::CreateInternal< ::myfriend::resultCode >(arena);
}
template<> PROTOBUF_NOINLINE ::myfriend::FriendRequest* Arena::CreateMaybeMessage< ::myfriend::FriendRequest >(Arena* arena) {
  return Arena::CreateInternal< ::myfriend::FriendRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::myfriend::FriendResponse* Arena::CreateMaybeMessage< ::myfriend::FriendResponse >(Arena* arena) {
  return Arena::CreateInternal< ::myfriend::FriendResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
