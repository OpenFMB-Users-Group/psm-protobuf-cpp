// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metermodule/metermodule.proto

#include "metermodule/metermodule.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace metermodule {
PROTOBUF_CONSTEXPR MeterReading::MeterReading(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.conductingequipmentterminalreading_)*/nullptr
  , /*decltype(_impl_.phasemmtn_)*/nullptr
  , /*decltype(_impl_.readingmmtr_)*/nullptr
  , /*decltype(_impl_.readingmmxu_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MeterReadingDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MeterReadingDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MeterReadingDefaultTypeInternal() {}
  union {
    MeterReading _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MeterReadingDefaultTypeInternal _MeterReading_default_instance_;
PROTOBUF_CONSTEXPR MeterReadingProfile::MeterReadingProfile(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.readingmessageinfo_)*/nullptr
  , /*decltype(_impl_.meter_)*/nullptr
  , /*decltype(_impl_.meterreading_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MeterReadingProfileDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MeterReadingProfileDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MeterReadingProfileDefaultTypeInternal() {}
  union {
    MeterReadingProfile _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MeterReadingProfileDefaultTypeInternal _MeterReadingProfile_default_instance_;
}  // namespace metermodule
static ::_pb::Metadata file_level_metadata_metermodule_2fmetermodule_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_metermodule_2fmetermodule_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_metermodule_2fmetermodule_2eproto = nullptr;
const ::uint32_t TableStruct_metermodule_2fmetermodule_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::metermodule::MeterReading, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::metermodule::MeterReading, _impl_.conductingequipmentterminalreading_),
    PROTOBUF_FIELD_OFFSET(::metermodule::MeterReading, _impl_.phasemmtn_),
    PROTOBUF_FIELD_OFFSET(::metermodule::MeterReading, _impl_.readingmmtr_),
    PROTOBUF_FIELD_OFFSET(::metermodule::MeterReading, _impl_.readingmmxu_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::metermodule::MeterReadingProfile, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::metermodule::MeterReadingProfile, _impl_.readingmessageinfo_),
    PROTOBUF_FIELD_OFFSET(::metermodule::MeterReadingProfile, _impl_.meter_),
    PROTOBUF_FIELD_OFFSET(::metermodule::MeterReadingProfile, _impl_.meterreading_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::metermodule::MeterReading)},
        { 12, -1, -1, sizeof(::metermodule::MeterReadingProfile)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::metermodule::_MeterReading_default_instance_._instance,
    &::metermodule::_MeterReadingProfile_default_instance_._instance,
};
const char descriptor_table_protodef_metermodule_2fmetermodule_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\035metermodule/metermodule.proto\022\013metermo"
    "dule\032\tuml.proto\032\037commonmodule/commonmodu"
    "le.proto\"\376\001\n\014MeterReading\022b\n\"conductingE"
    "quipmentTerminalReading\030\001 \001(\01320.commonmo"
    "dule.ConductingEquipmentTerminalReadingB"
    "\004\200\265\030\001\022*\n\tphaseMMTN\030\002 \001(\0132\027.commonmodule."
    "PhaseMMTN\022.\n\013readingMMTR\030\003 \001(\0132\031.commonm"
    "odule.ReadingMMTR\022.\n\013readingMMXU\030\004 \001(\0132\031"
    ".commonmodule.ReadingMMXU\"\310\001\n\023MeterReadi"
    "ngProfile\022B\n\022readingMessageInfo\030\001 \001(\0132 ."
    "commonmodule.ReadingMessageInfoB\004\200\265\030\001\022,\n"
    "\005meter\030\002 \001(\0132\023.commonmodule.MeterB\010\210\265\030\001\220"
    "\265\030\001\0229\n\014meterReading\030\003 \001(\0132\031.metermodule."
    "MeterReadingB\010\210\265\030\001\220\265\030\001:\004\300\363\030\001B\201\001\n\023openfmb"
    ".metermoduleP\001ZRgitlab.com/openfmb/psm/o"
    "ps/protobuf/go-openfmb-ops-protobuf/v2/o"
    "penfmb/metermodule\252\002\023openfmb.metermodule"
    "b\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_metermodule_2fmetermodule_2eproto_deps[2] =
    {
        &::descriptor_table_commonmodule_2fcommonmodule_2eproto,
        &::descriptor_table_uml_2eproto,
};
static ::absl::once_flag descriptor_table_metermodule_2fmetermodule_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_metermodule_2fmetermodule_2eproto = {
    false,
    false,
    688,
    descriptor_table_protodef_metermodule_2fmetermodule_2eproto,
    "metermodule/metermodule.proto",
    &descriptor_table_metermodule_2fmetermodule_2eproto_once,
    descriptor_table_metermodule_2fmetermodule_2eproto_deps,
    2,
    2,
    schemas,
    file_default_instances,
    TableStruct_metermodule_2fmetermodule_2eproto::offsets,
    file_level_metadata_metermodule_2fmetermodule_2eproto,
    file_level_enum_descriptors_metermodule_2fmetermodule_2eproto,
    file_level_service_descriptors_metermodule_2fmetermodule_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_metermodule_2fmetermodule_2eproto_getter() {
  return &descriptor_table_metermodule_2fmetermodule_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_metermodule_2fmetermodule_2eproto(&descriptor_table_metermodule_2fmetermodule_2eproto);
namespace metermodule {
// ===================================================================

class MeterReading::_Internal {
 public:
  static const ::commonmodule::ConductingEquipmentTerminalReading& conductingequipmentterminalreading(const MeterReading* msg);
  static const ::commonmodule::PhaseMMTN& phasemmtn(const MeterReading* msg);
  static const ::commonmodule::ReadingMMTR& readingmmtr(const MeterReading* msg);
  static const ::commonmodule::ReadingMMXU& readingmmxu(const MeterReading* msg);
};

const ::commonmodule::ConductingEquipmentTerminalReading&
MeterReading::_Internal::conductingequipmentterminalreading(const MeterReading* msg) {
  return *msg->_impl_.conductingequipmentterminalreading_;
}
const ::commonmodule::PhaseMMTN&
MeterReading::_Internal::phasemmtn(const MeterReading* msg) {
  return *msg->_impl_.phasemmtn_;
}
const ::commonmodule::ReadingMMTR&
MeterReading::_Internal::readingmmtr(const MeterReading* msg) {
  return *msg->_impl_.readingmmtr_;
}
const ::commonmodule::ReadingMMXU&
MeterReading::_Internal::readingmmxu(const MeterReading* msg) {
  return *msg->_impl_.readingmmxu_;
}
void MeterReading::clear_conductingequipmentterminalreading() {
  if (GetArenaForAllocation() == nullptr && _impl_.conductingequipmentterminalreading_ != nullptr) {
    delete _impl_.conductingequipmentterminalreading_;
  }
  _impl_.conductingequipmentterminalreading_ = nullptr;
}
void MeterReading::clear_phasemmtn() {
  if (GetArenaForAllocation() == nullptr && _impl_.phasemmtn_ != nullptr) {
    delete _impl_.phasemmtn_;
  }
  _impl_.phasemmtn_ = nullptr;
}
void MeterReading::clear_readingmmtr() {
  if (GetArenaForAllocation() == nullptr && _impl_.readingmmtr_ != nullptr) {
    delete _impl_.readingmmtr_;
  }
  _impl_.readingmmtr_ = nullptr;
}
void MeterReading::clear_readingmmxu() {
  if (GetArenaForAllocation() == nullptr && _impl_.readingmmxu_ != nullptr) {
    delete _impl_.readingmmxu_;
  }
  _impl_.readingmmxu_ = nullptr;
}
MeterReading::MeterReading(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:metermodule.MeterReading)
}
MeterReading::MeterReading(const MeterReading& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MeterReading* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.conductingequipmentterminalreading_){nullptr}
    , decltype(_impl_.phasemmtn_){nullptr}
    , decltype(_impl_.readingmmtr_){nullptr}
    , decltype(_impl_.readingmmxu_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_conductingequipmentterminalreading()) {
    _this->_impl_.conductingequipmentterminalreading_ = new ::commonmodule::ConductingEquipmentTerminalReading(*from._impl_.conductingequipmentterminalreading_);
  }
  if (from._internal_has_phasemmtn()) {
    _this->_impl_.phasemmtn_ = new ::commonmodule::PhaseMMTN(*from._impl_.phasemmtn_);
  }
  if (from._internal_has_readingmmtr()) {
    _this->_impl_.readingmmtr_ = new ::commonmodule::ReadingMMTR(*from._impl_.readingmmtr_);
  }
  if (from._internal_has_readingmmxu()) {
    _this->_impl_.readingmmxu_ = new ::commonmodule::ReadingMMXU(*from._impl_.readingmmxu_);
  }
  // @@protoc_insertion_point(copy_constructor:metermodule.MeterReading)
}

inline void MeterReading::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.conductingequipmentterminalreading_){nullptr}
    , decltype(_impl_.phasemmtn_){nullptr}
    , decltype(_impl_.readingmmtr_){nullptr}
    , decltype(_impl_.readingmmxu_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MeterReading::~MeterReading() {
  // @@protoc_insertion_point(destructor:metermodule.MeterReading)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MeterReading::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.conductingequipmentterminalreading_;
  if (this != internal_default_instance()) delete _impl_.phasemmtn_;
  if (this != internal_default_instance()) delete _impl_.readingmmtr_;
  if (this != internal_default_instance()) delete _impl_.readingmmxu_;
}

void MeterReading::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MeterReading::Clear() {
// @@protoc_insertion_point(message_clear_start:metermodule.MeterReading)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.conductingequipmentterminalreading_ != nullptr) {
    delete _impl_.conductingequipmentterminalreading_;
  }
  _impl_.conductingequipmentterminalreading_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.phasemmtn_ != nullptr) {
    delete _impl_.phasemmtn_;
  }
  _impl_.phasemmtn_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.readingmmtr_ != nullptr) {
    delete _impl_.readingmmtr_;
  }
  _impl_.readingmmtr_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.readingmmxu_ != nullptr) {
    delete _impl_.readingmmxu_;
  }
  _impl_.readingmmxu_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MeterReading::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .commonmodule.ConductingEquipmentTerminalReading conductingEquipmentTerminalReading = 1 [(.uml.option_parent_message) = true];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_conductingequipmentterminalreading(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .commonmodule.PhaseMMTN phaseMMTN = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_phasemmtn(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .commonmodule.ReadingMMTR readingMMTR = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_readingmmtr(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .commonmodule.ReadingMMXU readingMMXU = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_readingmmxu(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* MeterReading::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:metermodule.MeterReading)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .commonmodule.ConductingEquipmentTerminalReading conductingEquipmentTerminalReading = 1 [(.uml.option_parent_message) = true];
  if (this->_internal_has_conductingequipmentterminalreading()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::conductingequipmentterminalreading(this),
        _Internal::conductingequipmentterminalreading(this).GetCachedSize(), target, stream);
  }

  // .commonmodule.PhaseMMTN phaseMMTN = 2;
  if (this->_internal_has_phasemmtn()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::phasemmtn(this),
        _Internal::phasemmtn(this).GetCachedSize(), target, stream);
  }

  // .commonmodule.ReadingMMTR readingMMTR = 3;
  if (this->_internal_has_readingmmtr()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::readingmmtr(this),
        _Internal::readingmmtr(this).GetCachedSize(), target, stream);
  }

  // .commonmodule.ReadingMMXU readingMMXU = 4;
  if (this->_internal_has_readingmmxu()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::readingmmxu(this),
        _Internal::readingmmxu(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metermodule.MeterReading)
  return target;
}

::size_t MeterReading::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metermodule.MeterReading)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .commonmodule.ConductingEquipmentTerminalReading conductingEquipmentTerminalReading = 1 [(.uml.option_parent_message) = true];
  if (this->_internal_has_conductingequipmentterminalreading()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.conductingequipmentterminalreading_);
  }

  // .commonmodule.PhaseMMTN phaseMMTN = 2;
  if (this->_internal_has_phasemmtn()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.phasemmtn_);
  }

  // .commonmodule.ReadingMMTR readingMMTR = 3;
  if (this->_internal_has_readingmmtr()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.readingmmtr_);
  }

  // .commonmodule.ReadingMMXU readingMMXU = 4;
  if (this->_internal_has_readingmmxu()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.readingmmxu_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MeterReading::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MeterReading::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MeterReading::GetClassData() const { return &_class_data_; }


void MeterReading::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MeterReading*>(&to_msg);
  auto& from = static_cast<const MeterReading&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:metermodule.MeterReading)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_conductingequipmentterminalreading()) {
    _this->_internal_mutable_conductingequipmentterminalreading()->::commonmodule::ConductingEquipmentTerminalReading::MergeFrom(
        from._internal_conductingequipmentterminalreading());
  }
  if (from._internal_has_phasemmtn()) {
    _this->_internal_mutable_phasemmtn()->::commonmodule::PhaseMMTN::MergeFrom(
        from._internal_phasemmtn());
  }
  if (from._internal_has_readingmmtr()) {
    _this->_internal_mutable_readingmmtr()->::commonmodule::ReadingMMTR::MergeFrom(
        from._internal_readingmmtr());
  }
  if (from._internal_has_readingmmxu()) {
    _this->_internal_mutable_readingmmxu()->::commonmodule::ReadingMMXU::MergeFrom(
        from._internal_readingmmxu());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MeterReading::CopyFrom(const MeterReading& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metermodule.MeterReading)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MeterReading::IsInitialized() const {
  return true;
}

void MeterReading::InternalSwap(MeterReading* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MeterReading, _impl_.readingmmxu_)
      + sizeof(MeterReading::_impl_.readingmmxu_)
      - PROTOBUF_FIELD_OFFSET(MeterReading, _impl_.conductingequipmentterminalreading_)>(
          reinterpret_cast<char*>(&_impl_.conductingequipmentterminalreading_),
          reinterpret_cast<char*>(&other->_impl_.conductingequipmentterminalreading_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MeterReading::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_metermodule_2fmetermodule_2eproto_getter, &descriptor_table_metermodule_2fmetermodule_2eproto_once,
      file_level_metadata_metermodule_2fmetermodule_2eproto[0]);
}
// ===================================================================

class MeterReadingProfile::_Internal {
 public:
  static const ::commonmodule::ReadingMessageInfo& readingmessageinfo(const MeterReadingProfile* msg);
  static const ::commonmodule::Meter& meter(const MeterReadingProfile* msg);
  static const ::metermodule::MeterReading& meterreading(const MeterReadingProfile* msg);
};

const ::commonmodule::ReadingMessageInfo&
MeterReadingProfile::_Internal::readingmessageinfo(const MeterReadingProfile* msg) {
  return *msg->_impl_.readingmessageinfo_;
}
const ::commonmodule::Meter&
MeterReadingProfile::_Internal::meter(const MeterReadingProfile* msg) {
  return *msg->_impl_.meter_;
}
const ::metermodule::MeterReading&
MeterReadingProfile::_Internal::meterreading(const MeterReadingProfile* msg) {
  return *msg->_impl_.meterreading_;
}
void MeterReadingProfile::clear_readingmessageinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.readingmessageinfo_ != nullptr) {
    delete _impl_.readingmessageinfo_;
  }
  _impl_.readingmessageinfo_ = nullptr;
}
void MeterReadingProfile::clear_meter() {
  if (GetArenaForAllocation() == nullptr && _impl_.meter_ != nullptr) {
    delete _impl_.meter_;
  }
  _impl_.meter_ = nullptr;
}
MeterReadingProfile::MeterReadingProfile(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:metermodule.MeterReadingProfile)
}
MeterReadingProfile::MeterReadingProfile(const MeterReadingProfile& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MeterReadingProfile* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.readingmessageinfo_){nullptr}
    , decltype(_impl_.meter_){nullptr}
    , decltype(_impl_.meterreading_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_readingmessageinfo()) {
    _this->_impl_.readingmessageinfo_ = new ::commonmodule::ReadingMessageInfo(*from._impl_.readingmessageinfo_);
  }
  if (from._internal_has_meter()) {
    _this->_impl_.meter_ = new ::commonmodule::Meter(*from._impl_.meter_);
  }
  if (from._internal_has_meterreading()) {
    _this->_impl_.meterreading_ = new ::metermodule::MeterReading(*from._impl_.meterreading_);
  }
  // @@protoc_insertion_point(copy_constructor:metermodule.MeterReadingProfile)
}

inline void MeterReadingProfile::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.readingmessageinfo_){nullptr}
    , decltype(_impl_.meter_){nullptr}
    , decltype(_impl_.meterreading_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MeterReadingProfile::~MeterReadingProfile() {
  // @@protoc_insertion_point(destructor:metermodule.MeterReadingProfile)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MeterReadingProfile::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.readingmessageinfo_;
  if (this != internal_default_instance()) delete _impl_.meter_;
  if (this != internal_default_instance()) delete _impl_.meterreading_;
}

void MeterReadingProfile::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MeterReadingProfile::Clear() {
// @@protoc_insertion_point(message_clear_start:metermodule.MeterReadingProfile)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.readingmessageinfo_ != nullptr) {
    delete _impl_.readingmessageinfo_;
  }
  _impl_.readingmessageinfo_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.meter_ != nullptr) {
    delete _impl_.meter_;
  }
  _impl_.meter_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.meterreading_ != nullptr) {
    delete _impl_.meterreading_;
  }
  _impl_.meterreading_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MeterReadingProfile::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .commonmodule.ReadingMessageInfo readingMessageInfo = 1 [(.uml.option_parent_message) = true];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_readingmessageinfo(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .commonmodule.Meter meter = 2 [(.uml.option_required_field) = true, (.uml.option_multiplicity_min) = 1];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_meter(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .metermodule.MeterReading meterReading = 3 [(.uml.option_required_field) = true, (.uml.option_multiplicity_min) = 1];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_meterreading(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* MeterReadingProfile::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:metermodule.MeterReadingProfile)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .commonmodule.ReadingMessageInfo readingMessageInfo = 1 [(.uml.option_parent_message) = true];
  if (this->_internal_has_readingmessageinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::readingmessageinfo(this),
        _Internal::readingmessageinfo(this).GetCachedSize(), target, stream);
  }

  // .commonmodule.Meter meter = 2 [(.uml.option_required_field) = true, (.uml.option_multiplicity_min) = 1];
  if (this->_internal_has_meter()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::meter(this),
        _Internal::meter(this).GetCachedSize(), target, stream);
  }

  // .metermodule.MeterReading meterReading = 3 [(.uml.option_required_field) = true, (.uml.option_multiplicity_min) = 1];
  if (this->_internal_has_meterreading()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::meterreading(this),
        _Internal::meterreading(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metermodule.MeterReadingProfile)
  return target;
}

::size_t MeterReadingProfile::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metermodule.MeterReadingProfile)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .commonmodule.ReadingMessageInfo readingMessageInfo = 1 [(.uml.option_parent_message) = true];
  if (this->_internal_has_readingmessageinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.readingmessageinfo_);
  }

  // .commonmodule.Meter meter = 2 [(.uml.option_required_field) = true, (.uml.option_multiplicity_min) = 1];
  if (this->_internal_has_meter()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.meter_);
  }

  // .metermodule.MeterReading meterReading = 3 [(.uml.option_required_field) = true, (.uml.option_multiplicity_min) = 1];
  if (this->_internal_has_meterreading()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.meterreading_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MeterReadingProfile::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MeterReadingProfile::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MeterReadingProfile::GetClassData() const { return &_class_data_; }


void MeterReadingProfile::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MeterReadingProfile*>(&to_msg);
  auto& from = static_cast<const MeterReadingProfile&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:metermodule.MeterReadingProfile)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_readingmessageinfo()) {
    _this->_internal_mutable_readingmessageinfo()->::commonmodule::ReadingMessageInfo::MergeFrom(
        from._internal_readingmessageinfo());
  }
  if (from._internal_has_meter()) {
    _this->_internal_mutable_meter()->::commonmodule::Meter::MergeFrom(
        from._internal_meter());
  }
  if (from._internal_has_meterreading()) {
    _this->_internal_mutable_meterreading()->::metermodule::MeterReading::MergeFrom(
        from._internal_meterreading());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MeterReadingProfile::CopyFrom(const MeterReadingProfile& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metermodule.MeterReadingProfile)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MeterReadingProfile::IsInitialized() const {
  return true;
}

void MeterReadingProfile::InternalSwap(MeterReadingProfile* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MeterReadingProfile, _impl_.meterreading_)
      + sizeof(MeterReadingProfile::_impl_.meterreading_)
      - PROTOBUF_FIELD_OFFSET(MeterReadingProfile, _impl_.readingmessageinfo_)>(
          reinterpret_cast<char*>(&_impl_.readingmessageinfo_),
          reinterpret_cast<char*>(&other->_impl_.readingmessageinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MeterReadingProfile::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_metermodule_2fmetermodule_2eproto_getter, &descriptor_table_metermodule_2fmetermodule_2eproto_once,
      file_level_metadata_metermodule_2fmetermodule_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace metermodule
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::metermodule::MeterReading*
Arena::CreateMaybeMessage< ::metermodule::MeterReading >(Arena* arena) {
  return Arena::CreateMessageInternal< ::metermodule::MeterReading >(arena);
}
template<> PROTOBUF_NOINLINE ::metermodule::MeterReadingProfile*
Arena::CreateMaybeMessage< ::metermodule::MeterReadingProfile >(Arena* arena) {
  return Arena::CreateMessageInternal< ::metermodule::MeterReadingProfile >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
