// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Service User API (serviceuser/v1)
// Description:
//   Enables services that service consumers want to use on Google Cloud
//   Platform, lists the available or enabled services, or disables services
//   that service consumers no longer use.
// Documentation:
//   https://cloud.google.com/service-management/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRServiceUser_DisableServiceRequest;
@class GTLRServiceUser_EnableServiceRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Service User query classes.
 */
@interface GTLRServiceUserQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Disable a managed service for a consumer.
 *  Operation<response: google.protobuf.Empty>
 *
 *  Method: serviceuser.projects.services.disable
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUserCloudPlatform
 *    @c kGTLRAuthScopeServiceUserServiceManagement
 */
@interface GTLRServiceUserQuery_ProjectsServicesDisable : GTLRServiceUserQuery
// Previous library name was
//   +[GTLQueryServiceUser queryForProjectsServicesDisableWithObject:name:]

/**
 *  Name of the consumer and the service to disable for that consumer.
 *  The Service User implementation accepts the following forms for consumer:
 *  - "project:<project_id>"
 *  A valid path would be:
 *  - /v1/projects/my-project/services/servicemanagement.googleapis.com:disable
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceUser_Operation.
 *
 *  Disable a managed service for a consumer.
 *  Operation<response: google.protobuf.Empty>
 *
 *  @param object The @c GTLRServiceUser_DisableServiceRequest to include in the
 *    query.
 *  @param name Name of the consumer and the service to disable for that
 *    consumer.
 *    The Service User implementation accepts the following forms for consumer:
 *    - "project:<project_id>"
 *    A valid path would be:
 *    -
 *    /v1/projects/my-project/services/servicemanagement.googleapis.com:disable
 *
 *  @returns GTLRServiceUserQuery_ProjectsServicesDisable
 */
+ (instancetype)queryWithObject:(GTLRServiceUser_DisableServiceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Enable a managed service for a consumer with the default settings.
 *  Operation<response: google.protobuf.Empty>
 *  google.rpc.Status errors may contain a
 *  google.rpc.PreconditionFailure error detail.
 *
 *  Method: serviceuser.projects.services.enable
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUserCloudPlatform
 *    @c kGTLRAuthScopeServiceUserServiceManagement
 */
@interface GTLRServiceUserQuery_ProjectsServicesEnable : GTLRServiceUserQuery
// Previous library name was
//   +[GTLQueryServiceUser queryForProjectsServicesEnableWithObject:name:]

/**
 *  Name of the consumer and the service to enable for that consumer.
 *  A valid path would be:
 *  - /v1/projects/my-project/services/servicemanagement.googleapis.com:enable
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceUser_Operation.
 *
 *  Enable a managed service for a consumer with the default settings.
 *  Operation<response: google.protobuf.Empty>
 *  google.rpc.Status errors may contain a
 *  google.rpc.PreconditionFailure error detail.
 *
 *  @param object The @c GTLRServiceUser_EnableServiceRequest to include in the
 *    query.
 *  @param name Name of the consumer and the service to enable for that
 *    consumer.
 *    A valid path would be:
 *    - /v1/projects/my-project/services/servicemanagement.googleapis.com:enable
 *
 *  @returns GTLRServiceUserQuery_ProjectsServicesEnable
 */
+ (instancetype)queryWithObject:(GTLRServiceUser_EnableServiceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  List enabled services for the specified consumer.
 *
 *  Method: serviceuser.projects.services.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUserCloudPlatform
 *    @c kGTLRAuthScopeServiceUserCloudPlatformReadOnly
 */
@interface GTLRServiceUserQuery_ProjectsServicesList : GTLRServiceUserQuery
// Previous library name was
//   +[GTLQueryServiceUser queryForProjectsServicesListWithparent:]

/** Requested size of the next page of data. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Token identifying which result to start with; returned by a previous list
 *  call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  List enabled services for the specified parent.
 *  An example valid parent would be:
 *  - projects/my-project
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRServiceUser_ListEnabledServicesResponse.
 *
 *  List enabled services for the specified consumer.
 *
 *  @param parent List enabled services for the specified parent.
 *    An example valid parent would be:
 *    - projects/my-project
 *
 *  @returns GTLRServiceUserQuery_ProjectsServicesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Search available services.
 *  When no filter is specified, returns all accessible services. For
 *  authenticated users, also returns all services the calling user has
 *  "servicemanagement.services.bind" permission for.
 *
 *  Method: serviceuser.services.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUserCloudPlatform
 *    @c kGTLRAuthScopeServiceUserCloudPlatformReadOnly
 */
@interface GTLRServiceUserQuery_ServicesSearch : GTLRServiceUserQuery
// Previous library name was
//   +[GTLQueryServiceUser queryForServicesSearch]

/** Requested size of the next page of data. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Token identifying which result to start with; returned by a previous list
 *  call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRServiceUser_SearchServicesResponse.
 *
 *  Search available services.
 *  When no filter is specified, returns all accessible services. For
 *  authenticated users, also returns all services the calling user has
 *  "servicemanagement.services.bind" permission for.
 *
 *  @returns GTLRServiceUserQuery_ServicesSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

NS_ASSUME_NONNULL_END
