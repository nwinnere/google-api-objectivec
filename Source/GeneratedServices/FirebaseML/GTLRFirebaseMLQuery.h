// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase ML API (firebaseml/v1beta2)
// Description:
//   Access custom machine learning models hosted via Firebase ML.
// Documentation:
//   https://firebase.google.com

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirebaseML_Model;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Firebase ML query classes.
 */
@interface GTLRFirebaseMLQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a model in Firebase ML.
 *  The longrunning operation will eventually return a Model
 *
 *  Method: firebaseml.projects.models.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseMLCloudPlatform
 */
@interface GTLRFirebaseMLQuery_ProjectsModelsCreate : GTLRFirebaseMLQuery
// Previous library name was
//   +[GTLQueryFirebaseML queryForProjectsModelsCreateWithObject:parent:]

/**
 *  Required. The parent project resource where the model is to be created.
 *  The parent must have the form `projects/{project_id}`
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRFirebaseML_Operation.
 *
 *  Creates a model in Firebase ML.
 *  The longrunning operation will eventually return a Model
 *
 *  @param object The @c GTLRFirebaseML_Model to include in the query.
 *  @param parent Required. The parent project resource where the model is to be
 *    created.
 *    The parent must have the form `projects/{project_id}`
 *
 *  @return GTLRFirebaseMLQuery_ProjectsModelsCreate
 */
+ (instancetype)queryWithObject:(GTLRFirebaseML_Model *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a model
 *
 *  Method: firebaseml.projects.models.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseMLCloudPlatform
 */
@interface GTLRFirebaseMLQuery_ProjectsModelsDelete : GTLRFirebaseMLQuery
// Previous library name was
//   +[GTLQueryFirebaseML queryForProjectsModelsDeleteWithname:]

/**
 *  Required. The name of the model to delete.
 *  The name must have the form `projects/{project_id}/models/{model_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseML_Empty.
 *
 *  Deletes a model
 *
 *  @param name Required. The name of the model to delete.
 *    The name must have the form `projects/{project_id}/models/{model_id}`
 *
 *  @return GTLRFirebaseMLQuery_ProjectsModelsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a model resource.
 *
 *  Method: firebaseml.projects.models.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseMLCloudPlatform
 */
@interface GTLRFirebaseMLQuery_ProjectsModelsGet : GTLRFirebaseMLQuery
// Previous library name was
//   +[GTLQueryFirebaseML queryForProjectsModelsGetWithname:]

/**
 *  Required. The name of the model to get.
 *  The name must have the form `projects/{project_id}/models/{model_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseML_Model.
 *
 *  Gets a model resource.
 *
 *  @param name Required. The name of the model to get.
 *    The name must have the form `projects/{project_id}/models/{model_id}`
 *
 *  @return GTLRFirebaseMLQuery_ProjectsModelsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists the models
 *
 *  Method: firebaseml.projects.models.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseMLCloudPlatform
 */
@interface GTLRFirebaseMLQuery_ProjectsModelsList : GTLRFirebaseMLQuery
// Previous library name was
//   +[GTLQueryFirebaseML queryForProjectsModelsListWithparent:]

/**
 *  A filter for the list
 *  e.g. 'tags: abc' to list models which are tagged with "abc"
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of items to return */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous List request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The name of the parent to list models for.
 *  The parent must have the form `projects/{project_id}'
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRFirebaseML_ListModelsResponse.
 *
 *  Lists the models
 *
 *  @param parent Required. The name of the parent to list models for.
 *    The parent must have the form `projects/{project_id}'
 *
 *  @return GTLRFirebaseMLQuery_ProjectsModelsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a model. The longrunning operation will eventually return a Model.
 *
 *  Method: firebaseml.projects.models.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseMLCloudPlatform
 */
@interface GTLRFirebaseMLQuery_ProjectsModelsPatch : GTLRFirebaseMLQuery
// Previous library name was
//   +[GTLQueryFirebaseML queryForProjectsModelsPatchWithObject:name:]

/**
 *  The resource name of the Model.
 *  Model names have the form `projects/{project_id}/models/{model_id}`
 *  The name is ignored when creating a model.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The update mask
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRFirebaseML_Operation.
 *
 *  Updates a model. The longrunning operation will eventually return a Model.
 *
 *  @param object The @c GTLRFirebaseML_Model to include in the query.
 *  @param name The resource name of the Model.
 *    Model names have the form `projects/{project_id}/models/{model_id}`
 *    The name is ignored when creating a model.
 *
 *  @return GTLRFirebaseMLQuery_ProjectsModelsPatch
 */
+ (instancetype)queryWithObject:(GTLRFirebaseML_Model *)object
                           name:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: firebaseml.projects.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirebaseMLCloudPlatform
 */
@interface GTLRFirebaseMLQuery_ProjectsOperationsGet : GTLRFirebaseMLQuery
// Previous library name was
//   +[GTLQueryFirebaseML queryForProjectsOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirebaseML_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRFirebaseMLQuery_ProjectsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
