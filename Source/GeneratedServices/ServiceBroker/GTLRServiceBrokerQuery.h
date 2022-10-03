// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Service Broker API (servicebroker/v1)
// Description:
//   The Google Cloud Platform Service Broker API provides Google hosted
//   implementation of the Open Service Broker API
//   (https://www.openservicebrokerapi.org/).
// Documentation:
//   https://cloud.google.com/kubernetes-engine/docs/concepts/add-on/service-broker

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRServiceBroker_GoogleIamV1SetIamPolicyRequest;
@class GTLRServiceBroker_GoogleIamV1TestIamPermissionsRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Service Broker query classes.
 */
@interface GTLRServiceBrokerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  Method: servicebroker.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceBrokerCloudPlatform
 */
@interface GTLRServiceBrokerQuery_V1GetIamPolicy : GTLRServiceBrokerQuery
// Previous library name was
//   +[GTLQueryServiceBroker queryForGetIamPolicyWithresource:]

/**
 *  Optional. The policy format version to be returned.
 *  Acceptable values are 0 and 1.
 *  If the value is 0, or the field is omitted, policy format version 1 will be
 *  returned.
 */
@property(nonatomic, assign) NSInteger optionsRequestedPolicyVersion;

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRServiceBroker_GoogleIamV1Policy.
 *
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRServiceBrokerQuery_V1GetIamPolicy
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  Method: servicebroker.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceBrokerCloudPlatform
 */
@interface GTLRServiceBrokerQuery_V1SetIamPolicy : GTLRServiceBrokerQuery
// Previous library name was
//   +[GTLQueryServiceBroker queryForSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRServiceBroker_GoogleIamV1Policy.
 *
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  @param object The @c GTLRServiceBroker_GoogleIamV1SetIamPolicyRequest to
 *    include in the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRServiceBrokerQuery_V1SetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRServiceBroker_GoogleIamV1SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *  Note: This operation is designed to be used for building permission-aware
 *  UIs and command-line tools, not for authorization checking. This operation
 *  may "fail open" without warning.
 *
 *  Method: servicebroker.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceBrokerCloudPlatform
 */
@interface GTLRServiceBrokerQuery_V1TestIamPermissions : GTLRServiceBrokerQuery
// Previous library name was
//   +[GTLQueryServiceBroker queryForTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRServiceBroker_GoogleIamV1TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *  Note: This operation is designed to be used for building permission-aware
 *  UIs and command-line tools, not for authorization checking. This operation
 *  may "fail open" without warning.
 *
 *  @param object The @c GTLRServiceBroker_GoogleIamV1TestIamPermissionsRequest
 *    to include in the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRServiceBrokerQuery_V1TestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRServiceBroker_GoogleIamV1TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
