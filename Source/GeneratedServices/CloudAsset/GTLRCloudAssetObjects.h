// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Asset API (cloudasset/v1beta1)
// Description:
//   The cloud asset API manages the history and inventory of cloud resources.
// Documentation:
//   https://console.cloud.google.com/apis/api/cloudasset.googleapis.com/overview

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudAsset_Asset;
@class GTLRCloudAsset_AuditConfig;
@class GTLRCloudAsset_AuditLogConfig;
@class GTLRCloudAsset_Binding;
@class GTLRCloudAsset_Expr;
@class GTLRCloudAsset_GcsDestination;
@class GTLRCloudAsset_Operation_Metadata;
@class GTLRCloudAsset_Operation_Response;
@class GTLRCloudAsset_OutputConfig;
@class GTLRCloudAsset_Policy;
@class GTLRCloudAsset_Resource;
@class GTLRCloudAsset_Resource_Data;
@class GTLRCloudAsset_Status;
@class GTLRCloudAsset_Status_Details_Item;
@class GTLRCloudAsset_TemporalAsset;
@class GTLRCloudAsset_TimeWindow;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudAsset_AuditLogConfig.logType

/**
 *  Admin reads. Example: CloudIAM getIamPolicy
 *
 *  Value: "ADMIN_READ"
 */
GTLR_EXTERN NSString * const kGTLRCloudAsset_AuditLogConfig_LogType_AdminRead;
/**
 *  Data reads. Example: CloudSQL Users list
 *
 *  Value: "DATA_READ"
 */
GTLR_EXTERN NSString * const kGTLRCloudAsset_AuditLogConfig_LogType_DataRead;
/**
 *  Data writes. Example: CloudSQL Users create
 *
 *  Value: "DATA_WRITE"
 */
GTLR_EXTERN NSString * const kGTLRCloudAsset_AuditLogConfig_LogType_DataWrite;
/**
 *  Default case. Should never be this.
 *
 *  Value: "LOG_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudAsset_AuditLogConfig_LogType_LogTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudAsset_ExportAssetsRequest.contentType

/**
 *  Unspecified content type.
 *
 *  Value: "CONTENT_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudAsset_ExportAssetsRequest_ContentType_ContentTypeUnspecified;
/**
 *  The actual IAM policy set on a resource.
 *
 *  Value: "IAM_POLICY"
 */
GTLR_EXTERN NSString * const kGTLRCloudAsset_ExportAssetsRequest_ContentType_IamPolicy;
/**
 *  Resource metadata.
 *
 *  Value: "RESOURCE"
 */
GTLR_EXTERN NSString * const kGTLRCloudAsset_ExportAssetsRequest_ContentType_Resource;

/**
 *  Cloud asset. This includes all Google Cloud Platform resources,
 *  Cloud IAM policies, and other non-GCP assets.
 */
@interface GTLRCloudAsset_Asset : GTLRObject

/** Type of the asset. Example: "google.compute.Disk". */
@property(nonatomic, copy, nullable) NSString *assetType;

/**
 *  Representation of the actual Cloud IAM policy set on a cloud resource. For
 *  each
 *  resource, there must be at most one Cloud IAM policy set on it.
 */
@property(nonatomic, strong, nullable) GTLRCloudAsset_Policy *iamPolicy;

/**
 *  The full name of the asset. For example:
 *  `//compute.googleapis.com/projects/my_project_123/zones/zone1/instances/instance1`.
 *  See [Resource
 *  Names](https://cloud.google.com/apis/design/resource_names#full_resource_name)
 *  for more information.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Representation of the resource. */
@property(nonatomic, strong, nullable) GTLRCloudAsset_Resource *resource;

@end


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
 *  "user:foo\@gmail.com"
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
 *  "service": "fooservice.googleapis.com"
 *  "audit_log_configs": [
 *  {
 *  "log_type": "DATA_READ",
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  "exempted_members": [
 *  "user:bar\@gmail.com"
 *  ]
 *  }
 *  ]
 *  }
 *  ]
 *  }
 *  For fooservice, this policy enables DATA_READ, DATA_WRITE and ADMIN_READ
 *  logging. It also exempts foo\@gmail.com from DATA_READ logging, and
 *  bar\@gmail.com from DATA_WRITE logging.
 */
@interface GTLRCloudAsset_AuditConfig : GTLRObject

/** The configuration for logging of each type of permission. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudAsset_AuditLogConfig *> *auditLogConfigs;

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
 *  "user:foo\@gmail.com"
 *  ]
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  }
 *  ]
 *  }
 *  This enables 'DATA_READ' and 'DATA_WRITE' logging, while exempting
 *  foo\@gmail.com from DATA_READ logging.
 */
@interface GTLRCloudAsset_AuditLogConfig : GTLRObject

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
 *    @arg @c kGTLRCloudAsset_AuditLogConfig_LogType_AdminRead Admin reads.
 *        Example: CloudIAM getIamPolicy (Value: "ADMIN_READ")
 *    @arg @c kGTLRCloudAsset_AuditLogConfig_LogType_DataRead Data reads.
 *        Example: CloudSQL Users list (Value: "DATA_READ")
 *    @arg @c kGTLRCloudAsset_AuditLogConfig_LogType_DataWrite Data writes.
 *        Example: CloudSQL Users create (Value: "DATA_WRITE")
 *    @arg @c kGTLRCloudAsset_AuditLogConfig_LogType_LogTypeUnspecified Default
 *        case. Should never be this. (Value: "LOG_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *logType;

@end


/**
 *  Batch get assets history response.
 */
@interface GTLRCloudAsset_BatchGetAssetsHistoryResponse : GTLRObject

/** A list of assets with valid time windows. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudAsset_TemporalAsset *> *assets;

@end


/**
 *  Associates `members` with a `role`.
 */
@interface GTLRCloudAsset_Binding : GTLRObject

/**
 *  Unimplemented. The condition that is associated with this binding.
 *  NOTE: an unsatisfied condition will not allow user access via current
 *  binding. Different bindings, including their conditions, are examined
 *  independently.
 */
@property(nonatomic, strong, nullable) GTLRCloudAsset_Expr *condition;

/**
 *  Specifies the identities requesting access for a Cloud Platform resource.
 *  `members` can have the following values:
 *  * `allUsers`: A special identifier that represents anyone who is
 *  on the internet; with or without a Google account.
 *  * `allAuthenticatedUsers`: A special identifier that represents anyone
 *  who is authenticated with a Google account or a service account.
 *  * `user:{emailid}`: An email address that represents a specific Google
 *  account. For example, `alice\@gmail.com` .
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
 */
@property(nonatomic, copy, nullable) NSString *role;

@end


/**
 *  Export asset request.
 */
@interface GTLRCloudAsset_ExportAssetsRequest : GTLRObject

/**
 *  A list of asset types of which to take a snapshot for. For example:
 *  "google.compute.Disk". If specified, only matching assets will be returned.
 *  See [Introduction to Cloud Asset
 *  Inventory](https://cloud.google.com/resource-manager/docs/cloud-asset-inventory/overview)
 *  for all supported asset types.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *assetTypes;

/**
 *  Asset content type. If not specified, no content but the asset name will be
 *  returned.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudAsset_ExportAssetsRequest_ContentType_ContentTypeUnspecified
 *        Unspecified content type. (Value: "CONTENT_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRCloudAsset_ExportAssetsRequest_ContentType_IamPolicy The
 *        actual IAM policy set on a resource. (Value: "IAM_POLICY")
 *    @arg @c kGTLRCloudAsset_ExportAssetsRequest_ContentType_Resource Resource
 *        metadata. (Value: "RESOURCE")
 */
@property(nonatomic, copy, nullable) NSString *contentType;

/**
 *  Required. Output configuration indicating where the results will be output
 *  to. All results will be in newline delimited JSON format.
 */
@property(nonatomic, strong, nullable) GTLRCloudAsset_OutputConfig *outputConfig;

/**
 *  Timestamp to take an asset snapshot. This can only be set to a timestamp
 *  between 2018-10-02 UTC (inclusive) and the current time. If not specified,
 *  the current time will be used. Due to delays in resource data collection
 *  and indexing, there is a volatile window during which running the same
 *  query may get different results.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *readTime;

@end


/**
 *  Represents an expression text. Example:
 *  title: "User account presence"
 *  description: "Determines whether the request has a user account"
 *  expression: "size(request.user) > 0"
 */
@interface GTLRCloudAsset_Expr : GTLRObject

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
 *  A Cloud Storage location.
 */
@interface GTLRCloudAsset_GcsDestination : GTLRObject

/**
 *  The uri of the Cloud Storage object. It's the same uri that is used by
 *  gsutil. For example: "gs://bucket_name/object_name". See [Viewing and
 *  Editing Object
 *  Metadata](https://cloud.google.com/storage/docs/viewing-editing-metadata)
 *  for more information.
 */
@property(nonatomic, copy, nullable) NSString *uri;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRCloudAsset_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRCloudAsset_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRCloudAsset_Operation_Metadata *metadata;

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
@property(nonatomic, strong, nullable) GTLRCloudAsset_Operation_Response *response;

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
@interface GTLRCloudAsset_Operation_Metadata : GTLRObject
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
@interface GTLRCloudAsset_Operation_Response : GTLRObject
@end


/**
 *  Output configuration for export assets destination.
 */
@interface GTLRCloudAsset_OutputConfig : GTLRObject

/** Destination on Cloud Storage. */
@property(nonatomic, strong, nullable) GTLRCloudAsset_GcsDestination *gcsDestination;

@end


/**
 *  Defines an Identity and Access Management (IAM) policy. It is used to
 *  specify access control policies for Cloud Platform resources.
 *  A `Policy` consists of a list of `bindings`. A `binding` binds a list of
 *  `members` to a `role`, where the members can be user accounts, Google
 *  groups,
 *  Google domains, and service accounts. A `role` is a named list of
 *  permissions
 *  defined by IAM.
 *  **JSON Example**
 *  {
 *  "bindings": [
 *  {
 *  "role": "roles/owner",
 *  "members": [
 *  "user:mike\@example.com",
 *  "group:admins\@example.com",
 *  "domain:google.com",
 *  "serviceAccount:my-other-app\@appspot.gserviceaccount.com"
 *  ]
 *  },
 *  {
 *  "role": "roles/viewer",
 *  "members": ["user:sean\@example.com"]
 *  }
 *  ]
 *  }
 *  **YAML Example**
 *  bindings:
 *  - members:
 *  - user:mike\@example.com
 *  - group:admins\@example.com
 *  - domain:google.com
 *  - serviceAccount:my-other-app\@appspot.gserviceaccount.com
 *  role: roles/owner
 *  - members:
 *  - user:sean\@example.com
 *  role: roles/viewer
 *  For a description of IAM and its features, see the
 *  [IAM developer's guide](https://cloud.google.com/iam/docs).
 */
@interface GTLRCloudAsset_Policy : GTLRObject

/** Specifies cloud audit logging configuration for this policy. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudAsset_AuditConfig *> *auditConfigs;

/**
 *  Associates a list of `members` to a `role`.
 *  `bindings` with no members will result in an error.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudAsset_Binding *> *bindings;

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
 *  Deprecated.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *version;

@end


/**
 *  Representation of a cloud resource.
 */
@interface GTLRCloudAsset_Resource : GTLRObject

/**
 *  The content of the resource, in which some sensitive fields are scrubbed
 *  away and may not be present.
 */
@property(nonatomic, strong, nullable) GTLRCloudAsset_Resource_Data *data;

/**
 *  The URL of the discovery document containing the resource's JSON schema.
 *  For example:
 *  `"https://www.googleapis.com/discovery/v1/apis/compute/v1/rest"`.
 *  It will be left unspecified for resources without a discovery-based API,
 *  such as Cloud Bigtable.
 */
@property(nonatomic, copy, nullable) NSString *discoveryDocumentUri;

/**
 *  The JSON schema name listed in the discovery document.
 *  Example: "Project". It will be left unspecified for resources (such as
 *  Cloud Bigtable) without a discovery-based API.
 */
@property(nonatomic, copy, nullable) NSString *discoveryName;

/**
 *  The full name of the immediate parent of this resource. See
 *  [Resource
 *  Names](https://cloud.google.com/apis/design/resource_names#full_resource_name)
 *  for more information.
 *  For GCP assets, it is the parent resource defined in the [Cloud IAM policy
 *  hierarchy](https://cloud.google.com/iam/docs/overview#policy_hierarchy).
 *  For example:
 *  `"//cloudresourcemanager.googleapis.com/projects/my_project_123"`.
 *  For third-party assets, it is up to the users to define.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  The REST URL for accessing the resource. An HTTP GET operation using this
 *  URL returns the resource itself.
 *  Example:
 *  `https://cloudresourcemanager.googleapis.com/v1/projects/my-project-123`.
 *  It will be left unspecified for resources without a REST API.
 */
@property(nonatomic, copy, nullable) NSString *resourceUrl;

/** The API version. Example: "v1". */
@property(nonatomic, copy, nullable) NSString *version;

@end


/**
 *  The content of the resource, in which some sensitive fields are scrubbed
 *  away and may not be present.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudAsset_Resource_Data : GTLRObject
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
 *  in the package `google.rpc` that can be used for common error conditions.
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
 *  have a `Status` message for error reporting.
 *  - Batch operations. If a client uses batch request and batch response, the
 *  `Status` message should be used directly inside batch response, one for
 *  each error sub-response.
 *  - Asynchronous operations. If an API call embeds asynchronous operation
 *  results in its response, the status of those operations should be
 *  represented directly using the `Status` message.
 *  - Logging. If some API errors are stored in logs, the message `Status` could
 *  be used directly after any stripping needed for security/privacy reasons.
 */
@interface GTLRCloudAsset_Status : GTLRObject

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
@property(nonatomic, strong, nullable) NSArray<GTLRCloudAsset_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudAsset_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudAsset_Status_Details_Item : GTLRObject
@end


/**
 *  Temporal asset. In addition to the asset, the temporal asset includes the
 *  status of the asset and valid from and to time of it.
 */
@interface GTLRCloudAsset_TemporalAsset : GTLRObject

/** Asset. */
@property(nonatomic, strong, nullable) GTLRCloudAsset_Asset *asset;

/**
 *  If the asset is deleted or not.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *deleted;

/** The time window when the asset data and state was observed. */
@property(nonatomic, strong, nullable) GTLRCloudAsset_TimeWindow *window;

@end


/**
 *  A time window of (start_time, end_time].
 */
@interface GTLRCloudAsset_TimeWindow : GTLRObject

/**
 *  End time of the time window (inclusive).
 *  Current timestamp if not specified.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/** Start time of the time window (exclusive). */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
