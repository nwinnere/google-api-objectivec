// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Life Sciences API (lifesciences/v2beta)
// Description:
//   Cloud Life Sciences is a suite of services and tools for managing,
//   processing, and transforming life sciences data.
// Documentation:
//   https://cloud.google.com/life-sciences

#import "GTLRCloudLifeSciencesQuery.h"

#import "GTLRCloudLifeSciencesObjects.h"

@implementation GTLRCloudLifeSciencesQuery

@dynamic fields;

@end

@implementation GTLRCloudLifeSciencesQuery_ProjectsLocationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v2beta/{+name}";
  GTLRCloudLifeSciencesQuery_ProjectsLocationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudLifeSciences_Location class];
  query.loggingName = @"lifesciences.projects.locations.get";
  return query;
}

@end

@implementation GTLRCloudLifeSciencesQuery_ProjectsLocationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v2beta/{+name}/locations";
  GTLRCloudLifeSciencesQuery_ProjectsLocationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudLifeSciences_ListLocationsResponse class];
  query.loggingName = @"lifesciences.projects.locations.list";
  return query;
}

@end

@implementation GTLRCloudLifeSciencesQuery_ProjectsLocationsOperationsCancel

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudLifeSciences_CancelOperationRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v2beta/{+name}:cancel";
  GTLRCloudLifeSciencesQuery_ProjectsLocationsOperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudLifeSciences_Empty class];
  query.loggingName = @"lifesciences.projects.locations.operations.cancel";
  return query;
}

@end

@implementation GTLRCloudLifeSciencesQuery_ProjectsLocationsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v2beta/{+name}";
  GTLRCloudLifeSciencesQuery_ProjectsLocationsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudLifeSciences_Operation class];
  query.loggingName = @"lifesciences.projects.locations.operations.get";
  return query;
}

@end

@implementation GTLRCloudLifeSciencesQuery_ProjectsLocationsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v2beta/{+name}/operations";
  GTLRCloudLifeSciencesQuery_ProjectsLocationsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudLifeSciences_ListOperationsResponse class];
  query.loggingName = @"lifesciences.projects.locations.operations.list";
  return query;
}

@end

@implementation GTLRCloudLifeSciencesQuery_ProjectsLocationsPipelinesRun

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRCloudLifeSciences_RunPipelineRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v2beta/{+parent}/pipelines:run";
  GTLRCloudLifeSciencesQuery_ProjectsLocationsPipelinesRun *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudLifeSciences_Operation class];
  query.loggingName = @"lifesciences.projects.locations.pipelines.run";
  return query;
}

@end
