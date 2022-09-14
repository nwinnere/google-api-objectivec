// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Composer API (composer/v1)
// Description:
//   Manages Apache Airflow environments on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/composer/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudComposer_Environment;
@class GTLRCloudComposer_Environment_Labels;
@class GTLRCloudComposer_EnvironmentConfig;
@class GTLRCloudComposer_ImageVersion;
@class GTLRCloudComposer_NodeConfig;
@class GTLRCloudComposer_Operation;
@class GTLRCloudComposer_Operation_Metadata;
@class GTLRCloudComposer_Operation_Response;
@class GTLRCloudComposer_SoftwareConfig;
@class GTLRCloudComposer_SoftwareConfig_AirflowConfigOverrides;
@class GTLRCloudComposer_SoftwareConfig_EnvVariables;
@class GTLRCloudComposer_SoftwareConfig_PypiPackages;
@class GTLRCloudComposer_Status;
@class GTLRCloudComposer_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudComposer_Environment.state

/**
 *  The environment is in the process of being created.
 *
 *  Value: "CREATING"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_Environment_State_Creating;
/**
 *  The environment is undergoing deletion. It cannot be used.
 *
 *  Value: "DELETING"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_Environment_State_Deleting;
/**
 *  The environment has encountered an error and cannot be used.
 *
 *  Value: "ERROR"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_Environment_State_Error;
/**
 *  The environment is currently running and healthy. It is ready for use.
 *
 *  Value: "RUNNING"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_Environment_State_Running;
/**
 *  The state of the environment is unknown.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_Environment_State_StateUnspecified;
/**
 *  The environment is being updated. It remains usable but cannot receive
 *  additional update requests or be deleted at this time.
 *
 *  Value: "UPDATING"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_Environment_State_Updating;

// ----------------------------------------------------------------------------
// GTLRCloudComposer_OperationMetadata.operationType

/**
 *  A resource creation operation.
 *
 *  Value: "CREATE"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_Create;
/**
 *  A resource deletion operation.
 *
 *  Value: "DELETE"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_Delete;
/**
 *  Unused.
 *
 *  Value: "TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_TypeUnspecified;
/**
 *  A resource update operation.
 *
 *  Value: "UPDATE"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_OperationMetadata_OperationType_Update;

// ----------------------------------------------------------------------------
// GTLRCloudComposer_OperationMetadata.state

/**
 *  The operation is no longer running but did not succeed.
 *
 *  Value: "FAILED"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_OperationMetadata_State_Failed;
/**
 *  The operation has been created but is not yet started.
 *
 *  Value: "PENDING"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_OperationMetadata_State_Pending;
/**
 *  The operation is underway.
 *
 *  Value: "RUNNING"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_OperationMetadata_State_Running;
/**
 *  Unused.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_OperationMetadata_State_StateUnspecified;
/**
 *  The operation completed successfully.
 *
 *  Value: "SUCCEEDED"
 */
GTLR_EXTERN NSString * const kGTLRCloudComposer_OperationMetadata_State_Succeeded;
/** Value: "SUCCESSFUL" */
GTLR_EXTERN NSString * const kGTLRCloudComposer_OperationMetadata_State_Successful;

/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudComposer_Empty : GTLRObject
@end


/**
 *  An environment for running orchestration tasks.
 */
@interface GTLRCloudComposer_Environment : GTLRObject

/** Configuration parameters for this environment. */
@property(nonatomic, strong, nullable) GTLRCloudComposer_EnvironmentConfig *config;

/**
 *  Output only.
 *  The time at which this environment was created.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Optional. User-defined labels for this environment.
 *  The labels map can contain no more than 64 entries. Entries of the labels
 *  map are UTF8 strings that comply with the following restrictions:
 *  * Keys must conform to regexp: \\p{Ll}\\p{Lo}{0,62}
 *  * Values must conform to regexp: [\\p{Ll}\\p{Lo}\\p{N}_-]{0,63}
 *  * Both keys and values are additionally constrained to be <= 128 bytes in
 *  size.
 */
@property(nonatomic, strong, nullable) GTLRCloudComposer_Environment_Labels *labels;

/**
 *  The resource name of the environment, in the form:
 *  "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The current state of the environment.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudComposer_Environment_State_Creating The environment is
 *        in the process of being created. (Value: "CREATING")
 *    @arg @c kGTLRCloudComposer_Environment_State_Deleting The environment is
 *        undergoing deletion. It cannot be used. (Value: "DELETING")
 *    @arg @c kGTLRCloudComposer_Environment_State_Error The environment has
 *        encountered an error and cannot be used. (Value: "ERROR")
 *    @arg @c kGTLRCloudComposer_Environment_State_Running The environment is
 *        currently running and healthy. It is ready for use. (Value: "RUNNING")
 *    @arg @c kGTLRCloudComposer_Environment_State_StateUnspecified The state of
 *        the environment is unknown. (Value: "STATE_UNSPECIFIED")
 *    @arg @c kGTLRCloudComposer_Environment_State_Updating The environment is
 *        being updated. It remains usable but cannot receive
 *        additional update requests or be deleted at this time. (Value:
 *        "UPDATING")
 */
@property(nonatomic, copy, nullable) NSString *state;

/**
 *  Output only.
 *  The time at which this environment was last modified.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

/**
 *  Output only.
 *  The UUID (Universally Unique IDentifier) associated with this environment.
 *  This value is generated when the environment is created.
 */
@property(nonatomic, copy, nullable) NSString *uuid;

@end


/**
 *  Optional. User-defined labels for this environment.
 *  The labels map can contain no more than 64 entries. Entries of the labels
 *  map are UTF8 strings that comply with the following restrictions:
 *  * Keys must conform to regexp: \\p{Ll}\\p{Lo}{0,62}
 *  * Values must conform to regexp: [\\p{Ll}\\p{Lo}\\p{N}_-]{0,63}
 *  * Both keys and values are additionally constrained to be <= 128 bytes in
 *  size.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudComposer_Environment_Labels : GTLRObject
@end


/**
 *  Configuration information for an environment.
 */
@interface GTLRCloudComposer_EnvironmentConfig : GTLRObject

/**
 *  Output only.
 *  The URI of the Apache Airflow Web UI hosted within this environment (see
 *  [Airflow web
 *  interface](/composer/docs/how-to/accessing/airflow-web-interface)).
 */
@property(nonatomic, copy, nullable) NSString *airflowUri;

/**
 *  Output only.
 *  The Cloud Storage prefix of the DAGs for this environment. Although Cloud
 *  Storage objects reside in a flat namespace, a hierarchical file tree
 *  can be simulated using "/"-delimited object name prefixes. DAG objects for
 *  this environment reside in a simulated directory with the given prefix.
 */
@property(nonatomic, copy, nullable) NSString *dagGcsPrefix;

/**
 *  Output only.
 *  The Kubernetes Engine cluster used to run this environment.
 */
@property(nonatomic, copy, nullable) NSString *gkeCluster;

/** The configuration used for the Kubernetes Engine cluster. */
@property(nonatomic, strong, nullable) GTLRCloudComposer_NodeConfig *nodeConfig;

/**
 *  The number of nodes in the Kubernetes Engine cluster that will be
 *  used to run this environment.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *nodeCount;

/** The configuration settings for software inside the environment. */
@property(nonatomic, strong, nullable) GTLRCloudComposer_SoftwareConfig *softwareConfig;

@end


/**
 *  ImageVersion information
 */
@interface GTLRCloudComposer_ImageVersion : GTLRObject

/**
 *  The string identifier of the ImageVersion, in the form:
 *  "composer-x.y.z-airflow-a.b(.c)"
 */
@property(nonatomic, copy, nullable) NSString *imageVersionId;

/**
 *  Whether this is the default ImageVersion used by Composer during
 *  environment creation if no input ImageVersion is specified.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isDefault;

/** supported python versions */
@property(nonatomic, strong, nullable) NSArray<NSString *> *supportedPythonVersions;

@end


/**
 *  The environments in a project and location.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "environments" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudComposer_ListEnvironmentsResponse : GTLRCollectionObject

/**
 *  The list of environments returned by a ListEnvironmentsRequest.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudComposer_Environment *> *environments;

/** The page token used to query for the next page if one exists. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The ImageVersions in a project and location.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "imageVersions" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudComposer_ListImageVersionsResponse : GTLRCollectionObject

/**
 *  The list of supported ImageVersions in a location.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudComposer_ImageVersion *> *imageVersions;

/** The page token used to query for the next page if one exists. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The response message for Operations.ListOperations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudComposer_ListOperationsResponse : GTLRCollectionObject

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of operations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudComposer_Operation *> *operations;

@end


/**
 *  The configuration information for the Kubernetes Engine nodes running
 *  the Apache Airflow software.
 */
@interface GTLRCloudComposer_NodeConfig : GTLRObject

/**
 *  Optional. The disk size in GB used for node VMs. Minimum size is 20GB.
 *  If unspecified, defaults to 100GB. Cannot be updated.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *diskSizeGb;

/**
 *  Optional. The Compute Engine [zone](/compute/docs/regions-zones) in which
 *  to deploy the VMs used to run the Apache Airflow software, specified as a
 *  [relative resource
 *  name](/apis/design/resource_names#relative_resource_name).
 *  For example: "projects/{projectId}/zones/{zoneId}".
 *  This `location` must belong to the enclosing environment's project and
 *  location. If both this field and `nodeConfig.machineType` are specified,
 *  `nodeConfig.machineType` must belong to this `location`; if both are
 *  unspecified, the service will pick a zone in the Compute Engine region
 *  corresponding to the Cloud Composer location, and propagate that choice to
 *  both fields. If only one field (`location` or `nodeConfig.machineType`) is
 *  specified, the location information from the specified field will be
 *  propagated to the unspecified field.
 */
@property(nonatomic, copy, nullable) NSString *location;

/**
 *  Optional. The Compute Engine
 *  [machine type](/compute/docs/machine-types) used for cluster instances,
 *  specified as a
 *  [relative resource
 *  name](/apis/design/resource_names#relative_resource_name).
 *  For example:
 *  "projects/{projectId}/zones/{zoneId}/machineTypes/{machineTypeId}".
 *  The `machineType` must belong to the enclosing environment's project and
 *  location. If both this field and `nodeConfig.location` are specified,
 *  this `machineType` must belong to the `nodeConfig.location`; if both are
 *  unspecified, the service will pick a zone in the Compute Engine region
 *  corresponding to the Cloud Composer location, and propagate that choice to
 *  both fields. If exactly one of this field and `nodeConfig.location` is
 *  specified, the location information from the specified field will be
 *  propagated to the unspecified field.
 *  If this field is unspecified, the `machineTypeId` defaults
 *  to "n1-standard-1".
 */
@property(nonatomic, copy, nullable) NSString *machineType;

/**
 *  Optional. The Compute Engine network to be used for machine
 *  communications, specified as a
 *  [relative resource
 *  name](/apis/design/resource_names#relative_resource_name).
 *  For example: "projects/{projectId}/global/networks/{networkId}".
 *  [Shared VPC](/vpc/docs/shared-vpc) is not currently supported. The
 *  network must belong to the environment's project. If unspecified, the
 *  "default" network ID in the environment's project is used. If a
 *  [Custom Subnet Network](/vpc/docs/vpc#vpc_networks_and_subnets)
 *  is provided, `nodeConfig.subnetwork` must also be provided.
 */
@property(nonatomic, copy, nullable) NSString *network;

/**
 *  Optional. The set of Google API scopes to be made available on all
 *  node VMs. If `oauth_scopes` is empty, defaults to
 *  ["https://www.googleapis.com/auth/cloud-platform"]. Cannot be updated.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *oauthScopes;

/**
 *  Optional. The Google Cloud Platform Service Account to be used by the node
 *  VMs. If a service account is not specified, the "default" Compute Engine
 *  service account is used. Cannot be updated.
 */
@property(nonatomic, copy, nullable) NSString *serviceAccount;

/**
 *  Optional. The Compute Engine subnetwork to be used for machine
 *  communications, specified as a
 *  [relative resource
 *  name](/apis/design/resource_names#relative_resource_name).
 *  For example:
 *  "projects/{projectId}/regions/{regionId}/subnetworks/{subnetworkId}"
 *  If a subnetwork is provided, `nodeConfig.network` must also be provided,
 *  and the subnetwork must belong to the enclosing environment's project and
 *  location.
 */
@property(nonatomic, copy, nullable) NSString *subnetwork;

/**
 *  Optional. The list of instance tags applied to all node VMs. Tags are used
 *  to identify valid sources or targets for network firewalls. Each tag within
 *  the list must comply with [RFC1035](https://www.ietf.org/rfc/rfc1035.txt).
 *  Cannot be updated.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *tags;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRCloudComposer_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRCloudComposer_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRCloudComposer_Operation_Metadata *metadata;

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
@property(nonatomic, strong, nullable) GTLRCloudComposer_Operation_Response *response;

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
@interface GTLRCloudComposer_Operation_Metadata : GTLRObject
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
@interface GTLRCloudComposer_Operation_Response : GTLRObject
@end


/**
 *  Metadata describing an operation.
 */
@interface GTLRCloudComposer_OperationMetadata : GTLRObject

/**
 *  Output only.
 *  The time the operation was submitted to the server.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Output only.
 *  The time when the operation terminated, regardless of its success.
 *  This field is unset if the operation is still ongoing.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/**
 *  Output only.
 *  The type of operation being performed.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudComposer_OperationMetadata_OperationType_Create A
 *        resource creation operation. (Value: "CREATE")
 *    @arg @c kGTLRCloudComposer_OperationMetadata_OperationType_Delete A
 *        resource deletion operation. (Value: "DELETE")
 *    @arg @c kGTLRCloudComposer_OperationMetadata_OperationType_TypeUnspecified
 *        Unused. (Value: "TYPE_UNSPECIFIED")
 *    @arg @c kGTLRCloudComposer_OperationMetadata_OperationType_Update A
 *        resource update operation. (Value: "UPDATE")
 */
@property(nonatomic, copy, nullable) NSString *operationType;

/**
 *  Output only.
 *  The resource being operated on, as a [relative resource name](
 *  /apis/design/resource_names#relative_resource_name).
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Output only.
 *  The UUID of the resource being operated on.
 */
@property(nonatomic, copy, nullable) NSString *resourceUuid;

/**
 *  Output only.
 *  The current operation state.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudComposer_OperationMetadata_State_Failed The operation is
 *        no longer running but did not succeed. (Value: "FAILED")
 *    @arg @c kGTLRCloudComposer_OperationMetadata_State_Pending The operation
 *        has been created but is not yet started. (Value: "PENDING")
 *    @arg @c kGTLRCloudComposer_OperationMetadata_State_Running The operation
 *        is underway. (Value: "RUNNING")
 *    @arg @c kGTLRCloudComposer_OperationMetadata_State_StateUnspecified
 *        Unused. (Value: "STATE_UNSPECIFIED")
 *    @arg @c kGTLRCloudComposer_OperationMetadata_State_Succeeded The operation
 *        completed successfully. (Value: "SUCCEEDED")
 *    @arg @c kGTLRCloudComposer_OperationMetadata_State_Successful Value
 *        "SUCCESSFUL"
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  Specifies the selection and configuration of software inside the
 *  environment.
 */
@interface GTLRCloudComposer_SoftwareConfig : GTLRObject

/**
 *  Optional. Apache Airflow configuration properties to override.
 *  Property keys contain the section and property names, separated by a hyphen,
 *  for example "core-dags_are_paused_at_creation". Section names must not
 *  contain hyphens ("-"), opening square brackets ("["), or closing square
 *  brackets ("]"). The property name must not be empty and must not contain
 *  an equals sign ("=") or semicolon (";"). Section and property names must
 *  not contain a period ("."). Apache Airflow configuration property names
 *  must be written in [snake_case](https://en.wikipedia.org/wiki/Snake_case).
 *  Property values can contain any character, and can be written in any
 *  lower/upper case format.
 *  Certain Apache Airflow configuration property values are
 *  [blacklisted](/composer/docs/how-to/managing/setting-airflow-configurations#airflow_configuration_blacklists),
 *  and cannot be overridden.
 */
@property(nonatomic, strong, nullable) GTLRCloudComposer_SoftwareConfig_AirflowConfigOverrides *airflowConfigOverrides;

/**
 *  Optional. Additional environment variables to provide to the Apache Airflow
 *  scheduler, worker, and webserver processes.
 *  Environment variable names must match the regular expression
 *  `a-zA-Z_*`. They cannot specify Apache Airflow
 *  software configuration overrides (they cannot match the regular expression
 *  `AIRFLOW__[A-Z0-9_]+__[A-Z0-9_]+`), and they cannot match any of the
 *  following reserved names:
 *  * `AIRFLOW_HOME`
 *  * `C_FORCE_ROOT`
 *  * `CONTAINER_NAME`
 *  * `DAGS_FOLDER`
 *  * `GCP_PROJECT`
 *  * `GCS_BUCKET`
 *  * `GKE_CLUSTER_NAME`
 *  * `SQL_DATABASE`
 *  * `SQL_INSTANCE`
 *  * `SQL_PASSWORD`
 *  * `SQL_PROJECT`
 *  * `SQL_REGION`
 *  * `SQL_USER`
 */
@property(nonatomic, strong, nullable) GTLRCloudComposer_SoftwareConfig_EnvVariables *envVariables;

/**
 *  The version of the software running in the environment.
 *  This encapsulates both the version of Cloud Composer functionality and the
 *  version of Apache Airflow. It must match the regular expression
 *  `composer-([0-9]+\\.[0-9]+\\.[0-9]+|latest)-airflow-[0-9]+\\.[0-9]+(\\.[0-9]+.*)?`.
 *  When used as input, the server also checks if the provided version is
 *  supported and denies the request for an unsupported version.
 *  The Cloud Composer portion of the version is a
 *  [semantic version](https://semver.org) or `latest`. When the patch version
 *  is omitted, the current Cloud Composer patch version is selected.
 *  When `latest` is provided instead of an explicit version number,
 *  the server replaces `latest` with the current Cloud Composer version
 *  and stores that version number in the same field.
 *  The portion of the image version that follows <em>airflow-</em> is an
 *  official Apache Airflow repository
 *  [release name](https://github.com/apache/incubator-airflow/releases).
 *  See also [Version
 *  List](/composer/docs/concepts/versioning/composer-versions).
 */
@property(nonatomic, copy, nullable) NSString *imageVersion;

/**
 *  Optional. Custom Python Package Index (PyPI) packages to be installed in
 *  the environment.
 *  Keys refer to the lowercase package name such as "numpy"
 *  and values are the lowercase extras and version specifier such as
 *  "==1.12.0", "[devel,gcp_api]", or "[devel]>=1.8.2, <1.9.2". To specify a
 *  package without pinning it to a version specifier, use the empty string as
 *  the value.
 */
@property(nonatomic, strong, nullable) GTLRCloudComposer_SoftwareConfig_PypiPackages *pypiPackages;

/**
 *  Optional. The major version of Python used to run the Apache Airflow
 *  scheduler, worker, and webserver processes.
 *  Can be set to '2' or '3'. If not specified, the default is '2'. Cannot be
 *  updated.
 */
@property(nonatomic, copy, nullable) NSString *pythonVersion;

@end


/**
 *  Optional. Apache Airflow configuration properties to override.
 *  Property keys contain the section and property names, separated by a hyphen,
 *  for example "core-dags_are_paused_at_creation". Section names must not
 *  contain hyphens ("-"), opening square brackets ("["), or closing square
 *  brackets ("]"). The property name must not be empty and must not contain
 *  an equals sign ("=") or semicolon (";"). Section and property names must
 *  not contain a period ("."). Apache Airflow configuration property names
 *  must be written in [snake_case](https://en.wikipedia.org/wiki/Snake_case).
 *  Property values can contain any character, and can be written in any
 *  lower/upper case format.
 *  Certain Apache Airflow configuration property values are
 *  [blacklisted](/composer/docs/how-to/managing/setting-airflow-configurations#airflow_configuration_blacklists),
 *  and cannot be overridden.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudComposer_SoftwareConfig_AirflowConfigOverrides : GTLRObject
@end


/**
 *  Optional. Additional environment variables to provide to the Apache Airflow
 *  scheduler, worker, and webserver processes.
 *  Environment variable names must match the regular expression
 *  `a-zA-Z_*`. They cannot specify Apache Airflow
 *  software configuration overrides (they cannot match the regular expression
 *  `AIRFLOW__[A-Z0-9_]+__[A-Z0-9_]+`), and they cannot match any of the
 *  following reserved names:
 *  * `AIRFLOW_HOME`
 *  * `C_FORCE_ROOT`
 *  * `CONTAINER_NAME`
 *  * `DAGS_FOLDER`
 *  * `GCP_PROJECT`
 *  * `GCS_BUCKET`
 *  * `GKE_CLUSTER_NAME`
 *  * `SQL_DATABASE`
 *  * `SQL_INSTANCE`
 *  * `SQL_PASSWORD`
 *  * `SQL_PROJECT`
 *  * `SQL_REGION`
 *  * `SQL_USER`
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudComposer_SoftwareConfig_EnvVariables : GTLRObject
@end


/**
 *  Optional. Custom Python Package Index (PyPI) packages to be installed in
 *  the environment.
 *  Keys refer to the lowercase package name such as "numpy"
 *  and values are the lowercase extras and version specifier such as
 *  "==1.12.0", "[devel,gcp_api]", or "[devel]>=1.8.2, <1.9.2". To specify a
 *  package without pinning it to a version specifier, use the empty string as
 *  the value.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudComposer_SoftwareConfig_PypiPackages : GTLRObject
@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). The error model is designed to be:
 *  - Simple to use and understand for most users
 *  - Flexible enough to meet unexpected needs
 *  # Overview
 *  The `Status` message contains three pieces of data: error code, error
 *  message, and error details. The error code should be an enum value of
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
@interface GTLRCloudComposer_Status : GTLRObject

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
@property(nonatomic, strong, nullable) NSArray<GTLRCloudComposer_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudComposer_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudComposer_Status_Details_Item : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
