// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Notebooks API (notebooks/v1)
// Description:
//   AI Platform Notebooks API is used to manage notebook resources in Google
//   Cloud.
// Documentation:
//   https://cloud.google.com/ai-platform/notebooks/docs/

#import "GTLRAIPlatformNotebooksObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRAIPlatformNotebooks_AcceleratorConfig.type
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_AcceleratorTypeUnspecified = @"ACCELERATOR_TYPE_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_NvidiaTeslaA100 = @"NVIDIA_TESLA_A100";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_NvidiaTeslaK80 = @"NVIDIA_TESLA_K80";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_NvidiaTeslaP100 = @"NVIDIA_TESLA_P100";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_NvidiaTeslaP100Vws = @"NVIDIA_TESLA_P100_VWS";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_NvidiaTeslaP4 = @"NVIDIA_TESLA_P4";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_NvidiaTeslaP4Vws = @"NVIDIA_TESLA_P4_VWS";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_NvidiaTeslaT4 = @"NVIDIA_TESLA_T4";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_NvidiaTeslaT4Vws = @"NVIDIA_TESLA_T4_VWS";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_NvidiaTeslaV100 = @"NVIDIA_TESLA_V100";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_TpuV2 = @"TPU_V2";
NSString * const kGTLRAIPlatformNotebooks_AcceleratorConfig_Type_TpuV3 = @"TPU_V3";

// GTLRAIPlatformNotebooks_Execution.state
NSString * const kGTLRAIPlatformNotebooks_Execution_State_Cancelled = @"CANCELLED";
NSString * const kGTLRAIPlatformNotebooks_Execution_State_Cancelling = @"CANCELLING";
NSString * const kGTLRAIPlatformNotebooks_Execution_State_Failed = @"FAILED";
NSString * const kGTLRAIPlatformNotebooks_Execution_State_Preparing = @"PREPARING";
NSString * const kGTLRAIPlatformNotebooks_Execution_State_Queued = @"QUEUED";
NSString * const kGTLRAIPlatformNotebooks_Execution_State_Running = @"RUNNING";
NSString * const kGTLRAIPlatformNotebooks_Execution_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_Execution_State_Succeeded = @"SUCCEEDED";

// GTLRAIPlatformNotebooks_ExecutionTemplate.scaleTier
NSString * const kGTLRAIPlatformNotebooks_ExecutionTemplate_ScaleTier_Basic = @"BASIC";
NSString * const kGTLRAIPlatformNotebooks_ExecutionTemplate_ScaleTier_BasicGpu = @"BASIC_GPU";
NSString * const kGTLRAIPlatformNotebooks_ExecutionTemplate_ScaleTier_BasicTpu = @"BASIC_TPU";
NSString * const kGTLRAIPlatformNotebooks_ExecutionTemplate_ScaleTier_Custom = @"CUSTOM";
NSString * const kGTLRAIPlatformNotebooks_ExecutionTemplate_ScaleTier_Premium1 = @"PREMIUM_1";
NSString * const kGTLRAIPlatformNotebooks_ExecutionTemplate_ScaleTier_ScaleTierUnspecified = @"SCALE_TIER_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_ExecutionTemplate_ScaleTier_Standard1 = @"STANDARD_1";

// GTLRAIPlatformNotebooks_GetInstanceHealthResponse.healthState
NSString * const kGTLRAIPlatformNotebooks_GetInstanceHealthResponse_HealthState_AgentNotInstalled = @"AGENT_NOT_INSTALLED";
NSString * const kGTLRAIPlatformNotebooks_GetInstanceHealthResponse_HealthState_AgentNotRunning = @"AGENT_NOT_RUNNING";
NSString * const kGTLRAIPlatformNotebooks_GetInstanceHealthResponse_HealthState_HealthStateUnspecified = @"HEALTH_STATE_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_GetInstanceHealthResponse_HealthState_Healthy = @"HEALTHY";
NSString * const kGTLRAIPlatformNotebooks_GetInstanceHealthResponse_HealthState_Unhealthy = @"UNHEALTHY";

// GTLRAIPlatformNotebooks_Instance.bootDiskType
NSString * const kGTLRAIPlatformNotebooks_Instance_BootDiskType_DiskTypeUnspecified = @"DISK_TYPE_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_Instance_BootDiskType_PdBalanced = @"PD_BALANCED";
NSString * const kGTLRAIPlatformNotebooks_Instance_BootDiskType_PdSsd = @"PD_SSD";
NSString * const kGTLRAIPlatformNotebooks_Instance_BootDiskType_PdStandard = @"PD_STANDARD";

// GTLRAIPlatformNotebooks_Instance.dataDiskType
NSString * const kGTLRAIPlatformNotebooks_Instance_DataDiskType_DiskTypeUnspecified = @"DISK_TYPE_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_Instance_DataDiskType_PdBalanced = @"PD_BALANCED";
NSString * const kGTLRAIPlatformNotebooks_Instance_DataDiskType_PdSsd = @"PD_SSD";
NSString * const kGTLRAIPlatformNotebooks_Instance_DataDiskType_PdStandard = @"PD_STANDARD";

// GTLRAIPlatformNotebooks_Instance.diskEncryption
NSString * const kGTLRAIPlatformNotebooks_Instance_DiskEncryption_Cmek = @"CMEK";
NSString * const kGTLRAIPlatformNotebooks_Instance_DiskEncryption_DiskEncryptionUnspecified = @"DISK_ENCRYPTION_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_Instance_DiskEncryption_Gmek = @"GMEK";

// GTLRAIPlatformNotebooks_Instance.state
NSString * const kGTLRAIPlatformNotebooks_Instance_State_Active = @"ACTIVE";
NSString * const kGTLRAIPlatformNotebooks_Instance_State_Deleted = @"DELETED";
NSString * const kGTLRAIPlatformNotebooks_Instance_State_Initializing = @"INITIALIZING";
NSString * const kGTLRAIPlatformNotebooks_Instance_State_Provisioning = @"PROVISIONING";
NSString * const kGTLRAIPlatformNotebooks_Instance_State_Registering = @"REGISTERING";
NSString * const kGTLRAIPlatformNotebooks_Instance_State_Starting = @"STARTING";
NSString * const kGTLRAIPlatformNotebooks_Instance_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_Instance_State_Stopped = @"STOPPED";
NSString * const kGTLRAIPlatformNotebooks_Instance_State_Stopping = @"STOPPING";
NSString * const kGTLRAIPlatformNotebooks_Instance_State_Upgrading = @"UPGRADING";

// GTLRAIPlatformNotebooks_Schedule.state
NSString * const kGTLRAIPlatformNotebooks_Schedule_State_Disabled = @"DISABLED";
NSString * const kGTLRAIPlatformNotebooks_Schedule_State_Enabled = @"ENABLED";
NSString * const kGTLRAIPlatformNotebooks_Schedule_State_Paused = @"PAUSED";
NSString * const kGTLRAIPlatformNotebooks_Schedule_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_Schedule_State_UpdateFailed = @"UPDATE_FAILED";

// GTLRAIPlatformNotebooks_SchedulerAcceleratorConfig.type
NSString * const kGTLRAIPlatformNotebooks_SchedulerAcceleratorConfig_Type_NvidiaTeslaK80 = @"NVIDIA_TESLA_K80";
NSString * const kGTLRAIPlatformNotebooks_SchedulerAcceleratorConfig_Type_NvidiaTeslaP100 = @"NVIDIA_TESLA_P100";
NSString * const kGTLRAIPlatformNotebooks_SchedulerAcceleratorConfig_Type_NvidiaTeslaP4 = @"NVIDIA_TESLA_P4";
NSString * const kGTLRAIPlatformNotebooks_SchedulerAcceleratorConfig_Type_NvidiaTeslaT4 = @"NVIDIA_TESLA_T4";
NSString * const kGTLRAIPlatformNotebooks_SchedulerAcceleratorConfig_Type_NvidiaTeslaV100 = @"NVIDIA_TESLA_V100";
NSString * const kGTLRAIPlatformNotebooks_SchedulerAcceleratorConfig_Type_SchedulerAcceleratorTypeUnspecified = @"SCHEDULER_ACCELERATOR_TYPE_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_SchedulerAcceleratorConfig_Type_TpuV2 = @"TPU_V2";
NSString * const kGTLRAIPlatformNotebooks_SchedulerAcceleratorConfig_Type_TpuV3 = @"TPU_V3";

// GTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest.type
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_AcceleratorTypeUnspecified = @"ACCELERATOR_TYPE_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_NvidiaTeslaA100 = @"NVIDIA_TESLA_A100";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_NvidiaTeslaK80 = @"NVIDIA_TESLA_K80";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_NvidiaTeslaP100 = @"NVIDIA_TESLA_P100";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_NvidiaTeslaP100Vws = @"NVIDIA_TESLA_P100_VWS";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_NvidiaTeslaP4 = @"NVIDIA_TESLA_P4";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_NvidiaTeslaP4Vws = @"NVIDIA_TESLA_P4_VWS";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_NvidiaTeslaT4 = @"NVIDIA_TESLA_T4";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_NvidiaTeslaT4Vws = @"NVIDIA_TESLA_T4_VWS";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_NvidiaTeslaV100 = @"NVIDIA_TESLA_V100";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_TpuV2 = @"TPU_V2";
NSString * const kGTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest_Type_TpuV3 = @"TPU_V3";

// GTLRAIPlatformNotebooks_UpgradeHistoryEntry.action
NSString * const kGTLRAIPlatformNotebooks_UpgradeHistoryEntry_Action_ActionUnspecified = @"ACTION_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_UpgradeHistoryEntry_Action_Rollback = @"ROLLBACK";
NSString * const kGTLRAIPlatformNotebooks_UpgradeHistoryEntry_Action_Upgrade = @"UPGRADE";

// GTLRAIPlatformNotebooks_UpgradeHistoryEntry.state
NSString * const kGTLRAIPlatformNotebooks_UpgradeHistoryEntry_State_Failed = @"FAILED";
NSString * const kGTLRAIPlatformNotebooks_UpgradeHistoryEntry_State_Started = @"STARTED";
NSString * const kGTLRAIPlatformNotebooks_UpgradeHistoryEntry_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRAIPlatformNotebooks_UpgradeHistoryEntry_State_Succeeded = @"SUCCEEDED";

// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_AcceleratorConfig
//

@implementation GTLRAIPlatformNotebooks_AcceleratorConfig
@dynamic coreCount, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Binding
//

@implementation GTLRAIPlatformNotebooks_Binding
@dynamic condition, members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_CancelOperationRequest
//

@implementation GTLRAIPlatformNotebooks_CancelOperationRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ContainerImage
//

@implementation GTLRAIPlatformNotebooks_ContainerImage
@dynamic repository, tag;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Disk
//

@implementation GTLRAIPlatformNotebooks_Disk
@dynamic autoDelete, boot, deviceName, diskSizeGb, guestOsFeatures, index,
         interface, kind, licenses, mode, source, type;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"guestOsFeatures" : [GTLRAIPlatformNotebooks_GuestOsFeature class],
    @"licenses" : [NSString class]
  };
  return map;
}

+ (BOOL)isKindValidForClassRegistry {
  // This class has a "kind" property that doesn't appear to be usable to
  // determine what type of object was encoded in the JSON.
  return NO;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Empty
//

@implementation GTLRAIPlatformNotebooks_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Environment
//

@implementation GTLRAIPlatformNotebooks_Environment
@dynamic containerImage, createTime, descriptionProperty, displayName, name,
         postStartupScript, vmImage;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Execution
//

@implementation GTLRAIPlatformNotebooks_Execution
@dynamic createTime, descriptionProperty, displayName, executionTemplate, name,
         outputNotebookFile, state, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ExecutionTemplate
//

@implementation GTLRAIPlatformNotebooks_ExecutionTemplate
@dynamic acceleratorConfig, containerImageUri, inputNotebookFile, labels,
         masterType, outputNotebookFolder, parameters, paramsYamlFile,
         scaleTier;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ExecutionTemplate_Labels
//

@implementation GTLRAIPlatformNotebooks_ExecutionTemplate_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Expr
//

@implementation GTLRAIPlatformNotebooks_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_GetInstanceHealthResponse
//

@implementation GTLRAIPlatformNotebooks_GetInstanceHealthResponse
@dynamic healthInfo, healthState;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_GetInstanceHealthResponse_HealthInfo
//

@implementation GTLRAIPlatformNotebooks_GetInstanceHealthResponse_HealthInfo

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_GuestOsFeature
//

@implementation GTLRAIPlatformNotebooks_GuestOsFeature
@dynamic type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Instance
//

@implementation GTLRAIPlatformNotebooks_Instance
@dynamic acceleratorConfig, bootDiskSizeGb, bootDiskType, containerImage,
         createTime, customGpuDriverPath, dataDiskSizeGb, dataDiskType,
         diskEncryption, disks, installGpuDriver, instanceOwners, kmsKey,
         labels, machineType, metadata, name, network, noProxyAccess,
         noPublicIp, noRemoveDataDisk, postStartupScript, proxyUri,
         serviceAccount, serviceAccountScopes, shieldedInstanceConfig, state,
         subnet, tags, updateTime, upgradeHistory, vmImage;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"disks" : [GTLRAIPlatformNotebooks_Disk class],
    @"instanceOwners" : [NSString class],
    @"serviceAccountScopes" : [NSString class],
    @"tags" : [NSString class],
    @"upgradeHistory" : [GTLRAIPlatformNotebooks_UpgradeHistoryEntry class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Instance_Labels
//

@implementation GTLRAIPlatformNotebooks_Instance_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Instance_Metadata
//

@implementation GTLRAIPlatformNotebooks_Instance_Metadata

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_IsInstanceUpgradeableResponse
//

@implementation GTLRAIPlatformNotebooks_IsInstanceUpgradeableResponse
@dynamic upgradeable, upgradeImage, upgradeInfo, upgradeVersion;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ListEnvironmentsResponse
//

@implementation GTLRAIPlatformNotebooks_ListEnvironmentsResponse
@dynamic environments, nextPageToken, unreachable;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"environments" : [GTLRAIPlatformNotebooks_Environment class],
    @"unreachable" : [NSString class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"environments";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ListExecutionsResponse
//

@implementation GTLRAIPlatformNotebooks_ListExecutionsResponse
@dynamic executions, nextPageToken, unreachable;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"executions" : [GTLRAIPlatformNotebooks_Execution class],
    @"unreachable" : [NSString class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"executions";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ListInstancesResponse
//

@implementation GTLRAIPlatformNotebooks_ListInstancesResponse
@dynamic instances, nextPageToken, unreachable;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"instances" : [GTLRAIPlatformNotebooks_Instance class],
    @"unreachable" : [NSString class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"instances";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ListLocationsResponse
//

@implementation GTLRAIPlatformNotebooks_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRAIPlatformNotebooks_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ListOperationsResponse
//

@implementation GTLRAIPlatformNotebooks_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRAIPlatformNotebooks_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ListSchedulesResponse
//

@implementation GTLRAIPlatformNotebooks_ListSchedulesResponse
@dynamic nextPageToken, schedules, unreachable;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"schedules" : [GTLRAIPlatformNotebooks_Schedule class],
    @"unreachable" : [NSString class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"schedules";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Location
//

@implementation GTLRAIPlatformNotebooks_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Location_Labels
//

@implementation GTLRAIPlatformNotebooks_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Location_Metadata
//

@implementation GTLRAIPlatformNotebooks_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Operation
//

@implementation GTLRAIPlatformNotebooks_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Operation_Metadata
//

@implementation GTLRAIPlatformNotebooks_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Operation_Response
//

@implementation GTLRAIPlatformNotebooks_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_OperationMetadata
//

@implementation GTLRAIPlatformNotebooks_OperationMetadata
@dynamic apiVersion, createTime, endpoint, endTime, requestedCancellation,
         statusMessage, target, verb;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Policy
//

@implementation GTLRAIPlatformNotebooks_Policy
@dynamic bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bindings" : [GTLRAIPlatformNotebooks_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_RegisterInstanceRequest
//

@implementation GTLRAIPlatformNotebooks_RegisterInstanceRequest
@dynamic instanceId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ReportInstanceInfoRequest
//

@implementation GTLRAIPlatformNotebooks_ReportInstanceInfoRequest
@dynamic metadata, vmId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ReportInstanceInfoRequest_Metadata
//

@implementation GTLRAIPlatformNotebooks_ReportInstanceInfoRequest_Metadata

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ResetInstanceRequest
//

@implementation GTLRAIPlatformNotebooks_ResetInstanceRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Schedule
//

@implementation GTLRAIPlatformNotebooks_Schedule
@dynamic createTime, cronSchedule, descriptionProperty, displayName,
         executionTemplate, name, recentExecutions, state, timeZone, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"recentExecutions" : [GTLRAIPlatformNotebooks_Execution class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_SchedulerAcceleratorConfig
//

@implementation GTLRAIPlatformNotebooks_SchedulerAcceleratorConfig
@dynamic coreCount, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_SetIamPolicyRequest
//

@implementation GTLRAIPlatformNotebooks_SetIamPolicyRequest
@dynamic policy;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest
//

@implementation GTLRAIPlatformNotebooks_SetInstanceAcceleratorRequest
@dynamic coreCount, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_SetInstanceLabelsRequest
//

@implementation GTLRAIPlatformNotebooks_SetInstanceLabelsRequest
@dynamic labels;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_SetInstanceLabelsRequest_Labels
//

@implementation GTLRAIPlatformNotebooks_SetInstanceLabelsRequest_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_SetInstanceMachineTypeRequest
//

@implementation GTLRAIPlatformNotebooks_SetInstanceMachineTypeRequest
@dynamic machineType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_ShieldedInstanceConfig
//

@implementation GTLRAIPlatformNotebooks_ShieldedInstanceConfig
@dynamic enableIntegrityMonitoring, enableSecureBoot, enableVtpm;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_StartInstanceRequest
//

@implementation GTLRAIPlatformNotebooks_StartInstanceRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Status
//

@implementation GTLRAIPlatformNotebooks_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRAIPlatformNotebooks_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_Status_Details_Item
//

@implementation GTLRAIPlatformNotebooks_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_StopInstanceRequest
//

@implementation GTLRAIPlatformNotebooks_StopInstanceRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_TestIamPermissionsRequest
//

@implementation GTLRAIPlatformNotebooks_TestIamPermissionsRequest
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_TestIamPermissionsResponse
//

@implementation GTLRAIPlatformNotebooks_TestIamPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_TriggerScheduleRequest
//

@implementation GTLRAIPlatformNotebooks_TriggerScheduleRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_UpgradeHistoryEntry
//

@implementation GTLRAIPlatformNotebooks_UpgradeHistoryEntry
@dynamic action, containerImage, createTime, framework, snapshot, state,
         targetImage, targetVersion, version, vmImage;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_UpgradeInstanceInternalRequest
//

@implementation GTLRAIPlatformNotebooks_UpgradeInstanceInternalRequest
@dynamic vmId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_UpgradeInstanceRequest
//

@implementation GTLRAIPlatformNotebooks_UpgradeInstanceRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRAIPlatformNotebooks_VmImage
//

@implementation GTLRAIPlatformNotebooks_VmImage
@dynamic imageFamily, imageName, project;
@end
