// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Identity-Aware Proxy API (iap/v1beta1)
// Description:
//   Controls access to cloud applications running on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/iap

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudIAP_AuditConfig;
@class GTLRCloudIAP_AuditLogConfig;
@class GTLRCloudIAP_Binding;
@class GTLRCloudIAP_Expr;
@class GTLRCloudIAP_Policy;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudIAP_AuditLogConfig.logType

/**
 *  Admin reads. Example: CloudIAM getIamPolicy
 *
 *  Value: "ADMIN_READ"
 */
GTLR_EXTERN NSString * const kGTLRCloudIAP_AuditLogConfig_LogType_AdminRead;
/**
 *  Data reads. Example: CloudSQL Users list
 *
 *  Value: "DATA_READ"
 */
GTLR_EXTERN NSString * const kGTLRCloudIAP_AuditLogConfig_LogType_DataRead;
/**
 *  Data writes. Example: CloudSQL Users create
 *
 *  Value: "DATA_WRITE"
 */
GTLR_EXTERN NSString * const kGTLRCloudIAP_AuditLogConfig_LogType_DataWrite;
/**
 *  Default case. Should never be this.
 *
 *  Value: "LOG_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudIAP_AuditLogConfig_LogType_LogTypeUnspecified;

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
@interface GTLRCloudIAP_AuditConfig : GTLRObject

/** The configuration for logging of each type of permission. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIAP_AuditLogConfig *> *auditLogConfigs;

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
@interface GTLRCloudIAP_AuditLogConfig : GTLRObject

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
 *    @arg @c kGTLRCloudIAP_AuditLogConfig_LogType_AdminRead Admin reads.
 *        Example: CloudIAM getIamPolicy (Value: "ADMIN_READ")
 *    @arg @c kGTLRCloudIAP_AuditLogConfig_LogType_DataRead Data reads. Example:
 *        CloudSQL Users list (Value: "DATA_READ")
 *    @arg @c kGTLRCloudIAP_AuditLogConfig_LogType_DataWrite Data writes.
 *        Example: CloudSQL Users create (Value: "DATA_WRITE")
 *    @arg @c kGTLRCloudIAP_AuditLogConfig_LogType_LogTypeUnspecified Default
 *        case. Should never be this. (Value: "LOG_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *logType;

@end


/**
 *  Associates `members` with a `role`.
 */
@interface GTLRCloudIAP_Binding : GTLRObject

/**
 *  Unimplemented. The condition that is associated with this binding.
 *  NOTE: an unsatisfied condition will not allow user access via current
 *  binding. Different bindings, including their conditions, are examined
 *  independently.
 */
@property(nonatomic, strong, nullable) GTLRCloudIAP_Expr *condition;

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
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudIAP_Empty : GTLRObject
@end


/**
 *  Represents an expression text. Example:
 *  title: "User account presence"
 *  description: "Determines whether the request has a user account"
 *  expression: "size(request.user) > 0"
 */
@interface GTLRCloudIAP_Expr : GTLRObject

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
 *  Request message for `GetIamPolicy` method.
 */
@interface GTLRCloudIAP_GetIamPolicyRequest : GTLRObject
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
@interface GTLRCloudIAP_Policy : GTLRObject

/** Specifies cloud audit logging configuration for this policy. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIAP_AuditConfig *> *auditConfigs;

/**
 *  Associates a list of `members` to a `role`.
 *  `bindings` with no members will result in an error.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIAP_Binding *> *bindings;

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
 *  Request message for `SetIamPolicy` method.
 */
@interface GTLRCloudIAP_SetIamPolicyRequest : GTLRObject

/**
 *  REQUIRED: The complete policy to be applied to the `resource`. The size of
 *  the policy is limited to a few 10s of KB. An empty policy is a
 *  valid policy but certain Cloud Platform services (such as Projects)
 *  might reject them.
 */
@property(nonatomic, strong, nullable) GTLRCloudIAP_Policy *policy;

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
@interface GTLRCloudIAP_TestIamPermissionsRequest : GTLRObject

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
@interface GTLRCloudIAP_TestIamPermissionsResponse : GTLRObject

/**
 *  A subset of `TestPermissionsRequest.permissions` that the caller is
 *  allowed.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
