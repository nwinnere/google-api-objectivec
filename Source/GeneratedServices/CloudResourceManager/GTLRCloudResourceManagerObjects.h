// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Resource Manager API (cloudresourcemanager/v1)
// Description:
//   The Google Cloud Resource Manager API provides methods for creating,
//   reading, and updating project metadata.
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

@class GTLRCloudResourceManager_Ancestor;
@class GTLRCloudResourceManager_Binding;
@class GTLRCloudResourceManager_Lien;
@class GTLRCloudResourceManager_Operation_Metadata;
@class GTLRCloudResourceManager_Operation_Response;
@class GTLRCloudResourceManager_Organization;
@class GTLRCloudResourceManager_OrganizationOwner;
@class GTLRCloudResourceManager_Policy;
@class GTLRCloudResourceManager_Project;
@class GTLRCloudResourceManager_Project_Labels;
@class GTLRCloudResourceManager_ResourceId;
@class GTLRCloudResourceManager_Status;
@class GTLRCloudResourceManager_Status_Details_Item;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

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
 *  The attempted action would introduce cycle in resource path.
 *
 *  Value: "CYCLE_INTRODUCED_ERROR"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_CycleIntroducedError;
/**
 *  The error type was unrecognized or unspecified.
 *
 *  Value: "ERROR_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ErrorTypeUnspecified;
/**
 *  The attempted action would move a folder that is already being moved.
 *
 *  Value: "FOLDER_ALREADY_BEING_MOVED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderAlreadyBeingMoved;
/**
 *  The attempted action would violate the max folder depth constraint.
 *
 *  Value: "FOLDER_HEIGHT_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderHeightViolation;
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
 *  Value: "FOLDER_TO_DELETE_NON_EMPTY"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderToDeleteNonEmpty;
/**
 *  The attempted action would violate the max child folders constraint.
 *
 *  Value: "MAX_CHILD_FOLDERS_VIOLATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_MaxChildFoldersViolation;
/**
 *  The resource a folder was being added to has been deleted.
 *
 *  Value: "PARENT_DELETED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ParentDeleted;
/**
 *  The resource being moved has been deleted.
 *
 *  Value: "RESOURCE_DELETED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ResourceDeleted;

// ----------------------------------------------------------------------------
// GTLRCloudResourceManager_Organization.lifecycleState

/**
 *  The normal and active state.
 *
 *  Value: "ACTIVE"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_Organization_LifecycleState_Active;
/**
 *  The organization has been marked for deletion by the user.
 *
 *  Value: "DELETE_REQUESTED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_Organization_LifecycleState_DeleteRequested;
/**
 *  Unspecified state. This is only useful for distinguishing unset values.
 *
 *  Value: "LIFECYCLE_STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_Organization_LifecycleState_LifecycleStateUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudResourceManager_Project.lifecycleState

/**
 *  The normal and active state.
 *
 *  Value: "ACTIVE"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_Project_LifecycleState_Active;
/**
 *  This lifecycle state is no longer used and not returned by the API.
 *
 *  Value: "DELETE_IN_PROGRESS"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_Project_LifecycleState_DeleteInProgress;
/**
 *  The project has been marked for deletion by the user
 *  (by invoking
 *  DeleteProject)
 *  or by the system (Google Cloud Platform).
 *  This can generally be reversed by invoking UndeleteProject.
 *
 *  Value: "DELETE_REQUESTED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_Project_LifecycleState_DeleteRequested;
/**
 *  Unspecified state. This is only used/useful for distinguishing
 *  unset values.
 *
 *  Value: "LIFECYCLE_STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudResourceManager_Project_LifecycleState_LifecycleStateUnspecified;

/**
 *  Identifying information for a single ancestor of a project.
 */
@interface GTLRCloudResourceManager_Ancestor : GTLRObject

/** Resource id of the ancestor. */
@property(nonatomic, strong, nullable) GTLRCloudResourceManager_ResourceId *resourceId;

@end


/**
 *  Associates `members` with a `role`.
 */
@interface GTLRCloudResourceManager_Binding : GTLRObject

/**
 *  Specifies the identities requesting access for a Cloud Platform resource.
 *  `members` can have the following values:
 *  * `allUsers`: A special identifier that represents anyone who is
 *  on the internet; with or without a Google account.
 *  * `allAuthenticatedUsers`: A special identifier that represents anyone
 *  who is authenticated with a Google account or a service account.
 *  * `user:{emailid}`: An email address that represents a specific Google
 *  account. For example, `alice\@gmail.com` or `joe\@example.com`.
 *  * `serviceAccount:{emailid}`: An email address that represents a service
 *  account. For example, `my-other-app\@appspot.gserviceaccount.com`.
 *  * `group:{emailid}`: An email address that represents a Google group.
 *  For example, `admins\@example.com`.
 *  * `domain:{domain}`: A Google Apps domain name that represents all the
 *  users of that domain. For example, `google.com` or `example.com`.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *members;

/**
 *  Role that is assigned to `members`.
 *  For example, `roles/viewer`, `roles/editor`, or `roles/owner`.
 *  Required
 */
@property(nonatomic, copy, nullable) NSString *role;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudResourceManager_Empty : GTLRObject
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
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_CycleIntroducedError
 *        The attempted action would introduce cycle in resource path. (Value:
 *        "CYCLE_INTRODUCED_ERROR")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ErrorTypeUnspecified
 *        The error type was unrecognized or unspecified. (Value:
 *        "ERROR_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderAlreadyBeingMoved
 *        The attempted action would move a folder that is already being moved.
 *        (Value: "FOLDER_ALREADY_BEING_MOVED")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderHeightViolation
 *        The attempted action would violate the max folder depth constraint.
 *        (Value: "FOLDER_HEIGHT_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderNameUniquenessViolation
 *        The attempted action would violate the locally-unique folder
 *        display_name constraint. (Value: "FOLDER_NAME_UNIQUENESS_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_FolderToDeleteNonEmpty
 *        The folder the caller is trying to delete contains active resources.
 *        (Value: "FOLDER_TO_DELETE_NON_EMPTY")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_MaxChildFoldersViolation
 *        The attempted action would violate the max child folders constraint.
 *        (Value: "MAX_CHILD_FOLDERS_VIOLATION")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ParentDeleted
 *        The resource a folder was being added to has been deleted. (Value:
 *        "PARENT_DELETED")
 *    @arg @c kGTLRCloudResourceManager_FolderOperationError_ErrorMessageId_ResourceDeleted
 *        The resource being moved has been deleted. (Value: "RESOURCE_DELETED")
 */
@property(nonatomic, copy, nullable) NSString *errorMessageId;

@end


/**
 *  The request sent to the
 *  GetAncestry
 *  method.
 */
@interface GTLRCloudResourceManager_GetAncestryRequest : GTLRObject
@end


/**
 *  Response from the GetAncestry method.
 */
@interface GTLRCloudResourceManager_GetAncestryResponse : GTLRObject

/**
 *  Ancestors are ordered from bottom to top of the resource hierarchy. The
 *  first ancestor is the project itself, followed by the project's parent,
 *  etc.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudResourceManager_Ancestor *> *ancestor;

@end


/**
 *  Request message for `GetIamPolicy` method.
 */
@interface GTLRCloudResourceManager_GetIamPolicyRequest : GTLRObject
@end


/**
 *  A Lien represents an encumbrance on the actions that can be performed on a
 *  resource.
 */
@interface GTLRCloudResourceManager_Lien : GTLRObject

/** The creation time of this Lien. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  A system-generated unique identifier for this Lien.
 *  Example: `liens/1234abcd`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  A stable, user-visible/meaningful string identifying the origin of the
 *  Lien, intended to be inspected programmatically. Maximum length of 200
 *  characters.
 *  Example: 'compute.googleapis.com'
 */
@property(nonatomic, copy, nullable) NSString *origin;

/**
 *  A reference to the resource this Lien is attached to. The server will
 *  validate the parent against those for which Liens are supported.
 *  Example: `projects/1234`
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Concise user-visible strings indicating why an action cannot be performed
 *  on a resource. Maximum lenth of 200 characters.
 *  Example: 'Holds production API key'
 */
@property(nonatomic, copy, nullable) NSString *reason;

/**
 *  The types of operations which should be blocked as a result of this Lien.
 *  Each value should correspond to an IAM permission. The server will
 *  validate the permissions against those for which Liens are supported.
 *  An empty list is meaningless and will be rejected.
 *  Example: ['resourcemanager.projects.delete']
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *restrictions;

@end


/**
 *  The response message for Liens.ListLiens.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "liens" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudResourceManager_ListLiensResponse : GTLRCollectionObject

/**
 *  A list of Liens.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudResourceManager_Lien *> *liens;

/**
 *  Token to retrieve the next page of results, or empty if there are no more
 *  results in the list.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  A page of the response received from the
 *  ListProjects
 *  method.
 *  A paginated response where more pages are available has
 *  `next_page_token` set. This token can be used in a subsequent request to
 *  retrieve the next request page.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "projects" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudResourceManager_ListProjectsResponse : GTLRCollectionObject

/**
 *  Pagination token.
 *  If the result set is too large to fit in a single response, this token
 *  is returned. It encodes the position of the current result cursor.
 *  Feeding this value into a new list request with the `page_token` parameter
 *  gives the next page of the results.
 *  When `next_page_token` is not filled in, there is no next page and
 *  the list returned is the last page in the result set.
 *  Pagination tokens have a limited lifetime.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The list of Projects that matched the list filter. This list can
 *  be paginated.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudResourceManager_Project *> *projects;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRCloudResourceManager_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If true, the operation is completed, and either `error` or `response` is
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
 *  `name` should have the format of `operations/some/unique/name`.
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
 *  The root node in the resource hierarchy to which a particular entity's
 *  (e.g., company) resources belong.
 */
@interface GTLRCloudResourceManager_Organization : GTLRObject

/**
 *  Timestamp when the Organization was created. Assigned by the server.
 *  \@OutputOnly
 */
@property(nonatomic, strong, nullable) GTLRDateTime *creationTime;

/**
 *  A friendly string to be used to refer to the Organization in the UI.
 *  Assigned by the server, set to the primary domain of the G Suite
 *  customer that owns the organization.
 *  \@OutputOnly
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The organization's current lifecycle state. Assigned by the server.
 *  \@OutputOnly
 *
 *  Likely values:
 *    @arg @c kGTLRCloudResourceManager_Organization_LifecycleState_Active The
 *        normal and active state. (Value: "ACTIVE")
 *    @arg @c kGTLRCloudResourceManager_Organization_LifecycleState_DeleteRequested
 *        The organization has been marked for deletion by the user. (Value:
 *        "DELETE_REQUESTED")
 *    @arg @c kGTLRCloudResourceManager_Organization_LifecycleState_LifecycleStateUnspecified
 *        Unspecified state. This is only useful for distinguishing unset
 *        values. (Value: "LIFECYCLE_STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *lifecycleState;

/**
 *  Output Only. The resource name of the organization. This is the
 *  organization's relative path in the API. Its format is
 *  "organizations/[organization_id]". For example, "organizations/1234".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The owner of this Organization. The owner should be specified on
 *  creation. Once set, it cannot be changed.
 *  This field is required.
 */
@property(nonatomic, strong, nullable) GTLRCloudResourceManager_OrganizationOwner *owner;

@end


/**
 *  The entity that owns an Organization. The lifetime of the Organization and
 *  all of its descendants are bound to the `OrganizationOwner`. If the
 *  `OrganizationOwner` is deleted, the Organization and all its descendants
 *  will
 *  be deleted.
 */
@interface GTLRCloudResourceManager_OrganizationOwner : GTLRObject

/** The Google for Work customer id used in the Directory API. */
@property(nonatomic, copy, nullable) NSString *directoryCustomerId;

@end


/**
 *  Defines an Identity and Access Management (IAM) policy. It is used to
 *  specify access control policies for Cloud Platform resources.
 *  A `Policy` consists of a list of `bindings`. A `Binding` binds a list of
 *  `members` to a `role`, where the members can be user accounts, Google
 *  groups,
 *  Google domains, and service accounts. A `role` is a named list of
 *  permissions
 *  defined by IAM.
 *  **Example**
 *  {
 *  "bindings": [
 *  {
 *  "role": "roles/owner",
 *  "members": [
 *  "user:mike\@example.com",
 *  "group:admins\@example.com",
 *  "domain:google.com",
 *  "serviceAccount:my-other-app\@appspot.gserviceaccount.com",
 *  ]
 *  },
 *  {
 *  "role": "roles/viewer",
 *  "members": ["user:sean\@example.com"]
 *  }
 *  ]
 *  }
 *  For a description of IAM and its features, see the
 *  [IAM developer's guide](https://cloud.google.com/iam).
 */
@interface GTLRCloudResourceManager_Policy : GTLRObject

/**
 *  Associates a list of `members` to a `role`.
 *  Multiple `bindings` must not be specified for the same `role`.
 *  `bindings` with no members will result in an error.
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
 *  If no `etag` is provided in the call to `setIamPolicy`, then the existing
 *  policy is overwritten blindly.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Version of the `Policy`. The default version is 0.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *version;

@end


/**
 *  A Project is a high-level Google Cloud Platform entity. It is a
 *  container for ACLs, APIs, App Engine Apps, VMs, and other
 *  Google Cloud Platform resources.
 */
@interface GTLRCloudResourceManager_Project : GTLRObject

/**
 *  Creation time.
 *  Read-only.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  The labels associated with this Project.
 *  Label keys must be between 1 and 63 characters long and must conform
 *  to the following regular expression: \\[a-z\\](\\[-a-z0-9\\]*\\[a-z0-9\\])?.
 *  Label values must be between 0 and 63 characters long and must conform
 *  to the regular expression (\\[a-z\\](\\[-a-z0-9\\]*\\[a-z0-9\\])?)?.
 *  No more than 256 labels can be associated with a given resource.
 *  Clients should store labels in a representation such as JSON that does not
 *  depend on specific characters being disallowed.
 *  Example: <code>"environment" : "dev"</code>
 *  Read-write.
 */
@property(nonatomic, strong, nullable) GTLRCloudResourceManager_Project_Labels *labels;

/**
 *  The Project lifecycle state.
 *  Read-only.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudResourceManager_Project_LifecycleState_Active The normal
 *        and active state. (Value: "ACTIVE")
 *    @arg @c kGTLRCloudResourceManager_Project_LifecycleState_DeleteInProgress
 *        This lifecycle state is no longer used and not returned by the API.
 *        (Value: "DELETE_IN_PROGRESS")
 *    @arg @c kGTLRCloudResourceManager_Project_LifecycleState_DeleteRequested
 *        The project has been marked for deletion by the user
 *        (by invoking
 *        DeleteProject)
 *        or by the system (Google Cloud Platform).
 *        This can generally be reversed by invoking UndeleteProject. (Value:
 *        "DELETE_REQUESTED")
 *    @arg @c kGTLRCloudResourceManager_Project_LifecycleState_LifecycleStateUnspecified
 *        Unspecified state. This is only used/useful for distinguishing
 *        unset values. (Value: "LIFECYCLE_STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *lifecycleState;

/**
 *  The user-assigned display name of the Project.
 *  It must be 4 to 30 characters.
 *  Allowed characters are: lowercase and uppercase letters, numbers,
 *  hyphen, single-quote, double-quote, space, and exclamation point.
 *  Example: <code>My Project</code>
 *  Read-write.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  An optional reference to a parent Resource.
 *  The only supported parent type is "organization". Once set, the parent
 *  cannot be modified. The `parent` can be set on creation or using the
 *  `UpdateProject` method; the end user must have the
 *  `resourcemanager.projects.create` permission on the parent.
 *  Read-write.
 */
@property(nonatomic, strong, nullable) GTLRCloudResourceManager_ResourceId *parent;

/**
 *  The unique, user-assigned ID of the Project.
 *  It must be 6 to 30 lowercase letters, digits, or hyphens.
 *  It must start with a letter.
 *  Trailing hyphens are prohibited.
 *  Example: <code>tokyo-rain-123</code>
 *  Read-only after creation.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  The number uniquely identifying the project.
 *  Example: <code>415104041262</code>
 *  Read-only.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *projectNumber;

@end


/**
 *  The labels associated with this Project.
 *  Label keys must be between 1 and 63 characters long and must conform
 *  to the following regular expression: \\[a-z\\](\\[-a-z0-9\\]*\\[a-z0-9\\])?.
 *  Label values must be between 0 and 63 characters long and must conform
 *  to the regular expression (\\[a-z\\](\\[-a-z0-9\\]*\\[a-z0-9\\])?)?.
 *  No more than 256 labels can be associated with a given resource.
 *  Clients should store labels in a representation such as JSON that does not
 *  depend on specific characters being disallowed.
 *  Example: <code>"environment" : "dev"</code>
 *  Read-write.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudResourceManager_Project_Labels : GTLRObject
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
 *  A container to reference an id for any resource type. A `resource` in Google
 *  Cloud Platform is a generic term for something you (a developer) may want to
 *  interact with through one of our API's. Some examples are an App Engine app,
 *  a Compute Engine instance, a Cloud SQL database, and so on.
 */
@interface GTLRCloudResourceManager_ResourceId : GTLRObject

/**
 *  Required field for the type-specific id. This should correspond to the id
 *  used in the type-specific API's.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Required field representing the resource type this id is for.
 *  At present, the valid types are: "organization"
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  The request sent to the `SearchOrganizations` method.
 */
@interface GTLRCloudResourceManager_SearchOrganizationsRequest : GTLRObject

/**
 *  An optional query string used to filter the Organizations to return in
 *  the response. Filter rules are case-insensitive.
 *  Organizations may be filtered by `owner.directoryCustomerId` or by
 *  `domain`, where the domain is a Google for Work domain, for example:
 *  |Filter|Description|
 *  |------|-----------|
 *  |owner.directorycustomerid:123456789|Organizations with
 *  `owner.directory_customer_id` equal to `123456789`.|
 *  |domain:google.com|Organizations corresponding to the domain `google.com`.|
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  The maximum number of Organizations to return in the response.
 *  This field is optional.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *pageSize;

/**
 *  A pagination token returned from a previous call to `SearchOrganizations`
 *  that indicates from where listing should continue.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

@end


/**
 *  The response returned from the `SearchOrganizations` method.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "organizations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudResourceManager_SearchOrganizationsResponse : GTLRCollectionObject

/**
 *  A pagination token to be used to retrieve the next page of results. If the
 *  result is too large to fit within the page size specified in the request,
 *  this field will be set with a token that can be used to fetch the next page
 *  of results. If this field is empty, it indicates that this response
 *  contains the last page of results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The list of Organizations that matched the search query, possibly
 *  paginated.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudResourceManager_Organization *> *organizations;

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

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different
 *  programming environments, including REST APIs and RPC APIs. It is used by
 *  [gRPC](https://github.com/grpc). The error model is designed to be:
 *  - Simple to use and understand for most users
 *  - Flexible enough to meet unexpected needs
 *  # Overview
 *  The `Status` message contains three pieces of data: error code, error
 *  message,
 *  and error details. The error code should be an enum value of
 *  google.rpc.Code, but it may accept additional error codes if needed. The
 *  error message should be a developer-facing English message that helps
 *  developers *understand* and *resolve* the error. If a localized user-facing
 *  error message is needed, put the localized message in the error details or
 *  localize it in the client. The optional error details may contain arbitrary
 *  information about the error. There is a predefined set of error detail types
 *  in the package `google.rpc` which can be used for common error conditions.
 *  # Language mapping
 *  The `Status` message is the logical representation of the error model, but
 *  it
 *  is not necessarily the actual wire format. When the `Status` message is
 *  exposed in different client libraries and different wire protocols, it can
 *  be
 *  mapped differently. For example, it will likely be mapped to some exceptions
 *  in Java, but more likely mapped to some error codes in C.
 *  # Other uses
 *  The error model and the `Status` message can be used in a variety of
 *  environments, either with or without APIs, to provide a
 *  consistent developer experience across different environments.
 *  Example uses of this error model include:
 *  - Partial errors. If a service needs to return partial errors to the client,
 *  it may embed the `Status` in the normal response to indicate the partial
 *  errors.
 *  - Workflow errors. A typical workflow has multiple steps. Each step may
 *  have a `Status` message for error reporting purpose.
 *  - Batch operations. If a client uses batch request and batch response, the
 *  `Status` message should be used directly inside batch response, one for
 *  each error sub-response.
 *  - Asynchronous operations. If an API call embeds asynchronous operation
 *  results in its response, the status of those operations should be
 *  represented directly using the `Status` message.
 *  - Logging. If some API errors are stored in logs, the message `Status` could
 *  be used directly after any stripping needed for security/privacy reasons.
 */
@interface GTLRCloudResourceManager_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There will be a
 *  common set of message types for APIs to use.
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
 *  The request sent to the UndeleteProject
 *  method.
 */
@interface GTLRCloudResourceManager_UndeleteProjectRequest : GTLRObject
@end

NS_ASSUME_NONNULL_END
