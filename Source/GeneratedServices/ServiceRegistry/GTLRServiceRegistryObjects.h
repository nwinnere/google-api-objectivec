// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Service Registry API (serviceregistry/alpha)
// Description:
//   Manages service endpoints in Service Registry and provides integration with
//   DNS for service discovery and name resolution.
// Documentation:
//   https://cloud.google.com/service-registry/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRServiceRegistry_Endpoint;
@class GTLRServiceRegistry_EndpointEndpointVisibility;
@class GTLRServiceRegistry_Operation;
@class GTLRServiceRegistry_OperationError;
@class GTLRServiceRegistry_OperationErrorErrorsItem;
@class GTLRServiceRegistry_OperationWarningsItem;
@class GTLRServiceRegistry_OperationWarningsItemDataItem;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Next available tag: 13
 */
@interface GTLRServiceRegistry_Endpoint : GTLRObject

/**
 *  A user-provided address of the service represented by this endpoint. This
 *  can be an IPv4 or IPv6 address, or a hostname.
 */
@property(copy, nullable) NSString *address;

/** [Output Only] Creation timestamp in RFC3339 text format. */
@property(copy, nullable) NSString *creationTimestamp;

/**
 *  An optional user-provided description of the endpoint.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(copy, nullable) NSString *descriptionProperty;

/**
 *  Supply the fingerprint value for update requests. The fingerprint value is
 *  generated by the server and ensures optimistic concurrency (so that only one
 *  update can be performed at a time). The fingerprint changes after each
 *  update.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(copy, nullable) NSString *fingerprint;

/**
 *  [Output Only] Unique identifier for the resource; defined by the server.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(strong, nullable) NSNumber *identifier;

/**
 *  A user-provided name of the endpoint, which must be unique within the
 *  project. The name must comply with RFC1035. Specifically, the name must be
 *  1-63 characters long and match the regular expression
 *  [a-z]([-a-z0-9]*[a-z0-9])? which means the first character must be a
 *  lowercase letter, and all following characters must be a dash, lowercase
 *  letter, or digit, except the last character, which cannot be a dash.
 */
@property(copy, nullable) NSString *name;

/**
 *  An optional user-provided port of the service represented by this endpoint.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *port;

/** [Output Only] Self link for the endpoint. */
@property(copy, nullable) NSString *selfLink;

/**
 *  [Output Only] The current state of the endpoint, as determined by the
 *  system.
 */
@property(copy, nullable) NSString *state;

/**
 *  The DNS Integration configuration for this endpoint. This must be a list of
 *  fully-qualified URLs to Compute Engine networks.
 */
@property(strong, nullable) GTLRServiceRegistry_EndpointEndpointVisibility *visibility;

@end


/**
 *  GTLRServiceRegistry_EndpointEndpointVisibility
 */
@interface GTLRServiceRegistry_EndpointEndpointVisibility : GTLRObject

/**
 *  [Output Only] Fully qualified domain name for the endpoint; used when
 *  addressing the endpoint from within Compute Networks specified in the
 *  networks field.
 */
@property(copy, nullable) NSString *internalDnsName;

/**
 *  Google Compute Engine networks for which the name of this endpoint should be
 *  resolvable through DNS.
 */
@property(strong, nullable) NSArray<NSString *> *networks;

@end


/**
 *  A response containing a partial list of Endpoints and a page token used to
 *  build the next request if the request has been truncated. Next available
 *  tag: 6
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "endpoints" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRServiceRegistry_EndpointsListResponse : GTLRCollectionObject

/**
 *  The endpoints contained in this response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(strong, nullable) NSArray<GTLRServiceRegistry_Endpoint *> *endpoints;

/**
 *  [Output Only] This token allows you to get the next page of results for list
 *  requests. If the number of results is larger than maxResults, use the
 *  nextPageToken as a value for the query parameter pageToken in the next list
 *  request. Subsequent list requests will have their own nextPageToken to
 *  continue paging through the results.
 */
@property(copy, nullable) NSString *nextPageToken;

@end


/**
 *  An Operation resource, used to manage asynchronous API requests.
 */
@interface GTLRServiceRegistry_Operation : GTLRObject

/** [Output Only] Reserved for future use. */
@property(copy, nullable) NSString *clientOperationId;

/** [Output Only] Creation timestamp in RFC3339 text format. */
@property(copy, nullable) NSString *creationTimestamp;

/**
 *  [Output Only] A textual description of the operation, which is set when the
 *  operation is created.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(copy, nullable) NSString *descriptionProperty;

/**
 *  [Output Only] The time that this operation was completed. This value is in
 *  RFC3339 text format.
 */
@property(copy, nullable) NSString *endTime;

/**
 *  [Output Only] If errors are generated during processing of the operation,
 *  this field will be populated.
 */
@property(strong, nullable) GTLRServiceRegistry_OperationError *error;

/**
 *  [Output Only] If the operation fails, this field contains the HTTP error
 *  message that was returned, such as NOT FOUND.
 */
@property(copy, nullable) NSString *httpErrorMessage;

/**
 *  [Output Only] If the operation fails, this field contains the HTTP error
 *  status code that was returned. For example, a 404 means the resource was not
 *  found.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *httpErrorStatusCode;

/**
 *  [Output Only] The unique identifier for the resource. This identifier is
 *  defined by the server.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(strong, nullable) NSNumber *identifier;

/**
 *  [Output Only] The time that this operation was requested. This value is in
 *  RFC3339 text format.
 */
@property(copy, nullable) NSString *insertTime;

/**
 *  [Output Only] Type of the resource. Always compute#operation for Operation
 *  resources.
 */
@property(copy, nullable) NSString *kind;

/** [Output Only] Name of the resource. */
@property(copy, nullable) NSString *name;

/**
 *  [Output Only] The type of operation, such as insert, update, or delete, and
 *  so on.
 */
@property(copy, nullable) NSString *operationType;

/**
 *  [Output Only] An optional progress indicator that ranges from 0 to 100.
 *  There is no requirement that this be linear or support any granularity of
 *  operations. This should not be used to guess when the operation will be
 *  complete. This number should monotonically increase as the operation
 *  progresses.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *progress;

/**
 *  [Output Only] The URL of the region where the operation resides. Only
 *  available when performing regional operations.
 */
@property(copy, nullable) NSString *region;

/** [Output Only] Server-defined URL for the resource. */
@property(copy, nullable) NSString *selfLink;

/**
 *  [Output Only] The time that this operation was started by the server. This
 *  value is in RFC3339 text format.
 */
@property(copy, nullable) NSString *startTime;

/**
 *  [Output Only] The status of the operation, which can be one of the
 *  following: PENDING, RUNNING, or DONE.
 */
@property(copy, nullable) NSString *status;

/**
 *  [Output Only] An optional textual description of the current status of the
 *  operation.
 */
@property(copy, nullable) NSString *statusMessage;

/**
 *  [Output Only] The unique target ID, which identifies a specific incarnation
 *  of the target resource.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(strong, nullable) NSNumber *targetId;

/** [Output Only] The URL of the resource that the operation modifies. */
@property(copy, nullable) NSString *targetLink;

/**
 *  [Output Only] User who requested the operation, for example:
 *  user\@example.com.
 */
@property(copy, nullable) NSString *user;

/**
 *  [Output Only] If warning messages are generated during processing of the
 *  operation, this field will be populated.
 */
@property(strong, nullable) NSArray<GTLRServiceRegistry_OperationWarningsItem *> *warnings;

/**
 *  [Output Only] The URL of the zone where the operation resides. Only
 *  available when performing per-zone operations.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

@end


/**
 *  [Output Only] If errors are generated during processing of the operation,
 *  this field will be populated.
 */
@interface GTLRServiceRegistry_OperationError : GTLRObject

/**
 *  [Output Only] The array of errors encountered while processing this
 *  operation.
 */
@property(strong, nullable) NSArray<GTLRServiceRegistry_OperationErrorErrorsItem *> *errors;

@end


/**
 *  GTLRServiceRegistry_OperationWarningsItem
 */
@interface GTLRServiceRegistry_OperationWarningsItem : GTLRObject

/**
 *  [Output Only] A warning code, if applicable. For example, Compute Engine
 *  returns NO_RESULTS_ON_PAGE if there are no results in the response.
 */
@property(copy, nullable) NSString *code;

/**
 *  [Output Only] Metadata about this warning in key: value format. For example:
 *  "data": [ { "key": "scope", "value": "zones/us-east1-d" }
 */
@property(strong, nullable) NSArray<GTLRServiceRegistry_OperationWarningsItemDataItem *> *data;

/** [Output Only] A human-readable description of the warning code. */
@property(copy, nullable) NSString *message;

@end


/**
 *  GTLRServiceRegistry_OperationErrorErrorsItem
 */
@interface GTLRServiceRegistry_OperationErrorErrorsItem : GTLRObject

/** [Output Only] The error type identifier for this error. */
@property(copy, nullable) NSString *code;

/**
 *  [Output Only] Indicates the field in the request that caused the error. This
 *  property is optional.
 */
@property(copy, nullable) NSString *location;

/** [Output Only] An optional, human-readable error message. */
@property(copy, nullable) NSString *message;

@end


/**
 *  GTLRServiceRegistry_OperationWarningsItemDataItem
 */
@interface GTLRServiceRegistry_OperationWarningsItemDataItem : GTLRObject

/**
 *  [Output Only] A key that provides more detail on the warning being returned.
 *  For example, for warnings where there are no results in a list request for a
 *  particular zone, this key might be scope and the key value might be the zone
 *  name. Other examples might be a key indicating a deprecated resource and a
 *  suggested replacement, or a warning about invalid network settings (for
 *  example, if an instance attempts to perform IP forwarding but is not enabled
 *  for IP forwarding).
 */
@property(copy, nullable) NSString *key;

/** [Output Only] A warning data value corresponding to the key. */
@property(copy, nullable) NSString *value;

@end


/**
 *  A response containing a partial list of operations and a page token used to
 *  build the next request if the request has been truncated.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRServiceRegistry_OperationsListResponse : GTLRCollectionObject

/** [Output Only] A token used to continue a truncated list request. */
@property(copy, nullable) NSString *nextPageToken;

/**
 *  [Output Only] Operations contained in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(strong, nullable) NSArray<GTLRServiceRegistry_Operation *> *operations;

@end

NS_ASSUME_NONNULL_END
