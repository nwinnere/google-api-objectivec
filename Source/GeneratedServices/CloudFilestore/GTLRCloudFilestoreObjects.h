// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Filestore API (file/v1beta1)
// Description:
//   The Cloud Filestore API is used for creating and managing cloud file
//   servers.
// Documentation:
//   https://cloud.google.com/filestore/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudFilestore_ClientList;
@class GTLRCloudFilestore_Export;
@class GTLRCloudFilestore_FileShareConfig;
@class GTLRCloudFilestore_Instance;
@class GTLRCloudFilestore_Instance_Labels;
@class GTLRCloudFilestore_Location;
@class GTLRCloudFilestore_Location_Labels;
@class GTLRCloudFilestore_Location_Metadata;
@class GTLRCloudFilestore_NetworkConfig;
@class GTLRCloudFilestore_NfsExport;
@class GTLRCloudFilestore_Operation;
@class GTLRCloudFilestore_Operation_Metadata;
@class GTLRCloudFilestore_Operation_Response;
@class GTLRCloudFilestore_SmbExport;
@class GTLRCloudFilestore_Status;
@class GTLRCloudFilestore_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudFilestore_FileShareConfig.protocols

/** Value: "FILE_SHARE_PROTOCOL_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_FileShareConfig_Protocols_FileShareProtocolUnspecified;
/** Value: "NFS_V3" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_FileShareConfig_Protocols_NfsV3;
/** Value: "NFS_V4_0" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_FileShareConfig_Protocols_NfsV40;
/** Value: "NFS_V4_1" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_FileShareConfig_Protocols_NfsV41;
/** Value: "SMB_V2_0" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_FileShareConfig_Protocols_SmbV20;
/** Value: "SMB_V2_1" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_FileShareConfig_Protocols_SmbV21;
/** Value: "SMB_V3" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_FileShareConfig_Protocols_SmbV3;

// ----------------------------------------------------------------------------
// GTLRCloudFilestore_Instance.state

/**
 *  The instance is being created.
 *
 *  Value: "CREATING"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_Instance_State_Creating;
/**
 *  The instance is shutting down.
 *
 *  Value: "DELETING"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_Instance_State_Deleting;
/**
 *  The instance is experiencing an issue and might be unusable. You can get
 *  further details from the `statusMessage` field of the `Instance`
 *  resource.
 *
 *  Value: "ERROR"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_Instance_State_Error;
/**
 *  The instance is available for use.
 *
 *  Value: "READY"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_Instance_State_Ready;
/**
 *  Work is being done on the instance. You can get further details from the
 *  `statusMessage` field of the `Instance` resource.
 *
 *  Value: "REPAIRING"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_Instance_State_Repairing;
/**
 *  State not set.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_Instance_State_StateUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudFilestore_Instance.tier

/**
 *  PREMIUM tier.
 *
 *  Value: "PREMIUM"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_Instance_Tier_Premium;
/**
 *  STANDARD tier.
 *
 *  Value: "STANDARD"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_Instance_Tier_Standard;
/**
 *  Not set.
 *
 *  Value: "TIER_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_Instance_Tier_TierUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudFilestore_NetworkConfig.modes

/** Value: "ADDRESS_MODE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_NetworkConfig_Modes_AddressModeUnspecified;
/** Value: "MODE_IPV4" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_NetworkConfig_Modes_ModeIpv4;
/** Value: "MODE_IPV6" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_NetworkConfig_Modes_ModeIpv6;

// ----------------------------------------------------------------------------
// GTLRCloudFilestore_NfsExport.protocols

/** Value: "NETWORK_PROTOCOLS_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_NfsExport_Protocols_NetworkProtocolsUnspecified;
/** Value: "TCP" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_NfsExport_Protocols_Tcp;
/** Value: "UDP" */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_NfsExport_Protocols_Udp;

// ----------------------------------------------------------------------------
// GTLRCloudFilestore_NfsExport.squash

/**
 *  All UIDs map to anon_uid and all GIDs map to anon_gid.
 *
 *  Value: "ALL"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_NfsExport_Squash_All;
/**
 *  UID 0 maps to anon_uid and GID 0 maps to anon_gid.
 *
 *  Value: "ROOT"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_NfsExport_Squash_Root;
/**
 *  No mapping.
 *
 *  Value: "SQUASH_MODE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudFilestore_NfsExport_Squash_SquashModeUnspecified;

/**
 *  The request message for Operations.CancelOperation.
 */
@interface GTLRCloudFilestore_CancelOperationRequest : GTLRObject
@end


/**
 *  The sets of network addresses and DNS names for hosts to which a given
 *  export or share should be allowed or denied.
 */
@interface GTLRCloudFilestore_ClientList : GTLRObject

/** DNS names of hosts, with optional wildcards. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *hostNames;

/**
 *  IPv4 addresses in the format
 *  {octet 1}.{octet 2}.{octet 3}.{octet 4}.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *ipAddresses;

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
@interface GTLRCloudFilestore_Empty : GTLRObject
@end


/**
 *  File share export specification.
 */
@interface GTLRCloudFilestore_Export : GTLRObject

/** The clients which may connect. */
@property(nonatomic, strong, nullable) GTLRCloudFilestore_ClientList *allowedClients;

/**
 *  Writes may be completed when not yet on stable storage.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *async;

/** The clients which may not connect. */
@property(nonatomic, strong, nullable) GTLRCloudFilestore_ClientList *deniedClients;

/**
 *  Networks on which the export should appear.
 *  If none are specified, the default is all networks to which the instance is
 *  connected to.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudFilestore_NetworkConfig *> *networks;

/** Export rule for NFS */
@property(nonatomic, strong, nullable) GTLRCloudFilestore_NfsExport *nfsExport;

/** Path to export (either "" or of the form /file_share_name[/subdir]). */
@property(nonatomic, copy, nullable) NSString *path;

/**
 *  Whether the file share should be exported as read-only.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *readOnly;

/** Export rule for SMB */
@property(nonatomic, strong, nullable) GTLRCloudFilestore_SmbExport *smbExport;

@end


/**
 *  File share configuration for the instance.
 */
@interface GTLRCloudFilestore_FileShareConfig : GTLRObject

/**
 *  File share capacity in gigabytes (GB).
 *  Cloud Filestore defines 1 GB as 1024^3 bytes.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *capacityGb;

/**
 *  Delete requested. The file share will be deleted.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *deleted;

/**
 *  Service enabled.
 *  When enabled, the instance exposes the exports to the user for mounting.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *enabled;

/**
 *  Exports.
 *  If protocols and exports are both zero-length, a default protocol of
 *  NFSV3 and a default export of "*" are provided, and enabled is set to
 *  true.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudFilestore_Export *> *exports;

/** The name of the file share (must be 16 characters or less). */
@property(nonatomic, copy, nullable) NSString *name;

/** Protocols supported. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *protocols;

@end


/**
 *  A Cloud Filestore instance.
 */
@interface GTLRCloudFilestore_Instance : GTLRObject

/**
 *  Output only.
 *  The time when the instance was created.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Optional. A description of the instance (2048 characters or less).
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Server-specified ETag for the instance resource to prevent simultaneous
 *  updates from overwriting each other.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  File system shares on the instance.
 *  For this version, only a single file share is supported.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudFilestore_FileShareConfig *> *fileShares;

/** Resource labels to represent user provided metadata. */
@property(nonatomic, strong, nullable) GTLRCloudFilestore_Instance_Labels *labels;

/**
 *  The logging service the instance should use to write logs.
 *  Currently available options:
 *  * `logging.googleapis.com` - the Google Cloud Logging service.
 *  * `none` - no logs will be exported from the instance.
 *  * if left as an empty string,`logging.googleapis.com` will be used.
 */
@property(nonatomic, copy, nullable) NSString *loggingService;

/**
 *  The monitoring service the instance should use to write metrics.
 *  Currently available options:
 *  * `monitoring.googleapis.com` - the Google Cloud Monitoring service.
 *  * `none` - no metrics will be exported from the instance.
 *  * if left as an empty string, `monitoring.googleapis.com` will be used.
 */
@property(nonatomic, copy, nullable) NSString *monitoringService;

/**
 *  Output only.
 *  The resource name of the instance, in the format
 *  projects/{project_id}/locations/{location_id}/instances/{instance_id}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  VPC networks to which the instance is connected.
 *  For this version, only a single network is supported.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudFilestore_NetworkConfig *> *networks;

/**
 *  Output only.
 *  The instance state.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudFilestore_Instance_State_Creating The instance is being
 *        created. (Value: "CREATING")
 *    @arg @c kGTLRCloudFilestore_Instance_State_Deleting The instance is
 *        shutting down. (Value: "DELETING")
 *    @arg @c kGTLRCloudFilestore_Instance_State_Error The instance is
 *        experiencing an issue and might be unusable. You can get
 *        further details from the `statusMessage` field of the `Instance`
 *        resource. (Value: "ERROR")
 *    @arg @c kGTLRCloudFilestore_Instance_State_Ready The instance is available
 *        for use. (Value: "READY")
 *    @arg @c kGTLRCloudFilestore_Instance_State_Repairing Work is being done on
 *        the instance. You can get further details from the
 *        `statusMessage` field of the `Instance` resource. (Value: "REPAIRING")
 *    @arg @c kGTLRCloudFilestore_Instance_State_StateUnspecified State not set.
 *        (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

/**
 *  Output only.
 *  Additional information about the instance state, if available.
 */
@property(nonatomic, copy, nullable) NSString *statusMessage;

/**
 *  The service tier of the instance.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudFilestore_Instance_Tier_Premium PREMIUM tier. (Value:
 *        "PREMIUM")
 *    @arg @c kGTLRCloudFilestore_Instance_Tier_Standard STANDARD tier. (Value:
 *        "STANDARD")
 *    @arg @c kGTLRCloudFilestore_Instance_Tier_TierUnspecified Not set. (Value:
 *        "TIER_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *tier;

@end


/**
 *  Resource labels to represent user provided metadata.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudFilestore_Instance_Labels : GTLRObject
@end


/**
 *  ListInstancesResponse is the result of ListInstancesRequest.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "instances" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudFilestore_ListInstancesResponse : GTLRCollectionObject

/**
 *  A list of instances in the project for the specified location.
 *  If the {location} value in the request is "-", the response contains a list
 *  of instances from all locations. If any location is unreachable, the
 *  response will only return instances in reachable locations and the
 *  "unreachable" field will be populated with a list of unreachable locations.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudFilestore_Instance *> *instances;

/**
 *  The token you can use to retrieve the next page of results. Not returned
 *  if there are no more results in the list.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/** Locations that could not be reached. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *unreachable;

@end


/**
 *  The response message for Locations.ListLocations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "locations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudFilestore_ListLocationsResponse : GTLRCollectionObject

/**
 *  A list of locations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudFilestore_Location *> *locations;

/** The standard List next-page token. */
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
@interface GTLRCloudFilestore_ListOperationsResponse : GTLRCollectionObject

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of operations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudFilestore_Operation *> *operations;

@end


/**
 *  A resource that represents Google Cloud Platform location.
 */
@interface GTLRCloudFilestore_Location : GTLRObject

/**
 *  The friendly name for this location, typically a nearby city name.
 *  For example, "Tokyo".
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 */
@property(nonatomic, strong, nullable) GTLRCloudFilestore_Location_Labels *labels;

/** The canonical id for this location. For example: `"us-east1"`. */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 */
@property(nonatomic, strong, nullable) GTLRCloudFilestore_Location_Metadata *metadata;

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
@interface GTLRCloudFilestore_Location_Labels : GTLRObject
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
@interface GTLRCloudFilestore_Location_Metadata : GTLRObject
@end


/**
 *  Network configuration for the instance.
 */
@interface GTLRCloudFilestore_NetworkConfig : GTLRObject

/**
 *  Output only.
 *  IPv4 addresses in the format
 *  {octet 1}.{octet 2}.{octet 3}.{octet 4} or IPv6 addresses in the format
 *  {block 1}:{block 2}:{block 3}:{block 4}:{block 5}:{block 6}:{block 7}:{block
 *  8}.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *ipAddresses;

/**
 *  Internet protocol versions for which the instance has IP addresses
 *  assigned. For this version, only MODE_IPV4 is supported.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *modes;

/**
 *  The name of the Google Compute Engine
 *  [VPC network](/compute/docs/networks-and-firewalls#networks) to which the
 *  instance is connected.
 */
@property(nonatomic, copy, nullable) NSString *network;

/**
 *  A /29 CIDR block in one of the
 *  [internal IP address
 *  ranges](https://www.arin.net/knowledge/address_filters.html)
 *  that identifies the range of IP addresses reserved for this
 *  instance. For example, 10.0.0.0/29 or 192.168.0.0/29. The range you specify
 *  can't overlap with either existing subnets or assigned IP address ranges
 *  for other Cloud Filestore instances in the selected VPC network.
 */
@property(nonatomic, copy, nullable) NSString *reservedIpRange;

/**
 *  Output only.
 *  The name of the Google Compute Engine
 *  [subnetwork](/compute/docs/subnetworks) to which the
 *  instance is connected.
 */
@property(nonatomic, copy, nullable) NSString *subnetwork;

@end


/**
 *  NfsExport specifies attributes of a given NFS export rule.
 */
@interface GTLRCloudFilestore_NfsExport : GTLRObject

/**
 *  GID for anonymous or squashed GIDs.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *anonymousGid;

/**
 *  UID for anonymous or squashed UIDs.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *anonymousUid;

/**
 *  Network transport protocols to be enabled.
 *  The default is TCP.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *protocols;

/**
 *  The mode of mapping of UIDs and GIDs (if any).
 *
 *  Likely values:
 *    @arg @c kGTLRCloudFilestore_NfsExport_Squash_All All UIDs map to anon_uid
 *        and all GIDs map to anon_gid. (Value: "ALL")
 *    @arg @c kGTLRCloudFilestore_NfsExport_Squash_Root UID 0 maps to anon_uid
 *        and GID 0 maps to anon_gid. (Value: "ROOT")
 *    @arg @c kGTLRCloudFilestore_NfsExport_Squash_SquashModeUnspecified No
 *        mapping. (Value: "SQUASH_MODE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *squash;

/**
 *  If unauthenticated_locks_allowed is true, locking requests do not require
 *  authentication.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *unauthenticatedLocksAllowed;

/**
 *  If user_ports_allowed is true, client ports greater than or equal to 1024
 *  are allowed.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *userPortsAllowed;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRCloudFilestore_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRCloudFilestore_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRCloudFilestore_Operation_Metadata *metadata;

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
@property(nonatomic, strong, nullable) GTLRCloudFilestore_Operation_Response *response;

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
@interface GTLRCloudFilestore_Operation_Metadata : GTLRObject
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
@interface GTLRCloudFilestore_Operation_Response : GTLRObject
@end


/**
 *  Represents the metadata of the long-running operation.
 */
@interface GTLRCloudFilestore_OperationMetadata : GTLRObject

/** [Output only] API version used to start the operation. */
@property(nonatomic, copy, nullable) NSString *apiVersion;

/**
 *  [Output only] Identifies whether the user has requested cancellation
 *  of the operation. Operations that have successfully been cancelled
 *  have Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *cancelRequested;

/** [Output only] The time the operation was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** [Output only] The time the operation finished running. */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/** [Output only] Human-readable status of the operation, if any. */
@property(nonatomic, copy, nullable) NSString *statusDetail;

/**
 *  [Output only] Server-defined resource path for the target of the operation.
 */
@property(nonatomic, copy, nullable) NSString *target;

/** [Output only] Name of the verb executed by the operation. */
@property(nonatomic, copy, nullable) NSString *verb;

@end


/**
 *  SmbExport defines attributes of a given SMB sharing rule.
 */
@interface GTLRCloudFilestore_SmbExport : GTLRObject

/**
 *  If true, allow clients to see this share when browsing the instance for
 *  shares.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *browsable;

/** The published name of the share (if different from name). */
@property(nonatomic, copy, nullable) NSString *fileShare;

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
@interface GTLRCloudFilestore_Status : GTLRObject

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
@property(nonatomic, strong, nullable) NSArray<GTLRCloudFilestore_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudFilestore_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudFilestore_Status_Details_Item : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
