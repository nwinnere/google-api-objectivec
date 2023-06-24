// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   GKE Hub (gkehub/v1)
// Documentation:
//   https://cloud.google.com/anthos/multicluster-management/connect/registering-a-cluster

#import "GTLRGKEHubObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRGKEHub_AuditLogConfig.logType
NSString * const kGTLRGKEHub_AuditLogConfig_LogType_AdminRead  = @"ADMIN_READ";
NSString * const kGTLRGKEHub_AuditLogConfig_LogType_DataRead   = @"DATA_READ";
NSString * const kGTLRGKEHub_AuditLogConfig_LogType_DataWrite  = @"DATA_WRITE";
NSString * const kGTLRGKEHub_AuditLogConfig_LogType_LogTypeUnspecified = @"LOG_TYPE_UNSPECIFIED";

// GTLRGKEHub_MembershipState.code
NSString * const kGTLRGKEHub_MembershipState_Code_CodeUnspecified = @"CODE_UNSPECIFIED";
NSString * const kGTLRGKEHub_MembershipState_Code_Creating     = @"CREATING";
NSString * const kGTLRGKEHub_MembershipState_Code_Deleting     = @"DELETING";
NSString * const kGTLRGKEHub_MembershipState_Code_Ready        = @"READY";
NSString * const kGTLRGKEHub_MembershipState_Code_ServiceUpdating = @"SERVICE_UPDATING";
NSString * const kGTLRGKEHub_MembershipState_Code_Updating     = @"UPDATING";

// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_AuditConfig
//

@implementation GTLRGKEHub_AuditConfig
@dynamic auditLogConfigs, service;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditLogConfigs" : [GTLRGKEHub_AuditLogConfig class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_AuditLogConfig
//

@implementation GTLRGKEHub_AuditLogConfig
@dynamic exemptedMembers, logType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"exemptedMembers" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Authority
//

@implementation GTLRGKEHub_Authority
@dynamic identityProvider, issuer, workloadIdentityPool;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Binding
//

@implementation GTLRGKEHub_Binding
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
//   GTLRGKEHub_CancelOperationRequest
//

@implementation GTLRGKEHub_CancelOperationRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_ConnectAgentResource
//

@implementation GTLRGKEHub_ConnectAgentResource
@dynamic manifest, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Empty
//

@implementation GTLRGKEHub_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Expr
//

@implementation GTLRGKEHub_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_GenerateConnectManifestResponse
//

@implementation GTLRGKEHub_GenerateConnectManifestResponse
@dynamic manifest;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"manifest" : [GTLRGKEHub_ConnectAgentResource class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_GkeCluster
//

@implementation GTLRGKEHub_GkeCluster
@dynamic resourceLink;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_GoogleRpcStatus
//

@implementation GTLRGKEHub_GoogleRpcStatus
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRGKEHub_GoogleRpcStatus_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_GoogleRpcStatus_Details_Item
//

@implementation GTLRGKEHub_GoogleRpcStatus_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_KubernetesMetadata
//

@implementation GTLRGKEHub_KubernetesMetadata
@dynamic kubernetesApiServerVersion, memoryMb, nodeCount, nodeProviderId,
         updateTime, vcpuCount;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_ListLocationsResponse
//

@implementation GTLRGKEHub_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRGKEHub_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_ListMembershipsResponse
//

@implementation GTLRGKEHub_ListMembershipsResponse
@dynamic nextPageToken, resources, unreachable;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"resources" : [GTLRGKEHub_Membership class],
    @"unreachable" : [NSString class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"resources";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_ListOperationsResponse
//

@implementation GTLRGKEHub_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRGKEHub_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Location
//

@implementation GTLRGKEHub_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Location_Labels
//

@implementation GTLRGKEHub_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Location_Metadata
//

@implementation GTLRGKEHub_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Membership
//

@implementation GTLRGKEHub_Membership
@dynamic authority, createTime, deleteTime, descriptionProperty, endpoint,
         externalId, labels, lastConnectionTime, name, state, uniqueId,
         updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Membership_Labels
//

@implementation GTLRGKEHub_Membership_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_MembershipEndpoint
//

@implementation GTLRGKEHub_MembershipEndpoint
@dynamic gkeCluster, kubernetesMetadata;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_MembershipState
//

@implementation GTLRGKEHub_MembershipState
@dynamic code;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Operation
//

@implementation GTLRGKEHub_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Operation_Metadata
//

@implementation GTLRGKEHub_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Operation_Response
//

@implementation GTLRGKEHub_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_OperationMetadata
//

@implementation GTLRGKEHub_OperationMetadata
@dynamic apiVersion, cancelRequested, createTime, endTime, statusDetail, target,
         verb;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_Policy
//

@implementation GTLRGKEHub_Policy
@dynamic auditConfigs, bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditConfigs" : [GTLRGKEHub_AuditConfig class],
    @"bindings" : [GTLRGKEHub_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_SetIamPolicyRequest
//

@implementation GTLRGKEHub_SetIamPolicyRequest
@dynamic policy, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRGKEHub_TestIamPermissionsRequest
//

@implementation GTLRGKEHub_TestIamPermissionsRequest
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
//   GTLRGKEHub_TestIamPermissionsResponse
//

@implementation GTLRGKEHub_TestIamPermissionsResponse
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
//   GTLRGKEHub_TypeMeta
//

@implementation GTLRGKEHub_TypeMeta
@dynamic apiVersion, kind;

+ (BOOL)isKindValidForClassRegistry {
  // This class has a "kind" property that doesn't appear to be usable to
  // determine what type of object was encoded in the JSON.
  return NO;
}

@end
