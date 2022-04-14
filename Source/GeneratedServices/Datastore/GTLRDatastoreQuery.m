// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Datastore API (datastore/v1)
// Description:
//   Accesses the schemaless NoSQL database to provide fully managed, robust,
//   scalable storage for your application.
// Documentation:
//   https://cloud.google.com/datastore/

#import "GTLRDatastoreQuery.h"

#import "GTLRDatastoreObjects.h"

@implementation GTLRDatastoreQuery

@dynamic fields;

@end

@implementation GTLRDatastoreQuery_ProjectsAllocateIds

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRDatastore_AllocateIdsRequest *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}:allocateIds";
  GTLRDatastoreQuery_ProjectsAllocateIds *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRDatastore_AllocateIdsResponse class];
  query.loggingName = @"datastore.projects.allocateIds";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsBeginTransaction

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRDatastore_BeginTransactionRequest *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}:beginTransaction";
  GTLRDatastoreQuery_ProjectsBeginTransaction *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRDatastore_BeginTransactionResponse class];
  query.loggingName = @"datastore.projects.beginTransaction";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsCommit

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRDatastore_CommitRequest *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}:commit";
  GTLRDatastoreQuery_ProjectsCommit *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRDatastore_CommitResponse class];
  query.loggingName = @"datastore.projects.commit";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsExport

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRDatastore_GoogleDatastoreAdminV1ExportEntitiesRequest *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}:export";
  GTLRDatastoreQuery_ProjectsExport *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRDatastore_GoogleLongrunningOperation class];
  query.loggingName = @"datastore.projects.export";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsImport

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRDatastore_GoogleDatastoreAdminV1ImportEntitiesRequest *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}:import";
  GTLRDatastoreQuery_ProjectsImport *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRDatastore_GoogleLongrunningOperation class];
  query.loggingName = @"datastore.projects.import";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsLookup

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRDatastore_LookupRequest *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}:lookup";
  GTLRDatastoreQuery_ProjectsLookup *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRDatastore_LookupResponse class];
  query.loggingName = @"datastore.projects.lookup";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsOperationsCancel

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancel";
  GTLRDatastoreQuery_ProjectsOperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDatastore_Empty class];
  query.loggingName = @"datastore.projects.operations.cancel";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsOperationsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRDatastoreQuery_ProjectsOperationsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDatastore_Empty class];
  query.loggingName = @"datastore.projects.operations.delete";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRDatastoreQuery_ProjectsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDatastore_GoogleLongrunningOperation class];
  query.loggingName = @"datastore.projects.operations.get";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/operations";
  GTLRDatastoreQuery_ProjectsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDatastore_GoogleLongrunningListOperationsResponse class];
  query.loggingName = @"datastore.projects.operations.list";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsReserveIds

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRDatastore_ReserveIdsRequest *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}:reserveIds";
  GTLRDatastoreQuery_ProjectsReserveIds *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRDatastore_ReserveIdsResponse class];
  query.loggingName = @"datastore.projects.reserveIds";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsRollback

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRDatastore_RollbackRequest *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}:rollback";
  GTLRDatastoreQuery_ProjectsRollback *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRDatastore_RollbackResponse class];
  query.loggingName = @"datastore.projects.rollback";
  return query;
}

@end

@implementation GTLRDatastoreQuery_ProjectsRunQuery

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRDatastore_RunQueryRequest *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}:runQuery";
  GTLRDatastoreQuery_ProjectsRunQuery *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRDatastore_RunQueryResponse class];
  query.loggingName = @"datastore.projects.runQuery";
  return query;
}

@end
