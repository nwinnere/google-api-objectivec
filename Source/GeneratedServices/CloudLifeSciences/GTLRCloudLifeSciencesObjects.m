// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Life Sciences API (lifesciences/v2beta)
// Description:
//   Cloud Life Sciences is a suite of services and tools for managing,
//   processing, and transforming life sciences data.
// Documentation:
//   https://cloud.google.com/life-sciences

#import "GTLRCloudLifeSciencesObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudLifeSciences_FailedEvent.code
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_Aborted = @"ABORTED";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_AlreadyExists = @"ALREADY_EXISTS";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_Cancelled = @"CANCELLED";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_DataLoss = @"DATA_LOSS";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_DeadlineExceeded = @"DEADLINE_EXCEEDED";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_FailedPrecondition = @"FAILED_PRECONDITION";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_Internal = @"INTERNAL";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_InvalidArgument = @"INVALID_ARGUMENT";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_NotFound = @"NOT_FOUND";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_Ok    = @"OK";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_OutOfRange = @"OUT_OF_RANGE";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_PermissionDenied = @"PERMISSION_DENIED";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_ResourceExhausted = @"RESOURCE_EXHAUSTED";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_Unauthenticated = @"UNAUTHENTICATED";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_Unavailable = @"UNAVAILABLE";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_Unimplemented = @"UNIMPLEMENTED";
NSString * const kGTLRCloudLifeSciences_FailedEvent_Code_Unknown = @"UNKNOWN";

// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Accelerator
//

@implementation GTLRCloudLifeSciences_Accelerator
@dynamic count, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Action
//

@implementation GTLRCloudLifeSciences_Action
@dynamic alwaysRun, commands, containerName, credentials, disableImagePrefetch,
         disableStandardErrorCapture, enableFuse, entrypoint, environment,
         ignoreExitStatus, imageUri, labels, mounts, pidNamespace, portMappings,
         publishExposedPorts, runInBackground, timeout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"commands" : [NSString class],
    @"mounts" : [GTLRCloudLifeSciences_Mount class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Action_Environment
//

@implementation GTLRCloudLifeSciences_Action_Environment

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Action_Labels
//

@implementation GTLRCloudLifeSciences_Action_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Action_PortMappings
//

@implementation GTLRCloudLifeSciences_Action_PortMappings

+ (Class)classForAdditionalProperties {
  return [NSNumber class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_CancelOperationRequest
//

@implementation GTLRCloudLifeSciences_CancelOperationRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_ContainerKilledEvent
//

@implementation GTLRCloudLifeSciences_ContainerKilledEvent
@dynamic actionId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_ContainerStartedEvent
//

@implementation GTLRCloudLifeSciences_ContainerStartedEvent
@dynamic actionId, ipAddress, portMappings;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_ContainerStartedEvent_PortMappings
//

@implementation GTLRCloudLifeSciences_ContainerStartedEvent_PortMappings

+ (Class)classForAdditionalProperties {
  return [NSNumber class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_ContainerStoppedEvent
//

@implementation GTLRCloudLifeSciences_ContainerStoppedEvent
@dynamic actionId, exitStatus, stderr;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_DelayedEvent
//

@implementation GTLRCloudLifeSciences_DelayedEvent
@dynamic cause, metrics;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"metrics" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Disk
//

@implementation GTLRCloudLifeSciences_Disk
@dynamic name, sizeGb, sourceImage, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Empty
//

@implementation GTLRCloudLifeSciences_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Event
//

@implementation GTLRCloudLifeSciences_Event
@dynamic containerKilled, containerStarted, containerStopped, delayed,
         descriptionProperty, failed, pullStarted, pullStopped, timestamp,
         unexpectedExitStatus, workerAssigned, workerReleased;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_FailedEvent
//

@implementation GTLRCloudLifeSciences_FailedEvent
@dynamic cause, code;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_ListLocationsResponse
//

@implementation GTLRCloudLifeSciences_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRCloudLifeSciences_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_ListOperationsResponse
//

@implementation GTLRCloudLifeSciences_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRCloudLifeSciences_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Location
//

@implementation GTLRCloudLifeSciences_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Location_Labels
//

@implementation GTLRCloudLifeSciences_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Location_Metadata
//

@implementation GTLRCloudLifeSciences_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Metadata
//

@implementation GTLRCloudLifeSciences_Metadata
@dynamic createTime, endTime, events, labels, pipeline, startTime;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"events" : [GTLRCloudLifeSciences_Event class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Metadata_Labels
//

@implementation GTLRCloudLifeSciences_Metadata_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Mount
//

@implementation GTLRCloudLifeSciences_Mount
@dynamic disk, path, readOnly;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Network
//

@implementation GTLRCloudLifeSciences_Network
@dynamic network, subnetwork, usePrivateAddress;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Operation
//

@implementation GTLRCloudLifeSciences_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Operation_Metadata
//

@implementation GTLRCloudLifeSciences_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Operation_Response
//

@implementation GTLRCloudLifeSciences_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Pipeline
//

@implementation GTLRCloudLifeSciences_Pipeline
@dynamic actions, environment, resources, timeout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"actions" : [GTLRCloudLifeSciences_Action class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Pipeline_Environment
//

@implementation GTLRCloudLifeSciences_Pipeline_Environment

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_PullStartedEvent
//

@implementation GTLRCloudLifeSciences_PullStartedEvent
@dynamic imageUri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_PullStoppedEvent
//

@implementation GTLRCloudLifeSciences_PullStoppedEvent
@dynamic imageUri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Resources
//

@implementation GTLRCloudLifeSciences_Resources
@dynamic regions, virtualMachine, zones;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"regions" : [NSString class],
    @"zones" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_RunPipelineRequest
//

@implementation GTLRCloudLifeSciences_RunPipelineRequest
@dynamic labels, pipeline;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_RunPipelineRequest_Labels
//

@implementation GTLRCloudLifeSciences_RunPipelineRequest_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_RunPipelineResponse
//

@implementation GTLRCloudLifeSciences_RunPipelineResponse
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Secret
//

@implementation GTLRCloudLifeSciences_Secret
@dynamic cipherText, keyName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_ServiceAccount
//

@implementation GTLRCloudLifeSciences_ServiceAccount
@dynamic email, scopes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"scopes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Status
//

@implementation GTLRCloudLifeSciences_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCloudLifeSciences_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_Status_Details_Item
//

@implementation GTLRCloudLifeSciences_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_UnexpectedExitStatusEvent
//

@implementation GTLRCloudLifeSciences_UnexpectedExitStatusEvent
@dynamic actionId, exitStatus;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_VirtualMachine
//

@implementation GTLRCloudLifeSciences_VirtualMachine
@dynamic accelerators, bootDiskSizeGb, bootImage, cpuPlatform, disks,
         enableStackdriverMonitoring, labels, machineType, network,
         nvidiaDriverVersion, preemptible, serviceAccount;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accelerators" : [GTLRCloudLifeSciences_Accelerator class],
    @"disks" : [GTLRCloudLifeSciences_Disk class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_VirtualMachine_Labels
//

@implementation GTLRCloudLifeSciences_VirtualMachine_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_WorkerAssignedEvent
//

@implementation GTLRCloudLifeSciences_WorkerAssignedEvent
@dynamic instance, machineType, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"zoneProperty" : @"zone" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudLifeSciences_WorkerReleasedEvent
//

@implementation GTLRCloudLifeSciences_WorkerReleasedEvent
@dynamic instance, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"zoneProperty" : @"zone" };
}

@end
