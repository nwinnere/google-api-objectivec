// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Machine Learning Engine (ml/v1)
// Description:
//   An API to enable creating and using machine learning models.
// Documentation:
//   https://cloud.google.com/ml/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudMachineLearningEngine_GoogleCloudMlV1CancelJobRequest;
@class GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job;
@class GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model;
@class GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictRequest;
@class GTLRCloudMachineLearningEngine_GoogleCloudMlV1SetDefaultVersionRequest;
@class GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Machine Learning Engine query classes.
 */
@interface GTLRCloudMachineLearningEngineQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Get the service account information associated with your project. You need
 *  this information in order to grant the service account persmissions for
 *  the Google Cloud Storage location where you put your model training code
 *  for training the model with Google Cloud Machine Learning.
 *
 *  Method: ml.projects.getConfig
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsGetConfig : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsGetConfigWithname:]

/**
 *  Required. The project name.
 *  Authorization: requires `Viewer` role on the specified project.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c
 *  GTLRCloudMachineLearningEngine_GoogleCloudMlV1GetConfigResponse.
 *
 *  Get the service account information associated with your project. You need
 *  this information in order to grant the service account persmissions for
 *  the Google Cloud Storage location where you put your model training code
 *  for training the model with Google Cloud Machine Learning.
 *
 *  @param name Required. The project name.
 *    Authorization: requires `Viewer` role on the specified project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsGetConfig
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Cancels a running job.
 *
 *  Method: ml.projects.jobs.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsJobsCancel : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsJobsCancelWithObject:name:]

/**
 *  Required. The name of the job to cancel.
 *  Authorization: requires `Editor` role on the parent project.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleProtobufEmpty.
 *
 *  Cancels a running job.
 *
 *  @param object The @c
 *    GTLRCloudMachineLearningEngine_GoogleCloudMlV1CancelJobRequest to include
 *    in the query.
 *  @param name Required. The name of the job to cancel.
 *    Authorization: requires `Editor` role on the parent project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsJobsCancel
 */
+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1CancelJobRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Creates a training or a batch prediction job.
 *
 *  Method: ml.projects.jobs.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsJobsCreate : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsJobsCreateWithObject:parent:]

/**
 *  Required. The project name.
 *  Authorization: requires `Editor` role on the specified project.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job.
 *
 *  Creates a training or a batch prediction job.
 *
 *  @param object The @c GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job to
 *    include in the query.
 *  @param parent Required. The project name.
 *    Authorization: requires `Editor` role on the specified project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsJobsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job *)object
                         parent:(NSString *)parent;

@end

/**
 *  Describes a job.
 *
 *  Method: ml.projects.jobs.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsJobsGet : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsJobsGetWithname:]

/**
 *  Required. The name of the job to get the description of.
 *  Authorization: requires `Viewer` role on the parent project.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleCloudMlV1Job.
 *
 *  Describes a job.
 *
 *  @param name Required. The name of the job to get the description of.
 *    Authorization: requires `Viewer` role on the parent project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsJobsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists the jobs in the project.
 *
 *  Method: ml.projects.jobs.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsJobsList : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsJobsListWithparent:]

/** Optional. Specifies the subset of jobs to retrieve. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Optional. The number of jobs to retrieve per "page" of results. If there
 *  are more remaining results than this number, the response message will
 *  contain a valid value in the `next_page_token` field.
 *  The default value is 20, and the maximum page size is 100.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. A page token to request the next page of results.
 *  You get the token from the `next_page_token` field of the response from
 *  the previous call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The name of the project for which to list jobs.
 *  Authorization: requires `Viewer` role on the specified project.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListJobsResponse.
 *
 *  Lists the jobs in the project.
 *
 *  @param parent Required. The name of the project for which to list jobs.
 *    Authorization: requires `Viewer` role on the specified project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsJobsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Creates a model which will later contain one or more versions.
 *  You must add at least one version before you can request predictions from
 *  the model. Add versions by calling
 *  [projects.models.versions.create](/ml/reference/rest/v1/projects.models.versions/create).
 *
 *  Method: ml.projects.models.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsModelsCreate : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsModelsCreateWithObject:parent:]

/**
 *  Required. The project name.
 *  Authorization: requires `Editor` role on the specified project.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model.
 *
 *  Creates a model which will later contain one or more versions.
 *  You must add at least one version before you can request predictions from
 *  the model. Add versions by calling
 *  [projects.models.versions.create](/ml/reference/rest/v1/projects.models.versions/create).
 *
 *  @param object The @c GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model to
 *    include in the query.
 *  @param parent Required. The project name.
 *    Authorization: requires `Editor` role on the specified project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsModelsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a model.
 *  You can only delete a model if there are no versions in it. You can delete
 *  versions by calling
 *  [projects.models.versions.delete](/ml/reference/rest/v1/projects.models.versions/delete).
 *
 *  Method: ml.projects.models.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsModelsDelete : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsModelsDeleteWithname:]

/**
 *  Required. The name of the model.
 *  Authorization: requires `Editor` role on the parent project.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleLongrunningOperation.
 *
 *  Deletes a model.
 *  You can only delete a model if there are no versions in it. You can delete
 *  versions by calling
 *  [projects.models.versions.delete](/ml/reference/rest/v1/projects.models.versions/delete).
 *
 *  @param name Required. The name of the model.
 *    Authorization: requires `Editor` role on the parent project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsModelsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets information about a model, including its name, the description (if
 *  set), and the default version (if at least one version of the model has
 *  been deployed).
 *
 *  Method: ml.projects.models.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsModelsGet : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsModelsGetWithname:]

/**
 *  Required. The name of the model.
 *  Authorization: requires `Viewer` role on the parent project.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleCloudMlV1Model.
 *
 *  Gets information about a model, including its name, the description (if
 *  set), and the default version (if at least one version of the model has
 *  been deployed).
 *
 *  @param name Required. The name of the model.
 *    Authorization: requires `Viewer` role on the parent project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsModelsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists the models in a project.
 *  Each project can contain multiple models, and each model can have multiple
 *  versions.
 *
 *  Method: ml.projects.models.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsModelsList : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsModelsListWithparent:]

/**
 *  Optional. The number of models to retrieve per "page" of results. If there
 *  are more remaining results than this number, the response message will
 *  contain a valid value in the `next_page_token` field.
 *  The default value is 20, and the maximum page size is 100.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. A page token to request the next page of results.
 *  You get the token from the `next_page_token` field of the response from
 *  the previous call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The name of the project whose models are to be listed.
 *  Authorization: requires `Viewer` role on the specified project.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c
 *  GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListModelsResponse.
 *
 *  Lists the models in a project.
 *  Each project can contain multiple models, and each model can have multiple
 *  versions.
 *
 *  @param parent Required. The name of the project whose models are to be
 *    listed.
 *    Authorization: requires `Viewer` role on the specified project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsModelsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Creates a new version of a model from a trained TensorFlow model.
 *  If the version created in the cloud by this call is the first deployed
 *  version of the specified model, it will be made the default version of the
 *  model. When you add a version to a model that already has one or more
 *  versions, the default version does not automatically change. If you want a
 *  new version to be the default, you must call
 *  [projects.models.versions.setDefault](/ml/reference/rest/v1/projects.models.versions/setDefault).
 *
 *  Method: ml.projects.models.versions.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsCreate : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsModelsVersionsCreateWithObject:parent:]

/**
 *  Required. The name of the model.
 *  Authorization: requires `Editor` role on the parent project.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleLongrunningOperation.
 *
 *  Creates a new version of a model from a trained TensorFlow model.
 *  If the version created in the cloud by this call is the first deployed
 *  version of the specified model, it will be made the default version of the
 *  model. When you add a version to a model that already has one or more
 *  versions, the default version does not automatically change. If you want a
 *  new version to be the default, you must call
 *  [projects.models.versions.setDefault](/ml/reference/rest/v1/projects.models.versions/setDefault).
 *
 *  @param object The @c GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version
 *    to include in the query.
 *  @param parent Required. The name of the model.
 *    Authorization: requires `Editor` role on the parent project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a model version.
 *  Each model can have multiple versions deployed and in use at any given
 *  time. Use this method to remove a single version.
 *  Note: You cannot delete the version that is set as the default version
 *  of the model unless it is the only remaining version.
 *
 *  Method: ml.projects.models.versions.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsDelete : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsModelsVersionsDeleteWithname:]

/**
 *  Required. The name of the version. You can get the names of all the
 *  versions of a model by calling
 *  [projects.models.versions.list](/ml/reference/rest/v1/projects.models.versions/list).
 *  Authorization: requires `Editor` role on the parent project.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleLongrunningOperation.
 *
 *  Deletes a model version.
 *  Each model can have multiple versions deployed and in use at any given
 *  time. Use this method to remove a single version.
 *  Note: You cannot delete the version that is set as the default version
 *  of the model unless it is the only remaining version.
 *
 *  @param name Required. The name of the version. You can get the names of all
 *    the
 *    versions of a model by calling
 *    [projects.models.versions.list](/ml/reference/rest/v1/projects.models.versions/list).
 *    Authorization: requires `Editor` role on the parent project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets information about a model version.
 *  Models can have multiple versions. You can call
 *  [projects.models.versions.list](/ml/reference/rest/v1/projects.models.versions/list)
 *  to get the same information that this method returns for all of the
 *  versions of a model.
 *
 *  Method: ml.projects.models.versions.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsGet : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsModelsVersionsGetWithname:]

/**
 *  Required. The name of the version.
 *  Authorization: requires `Viewer` role on the parent project.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version.
 *
 *  Gets information about a model version.
 *  Models can have multiple versions. You can call
 *  [projects.models.versions.list](/ml/reference/rest/v1/projects.models.versions/list)
 *  to get the same information that this method returns for all of the
 *  versions of a model.
 *
 *  @param name Required. The name of the version.
 *    Authorization: requires `Viewer` role on the parent project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets basic information about all the versions of a model.
 *  If you expect that a model has a lot of versions, or if you need to handle
 *  only a limited number of results at a time, you can request that the list
 *  be retrieved in batches (called pages):
 *
 *  Method: ml.projects.models.versions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsList : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsModelsVersionsListWithparent:]

/**
 *  Optional. The number of versions to retrieve per "page" of results. If
 *  there are more remaining results than this number, the response message
 *  will contain a valid value in the `next_page_token` field.
 *  The default value is 20, and the maximum page size is 100.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. A page token to request the next page of results.
 *  You get the token from the `next_page_token` field of the response from
 *  the previous call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The name of the model for which to list the version.
 *  Authorization: requires `Viewer` role on the parent project.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c
 *  GTLRCloudMachineLearningEngine_GoogleCloudMlV1ListVersionsResponse.
 *
 *  Gets basic information about all the versions of a model.
 *  If you expect that a model has a lot of versions, or if you need to handle
 *  only a limited number of results at a time, you can request that the list
 *  be retrieved in batches (called pages):
 *
 *  @param parent Required. The name of the model for which to list the version.
 *    Authorization: requires `Viewer` role on the parent project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Designates a version to be the default for the model.
 *  The default version is used for prediction requests made against the model
 *  that don't specify a version.
 *  The first version to be created for a model is automatically set as the
 *  default. You must make any subsequent changes to the default version
 *  setting manually using this method.
 *
 *  Method: ml.projects.models.versions.setDefault
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsSetDefault : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsModelsVersionsSetDefaultWithObject:name:]

/**
 *  Required. The name of the version to make the default for the model. You
 *  can get the names of all the versions of a model by calling
 *  [projects.models.versions.list](/ml/reference/rest/v1/projects.models.versions/list).
 *  Authorization: requires `Editor` role on the parent project.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleCloudMlV1Version.
 *
 *  Designates a version to be the default for the model.
 *  The default version is used for prediction requests made against the model
 *  that don't specify a version.
 *  The first version to be created for a model is automatically set as the
 *  default. You must make any subsequent changes to the default version
 *  setting manually using this method.
 *
 *  @param object The @c
 *    GTLRCloudMachineLearningEngine_GoogleCloudMlV1SetDefaultVersionRequest to
 *    include in the query.
 *  @param name Required. The name of the version to make the default for the
 *    model. You
 *    can get the names of all the versions of a model by calling
 *    [projects.models.versions.list](/ml/reference/rest/v1/projects.models.versions/list).
 *    Authorization: requires `Editor` role on the parent project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsModelsVersionsSetDefault
 */
+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1SetDefaultVersionRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  Method: ml.projects.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsOperationsCancel : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsOperationsCancelWithname:]

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleProtobufEmpty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsOperationsCancel
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: ml.projects.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsOperationsDelete : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsOperationsDeleteWithname:]

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleProtobufEmpty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: ml.projects.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsOperationsGet : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleLongrunningOperation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding below allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`.
 *
 *  Method: ml.projects.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsOperationsList : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsOperationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation collection. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c
 *  GTLRCloudMachineLearningEngine_GoogleLongrunningListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding below allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`.
 *
 *  @param name The name of the operation collection.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Performs prediction on the data in the request.
 *  **** REMOVE FROM GENERATED DOCUMENTATION
 *
 *  Method: ml.projects.predict
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMachineLearningEngineCloudPlatform
 */
@interface GTLRCloudMachineLearningEngineQuery_ProjectsPredict : GTLRCloudMachineLearningEngineQuery
// Previous library name was
//   +[GTLQueryCloudMachineLearningEngine queryForProjectsPredictWithObject:name:]

/**
 *  Required. The resource name of a model or a version.
 *  Authorization: requires `Viewer` role on the parent project.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudMachineLearningEngine_GoogleApiHttpBody.
 *
 *  Performs prediction on the data in the request.
 *  **** REMOVE FROM GENERATED DOCUMENTATION
 *
 *  @param object The @c
 *    GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictRequest to include in
 *    the query.
 *  @param name Required. The resource name of a model or a version.
 *    Authorization: requires `Viewer` role on the parent project.
 *
 *  @returns GTLRCloudMachineLearningEngineQuery_ProjectsPredict
 */
+ (instancetype)queryWithObject:(GTLRCloudMachineLearningEngine_GoogleCloudMlV1PredictRequest *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
