// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Resource Manager API (cloudresourcemanager/v2)
// Description:
//   Creates, reads, and updates metadata for Google Cloud Platform resource
//   containers.
// Documentation:
//   https://cloud.google.com/resource-manager

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudResourceManager_AuditConfig;
@class GTLRCloudResourceManager_AuditLogConfig;
@class GTLRCloudResourceManager_Binding;
@class GTLRCloudResourceManager_Expr;
@class GTLRCloudResourceManager_Folder;
@class GTLRCloudResourceManager_GetPolicyOptions;
@class GTLRCloudResourceManager_Operation_Metadata;
@class GTLRCloudResourceManager_Operation_Response;
@class GTLRCloudResourceManager_Policy;
@class GTLRCloudResourceManager_Status;
@class GTLRCloudResourceManager_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudResourceManager_AuditLogConfig.logType

/**
 *  Admin reads. Example: CloudIAM getIamPolicy
 *
 *  Value: "ADMIN_READ"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_AuditLogConfig_LogType_AdminRead;
/**
 *  Data reads. Example: CloudSQL Users list
 *
 *  Value: "DATA_READ"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_AuditLogConfig_LogType_DataRead;
/**
 *  Data writes. Example: CloudSQL Users create
 *
 *  Value: "DATA_WRITE"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_AuditLogConfig_LogType_DataWrite;
/**
 *  Default case. Should never be this.
 *
 *  Value: "LOG_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_AuditLogConfig_LogType_LogTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudResourceManager_Folder.lifecycleState

/**
 *  The normal and active state.
 *
 *  Value: "ACTIVE"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_Folder_LifecycleState_Active;
/**
 *  The folder has been marked for deletion by the user.
 *
 *  Value: "DELETE_REQUESTED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_Folder_LifecycleState_DeleteRequested;
/**
 *  Unspecified state.
 *
 *  Value: "LIFECYCLE_STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_Folder_LifecycleState_LifecycleStateUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudResourceManager_FolderOperation.operationType

/**
 *  A create folder operation.
 *
 *  Value: "CREATE"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperation_OperationType_Create;
/**
 *  A move folder operation.
 *
 *  Value: "MOVE"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperation_OperationType_Move;
/**
 *  Operation type not specified.
 *
 *  Value: "OPERATION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperation_OperationType_OperationTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudResourceManager_FolderOperationError.errorMessageId

/**
 *  The attempted action would violate the max folder depth constraint.
 *
 *  Value: "ACTIVE_FOLDER_HEIGHT_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ActiveFolderHeightViolation;
/**
 *  The attempted action would introduce cycle in resource path.
 *
 *  Value: "CYCLE_INTRODUCED_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_CycleIntroducedViolation;
/**
 *  The attempted action would violate the max deleted folder depth
 *  constraint.
 *
 *  Value: "DELETED_FOLDER_HEIGHT_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_DeletedFolderHeightViolation;
/**
 *  The error type was unrecognized or unspecified.
 *
 *  Value: "ERROR_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ErrorTypeUnspecified;
/**
 *  The attempted action would move a folder that is already being moved.
 *
 *  Value: "FOLDER_BEING_MOVED_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderBeingMovedViolation;
/**
 *  The attempted action would violate the locally-unique folder
 *  display_name constraint.
 *
 *  Value: "FOLDER_NAME_UNIQUENESS_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderNameUniquenessViolation;
/**
 *  The folder the caller is trying to delete contains active resources.
 *
 *  Value: "FOLDER_TO_DELETE_NON_EMPTY_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderToDeleteNonEmptyViolation;
/**
 *  The attempted action would violate the max child folders constraint.
 *
 *  Value: "MAX_CHILD_FOLDERS_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_MaxChildFoldersViolation;
/**
 *  The resource a folder was being added to has been deleted.
 *
 *  Value: "PARENT_DELETED_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ParentDeletedViolation;
/**
 *  The resource being moved has been deleted.
 *
 *  Value: "RESOURCE_DELETED_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ResourceDeletedViolation;

/**
 *  Specifies the audit configuration for a service.
 *  The configuration determines which permission types are logged, and what
 *  identities, if any, are exempted from logging.
 *  An AuditConfig must have one or more AuditLogConfigs.
 *  If there are AuditConfigs for both `allServices` and a specific service,
 *  the union of the two AuditConfigs is used for that service: the log_types
 *  specified in each AuditConfig are enabled, and the exempted_members in each
 *  AuditLogConfig are exempted.
 *  Example Policy with multiple AuditConfigs:
 *  {
 *  "audit_configs": [
 *  {
 *  "service": "allServices"
 *  "audit_log_configs": [
 *  {
 *  "log_type": "DATA_READ",
 *  "exempted_members": [
 *  "user:jose\@example.com"
 *  ]
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  },
 *  {
 *  "log_type": "ADMIN_READ",
 *  }
 *  ]
 *  },
 *  {
 *  "service": "sampleservice.googleapis.com"
 *  "audit_log_configs": [
 *  {
 *  "log_type": "DATA_READ",
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  "exempted_members": [
 *  "user:aliya\@example.com"
 *  ]
 *  }
 *  ]
 *  }
 *  ]
 *  }
 *  For sampleservice, this policy enables DATA_READ, DATA_WRITE and ADMIN_READ
 *  logging. It also exempts jose\@example.com from DATA_READ logging, and
 *  aliya\@example.com from DATA_WRITE logging.
 */
@interface GTLRCloudResourceManager_AuditConfig : GTLRObject

/** The configuration for logging of each type of permission. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudResourceManager_AuditLogConfig *> *auditLogConfigs;

/**
 *  Specifies a service that will be enabled for audit logging.
 *  For example, `storage.googleapis.com`, `cloudsql.googleapis.com`.
 *  `allServices` is a special value that covers all services.
 */
@property(nonatomic, copy, nullable) NSString *service;

@end


/**
 *  Provides the configuration for logging a type of permissions.
 *  Example:
 *  {
 *  "audit_log_configs": [
 *  {
 *  "log_type": "DATA_READ",
 *  "exempted_members": [
 *  "user:jose\@example.com"
 *  ]
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  }
 *  ]
 *  }
 *  This enables 'DATA_READ' and 'DATA_WRITE' logging, while exempting
 *  jose\@example.com from DATA_READ logging.
 */
@interface GTLRCloudResourceManager_AuditLogConfig : GTLRObject

/**
 *  Specifies the identities that do not cause logging for this type of
 *  permission.
 *  Follows the same format of Binding.members.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *exemptedMembers;

/**
 *  The log type that this config enables.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudResourceManager_AuditLogConfig_LogType_AdminRead Admin
 *        reads. Example: CloudIAM getIamPolicy (Value: "ADMIN_READ")
 *    @arg @c kGTLRCloudResourceManager_AuditLogConfig_LogType_DataRead Data
 *        reads. Example: CloudSQL Users list (Value: "DATA_READ")
 *    @arg @c kGTLRCloudResourceManager_AuditLogConfig_LogType_DataWrite Data
 *        writes. Example: CloudSQL Users create (Value: "DATA_WRITE")
 *    @arg @c kGTLRCloudResourceManager_AuditLogConfig_LogType_LogTypeUnspecified
 *        Default case. Should never be this. (Value: "LOG_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *logType;

@end


/**
 *  Associates `members` with a `role`.
 */
@interface GTLRCloudResourceManager_Binding : GTLRObject

/**
 *  The condition that is associated with this binding.
 *  NOTE: An unsatisfied condition will not allow user access via current
 *  binding. Different bindings, including their conditions, are examined
 *  independently.
 */
@property(nonatomic, strong, nullable) GTLRCloudResourceManager_Expr *condition;

/**
 *  Specifies the identities requesting access for a Cloud Platform resource.
 *  `members` can have the following values:
 *  * `allUsers`: A special identifier that represents anyone who is
 *  on the internet; with or without a Google account.
 *  * `allAuthenticatedUsers`: A special identifier that represents anyone
 *  who is authenticated with a Google account or a service account.
 *  * `user:{emailid}`: An email address that represents a specific Google
 *  account. For example, `alice\@example.com` .
 *  * `serviceAccount:{emailid}`: An email address that represents a service
 *  account. For example, `my-other-app\@appspot.gserviceaccount.com`.
 *  * `group:{emailid}`: An email address that represents a Google group.
 *  For example, `admins\@example.com`.
 *  * `deleted:user:{emailid}?uid={uniqueid}`: An email address (plus unique
 *  identifier) representing a user that has been recently deleted. For
 *  example, `alice\@example.com?uid=123456789012345678901`. If the user is
 *  recovered, this value reverts to `user:{emailid}` and the recovered user
 *  retains the role in the binding.
 *  * `deleted:serviceAccount:{emailid}?uid={uniqueid}`: An email address (plus
 *  unique identifier) representing a service account that has been recently
 *  deleted. For example,
 *  `my-other-app\@appspot.gserviceaccount.com?uid=123456789012345678901`.
 *  If the service account is undeleted, this value reverts to
 *  `serviceAccount:{emailid}` and the undeleted service account retains the
 *  role in the binding.
 *  * `deleted:group:{emailid}?uid={uniqueid}`: An email address (plus unique
 *  identifier) representing a Google group that has been recently
 *  deleted. For example, `admins\@example.com?uid=123456789012345678901`. If
 *  the group is recovered, this value reverts to `group:{emailid}` and the
 *  recovered group retains the role in the binding.
 *  * `domain:{domain}`: The G Suite domain (primary) that represents all the
 *  users of that domain. For example, `google.com` or `example.com`.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *members;

/**
 *  Role that is assigned to `members`.
 *  For example, `roles/viewer`, `roles/editor`, or `roles/owner`.
 */
@property(nonatomic, copy, nullable) NSString *role;

@end


/**
 *  Represents an expression text. Example:
 *  title: "User account presence"
 *  description: "Determines whether the request has a user account"
 *  expression: "size(request.user) > 0"
 */
@interface GTLRCloudResourceManager_Expr : GTLRObject

/**
 *  An optional description of the expression. This is a longer text which
 *  describes the expression, e.g. when hovered over it in a UI.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Textual representation of an expression in
 *  Common Expression Language syntax.
 *  The application context of the containing message determines which
 *  well-known feature set of CEL is supported.
 */
@property(nonatomic, copy, nullable) NSString *expression;

/**
 *  An optional string indicating the location of the expression for error
 *  reporting, e.g. a file name and a position in the file.
 */
@property(nonatomic, copy, nullable) NSString *location;

/**
 *  An optional title for the expression, i.e. a short string describing
 *  its purpose. This can be used e.g. in UIs which allow to enter the
 *  expression.
 */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  A Folder in an Organization's resource hierarchy, used to
 *  organize that Organization's resources.
 */
@interface GTLRCloudResourceManager_Folder : GTLRObject

/**
 *  Output only. Timestamp when the Folder was created. Assigned by the server.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  The folder’s display name.
 *  A folder’s display name must be unique amongst its siblings, e.g.
 *  no two folders with the same parent can share the same display name.
 *  The display name must start and end with a letter or digit, may contain
 *  letters, digits, spaces, hyphens and underscores and can be no longer
 *  than 30 characters. This is captured by the regular expression:
 *  [\\p{L}\\p{N}]([\\p{L}\\p{N}_- ]{0,28}[\\p{L}\\p{N}])?.
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Output only. The lifecycle state of the folder.
 *  Updates to the lifecycle_state must be performed via
 *  DeleteFolder and
 *  UndeleteFolder.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudResourceManager_Folder_LifecycleState_Active The normal
 *        and active state. (Value: "ACTIVE")
 *    @arg @c kGTLRCloudResourceManager_Folder_LifecycleState_DeleteRequested
 *        The folder has been marked for deletion by the user. (Value:
 *        "DELETE_REQUESTED")
 *    @arg @c kGTLRCloudResourceManager_Folder_LifecycleState_LifecycleStateUnspecified
 *        Unspecified state. (Value: "LIFECYCLE_STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *lifecycleState;

/**
 *  Output only. The resource name of the Folder.
 *  Its format is `folders/{folder_id}`, for example: "folders/1234".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required. The Folder’s parent's resource name.
 *  Updates to the folder's parent must be performed via
 *  MoveFolder.
 */
@property(nonatomic, copy, nullable) NSString *parent;

@end


/**
 *  Metadata describing a long running folder operation
 */
@interface GTLRCloudResourceManager_FolderOperation : GTLRObject

/**
 *  The resource name of the folder or organization we are either creating
 *  the folder under or moving the folder to.
 */
@property(nonatomic, copy, nullable) NSString *destinationParent;

/** The display name of the folder. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The type of this operation.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudResourceManager_FolderOperation_OperationType_Create A
 *        create folder operation. (Value: "CREATE")
 *    @arg @c kGTLRCloudResourceManager_FolderOperation_OperationType_Move A
 *        move folder operation. (Value: "MOVE")
 *    @arg @c kGTLRCloudResourceManager_FolderOperation_OperationType_OperationTypeUnspecified
 *        Operation type not specified. (Value: "OPERATION_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *operationType;

/**
 *  The resource name of the folder's parent.
 *  Only applicable when the operation_type is MOVE.
 */
@property(nonatomic, copy, nullable) NSString *sourceParent;

@end


/**
 *  A classification of the Folder Operation error.
 */
@interface GTLRCloudResourceManager_FolderOperationError : GTLRObject

/**
 *  The type of operation error experienced.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ActiveFolderHeightViolation
 *        The attempted action would violate the max folder depth constraint.
 *        (Value: "ACTIVE_FOLDER_HEIGHT_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_CycleIntroducedViolation
 *        The attempted action would introduce cycle in resource path. (Value:
 *        "CYCLE_INTRODUCED_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_DeletedFolderHeightViolation
 *        The attempted action would violate the max deleted folder depth
 *        constraint. (Value: "DELETED_FOLDER_HEIGHT_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ErrorTypeUnspecified
 *        The error type was unrecognized or unspecified. (Value:
 *        "ERROR_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderBeingMovedViolation
 *        The attempted action would move a folder that is already being moved.
 *        (Value: "FOLDER_BEING_MOVED_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderNameUniquenessViolation
 *        The attempted action would violate the locally-unique folder
 *        display_name constraint. (Value: "FOLDER_NAME_UNIQUENESS_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderToDeleteNonEmptyViolation
 *        The folder the caller is trying to delete contains active resources.
 *        (Value: "FOLDER_TO_DELETE_NON_EMPTY_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_MaxChildFoldersViolation
 *        The attempted action would violate the max child folders constraint.
 *        (Value: "MAX_CHILD_FOLDERS_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ParentDeletedViolation
 *        The resource a folder was being added to has been deleted. (Value:
 *        "PARENT_DELETED_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ResourceDeletedViolation
 *        The resource being moved has been deleted. (Value:
 *        "RESOURCE_DELETED_VIOLATION")
 */
@property(nonatomic, copy, nullable) NSString *errorMessageId;

@end


/**
 *  Request message for `GetIamPolicy` method.
 */
@interface GTLRCloudResourceManager_GetIamPolicyRequest : GTLRObject

/**
 *  OPTIONAL: A `GetPolicyOptions` object for specifying options to
 *  `GetIamPolicy`. This field is only used by Cloud IAM.
 */
@property(nonatomic, strong, nullable) GTLRCloudResourceManager_GetPolicyOptions *options;

@end


/**
 *  Encapsulates settings provided to GetIamPolicy.
 */
@interface GTLRCloudResourceManager_GetPolicyOptions : GTLRObject

/**
 *  Optional. The policy format version to be returned.
 *  Valid values are 0, 1, and 3. Requests specifying an invalid value will be
 *  rejected.
 *  Requests for policies with any conditional bindings must specify version 3.
 *  Policies without any conditional bindings may specify any valid value or
 *  leave the field unset.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *requestedPolicyVersion;

@end


/**
 *  The ListFolders response message.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "folders" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudResourceManager_ListFoldersResponse : GTLRCollectionObject

/**
 *  A possibly paginated list of Folders that are direct descendants of
 *  the specified parent resource.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudResourceManager_Folder *> *folders;

/**
 *  A pagination token returned from a previous call to `ListFolders`
 *  that indicates from where listing should continue.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The MoveFolder request message.
 */
@interface GTLRCloudResourceManager_MoveFolderRequest : GTLRObject

/**
 *  Required. The resource name of the Folder or Organization to reparent
 *  the folder under.
 *  Must be of the form `folders/{folder_id}` or `organizations/{org_id}`.
 */
@property(nonatomic, copy, nullable) NSString *destinationParent;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRCloudResourceManager_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRCloudResourceManager_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRCloudResourceManager_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRCloudResourceManager_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudResourceManager_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudResourceManager_Operation_Response : GTLRObject
@end


/**
 *  An Identity and Access Management (IAM) policy, which specifies access
 *  controls for Google Cloud resources.
 *  A `Policy` is a collection of `bindings`. A `binding` binds one or more
 *  `members` to a single `role`. Members can be user accounts, service
 *  accounts,
 *  Google groups, and domains (such as G Suite). A `role` is a named list of
 *  permissions; each `role` can be an IAM predefined role or a user-created
 *  custom role.
 *  Optionally, a `binding` can specify a `condition`, which is a logical
 *  expression that allows access to a resource only if the expression evaluates
 *  to `true`. A condition can add constraints based on attributes of the
 *  request, the resource, or both.
 *  **JSON example:**
 *  {
 *  "bindings": [
 *  {
 *  "role": "roles/resourcemanager.organizationAdmin",
 *  "members": [
 *  "user:mike\@example.com",
 *  "group:admins\@example.com",
 *  "domain:google.com",
 *  "serviceAccount:my-project-id\@appspot.gserviceaccount.com"
 *  ]
 *  },
 *  {
 *  "role": "roles/resourcemanager.organizationViewer",
 *  "members": ["user:eve\@example.com"],
 *  "condition": {
 *  "title": "expirable access",
 *  "description": "Does not grant access after Sep 2020",
 *  "expression": "request.time < timestamp('2020-10-01T00:00:00.000Z')",
 *  }
 *  }
 *  ],
 *  "etag": "BwWWja0YfJA=",
 *  "version": 3
 *  }
 *  **YAML example:**
 *  bindings:
 *  - members:
 *  - user:mike\@example.com
 *  - group:admins\@example.com
 *  - domain:google.com
 *  - serviceAccount:my-project-id\@appspot.gserviceaccount.com
 *  role: roles/resourcemanager.organizationAdmin
 *  - members:
 *  - user:eve\@example.com
 *  role: roles/resourcemanager.organizationViewer
 *  condition:
 *  title: expirable access
 *  description: Does not grant access after Sep 2020
 *  expression: request.time < timestamp('2020-10-01T00:00:00.000Z')
 *  - etag: BwWWja0YfJA=
 *  - version: 3
 *  For a description of IAM and its features, see the
 *  [IAM documentation](https://cloud.google.com/iam/docs/).
 */
@interface GTLRCloudResourceManager_Policy : GTLRObject

/** Specifies cloud audit logging configuration for this policy. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudResourceManager_AuditConfig *> *auditConfigs;

/**
 *  Associates a list of `members` to a `role`. Optionally, may specify a
 *  `condition` that determines how and when the `bindings` are applied. Each
 *  of the `bindings` must contain at least one member.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudResourceManager_Binding *> *bindings;

/**
 *  `etag` is used for optimistic concurrency control as a way to help
 *  prevent simultaneous updates of a policy from overwriting each other.
 *  It is strongly suggested that systems make use of the `etag` in the
 *  read-modify-write cycle to perform policy updates in order to avoid race
 *  conditions: An `etag` is returned in the response to `getIamPolicy`, and
 *  systems are expected to put that etag in the request to `setIamPolicy` to
 *  ensure that their change will be applied to the same version of the policy.
 *  **Important:** If you use IAM Conditions, you must include the `etag` field
 *  whenever you call `setIamPolicy`. If you omit this field, then IAM allows
 *  you to overwrite a version `3` policy with a version `1` policy, and all of
 *  the conditions in the version `3` policy are lost.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Specifies the format of the policy.
 *  Valid values are `0`, `1`, and `3`. Requests that specify an invalid value
 *  are rejected.
 *  Any operation that affects conditional role bindings must specify version
 *  `3`. This requirement applies to the following operations:
 *  * Getting a policy that includes a conditional role binding
 *  * Adding a conditional role binding to a policy
 *  * Changing a conditional role binding in a policy
 *  * Removing any role binding, with or without a condition, from a policy
 *  that includes conditions
 *  **Important:** If you use IAM Conditions, you must include the `etag` field
 *  whenever you call `setIamPolicy`. If you omit this field, then IAM allows
 *  you to overwrite a version `3` policy with a version `1` policy, and all of
 *  the conditions in the version `3` policy are lost.
 *  If a policy does not include any conditions, operations on that policy may
 *  specify any valid version or leave the field unset.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *version;

@end


/**
 *  A status object which is used as the `metadata` field for the Operation
 *  returned by CreateProject. It provides insight for when significant phases
 *  of
 *  Project creation have completed.
 */
@interface GTLRCloudResourceManager_ProjectCreationStatus : GTLRObject

/** Creation time of the project creation workflow. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  True if the project can be retrieved using GetProject. No other operations
 *  on the project are guaranteed to work until the project creation is
 *  complete.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *gettable;

/**
 *  True if the project creation process is complete.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *ready;

@end


/**
 *  The request message for searching folders.
 */
@interface GTLRCloudResourceManager_SearchFoldersRequest : GTLRObject

/**
 *  Optional. The maximum number of folders to return in the response.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *pageSize;

/**
 *  Optional. A pagination token returned from a previous call to
 *  `SearchFolders`
 *  that indicates from where search should continue.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Search criteria used to select the Folders to return.
 *  If no search criteria is specified then all accessible folders will be
 *  returned.
 *  Query expressions can be used to restrict results based upon displayName,
 *  lifecycleState and parent, where the operators `=`, `NOT`, `AND` and `OR`
 *  can be used along with the suffix wildcard symbol `*`.
 *  The displayName field in a query expression should use escaped quotes
 *  for values that include whitespace to prevent unexpected behavior.
 *  Some example queries are:
 *  * Query `displayName=Test*` returns Folder resources whose display name
 *  starts with "Test".
 *  * Query `lifecycleState=ACTIVE` returns Folder resources with
 *  `lifecycleState` set to `ACTIVE`.
 *  * Query `parent=folders/123` returns Folder resources that have
 *  `folders/123` as a parent resource.
 *  * Query `parent=folders/123 AND lifecycleState=ACTIVE` returns active
 *  Folder resources that have `folders/123` as a parent resource.
 *  * Query `displayName=\\\\"Test String\\\\"` returns Folder resources with
 *  display names that include both "Test" and "String".
 */
@property(nonatomic, copy, nullable) NSString *query;

@end


/**
 *  The response message for searching folders.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "folders" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudResourceManager_SearchFoldersResponse : GTLRCollectionObject

/**
 *  A possibly paginated folder search results.
 *  the specified parent resource.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudResourceManager_Folder *> *folders;

/**
 *  A pagination token returned from a previous call to `SearchFolders`
 *  that indicates from where searching should continue.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Request message for `SetIamPolicy` method.
 */
@interface GTLRCloudResourceManager_SetIamPolicyRequest : GTLRObject

/**
 *  REQUIRED: The complete policy to be applied to the `resource`. The size of
 *  the policy is limited to a few 10s of KB. An empty policy is a
 *  valid policy but certain Cloud Platform services (such as Projects)
 *  might reject them.
 */
@property(nonatomic, strong, nullable) GTLRCloudResourceManager_Policy *policy;

/**
 *  OPTIONAL: A FieldMask specifying which fields of the policy to modify. Only
 *  the fields in the mask will be modified. If no mask is provided, the
 *  following default mask is used:
 *  paths: "bindings, etag"
 *  This field is only used by Cloud IAM.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details.
 *  You can find out more about this error model and how to work with it in the
 *  [API Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRCloudResourceManager_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudResourceManager_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudResourceManager_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudResourceManager_Status_Details_Item : GTLRObject
@end


/**
 *  Request message for `TestIamPermissions` method.
 */
@interface GTLRCloudResourceManager_TestIamPermissionsRequest : GTLRObject

/**
 *  The set of permissions to check for the `resource`. Permissions with
 *  wildcards (such as '*' or 'storage.*') are not allowed. For more
 *  information see
 *  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  Response message for `TestIamPermissions` method.
 */
@interface GTLRCloudResourceManager_TestIamPermissionsResponse : GTLRObject

/**
 *  A subset of `TestPermissionsRequest.permissions` that the caller is
 *  allowed.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  The UndeleteFolder request message.
 */
@interface GTLRCloudResourceManager_UndeleteFolderRequest : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
