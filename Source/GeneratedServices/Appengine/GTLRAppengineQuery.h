// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google App Engine Admin API (appengine/v1)
// Description:
//   The App Engine Admin API enables developers to provision and manage their
//   App Engine applications.
// Documentation:
//   https://cloud.google.com/appengine/docs/admin-api/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAppengine_Application;
@class GTLRAppengine_DebugInstanceRequest;
@class GTLRAppengine_RepairApplicationRequest;
@class GTLRAppengine_Service;
@class GTLRAppengine_Version;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// view

/** Value: "BASIC" */
GTLR_EXTERN NSString * const kGTLRAppengineViewBasic;
/** Value: "FULL" */
GTLR_EXTERN NSString * const kGTLRAppengineViewFull;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Appengine query classes.
 */
@interface GTLRAppengineQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates an App Engine application for a Google Cloud Platform project.
 *  Required fields:
 *  id - The ID of the target Cloud Platform project.
 *  location - The region (https://cloud.google.com/appengine/docs/locations)
 *  where you want the App Engine application located.For more information about
 *  App Engine applications, see Managing Projects, Applications, and Billing
 *  (https://cloud.google.com/appengine/docs/python/console/).
 *
 *  Method: appengine.apps.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 */
@interface GTLRAppengineQuery_AppsCreate : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsCreateWithObject:]

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Creates an App Engine application for a Google Cloud Platform project.
 *  Required fields:
 *  id - The ID of the target Cloud Platform project.
 *  location - The region (https://cloud.google.com/appengine/docs/locations)
 *  where you want the App Engine application located.For more information about
 *  App Engine applications, see Managing Projects, Applications, and Billing
 *  (https://cloud.google.com/appengine/docs/python/console/).
 *
 *  @param object The @c GTLRAppengine_Application to include in the query.
 *
 *  @returns GTLRAppengineQuery_AppsCreate
 */
+ (instancetype)queryWithObject:(GTLRAppengine_Application *)object;

@end

/**
 *  Gets information about an application.
 *
 *  Method: appengine.apps.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsGet : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsGetWithappsId:]

/**
 *  Part of `name`. Name of the Application resource to get. Example:
 *  apps/myapp.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/**
 *  Fetches a @c GTLRAppengine_Application.
 *
 *  Gets information about an application.
 *
 *  @param appsId Part of `name`. Name of the Application resource to get.
 *    Example: apps/myapp.
 *
 *  @returns GTLRAppengineQuery_AppsGet
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId;

@end

/**
 *  Get information about a location.
 *
 *  Method: appengine.apps.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsLocationsGet : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsLocationsGetWithappsId:locationsId:]

/** Part of `name`. Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *locationsId;

/**
 *  Fetches a @c GTLRAppengine_Location.
 *
 *  Get information about a location.
 *
 *  @param appsId Part of `name`. Resource name for the location.
 *  @param locationsId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsLocationsGet
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId
                    locationsId:(NSString *)locationsId;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: appengine.apps.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsLocationsList : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsLocationsListWithappsId:]

/**
 *  Part of `name`. The resource that owns the locations collection, if
 *  applicable.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAppengine_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param appsId Part of `name`. The resource that owns the locations
 *    collection, if applicable.
 *
 *  @returns GTLRAppengineQuery_AppsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: appengine.apps.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsOperationsGet : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsOperationsGetWithappsId:operationsId:]

/** Part of `name`. The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *operationsId;

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param appsId Part of `name`. The name of the operation resource.
 *  @param operationsId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsOperationsGet
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId
                   operationsId:(NSString *)operationsId;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns UNIMPLEMENTED.NOTE: the name
 *  binding allows API services to override the binding to use different
 *  resource name schemes, such as users/ * /operations. To override the
 *  binding, API services can add a binding such as "/v1/{name=users/
 *  *}/operations" to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  Method: appengine.apps.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsOperationsList : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsOperationsListWithappsId:]

/** Part of `name`. The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *appsId;

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAppengine_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns UNIMPLEMENTED.NOTE: the name
 *  binding allows API services to override the binding to use different
 *  resource name schemes, such as users/ * /operations. To override the
 *  binding, API services can add a binding such as "/v1/{name=users/
 *  *}/operations" to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  @param appsId Part of `name`. The name of the operation's parent resource.
 *
 *  @returns GTLRAppengineQuery_AppsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId;

@end

/**
 *  Updates the specified Application resource. You can update the following
 *  fields:
 *  auth_domain - Google authentication domain for controlling user access to
 *  the application.
 *  default_cookie_expiration - Cookie expiration policy for the application.
 *
 *  Method: appengine.apps.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 */
@interface GTLRAppengineQuery_AppsPatch : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsPatchWithObject:appsId:]

/**
 *  Part of `name`. Name of the Application resource to update. Example:
 *  apps/myapp.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/**
 *  Standard field mask for the set of fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Updates the specified Application resource. You can update the following
 *  fields:
 *  auth_domain - Google authentication domain for controlling user access to
 *  the application.
 *  default_cookie_expiration - Cookie expiration policy for the application.
 *
 *  @param object The @c GTLRAppengine_Application to include in the query.
 *  @param appsId Part of `name`. Name of the Application resource to update.
 *    Example: apps/myapp.
 *
 *  @returns GTLRAppengineQuery_AppsPatch
 */
+ (instancetype)queryWithObject:(GTLRAppengine_Application *)object
                         appsId:(NSString *)appsId;

@end

/**
 *  Recreates the required App Engine features for the specified App Engine
 *  application, for example a Cloud Storage bucket or App Engine service
 *  account. Use this method if you receive an error message about a missing
 *  feature, for example, Error retrieving the App Engine service account.
 *
 *  Method: appengine.apps.repair
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 */
@interface GTLRAppengineQuery_AppsRepair : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsRepairWithObject:appsId:]

/** Part of `name`. Name of the application to repair. Example: apps/myapp */
@property(nonatomic, copy, nullable) NSString *appsId;

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Recreates the required App Engine features for the specified App Engine
 *  application, for example a Cloud Storage bucket or App Engine service
 *  account. Use this method if you receive an error message about a missing
 *  feature, for example, Error retrieving the App Engine service account.
 *
 *  @param object The @c GTLRAppengine_RepairApplicationRequest to include in
 *    the query.
 *  @param appsId Part of `name`. Name of the application to repair. Example:
 *    apps/myapp
 *
 *  @returns GTLRAppengineQuery_AppsRepair
 */
+ (instancetype)queryWithObject:(GTLRAppengine_RepairApplicationRequest *)object
                         appsId:(NSString *)appsId;

@end

/**
 *  Deletes the specified service and all enclosed versions.
 *
 *  Method: appengine.apps.services.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 */
@interface GTLRAppengineQuery_AppsServicesDelete : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesDeleteWithappsId:servicesId:]

/**
 *  Part of `name`. Name of the resource requested. Example:
 *  apps/myapp/services/default.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Deletes the specified service and all enclosed versions.
 *
 *  @param appsId Part of `name`. Name of the resource requested. Example:
 *    apps/myapp/services/default.
 *  @param servicesId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesDelete
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId;

@end

/**
 *  Gets the current configuration of the specified service.
 *
 *  Method: appengine.apps.services.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsServicesGet : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesGetWithappsId:servicesId:]

/**
 *  Part of `name`. Name of the resource requested. Example:
 *  apps/myapp/services/default.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/**
 *  Fetches a @c GTLRAppengine_Service.
 *
 *  Gets the current configuration of the specified service.
 *
 *  @param appsId Part of `name`. Name of the resource requested. Example:
 *    apps/myapp/services/default.
 *  @param servicesId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesGet
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId;

@end

/**
 *  Lists all the services in the application.
 *
 *  Method: appengine.apps.services.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsServicesList : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesListWithappsId:]

/**
 *  Part of `parent`. Name of the parent Application resource. Example:
 *  apps/myapp.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Maximum results to return per page. */
@property(nonatomic, assign) NSInteger pageSize;

/** Continuation token for fetching the next page of results. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAppengine_ListServicesResponse.
 *
 *  Lists all the services in the application.
 *
 *  @param appsId Part of `parent`. Name of the parent Application resource.
 *    Example: apps/myapp.
 *
 *  @returns GTLRAppengineQuery_AppsServicesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId;

@end

/**
 *  Updates the configuration of the specified service.
 *
 *  Method: appengine.apps.services.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 */
@interface GTLRAppengineQuery_AppsServicesPatch : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesPatchWithObject:appsId:servicesId:]

/**
 *  Part of `name`. Name of the resource to update. Example:
 *  apps/myapp/services/default.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/**
 *  Set to true to gradually shift traffic to one or more versions that you
 *  specify. By default, traffic is shifted immediately. For gradual traffic
 *  migration, the target versions must be located within instances that are
 *  configured for both warmup requests
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#inboundservicetype)
 *  and automatic scaling
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#automaticscaling).
 *  You must specify the shardBy
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services#shardby)
 *  field in the Service resource. Gradual traffic migration is not supported in
 *  the App Engine flexible environment. For examples, see Migrating and
 *  Splitting Traffic
 *  (https://cloud.google.com/appengine/docs/admin-api/migrating-splitting-traffic).
 */
@property(nonatomic, assign) BOOL migrateTraffic;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/**
 *  Standard field mask for the set of fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Updates the configuration of the specified service.
 *
 *  @param object The @c GTLRAppengine_Service to include in the query.
 *  @param appsId Part of `name`. Name of the resource to update. Example:
 *    apps/myapp/services/default.
 *  @param servicesId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesPatch
 */
+ (instancetype)queryWithObject:(GTLRAppengine_Service *)object
                         appsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId;

@end

/**
 *  Deploys code and resource files to a new version.
 *
 *  Method: appengine.apps.services.versions.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 */
@interface GTLRAppengineQuery_AppsServicesVersionsCreate : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesVersionsCreateWithObject:appsId:servicesId:]

/**
 *  Part of `parent`. Name of the parent resource to create this version under.
 *  Example: apps/myapp/services/default.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `parent`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Deploys code and resource files to a new version.
 *
 *  @param object The @c GTLRAppengine_Version to include in the query.
 *  @param appsId Part of `parent`. Name of the parent resource to create this
 *    version under. Example: apps/myapp/services/default.
 *  @param servicesId Part of `parent`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesVersionsCreate
 */
+ (instancetype)queryWithObject:(GTLRAppengine_Version *)object
                         appsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId;

@end

/**
 *  Deletes an existing Version resource.
 *
 *  Method: appengine.apps.services.versions.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 */
@interface GTLRAppengineQuery_AppsServicesVersionsDelete : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesVersionsDeleteWithappsId:servicesId:versionsId:]

/**
 *  Part of `name`. Name of the resource requested. Example:
 *  apps/myapp/services/default/versions/v1.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *versionsId;

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Deletes an existing Version resource.
 *
 *  @param appsId Part of `name`. Name of the resource requested. Example:
 *    apps/myapp/services/default/versions/v1.
 *  @param servicesId Part of `name`. See documentation of `appsId`.
 *  @param versionsId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesVersionsDelete
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId
                     versionsId:(NSString *)versionsId;

@end

/**
 *  Gets the specified Version resource. By default, only a BASIC_VIEW will be
 *  returned. Specify the FULL_VIEW parameter to get the full resource.
 *
 *  Method: appengine.apps.services.versions.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsServicesVersionsGet : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesVersionsGetWithappsId:servicesId:versionsId:]

/**
 *  Part of `name`. Name of the resource requested. Example:
 *  apps/myapp/services/default/versions/v1.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *versionsId;

/**
 *  Controls the set of fields returned in the Get response.
 *
 *  Likely values:
 *    @arg @c kGTLRAppengineViewBasic Value "BASIC"
 *    @arg @c kGTLRAppengineViewFull Value "FULL"
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRAppengine_Version.
 *
 *  Gets the specified Version resource. By default, only a BASIC_VIEW will be
 *  returned. Specify the FULL_VIEW parameter to get the full resource.
 *
 *  @param appsId Part of `name`. Name of the resource requested. Example:
 *    apps/myapp/services/default/versions/v1.
 *  @param servicesId Part of `name`. See documentation of `appsId`.
 *  @param versionsId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesVersionsGet
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId
                     versionsId:(NSString *)versionsId;

@end

/**
 *  Enables debugging on a VM instance. This allows you to use the SSH command
 *  to connect to the virtual machine where the instance lives. While in "debug
 *  mode", the instance continues to serve live traffic. You should delete the
 *  instance when you are done debugging and then allow the system to take over
 *  and determine if another instance should be started.Only applicable for
 *  instances in App Engine flexible environment.
 *
 *  Method: appengine.apps.services.versions.instances.debug
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 */
@interface GTLRAppengineQuery_AppsServicesVersionsInstancesDebug : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesVersionsInstancesDebugWithObject:appsId:servicesId:versionsId:instancesId:]

/**
 *  Part of `name`. Name of the resource requested. Example:
 *  apps/myapp/services/default/versions/v1/instances/instance-1.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *instancesId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *versionsId;

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Enables debugging on a VM instance. This allows you to use the SSH command
 *  to connect to the virtual machine where the instance lives. While in "debug
 *  mode", the instance continues to serve live traffic. You should delete the
 *  instance when you are done debugging and then allow the system to take over
 *  and determine if another instance should be started.Only applicable for
 *  instances in App Engine flexible environment.
 *
 *  @param object The @c GTLRAppengine_DebugInstanceRequest to include in the
 *    query.
 *  @param appsId Part of `name`. Name of the resource requested. Example:
 *    apps/myapp/services/default/versions/v1/instances/instance-1.
 *  @param servicesId Part of `name`. See documentation of `appsId`.
 *  @param versionsId Part of `name`. See documentation of `appsId`.
 *  @param instancesId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesVersionsInstancesDebug
 */
+ (instancetype)queryWithObject:(GTLRAppengine_DebugInstanceRequest *)object
                         appsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId
                     versionsId:(NSString *)versionsId
                    instancesId:(NSString *)instancesId;

@end

/**
 *  Stops a running instance.
 *
 *  Method: appengine.apps.services.versions.instances.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 */
@interface GTLRAppengineQuery_AppsServicesVersionsInstancesDelete : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesVersionsInstancesDeleteWithappsId:servicesId:versionsId:instancesId:]

/**
 *  Part of `name`. Name of the resource requested. Example:
 *  apps/myapp/services/default/versions/v1/instances/instance-1.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *instancesId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *versionsId;

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Stops a running instance.
 *
 *  @param appsId Part of `name`. Name of the resource requested. Example:
 *    apps/myapp/services/default/versions/v1/instances/instance-1.
 *  @param servicesId Part of `name`. See documentation of `appsId`.
 *  @param versionsId Part of `name`. See documentation of `appsId`.
 *  @param instancesId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesVersionsInstancesDelete
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId
                     versionsId:(NSString *)versionsId
                    instancesId:(NSString *)instancesId;

@end

/**
 *  Gets instance information.
 *
 *  Method: appengine.apps.services.versions.instances.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsServicesVersionsInstancesGet : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesVersionsInstancesGetWithappsId:servicesId:versionsId:instancesId:]

/**
 *  Part of `name`. Name of the resource requested. Example:
 *  apps/myapp/services/default/versions/v1/instances/instance-1.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *instancesId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *versionsId;

/**
 *  Fetches a @c GTLRAppengine_Instance.
 *
 *  Gets instance information.
 *
 *  @param appsId Part of `name`. Name of the resource requested. Example:
 *    apps/myapp/services/default/versions/v1/instances/instance-1.
 *  @param servicesId Part of `name`. See documentation of `appsId`.
 *  @param versionsId Part of `name`. See documentation of `appsId`.
 *  @param instancesId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesVersionsInstancesGet
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId
                     versionsId:(NSString *)versionsId
                    instancesId:(NSString *)instancesId;

@end

/**
 *  Lists the instances of a version.Tip: To aggregate details about instances
 *  over time, see the Stackdriver Monitoring API
 *  (https://cloud.google.com/monitoring/api/ref_v3/rest/v3/projects.timeSeries/list).
 *
 *  Method: appengine.apps.services.versions.instances.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsServicesVersionsInstancesList : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesVersionsInstancesListWithappsId:servicesId:versionsId:]

/**
 *  Part of `parent`. Name of the parent Version resource. Example:
 *  apps/myapp/services/default/versions/v1.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Maximum results to return per page. */
@property(nonatomic, assign) NSInteger pageSize;

/** Continuation token for fetching the next page of results. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Part of `parent`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/** Part of `parent`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *versionsId;

/**
 *  Fetches a @c GTLRAppengine_ListInstancesResponse.
 *
 *  Lists the instances of a version.Tip: To aggregate details about instances
 *  over time, see the Stackdriver Monitoring API
 *  (https://cloud.google.com/monitoring/api/ref_v3/rest/v3/projects.timeSeries/list).
 *
 *  @param appsId Part of `parent`. Name of the parent Version resource.
 *    Example: apps/myapp/services/default/versions/v1.
 *  @param servicesId Part of `parent`. See documentation of `appsId`.
 *  @param versionsId Part of `parent`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesVersionsInstancesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId
                     versionsId:(NSString *)versionsId;

@end

/**
 *  Lists the versions of a service.
 *
 *  Method: appengine.apps.services.versions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineAdmin
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 *    @c kGTLRAuthScopeAppengineCloudPlatformReadOnly
 */
@interface GTLRAppengineQuery_AppsServicesVersionsList : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesVersionsListWithappsId:servicesId:]

/**
 *  Part of `parent`. Name of the parent Service resource. Example:
 *  apps/myapp/services/default.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Maximum results to return per page. */
@property(nonatomic, assign) NSInteger pageSize;

/** Continuation token for fetching the next page of results. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Part of `parent`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/**
 *  Controls the set of fields returned in the List response.
 *
 *  Likely values:
 *    @arg @c kGTLRAppengineViewBasic Value "BASIC"
 *    @arg @c kGTLRAppengineViewFull Value "FULL"
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRAppengine_ListVersionsResponse.
 *
 *  Lists the versions of a service.
 *
 *  @param appsId Part of `parent`. Name of the parent Service resource.
 *    Example: apps/myapp/services/default.
 *  @param servicesId Part of `parent`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesVersionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithAppsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId;

@end

/**
 *  Updates the specified Version resource. You can specify the following fields
 *  depending on the App Engine environment and type of scaling that the version
 *  resource uses:
 *  serving_status
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.serving_status):
 *  For Version resources that use basic scaling, manual scaling, or run in the
 *  App Engine flexible environment.
 *  instance_class
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.instance_class):
 *  For Version resources that run in the App Engine standard environment.
 *  automatic_scaling.min_idle_instances
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.automatic_scaling):
 *  For Version resources that use automatic scaling and run in the App Engine
 *  standard environment.
 *  automatic_scaling.max_idle_instances
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.automatic_scaling):
 *  For Version resources that use automatic scaling and run in the App Engine
 *  standard environment.
 *
 *  Method: appengine.apps.services.versions.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAppengineCloudPlatform
 */
@interface GTLRAppengineQuery_AppsServicesVersionsPatch : GTLRAppengineQuery
// Previous library name was
//   +[GTLQueryAppengine queryForAppsServicesVersionsPatchWithObject:appsId:servicesId:versionsId:]

/**
 *  Part of `name`. Name of the resource to update. Example:
 *  apps/myapp/services/default/versions/1.
 */
@property(nonatomic, copy, nullable) NSString *appsId;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *servicesId;

/**
 *  Standard field mask for the set of fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/** Part of `name`. See documentation of `appsId`. */
@property(nonatomic, copy, nullable) NSString *versionsId;

/**
 *  Fetches a @c GTLRAppengine_Operation.
 *
 *  Updates the specified Version resource. You can specify the following fields
 *  depending on the App Engine environment and type of scaling that the version
 *  resource uses:
 *  serving_status
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.serving_status):
 *  For Version resources that use basic scaling, manual scaling, or run in the
 *  App Engine flexible environment.
 *  instance_class
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.instance_class):
 *  For Version resources that run in the App Engine standard environment.
 *  automatic_scaling.min_idle_instances
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.automatic_scaling):
 *  For Version resources that use automatic scaling and run in the App Engine
 *  standard environment.
 *  automatic_scaling.max_idle_instances
 *  (https://cloud.google.com/appengine/docs/admin-api/reference/rest/v1/apps.services.versions#Version.FIELDS.automatic_scaling):
 *  For Version resources that use automatic scaling and run in the App Engine
 *  standard environment.
 *
 *  @param object The @c GTLRAppengine_Version to include in the query.
 *  @param appsId Part of `name`. Name of the resource to update. Example:
 *    apps/myapp/services/default/versions/1.
 *  @param servicesId Part of `name`. See documentation of `appsId`.
 *  @param versionsId Part of `name`. See documentation of `appsId`.
 *
 *  @returns GTLRAppengineQuery_AppsServicesVersionsPatch
 */
+ (instancetype)queryWithObject:(GTLRAppengine_Version *)object
                         appsId:(NSString *)appsId
                     servicesId:(NSString *)servicesId
                     versionsId:(NSString *)versionsId;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
