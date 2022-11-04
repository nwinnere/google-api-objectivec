// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Secret Manager API (secretmanager/v1beta1)
// Description:
//   Stores and manages access to application secrets. Provides convenience
//   while improving security.
// Documentation:
//   https://cloud.google.com/secret-manager/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRSecretManager_AuditConfig;
@class GTLRSecretManager_AuditLogConfig;
@class GTLRSecretManager_Automatic;
@class GTLRSecretManager_Binding;
@class GTLRSecretManager_Expr;
@class GTLRSecretManager_Location;
@class GTLRSecretManager_Location_Labels;
@class GTLRSecretManager_Location_Metadata;
@class GTLRSecretManager_Policy;
@class GTLRSecretManager_Replica;
@class GTLRSecretManager_Replication;
@class GTLRSecretManager_Secret;
@class GTLRSecretManager_Secret_Labels;
@class GTLRSecretManager_SecretPayload;
@class GTLRSecretManager_SecretVersion;
@class GTLRSecretManager_UserManaged;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRSecretManager_AuditLogConfig.logType

/**
 *  Admin reads. Example: CloudIAM getIamPolicy
 *
 *  Value: "ADMIN_READ"
 */
GTLR_EXTERN NSString * const kGTLRSecretManager_AuditLogConfig_LogType_AdminRead;
/**
 *  Data reads. Example: CloudSQL Users list
 *
 *  Value: "DATA_READ"
 */
GTLR_EXTERN NSString * const kGTLRSecretManager_AuditLogConfig_LogType_DataRead;
/**
 *  Data writes. Example: CloudSQL Users create
 *
 *  Value: "DATA_WRITE"
 */
GTLR_EXTERN NSString * const kGTLRSecretManager_AuditLogConfig_LogType_DataWrite;
/**
 *  Default case. Should never be this.
 *
 *  Value: "LOG_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRSecretManager_AuditLogConfig_LogType_LogTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRSecretManager_SecretVersion.state

/**
 *  The SecretVersion is destroyed and the secret data is no longer
 *  stored. A version may not leave this state once entered.
 *
 *  Value: "DESTROYED"
 */
GTLR_EXTERN NSString * const kGTLRSecretManager_SecretVersion_State_Destroyed;
/**
 *  The SecretVersion may not be accessed, but the secret data
 *  is still available and can be placed back into the ENABLED
 *  state.
 *
 *  Value: "DISABLED"
 */
GTLR_EXTERN NSString * const kGTLRSecretManager_SecretVersion_State_Disabled;
/**
 *  The SecretVersion may be accessed.
 *
 *  Value: "ENABLED"
 */
GTLR_EXTERN NSString * const kGTLRSecretManager_SecretVersion_State_Enabled;
/**
 *  Not specified. This value is unused and invalid.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRSecretManager_SecretVersion_State_StateUnspecified;

/**
 *  Response message for SecretManagerService.AccessSecretVersion.
 */
@interface GTLRSecretManager_AccessSecretVersionResponse : GTLRObject

/**
 *  The resource name of the SecretVersion in the format
 *  `projects/ * /secrets/ * /versions/ *`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Secret payload */
@property(nonatomic, strong, nullable) GTLRSecretManager_SecretPayload *payload;

@end


/**
 *  Request message for SecretManagerService.AddSecretVersion.
 */
@interface GTLRSecretManager_AddSecretVersionRequest : GTLRObject

/** Required. The secret payload of the SecretVersion. */
@property(nonatomic, strong, nullable) GTLRSecretManager_SecretPayload *payload;

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
@interface GTLRSecretManager_AuditConfig : GTLRObject

/** The configuration for logging of each type of permission. */
@property(nonatomic, strong, nullable) NSArray<GTLRSecretManager_AuditLogConfig *> *auditLogConfigs;

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
@interface GTLRSecretManager_AuditLogConfig : GTLRObject

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
 *    @arg @c kGTLRSecretManager_AuditLogConfig_LogType_AdminRead Admin reads.
 *        Example: CloudIAM getIamPolicy (Value: "ADMIN_READ")
 *    @arg @c kGTLRSecretManager_AuditLogConfig_LogType_DataRead Data reads.
 *        Example: CloudSQL Users list (Value: "DATA_READ")
 *    @arg @c kGTLRSecretManager_AuditLogConfig_LogType_DataWrite Data writes.
 *        Example: CloudSQL Users create (Value: "DATA_WRITE")
 *    @arg @c kGTLRSecretManager_AuditLogConfig_LogType_LogTypeUnspecified
 *        Default case. Should never be this. (Value: "LOG_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *logType;

@end


/**
 *  A replication policy that replicates the Secret payload without any
 *  restrictions.
 */
@interface GTLRSecretManager_Automatic : GTLRObject
@end


/**
 *  Associates `members` with a `role`.
 */
@interface GTLRSecretManager_Binding : GTLRObject

/**
 *  The condition that is associated with this binding.
 *  NOTE: An unsatisfied condition will not allow user access via current
 *  binding. Different bindings, including their conditions, are examined
 *  independently.
 */
@property(nonatomic, strong, nullable) GTLRSecretManager_Expr *condition;

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
 *  Request message for SecretManagerService.DestroySecretVersion.
 */
@interface GTLRSecretManager_DestroySecretVersionRequest : GTLRObject
@end


/**
 *  Request message for SecretManagerService.DisableSecretVersion.
 */
@interface GTLRSecretManager_DisableSecretVersionRequest : GTLRObject
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
@interface GTLRSecretManager_Empty : GTLRObject
@end


/**
 *  Request message for SecretManagerService.EnableSecretVersion.
 */
@interface GTLRSecretManager_EnableSecretVersionRequest : GTLRObject
@end


/**
 *  Represents a textual expression in the Common Expression Language (CEL)
 *  syntax. CEL is a C-like expression language. The syntax and semantics of CEL
 *  are documented at https://github.com/google/cel-spec.
 *  Example (Comparison):
 *  title: "Summary size limit"
 *  description: "Determines if a summary is less than 100 chars"
 *  expression: "document.summary.size() < 100"
 *  Example (Equality):
 *  title: "Requestor is owner"
 *  description: "Determines if requestor is the document owner"
 *  expression: "document.owner == request.auth.claims.email"
 *  Example (Logic):
 *  title: "Public documents"
 *  description: "Determine whether the document should be publicly visible"
 *  expression: "document.type != 'private' && document.type != 'internal'"
 *  Example (Data Manipulation):
 *  title: "Notification string"
 *  description: "Create a notification string with a timestamp."
 *  expression: "'New message received at ' + string(document.create_time)"
 *  The exact variables and functions that may be referenced within an
 *  expression
 *  are determined by the service that evaluates it. See the service
 *  documentation for additional information.
 */
@interface GTLRSecretManager_Expr : GTLRObject

/**
 *  Optional. Description of the expression. This is a longer text which
 *  describes the expression, e.g. when hovered over it in a UI.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Textual representation of an expression in Common Expression Language
 *  syntax.
 */
@property(nonatomic, copy, nullable) NSString *expression;

/**
 *  Optional. String indicating the location of the expression for error
 *  reporting, e.g. a file name and a position in the file.
 */
@property(nonatomic, copy, nullable) NSString *location;

/**
 *  Optional. Title for the expression, i.e. a short string describing
 *  its purpose. This can be used e.g. in UIs which allow to enter the
 *  expression.
 */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  The response message for Locations.ListLocations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "locations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRSecretManager_ListLocationsResponse : GTLRCollectionObject

/**
 *  A list of locations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSecretManager_Location *> *locations;

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response message for SecretManagerService.ListSecrets.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "secrets" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRSecretManager_ListSecretsResponse : GTLRCollectionObject

/**
 *  A token to retrieve the next page of results. Pass this value in
 *  ListSecretsRequest.page_token to retrieve the next page.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The list of Secrets sorted in reverse by create_time (newest
 *  first).
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSecretManager_Secret *> *secrets;

/**
 *  The total number of Secrets.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalSize;

@end


/**
 *  Response message for SecretManagerService.ListSecretVersions.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "versions" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRSecretManager_ListSecretVersionsResponse : GTLRCollectionObject

/**
 *  A token to retrieve the next page of results. Pass this value in
 *  ListSecretVersionsRequest.page_token to retrieve the next page.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The total number of SecretVersions.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalSize;

/**
 *  The list of SecretVersions sorted in reverse by
 *  create_time (newest first).
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSecretManager_SecretVersion *> *versions;

@end


/**
 *  A resource that represents Google Cloud Platform location.
 */
@interface GTLRSecretManager_Location : GTLRObject

/**
 *  The friendly name for this location, typically a nearby city name.
 *  For example, "Tokyo".
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 */
@property(nonatomic, strong, nullable) GTLRSecretManager_Location_Labels *labels;

/** The canonical id for this location. For example: `"us-east1"`. */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 */
@property(nonatomic, strong, nullable) GTLRSecretManager_Location_Metadata *metadata;

/**
 *  Resource name for the location, which may vary between implementations.
 *  For example: `"projects/example-project/locations/us-east1"`
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRSecretManager_Location_Labels : GTLRObject
@end


/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRSecretManager_Location_Metadata : GTLRObject
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
@interface GTLRSecretManager_Policy : GTLRObject

/** Specifies cloud audit logging configuration for this policy. */
@property(nonatomic, strong, nullable) NSArray<GTLRSecretManager_AuditConfig *> *auditConfigs;

/**
 *  Associates a list of `members` to a `role`. Optionally, may specify a
 *  `condition` that determines how and when the `bindings` are applied. Each
 *  of the `bindings` must contain at least one member.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSecretManager_Binding *> *bindings;

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
 *  Represents a Replica for this Secret.
 */
@interface GTLRSecretManager_Replica : GTLRObject

/**
 *  The canonical IDs of the location to replicate data.
 *  For example: `"us-east1"`.
 */
@property(nonatomic, copy, nullable) NSString *location;

@end


/**
 *  A policy that defines the replication configuration of data.
 */
@interface GTLRSecretManager_Replication : GTLRObject

/** The Secret will automatically be replicated without any restrictions. */
@property(nonatomic, strong, nullable) GTLRSecretManager_Automatic *automatic;

/** The Secret will only be replicated into the locations specified. */
@property(nonatomic, strong, nullable) GTLRSecretManager_UserManaged *userManaged;

@end


/**
 *  A Secret is a logical secret whose value and versions can
 *  be accessed.
 *  A Secret is made up of zero or more SecretVersions that
 *  represent the secret data.
 */
@interface GTLRSecretManager_Secret : GTLRObject

/** Output only. The time at which the Secret was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  The labels assigned to this Secret.
 *  Label keys must be between 1 and 63 characters long, have a UTF-8 encoding
 *  of maximum 128 bytes, and must conform to the following PCRE regular
 *  expression: `\\p{Ll}\\p{Lo}{0,62}`
 *  Label values must be between 0 and 63 characters long, have a UTF-8
 *  encoding of maximum 128 bytes, and must conform to the following PCRE
 *  regular expression: `[\\p{Ll}\\p{Lo}\\p{N}_-]{0,63}`
 *  No more than 64 labels can be assigned to a given resource.
 */
@property(nonatomic, strong, nullable) GTLRSecretManager_Secret_Labels *labels;

/**
 *  Output only. The resource name of the Secret in the format `projects/ *
 *  /secrets/ *`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required. Immutable. The replication policy of the secret data attached to
 *  the Secret.
 *  The replication policy cannot be changed after the Secret has been created.
 */
@property(nonatomic, strong, nullable) GTLRSecretManager_Replication *replication;

@end


/**
 *  The labels assigned to this Secret.
 *  Label keys must be between 1 and 63 characters long, have a UTF-8 encoding
 *  of maximum 128 bytes, and must conform to the following PCRE regular
 *  expression: `\\p{Ll}\\p{Lo}{0,62}`
 *  Label values must be between 0 and 63 characters long, have a UTF-8
 *  encoding of maximum 128 bytes, and must conform to the following PCRE
 *  regular expression: `[\\p{Ll}\\p{Lo}\\p{N}_-]{0,63}`
 *  No more than 64 labels can be assigned to a given resource.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRSecretManager_Secret_Labels : GTLRObject
@end


/**
 *  A secret payload resource in the Secret Manager API. This contains the
 *  sensitive secret data that is associated with a SecretVersion.
 */
@interface GTLRSecretManager_SecretPayload : GTLRObject

/**
 *  The secret data. Must be no larger than 64KiB.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *data;

@end


/**
 *  A secret version resource in the Secret Manager API.
 */
@interface GTLRSecretManager_SecretVersion : GTLRObject

/** Output only. The time at which the SecretVersion was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Output only. The time this SecretVersion was destroyed.
 *  Only present if state is
 *  DESTROYED.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *destroyTime;

/**
 *  Output only. The resource name of the SecretVersion in the
 *  format `projects/ * /secrets/ * /versions/ *`.
 *  SecretVersion IDs in a Secret start at 1 and
 *  are incremented for each subsequent version of the secret.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. The current state of the SecretVersion.
 *
 *  Likely values:
 *    @arg @c kGTLRSecretManager_SecretVersion_State_Destroyed The SecretVersion
 *        is destroyed and the secret data is no longer
 *        stored. A version may not leave this state once entered. (Value:
 *        "DESTROYED")
 *    @arg @c kGTLRSecretManager_SecretVersion_State_Disabled The SecretVersion
 *        may not be accessed, but the secret data
 *        is still available and can be placed back into the ENABLED
 *        state. (Value: "DISABLED")
 *    @arg @c kGTLRSecretManager_SecretVersion_State_Enabled The SecretVersion
 *        may be accessed. (Value: "ENABLED")
 *    @arg @c kGTLRSecretManager_SecretVersion_State_StateUnspecified Not
 *        specified. This value is unused and invalid. (Value:
 *        "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  Request message for `SetIamPolicy` method.
 */
@interface GTLRSecretManager_SetIamPolicyRequest : GTLRObject

/**
 *  REQUIRED: The complete policy to be applied to the `resource`. The size of
 *  the policy is limited to a few 10s of KB. An empty policy is a
 *  valid policy but certain Cloud Platform services (such as Projects)
 *  might reject them.
 */
@property(nonatomic, strong, nullable) GTLRSecretManager_Policy *policy;

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
 *  Request message for `TestIamPermissions` method.
 */
@interface GTLRSecretManager_TestIamPermissionsRequest : GTLRObject

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
@interface GTLRSecretManager_TestIamPermissionsResponse : GTLRObject

/**
 *  A subset of `TestPermissionsRequest.permissions` that the caller is
 *  allowed.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  A replication policy that replicates the Secret payload into the
 *  locations specified in Secret.replication.user_managed.replicas
 */
@interface GTLRSecretManager_UserManaged : GTLRObject

/**
 *  Required. The list of Replicas for this Secret.
 *  Cannot be empty.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSecretManager_Replica *> *replicas;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
