// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Resource Manager API (cloudresourcemanager/v2)
// Description:
//   Creates, reads, and updates metadata for Google Cloud Platform resource
//   containers.
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

// GTLRCloudResourceManager_Folder.lifecycleState
NSString * const kGTLRCloudResourceManager_Folder_LifecycleState_Active = @"ACTIVE";
NSString * const kGTLRCloudResourceManager_Folder_LifecycleState_DeleteRequested = @"DELETE_REQUESTED";
NSString * const kGTLRCloudResourceManager_Folder_LifecycleState_LifecycleStateUnspecified = @"LIFECYCLE_STATE_UNSPECIFIED";

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
@dynamic bindingId, condition, members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Expr
//

@implementation GTLRCloudResourceManager_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_Folder
//

@implementation GTLRCloudResourceManager_Folder
@dynamic createTime, displayName, lifecycleState, name, parent;
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
//   GTLRCloudResourceManager_GetIamPolicyRequest
//

@implementation GTLRCloudResourceManager_GetIamPolicyRequest
@dynamic options;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_GetPolicyOptions
//

@implementation GTLRCloudResourceManager_GetPolicyOptions
@dynamic requestedPolicyVersion;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_ListFoldersResponse
//

@implementation GTLRCloudResourceManager_ListFoldersResponse
@dynamic folders, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"folders" : [GTLRCloudResourceManager_Folder class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"folders";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_MoveFolderRequest
//

@implementation GTLRCloudResourceManager_MoveFolderRequest
@dynamic destinationParent;
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
//   GTLRCloudResourceManager_ProjectCreationStatus
//

@implementation GTLRCloudResourceManager_ProjectCreationStatus
@dynamic createTime, gettable, ready;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_SearchFoldersRequest
//

@implementation GTLRCloudResourceManager_SearchFoldersRequest
@dynamic pageSize, pageToken, query;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudResourceManager_SearchFoldersResponse
//

@implementation GTLRCloudResourceManager_SearchFoldersResponse
@dynamic folders, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"folders" : [GTLRCloudResourceManager_Folder class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"folders";
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
//   GTLRCloudResourceManager_UndeleteFolderRequest
//

@implementation GTLRCloudResourceManager_UndeleteFolderRequest
@end
