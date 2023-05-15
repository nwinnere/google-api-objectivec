// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Artifact Registry API (artifactregistry/v1beta2)
// Description:
//   Store and manage build artifacts in a scalable and integrated service built
//   on Google infrastructure.
// Documentation:
//   https://cloud.google.com/artifacts/docs/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRArtifactRegistry_Repository;
@class GTLRArtifactRegistry_SetIamPolicyRequest;
@class GTLRArtifactRegistry_Tag;
@class GTLRArtifactRegistry_TestIamPermissionsRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// view

/**
 *  Includes basic information about the version, but not any related tags.
 *
 *  Value: "BASIC"
 */
FOUNDATION_EXTERN NSString * const kGTLRArtifactRegistryViewBasic;
/**
 *  Include everything.
 *
 *  Value: "FULL"
 */
FOUNDATION_EXTERN NSString * const kGTLRArtifactRegistryViewFull;
/**
 *  The default / unset value. The API will default to the BASIC view.
 *
 *  Value: "VERSION_VIEW_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRArtifactRegistryViewVersionViewUnspecified;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Artifact Registry query classes.
 */
@interface GTLRArtifactRegistryQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets information about a location.
 *
 *  Method: artifactregistry.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsGet : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsGetWithname:]

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Location.
 *
 *  Gets information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: artifactregistry.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsList : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRArtifactRegistry_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: artifactregistry.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsOperationsGet : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  Method: artifactregistry.projects.locations.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsOperationsList : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsOperationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRArtifactRegistry_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a repository. The returned Operation will finish once the repository
 *  has been created. Its response will be the created Repository.
 *
 *  Method: artifactregistry.projects.locations.repositories.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesCreate : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesCreateWithObject:parent:]

/** The name of the parent resource where the repository will be created. */
@property(nonatomic, copy, nullable) NSString *parent;

/** The repository id to use for this repository. */
@property(nonatomic, copy, nullable) NSString *repositoryId;

/**
 *  Fetches a @c GTLRArtifactRegistry_Operation.
 *
 *  Creates a repository. The returned Operation will finish once the repository
 *  has been created. Its response will be the created Repository.
 *
 *  @param object The @c GTLRArtifactRegistry_Repository to include in the
 *    query.
 *  @param parent The name of the parent resource where the repository will be
 *    created.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesCreate
 */
+ (instancetype)queryWithObject:(GTLRArtifactRegistry_Repository *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a repository and all of its contents. The returned Operation will
 *  finish once the repository has been deleted. It will not have any Operation
 *  metadata and will return a google.protobuf.Empty response.
 *
 *  Method: artifactregistry.projects.locations.repositories.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesDelete : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesDeleteWithname:]

/** The name of the repository to delete. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Operation.
 *
 *  Deletes a repository and all of its contents. The returned Operation will
 *  finish once the repository has been deleted. It will not have any Operation
 *  metadata and will return a google.protobuf.Empty response.
 *
 *  @param name The name of the repository to delete.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a file.
 *
 *  Method: artifactregistry.projects.locations.repositories.files.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesFilesGet : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesFilesGetWithname:]

/** The name of the file to retrieve. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_File.
 *
 *  Gets a file.
 *
 *  @param name The name of the file to retrieve.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesFilesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists files.
 *
 *  Method: artifactregistry.projects.locations.repositories.files.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesFilesList : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesFilesListWithparent:]

/**
 *  An expression for filtering the results of the request. Filter rules are
 *  case insensitive. The fields eligible for filtering are: * `name` * `owner`
 *  An example of using a filter: *
 *  `name="projects/p1/locations/us-central1/repositories/repo1/files/a/b/ *"`
 *  --> Files with an ID starting with "a/b/". *
 *  `owner="projects/p1/locations/us-central1/repositories/repo1/packages/pkg1/versions/1.0"`
 *  --> Files owned by the version `1.0` in package `pkg1`.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of files to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous list request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The name of the parent resource whose files will be listed. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRArtifactRegistry_ListFilesResponse.
 *
 *  Lists files.
 *
 *  @param parent The name of the parent resource whose files will be listed.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesFilesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Gets a repository.
 *
 *  Method: artifactregistry.projects.locations.repositories.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesGet : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesGetWithname:]

/** The name of the repository to retrieve. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Repository.
 *
 *  Gets a repository.
 *
 *  @param name The name of the repository to retrieve.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the IAM policy for a given resource.
 *
 *  Method: artifactregistry.projects.locations.repositories.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesGetIamPolicy : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesGetIamPolicyWithresource:]

/**
 *  Optional. The policy format version to be returned. Valid values are 0, 1,
 *  and 3. Requests specifying an invalid value will be rejected. Requests for
 *  policies with any conditional bindings must specify version 3. Policies
 *  without any conditional bindings may specify any valid value or leave the
 *  field unset. To learn which resources support conditions in their IAM
 *  policies, see the [IAM
 *  documentation](https://cloud.google.com/iam/help/conditions/resource-policies).
 */
@property(nonatomic, assign) NSInteger optionsRequestedPolicyVersion;

/**
 *  REQUIRED: The resource for which the policy is being requested. See the
 *  operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRArtifactRegistry_Policy.
 *
 *  Gets the IAM policy for a given resource.
 *
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested. See the operation documentation for the appropriate value for
 *    this field.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesGetIamPolicy
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Lists repositories.
 *
 *  Method: artifactregistry.projects.locations.repositories.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesList : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesListWithparent:]

/**
 *  The maximum number of repositories to return. Maximum page size is 10,000.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous list request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The name of the parent resource whose repositories will be listed. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRArtifactRegistry_ListRepositoriesResponse.
 *
 *  Lists repositories.
 *
 *  @param parent The name of the parent resource whose repositories will be
 *    listed.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Deletes a package and all of its versions and tags. The returned operation
 *  will complete once the package has been deleted.
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesDelete : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesDeleteWithname:]

/** The name of the package to delete. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Operation.
 *
 *  Deletes a package and all of its versions and tags. The returned operation
 *  will complete once the package has been deleted.
 *
 *  @param name The name of the package to delete.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a package.
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesGet : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesGetWithname:]

/** The name of the package to retrieve. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Package.
 *
 *  Gets a package.
 *
 *  @param name The name of the package to retrieve.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists packages.
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesList : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesListWithparent:]

/** The maximum number of packages to return. Maximum page size is 10,000. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous list request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The name of the parent resource whose packages will be listed. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRArtifactRegistry_ListPackagesResponse.
 *
 *  Lists packages.
 *
 *  @param parent The name of the parent resource whose packages will be listed.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Creates a tag.
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.tags.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesTagsCreate : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesTagsCreateWithObject:parent:]

/** The name of the parent resource where the tag will be created. */
@property(nonatomic, copy, nullable) NSString *parent;

/** The tag id to use for this repository. */
@property(nonatomic, copy, nullable) NSString *tagId;

/**
 *  Fetches a @c GTLRArtifactRegistry_Tag.
 *
 *  Creates a tag.
 *
 *  @param object The @c GTLRArtifactRegistry_Tag to include in the query.
 *  @param parent The name of the parent resource where the tag will be created.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesTagsCreate
 */
+ (instancetype)queryWithObject:(GTLRArtifactRegistry_Tag *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a tag.
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.tags.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesTagsDelete : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesTagsDeleteWithname:]

/** The name of the tag to delete. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Empty.
 *
 *  Deletes a tag.
 *
 *  @param name The name of the tag to delete.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesTagsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a tag.
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.tags.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesTagsGet : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesTagsGetWithname:]

/** The name of the tag to retrieve. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Tag.
 *
 *  Gets a tag.
 *
 *  @param name The name of the tag to retrieve.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesTagsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists tags.
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.tags.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesTagsList : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesTagsListWithparent:]

/**
 *  An expression for filtering the results of the request. Filter rules are
 *  case insensitive. The fields eligible for filtering are: * `version` An
 *  example of using a filter: *
 *  `version="projects/p1/locations/us-central1/repositories/repo1/packages/pkg1/versions/1.0"`
 *  --> Tags that are applied to the version `1.0` in package `pkg1`.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of tags to return. Maximum page size is 10,000. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous list request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The name of the parent resource whose tags will be listed. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRArtifactRegistry_ListTagsResponse.
 *
 *  Lists tags.
 *
 *  @param parent The name of the parent resource whose tags will be listed.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesTagsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a tag.
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.tags.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesTagsPatch : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesTagsPatchWithObject:name:]

/**
 *  The name of the tag, for example:
 *  "projects/p1/locations/us-central1/repositories/repo1/packages/pkg1/tags/tag1".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The update mask applies to the resource. For the `FieldMask` definition, see
 *  https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#fieldmask
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRArtifactRegistry_Tag.
 *
 *  Updates a tag.
 *
 *  @param object The @c GTLRArtifactRegistry_Tag to include in the query.
 *  @param name The name of the tag, for example:
 *    "projects/p1/locations/us-central1/repositories/repo1/packages/pkg1/tags/tag1".
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesTagsPatch
 */
+ (instancetype)queryWithObject:(GTLRArtifactRegistry_Tag *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes a version and all of its content. The returned operation will
 *  complete once the version has been deleted.
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.versions.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesVersionsDelete : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesVersionsDeleteWithname:]

/**
 *  By default, a version that is tagged may not be deleted. If force=true, the
 *  version and any tags pointing to the version are deleted.
 */
@property(nonatomic, assign) BOOL force;

/** The name of the version to delete. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Operation.
 *
 *  Deletes a version and all of its content. The returned operation will
 *  complete once the version has been deleted.
 *
 *  @param name The name of the version to delete.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesVersionsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a version
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.versions.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesVersionsGet : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesVersionsGetWithname:]

/** The name of the version to retrieve. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The view that should be returned in the response.
 *
 *  Likely values:
 *    @arg @c kGTLRArtifactRegistryViewVersionViewUnspecified The default /
 *        unset value. The API will default to the BASIC view. (Value:
 *        "VERSION_VIEW_UNSPECIFIED")
 *    @arg @c kGTLRArtifactRegistryViewBasic Includes basic information about
 *        the version, but not any related tags. (Value: "BASIC")
 *    @arg @c kGTLRArtifactRegistryViewFull Include everything. (Value: "FULL")
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRArtifactRegistry_Version.
 *
 *  Gets a version
 *
 *  @param name The name of the version to retrieve.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesVersionsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists versions.
 *
 *  Method: artifactregistry.projects.locations.repositories.packages.versions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesVersionsList : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPackagesVersionsListWithparent:]

/** The maximum number of versions to return. Maximum page size is 10,000. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous list request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The name of the parent resource whose versions will be listed. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  The view that should be returned in the response.
 *
 *  Likely values:
 *    @arg @c kGTLRArtifactRegistryViewVersionViewUnspecified The default /
 *        unset value. The API will default to the BASIC view. (Value:
 *        "VERSION_VIEW_UNSPECIFIED")
 *    @arg @c kGTLRArtifactRegistryViewBasic Includes basic information about
 *        the version, but not any related tags. (Value: "BASIC")
 *    @arg @c kGTLRArtifactRegistryViewFull Include everything. (Value: "FULL")
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRArtifactRegistry_ListVersionsResponse.
 *
 *  Lists versions.
 *
 *  @param parent The name of the parent resource whose versions will be listed.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPackagesVersionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a repository.
 *
 *  Method: artifactregistry.projects.locations.repositories.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPatch : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesPatchWithObject:name:]

/**
 *  The name of the repository, for example:
 *  "projects/p1/locations/us-central1/repositories/repo1".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The update mask applies to the resource. For the `FieldMask` definition, see
 *  https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#fieldmask
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRArtifactRegistry_Repository.
 *
 *  Updates a repository.
 *
 *  @param object The @c GTLRArtifactRegistry_Repository to include in the
 *    query.
 *  @param name The name of the repository, for example:
 *    "projects/p1/locations/us-central1/repositories/repo1".
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesPatch
 */
+ (instancetype)queryWithObject:(GTLRArtifactRegistry_Repository *)object
                           name:(NSString *)name;

@end

/**
 *  Updates the IAM policy for a given resource.
 *
 *  Method: artifactregistry.projects.locations.repositories.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesSetIamPolicy : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified. See the
 *  operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRArtifactRegistry_Policy.
 *
 *  Updates the IAM policy for a given resource.
 *
 *  @param object The @c GTLRArtifactRegistry_SetIamPolicyRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified. See the operation documentation for the appropriate value for
 *    this field.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRArtifactRegistry_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Tests if the caller has a list of permissions on a resource.
 *
 *  Method: artifactregistry.projects.locations.repositories.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesTestIamPermissions : GTLRArtifactRegistryQuery
// Previous library name was
//   +[GTLQueryArtifactRegistry queryForProjectsLocationsRepositoriesTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested. See
 *  the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRArtifactRegistry_TestIamPermissionsResponse.
 *
 *  Tests if the caller has a list of permissions on a resource.
 *
 *  @param object The @c GTLRArtifactRegistry_TestIamPermissionsRequest to
 *    include in the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested. See the operation documentation for the appropriate value for
 *    this field.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRArtifactRegistry_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
