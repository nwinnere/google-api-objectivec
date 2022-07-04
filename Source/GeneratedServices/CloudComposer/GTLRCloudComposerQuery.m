// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Composer API (composer/v1)
// Description:
//   Manages Apache Airflow environments on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/composer/

#import "GTLRCloudComposerQuery.h"

#import "GTLRCloudComposerObjects.h"

@implementation GTLRCloudComposerQuery

@dynamic fields;

@end

@implementation GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRCloudComposer_Environment *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/environments";
  GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudComposer_Operation class];
  query.loggingName = @"composer.projects.locations.environments.create";
  return query;
}

@end

@implementation GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudComposer_Operation class];
  query.loggingName = @"composer.projects.locations.environments.delete";
  return query;
}

@end

@implementation GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudComposer_Environment class];
  query.loggingName = @"composer.projects.locations.environments.get";
  return query;
}

@end

@implementation GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/environments";
  GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudComposer_ListEnvironmentsResponse class];
  query.loggingName = @"composer.projects.locations.environments.list";
  return query;
}

@end

@implementation GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudComposer_Environment *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudComposerQuery_ProjectsLocationsEnvironmentsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudComposer_Operation class];
  query.loggingName = @"composer.projects.locations.environments.patch";
  return query;
}

@end

@implementation GTLRCloudComposerQuery_ProjectsLocationsOperationsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudComposerQuery_ProjectsLocationsOperationsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudComposer_Empty class];
  query.loggingName = @"composer.projects.locations.operations.delete";
  return query;
}

@end

@implementation GTLRCloudComposerQuery_ProjectsLocationsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudComposerQuery_ProjectsLocationsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudComposer_Operation class];
  query.loggingName = @"composer.projects.locations.operations.get";
  return query;
}

@end

@implementation GTLRCloudComposerQuery_ProjectsLocationsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/operations";
  GTLRCloudComposerQuery_ProjectsLocationsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudComposer_ListOperationsResponse class];
  query.loggingName = @"composer.projects.locations.operations.list";
  return query;
}

@end
