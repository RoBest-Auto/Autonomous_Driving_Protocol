// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MQTT_Communication_enum.proto

#include "MQTT_Communication_enum.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace dispatch {
}  // namespace dispatch
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_MQTT_5fCommunication_5fenum_2eproto[6];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MQTT_5fCommunication_5fenum_2eproto = nullptr;
const uint32_t TableStruct_MQTT_5fCommunication_5fenum_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_MQTT_5fCommunication_5fenum_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035MQTT_Communication_enum.proto\022\010dispatc"
  "h*2\n\nActionType\022\r\n\tGoForward\020\000\022\010\n\004Stop\020\001"
  "\022\013\n\007Parking\020\002*(\n\010TaskType\022\014\n\010LoadUnit\020\000\022"
  "\016\n\nUnloadUnit\020\001*\230\001\n\017VehicleJobState\022\013\n\007O"
  "ffline\020\000\022\010\n\004Idle\020\001\022\022\n\016EmptyTransport\020\002\022\022"
  "\n\016HeavyTransport\020\003\022\017\n\013WaitingLoad\020\004\022\017\n\013L"
  "oadingUnit\020\005\022\021\n\rWaitingUnload\020\006\022\021\n\rUnloa"
  "dingUnit\020\007*V\n\013DrivingMode\022\024\n\020LocalDrivin"
  "gMode\020\000\022\023\n\017TelecontrolMode\020\001\022\016\n\nRemoteMo"
  "de\020\002\022\014\n\010AutoMode\020\003*b\n\022VehicleMotionState"
  "\022\023\n\017StationaryState\020\000\022\020\n\014ForwardState\020\001\022"
  "\r\n\tBackState\020\002\022\026\n\022UnknownMotionState\020\003*\213"
  "\001\n\tFaultType\022\020\n\014VehicleFault\020\000\022\032\n\026Autono"
  "mousDrivingFault\020\001\022\026\n\022RemoteDrivingFault"
  "\020\002\022\034\n\030CommunicationSystemFault\020\003\022\032\n\026Loca"
  "lizaionSystemFault\020\004b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_MQTT_5fCommunication_5fenum_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MQTT_5fCommunication_5fenum_2eproto = {
    false, false, 628, descriptor_table_protodef_MQTT_5fCommunication_5fenum_2eproto,
    "MQTT_Communication_enum.proto",
    &descriptor_table_MQTT_5fCommunication_5fenum_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_MQTT_5fCommunication_5fenum_2eproto::offsets,
    nullptr, file_level_enum_descriptors_MQTT_5fCommunication_5fenum_2eproto,
    file_level_service_descriptors_MQTT_5fCommunication_5fenum_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MQTT_5fCommunication_5fenum_2eproto_getter() {
  return &descriptor_table_MQTT_5fCommunication_5fenum_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MQTT_5fCommunication_5fenum_2eproto(&descriptor_table_MQTT_5fCommunication_5fenum_2eproto);
namespace dispatch {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ActionType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MQTT_5fCommunication_5fenum_2eproto);
  return file_level_enum_descriptors_MQTT_5fCommunication_5fenum_2eproto[0];
}
bool ActionType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TaskType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MQTT_5fCommunication_5fenum_2eproto);
  return file_level_enum_descriptors_MQTT_5fCommunication_5fenum_2eproto[1];
}
bool TaskType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* VehicleJobState_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MQTT_5fCommunication_5fenum_2eproto);
  return file_level_enum_descriptors_MQTT_5fCommunication_5fenum_2eproto[2];
}
bool VehicleJobState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DrivingMode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MQTT_5fCommunication_5fenum_2eproto);
  return file_level_enum_descriptors_MQTT_5fCommunication_5fenum_2eproto[3];
}
bool DrivingMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* VehicleMotionState_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MQTT_5fCommunication_5fenum_2eproto);
  return file_level_enum_descriptors_MQTT_5fCommunication_5fenum_2eproto[4];
}
bool VehicleMotionState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FaultType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MQTT_5fCommunication_5fenum_2eproto);
  return file_level_enum_descriptors_MQTT_5fCommunication_5fenum_2eproto[5];
}
bool FaultType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dispatch
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
