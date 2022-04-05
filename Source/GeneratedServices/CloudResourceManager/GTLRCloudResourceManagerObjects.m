// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Resource Manager API (cloudresourcemanager/v1)
// Description:
//   The Google Cloud Resource Manager API provides methods for creating,
//   reading, and updating project metadata.
// Documentation:
//   https://cloud.google.com/resource-manager

#import "GTLRCloudResourceManagerObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudResourceManager_AuditLogConfig.logType
NSString * const kGTLRCloudResourceManager_AuditLogConfig_LogType_AdminRead = @"ADMIN_READ";
NSString * const kGTLRCloudResourceManager_AuditLogConfig_LogType_DataRead = @"DATA_READ";
NSString * const kGTLRCloudResourceManager_AuditLogConfig_LogType_DataWrite = @"DATA_WRITE";
NSString * const kGTLRCloudResourceManager_AuditLogConfig_LogType_LogTypeUnspecified = @"LOG_TYPE_UNSPECIFIED";

// GTLRCloudResourceManager_Constraint.constraintDefault
NSString * const kGTLRCloudResourceManager_Constraint_ConstraintDefault_Allow = @"ALLOW";
NSString * const kGTLRCloudResourceManager_Constraint_ConstraintDefault_ConstraintDefaultUnspecified = @"CONSTRAINT_DEFAULT_UNSPECIFIED";
NSString * const kGTLRCloudResourceManager_Constraint_ConstraintDefault_Deny = @"DENY";

// GTLRCloudResourceManager_FolderOperation.operationType
NSString * const kGTLRCloudResourceManager_FolderOperation_OperationType_Create = @"CREATE";
NSString * const kGTLRCloudResourceManager_FolderOperation_OperationType_Move = @"MOVE";
NSString * const kGTLRCloudResourceManager_FolderOperation_OperationType_OperationTypeUnspecified = @"OPERATION_TYPE_UNSPECIFIED";

// GTLRCloudResourceManager_FolderOperationError.errorMessageId
NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ActiveFolderHeightViolation = @"ACTIVE_FOLDER_HEIGHT_VIOLATION";
NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_CycleIntroducedViolation = @"CYCLE_INTRODUCED_VIOLATION";
NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_DeletedFolderHeightViolation = @"DELETED_FOLDER_HEIGHT_VIOLATION";
NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ErrorTypeUnspecified = @"ERROR_TYPE_UNSPECIFIED";
NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderBeingMovedViolation = @"FOLDER_BEING_MOVED_VIOLATION";
NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderNameUniquenessViolation = @"FOLDER_NAME_UNIQUENESS_VIOLATION";
NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderToDeleteNonEmptyViolation = @"FOLDER_TO_DELETE_NON_EMPTY_VIOLATION";
NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_MaxChildFoldersViolation = @"MAX_CHILD_FOLDERS_VIOLATION";
NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ParentDeletedViolation = @"PARENT_DELETED_VIOLATION";
NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ResourceDeletedViolation = @"RESOURCE_DELETED_VIOLATION";

// GTLRCloudResourceManager_ListPolicy.allValues
NSString * const kGTLRCloudResourceManager_ListPolicy_AllValues_Allow = @"ALLOW";
NSString * const kGTLRCloudResourceManager_ListPolicy_AllValues_AllValuesUnspecified = @"ALL_VALUES_UNSPECIFIED";
NSString * const kGTLRCloudResourceManager_ListPolicy_AllValues_Deny = @"DENY";

// GTLRCloudResourceManager_Organization.lifecycleState
NSString * const kGTLRCloudResourceManager_Organization_LifecycleState_Active = @"ACTIVE";
NSString * const kGTLRCloudResourceManager_Organization_LifecycleState_DeleteRequested = @"DELETE_REQUESTED";
NSString * const kGTLRCloudResourceManager_Organization_LifecycleState_LifecycleStateUnspecified = @"LIFECYCLE_STATE_UNSPECIFIED";

// GTLRCloudResourceManager_Project.lifecycleState
NSString * const kGTLRCloudResourceManager_Project_LifecycleState_Active = @"ACTIVE";
NSString * const kGTLRCloudResourceManager_Project_LifecycleState_DeleteInProgress = @"DELETE_IN_PROGRESS";
NSString * const kGTLRCloudResourceManager_Project_LifecycleState_DeleteRequested = @"DELETE_REQUESTED";
NSString * const kGTLRCloudResourceManager_Project_LifecycleState_LifecycleStateUnspecified = @"LIFECYCLE_STATE_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Ancestor
//

@implementation GTLRCloudResourceManager_Ancestor
@dynamic resourceId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_AuditConfig
//

@implementation GTLRCloudResourceManager_AuditConfig
@dynamic auditLogConfigs, service;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditLogConfigs" : [GTLRCloudResourceManager_AuditLogConfig class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_AuditLogConfig
//

@implementation GTLRCloudResourceManager_AuditLogConfig
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
//   GTLRCloudResourceManager_Binding
//

@implementation GTLRCloudResourceManager_Binding
@dynamic members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_BooleanConstraint
//

@implementation GTLRCloudResourceManager_BooleanConstraint
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_BooleanPolicy
//

@implementation GTLRCloudResourceManager_BooleanPolicy
@dynamic enforced;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ClearOrgPolicyRequest
//

@implementation GTLRCloudResourceManager_ClearOrgPolicyRequest
@dynamic constraint, ETag;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Constraint
//

@implementation GTLRCloudResourceManager_Constraint
@dynamic booleanConstraint, constraintDefault, descriptionProperty, displayName,
         listConstraint, name, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Empty
//

@implementation GTLRCloudResourceManager_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_FolderOperation
//

@implementation GTLRCloudResourceManager_FolderOperation
@dynamic destinationParent, displayName, operationType, sourceParent;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_FolderOperationError
//

@implementation GTLRCloudResourceManager_FolderOperationError
@dynamic errorMessageId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_GetAncestryRequest
//

@implementation GTLRCloudResourceManager_GetAncestryRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_GetAncestryResponse
//

@implementation GTLRCloudResourceManager_GetAncestryResponse
@dynamic ancestor;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"ancestor" : [GTLRCloudResourceManager_Ancestor class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_GetEffectiveOrgPolicyRequest
//

@implementation GTLRCloudResourceManager_GetEffectiveOrgPolicyRequest
@dynamic constraint;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_GetIamPolicyRequest
//

@implementation GTLRCloudResourceManager_GetIamPolicyRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_GetOrgPolicyRequest
//

@implementation GTLRCloudResourceManager_GetOrgPolicyRequest
@dynamic constraint;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Lien
//

@implementation GTLRCloudResourceManager_Lien
@dynamic createTime, name, origin, parent, reason, restrictions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"restrictions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ListAvailableOrgPolicyConstraintsRequest
//

@implementation GTLRCloudResourceManager_ListAvailableOrgPolicyConstraintsRequest
@dynamic pageSize, pageToken;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ListAvailableOrgPolicyConstraintsResponse
//

@implementation GTLRCloudResourceManager_ListAvailableOrgPolicyConstraintsResponse
@dynamic constraints, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"constraints" : [GTLRCloudResourceManager_Constraint class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"constraints";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ListConstraint
//

@implementation GTLRCloudResourceManager_ListConstraint
@dynamic suggestedValue;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ListLiensResponse
//

@implementation GTLRCloudResourceManager_ListLiensResponse
@dynamic liens, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"liens" : [GTLRCloudResourceManager_Lien class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"liens";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ListOrgPoliciesRequest
//

@implementation GTLRCloudResourceManager_ListOrgPoliciesRequest
@dynamic pageSize, pageToken;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ListOrgPoliciesResponse
//

@implementation GTLRCloudResourceManager_ListOrgPoliciesResponse
@dynamic nextPageToken, policies;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"policies" : [GTLRCloudResourceManager_OrgPolicy class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"policies";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ListPolicy
//

@implementation GTLRCloudResourceManager_ListPolicy
@dynamic allowedValues, allValues, deniedValues, inheritFromParent,
         suggestedValue;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedValues" : [NSString class],
    @"deniedValues" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ListProjectsResponse
//

@implementation GTLRCloudResourceManager_ListProjectsResponse
@dynamic nextPageToken, projects;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"projects" : [GTLRCloudResourceManager_Project class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"projects";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Operation
//

@implementation GTLRCloudResourceManager_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Operation_Metadata
//

@implementation GTLRCloudResourceManager_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Operation_Response
//

@implementation GTLRCloudResourceManager_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Organization
//

@implementation GTLRCloudResourceManager_Organization
@dynamic creationTime, displayName, lifecycleState, name, owner;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_OrganizationOwner
//

@implementation GTLRCloudResourceManager_OrganizationOwner
@dynamic directoryCustomerId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_OrgPolicy
//

@implementation GTLRCloudResourceManager_OrgPolicy
@dynamic booleanPolicy, constraint, ETag, listPolicy, restoreDefault,
         updateTime, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Policy
//

@implementation GTLRCloudResourceManager_Policy
@dynamic auditConfigs, bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditConfigs" : [GTLRCloudResourceManager_AuditConfig class],
    @"bindings" : [GTLRCloudResourceManager_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Project
//

@implementation GTLRCloudResourceManager_Project
@dynamic createTime, labels, lifecycleState, name, parent, projectId,
         projectNumber;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Project_Labels
//

@implementation GTLRCloudResourceManager_Project_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ProjectCreationStatus
//

@implementation GTLRCloudResourceManager_ProjectCreationStatus
@dynamic createTime, gettable, ready;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ResourceId
//

@implementation GTLRCloudResourceManager_ResourceId
@dynamic identifier, type;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_RestoreDefault
//

@implementation GTLRCloudResourceManager_RestoreDefault
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_SearchOrganizationsRequest
//

@implementation GTLRCloudResourceManager_SearchOrganizationsRequest
@dynamic filter, pageSize, pageToken;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_SearchOrganizationsResponse
//

@implementation GTLRCloudResourceManager_SearchOrganizationsResponse
@dynamic nextPageToken, organizations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"organizations" : [GTLRCloudResourceManager_Organization class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"organizations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_SetIamPolicyRequest
//

@implementation GTLRCloudResourceManager_SetIamPolicyRequest
@dynamic policy, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_SetOrgPolicyRequest
//

@implementation GTLRCloudResourceManager_SetOrgPolicyRequest
@dynamic policy;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Status
//

@implementation GTLRCloudResourceManager_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCloudResourceManager_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Status_Details_Item
//

@implementation GTLRCloudResourceManager_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_TestIamPermissionsRequest
//

@implementation GTLRCloudResourceManager_TestIamPermissionsRequest
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
//   GTLRCloudResourceManager_TestIamPermissionsResponse
//

@implementation GTLRCloudResourceManager_TestIamPermissionsResponse
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
//   GTLRCloudResourceManager_UndeleteProjectRequest
//

@implementation GTLRCloudResourceManager_UndeleteProjectRequest
@end
