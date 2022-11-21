// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Security Command Center API (securitycenter/v1)
// Description:
//   Cloud Security Command Center API provides access to temporal views of
//   assets and findings within an organization.
// Documentation:
//   https://console.cloud.google.com/apis/api/securitycenter.googleapis.com/overview

#import "GTLRSecurityCommandCenterObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRSecurityCommandCenter_AssetDiscoveryConfig.inclusionMode
NSString * const kGTLRSecurityCommandCenter_AssetDiscoveryConfig_InclusionMode_Exclude = @"EXCLUDE";
NSString * const kGTLRSecurityCommandCenter_AssetDiscoveryConfig_InclusionMode_IncludeOnly = @"INCLUDE_ONLY";
NSString * const kGTLRSecurityCommandCenter_AssetDiscoveryConfig_InclusionMode_InclusionModeUnspecified = @"INCLUSION_MODE_UNSPECIFIED";

// GTLRSecurityCommandCenter_AuditLogConfig.logType
NSString * const kGTLRSecurityCommandCenter_AuditLogConfig_LogType_AdminRead = @"ADMIN_READ";
NSString * const kGTLRSecurityCommandCenter_AuditLogConfig_LogType_DataRead = @"DATA_READ";
NSString * const kGTLRSecurityCommandCenter_AuditLogConfig_LogType_DataWrite = @"DATA_WRITE";
NSString * const kGTLRSecurityCommandCenter_AuditLogConfig_LogType_LogTypeUnspecified = @"LOG_TYPE_UNSPECIFIED";

// GTLRSecurityCommandCenter_Finding.state
NSString * const kGTLRSecurityCommandCenter_Finding_State_Active = @"ACTIVE";
NSString * const kGTLRSecurityCommandCenter_Finding_State_Inactive = @"INACTIVE";
NSString * const kGTLRSecurityCommandCenter_Finding_State_StateUnspecified = @"STATE_UNSPECIFIED";

// GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1beta1RunAssetDiscoveryResponse.state
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1beta1RunAssetDiscoveryResponse_State_Completed = @"COMPLETED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1beta1RunAssetDiscoveryResponse_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1beta1RunAssetDiscoveryResponse_State_Superseded = @"SUPERSEDED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1beta1RunAssetDiscoveryResponse_State_Terminated = @"TERMINATED";

// GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Finding.state
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Finding_State_Active = @"ACTIVE";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Finding_State_Inactive = @"INACTIVE";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Finding_State_StateUnspecified = @"STATE_UNSPECIFIED";

// GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1RunAssetDiscoveryResponse.state
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1RunAssetDiscoveryResponse_State_Completed = @"COMPLETED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1RunAssetDiscoveryResponse_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1RunAssetDiscoveryResponse_State_Superseded = @"SUPERSEDED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1RunAssetDiscoveryResponse_State_Terminated = @"TERMINATED";

// GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1TemporalAsset.changeType
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1TemporalAsset_ChangeType_ChangeTypeUnspecified = @"CHANGE_TYPE_UNSPECIFIED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1TemporalAsset_ChangeType_Created = @"CREATED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1TemporalAsset_ChangeType_Deleted = @"DELETED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1TemporalAsset_ChangeType_Updated = @"UPDATED";

// GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1RunAssetDiscoveryResponse.state
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1RunAssetDiscoveryResponse_State_Completed = @"COMPLETED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1RunAssetDiscoveryResponse_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1RunAssetDiscoveryResponse_State_Superseded = @"SUPERSEDED";
NSString * const kGTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1RunAssetDiscoveryResponse_State_Terminated = @"TERMINATED";

// GTLRSecurityCommandCenter_ListAssetsResult.stateChange
NSString * const kGTLRSecurityCommandCenter_ListAssetsResult_StateChange_Active = @"ACTIVE";
NSString * const kGTLRSecurityCommandCenter_ListAssetsResult_StateChange_Added = @"ADDED";
NSString * const kGTLRSecurityCommandCenter_ListAssetsResult_StateChange_Removed = @"REMOVED";
NSString * const kGTLRSecurityCommandCenter_ListAssetsResult_StateChange_Unused = @"UNUSED";

// GTLRSecurityCommandCenter_ListFindingsResult.stateChange
NSString * const kGTLRSecurityCommandCenter_ListFindingsResult_StateChange_Added = @"ADDED";
NSString * const kGTLRSecurityCommandCenter_ListFindingsResult_StateChange_Changed = @"CHANGED";
NSString * const kGTLRSecurityCommandCenter_ListFindingsResult_StateChange_Removed = @"REMOVED";
NSString * const kGTLRSecurityCommandCenter_ListFindingsResult_StateChange_Unchanged = @"UNCHANGED";
NSString * const kGTLRSecurityCommandCenter_ListFindingsResult_StateChange_Unused = @"UNUSED";

// GTLRSecurityCommandCenter_SetFindingStateRequest.state
NSString * const kGTLRSecurityCommandCenter_SetFindingStateRequest_State_Active = @"ACTIVE";
NSString * const kGTLRSecurityCommandCenter_SetFindingStateRequest_State_Inactive = @"INACTIVE";
NSString * const kGTLRSecurityCommandCenter_SetFindingStateRequest_State_StateUnspecified = @"STATE_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Asset
//

@implementation GTLRSecurityCommandCenter_Asset
@dynamic createTime, iamPolicy, name, resourceProperties,
         securityCenterProperties, securityMarks, updateTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Asset_ResourceProperties
//

@implementation GTLRSecurityCommandCenter_Asset_ResourceProperties

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_AssetDiscoveryConfig
//

@implementation GTLRSecurityCommandCenter_AssetDiscoveryConfig
@dynamic inclusionMode, projectIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"projectIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_AuditConfig
//

@implementation GTLRSecurityCommandCenter_AuditConfig
@dynamic auditLogConfigs, service;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditLogConfigs" : [GTLRSecurityCommandCenter_AuditLogConfig class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_AuditLogConfig
//

@implementation GTLRSecurityCommandCenter_AuditLogConfig
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
//   GTLRSecurityCommandCenter_Binding
//

@implementation GTLRSecurityCommandCenter_Binding
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
//   GTLRSecurityCommandCenter_Empty
//

@implementation GTLRSecurityCommandCenter_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Expr
//

@implementation GTLRSecurityCommandCenter_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Finding
//

@implementation GTLRSecurityCommandCenter_Finding
@dynamic category, createTime, eventTime, externalUri, name, parent,
         resourceName, securityMarks, sourceProperties, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Finding_SourceProperties
//

@implementation GTLRSecurityCommandCenter_Finding_SourceProperties

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GetIamPolicyRequest
//

@implementation GTLRSecurityCommandCenter_GetIamPolicyRequest
@dynamic options;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GetPolicyOptions
//

@implementation GTLRSecurityCommandCenter_GetPolicyOptions
@dynamic requestedPolicyVersion;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1beta1RunAssetDiscoveryResponse
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1beta1RunAssetDiscoveryResponse
@dynamic duration, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1NotificationMessage
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1NotificationMessage
@dynamic finding, notificationConfigName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Asset
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Asset
@dynamic createTime, iamPolicy, name, resourceProperties,
         securityCenterProperties, securityMarks, updateTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Asset_ResourceProperties
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Asset_ResourceProperties

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Finding
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Finding
@dynamic category, createTime, eventTime, externalUri, name, parent,
         resourceName, securityMarks, sourceProperties, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Finding_SourceProperties
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1Finding_SourceProperties

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1IamPolicy
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1IamPolicy
@dynamic policyBlob;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1NotificationMessage
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1NotificationMessage
@dynamic finding, notificationConfigName, temporalAsset;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1RunAssetDiscoveryResponse
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1RunAssetDiscoveryResponse
@dynamic duration, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1SecurityCenterProperties
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1SecurityCenterProperties
@dynamic resourceDisplayName, resourceName, resourceOwners, resourceParent,
         resourceParentDisplayName, resourceProject, resourceProjectDisplayName,
         resourceType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"resourceOwners" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1SecurityMarks
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1SecurityMarks
@dynamic marks, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1SecurityMarks_Marks
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1SecurityMarks_Marks

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1TemporalAsset
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1p1beta1TemporalAsset
@dynamic asset, changeType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1RunAssetDiscoveryResponse
//

@implementation GTLRSecurityCommandCenter_GoogleCloudSecuritycenterV1RunAssetDiscoveryResponse
@dynamic duration, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GroupAssetsRequest
//

@implementation GTLRSecurityCommandCenter_GroupAssetsRequest
@dynamic compareDuration, filter, groupBy, pageSize, pageToken, readTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GroupAssetsResponse
//

@implementation GTLRSecurityCommandCenter_GroupAssetsResponse
@dynamic groupByResults, nextPageToken, readTime, totalSize;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"groupByResults" : [GTLRSecurityCommandCenter_GroupResult class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"groupByResults";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GroupFindingsRequest
//

@implementation GTLRSecurityCommandCenter_GroupFindingsRequest
@dynamic compareDuration, filter, groupBy, pageSize, pageToken, readTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GroupFindingsResponse
//

@implementation GTLRSecurityCommandCenter_GroupFindingsResponse
@dynamic groupByResults, nextPageToken, readTime, totalSize;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"groupByResults" : [GTLRSecurityCommandCenter_GroupResult class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"groupByResults";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GroupResult
//

@implementation GTLRSecurityCommandCenter_GroupResult
@dynamic count, properties;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_GroupResult_Properties
//

@implementation GTLRSecurityCommandCenter_GroupResult_Properties

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_IamPolicy
//

@implementation GTLRSecurityCommandCenter_IamPolicy
@dynamic policyBlob;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_ListAssetsResponse
//

@implementation GTLRSecurityCommandCenter_ListAssetsResponse
@dynamic listAssetsResults, nextPageToken, readTime, totalSize;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"listAssetsResults" : [GTLRSecurityCommandCenter_ListAssetsResult class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"listAssetsResults";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_ListAssetsResult
//

@implementation GTLRSecurityCommandCenter_ListAssetsResult
@dynamic asset, stateChange;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_ListFindingsResponse
//

@implementation GTLRSecurityCommandCenter_ListFindingsResponse
@dynamic listFindingsResults, nextPageToken, readTime, totalSize;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"listFindingsResults" : [GTLRSecurityCommandCenter_ListFindingsResult class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"listFindingsResults";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_ListFindingsResult
//

@implementation GTLRSecurityCommandCenter_ListFindingsResult
@dynamic finding, resource, stateChange;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_ListNotificationConfigsResponse
//

@implementation GTLRSecurityCommandCenter_ListNotificationConfigsResponse
@dynamic nextPageToken, notificationConfigs;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"notificationConfigs" : [GTLRSecurityCommandCenter_NotificationConfig class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"notificationConfigs";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_ListOperationsResponse
//

@implementation GTLRSecurityCommandCenter_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRSecurityCommandCenter_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_ListSourcesResponse
//

@implementation GTLRSecurityCommandCenter_ListSourcesResponse
@dynamic nextPageToken, sources;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sources" : [GTLRSecurityCommandCenter_Source class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"sources";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_NotificationConfig
//

@implementation GTLRSecurityCommandCenter_NotificationConfig
@dynamic descriptionProperty, name, pubsubTopic, serviceAccount,
         streamingConfig;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Operation
//

@implementation GTLRSecurityCommandCenter_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Operation_Metadata
//

@implementation GTLRSecurityCommandCenter_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Operation_Response
//

@implementation GTLRSecurityCommandCenter_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_OrganizationSettings
//

@implementation GTLRSecurityCommandCenter_OrganizationSettings
@dynamic assetDiscoveryConfig, enableAssetDiscovery, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Policy
//

@implementation GTLRSecurityCommandCenter_Policy
@dynamic auditConfigs, bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditConfigs" : [GTLRSecurityCommandCenter_AuditConfig class],
    @"bindings" : [GTLRSecurityCommandCenter_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Resource
//

@implementation GTLRSecurityCommandCenter_Resource
@dynamic name, parentDisplayName, parentName, projectDisplayName, projectName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_RunAssetDiscoveryRequest
//

@implementation GTLRSecurityCommandCenter_RunAssetDiscoveryRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_SecurityCenterProperties
//

@implementation GTLRSecurityCommandCenter_SecurityCenterProperties
@dynamic resourceDisplayName, resourceName, resourceOwners, resourceParent,
         resourceParentDisplayName, resourceProject, resourceProjectDisplayName,
         resourceType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"resourceOwners" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_SecurityMarks
//

@implementation GTLRSecurityCommandCenter_SecurityMarks
@dynamic marks, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_SecurityMarks_Marks
//

@implementation GTLRSecurityCommandCenter_SecurityMarks_Marks

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_SetFindingStateRequest
//

@implementation GTLRSecurityCommandCenter_SetFindingStateRequest
@dynamic startTime, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_SetIamPolicyRequest
//

@implementation GTLRSecurityCommandCenter_SetIamPolicyRequest
@dynamic policy, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Source
//

@implementation GTLRSecurityCommandCenter_Source
@dynamic descriptionProperty, displayName, name;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Status
//

@implementation GTLRSecurityCommandCenter_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRSecurityCommandCenter_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_Status_Details_Item
//

@implementation GTLRSecurityCommandCenter_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_StreamingConfig
//

@implementation GTLRSecurityCommandCenter_StreamingConfig
@dynamic filter;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecurityCommandCenter_TestIamPermissionsRequest
//

@implementation GTLRSecurityCommandCenter_TestIamPermissionsRequest
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
//   GTLRSecurityCommandCenter_TestIamPermissionsResponse
//

@implementation GTLRSecurityCommandCenter_TestIamPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end
