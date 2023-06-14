// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Workflow Executions API (workflowexecutions/v1)
// Description:
//   Execute workflows created with Workflows API.
// Documentation:
//   https://cloud.google.com/workflows

#import "GTLRWorkflowExecutionsQuery.h"

#import "GTLRWorkflowExecutionsObjects.h"

// ----------------------------------------------------------------------------
// Constants

// view
NSString * const kGTLRWorkflowExecutionsViewBasic              = @"BASIC";
NSString * const kGTLRWorkflowExecutionsViewExecutionViewUnspecified = @"EXECUTION_VIEW_UNSPECIFIED";
NSString * const kGTLRWorkflowExecutionsViewFull               = @"FULL";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRWorkflowExecutionsQuery

@dynamic fields;

@end

@implementation GTLRWorkflowExecutionsQuery_ProjectsLocationsWorkflowsExecutionsCancel

@dynamic name;

+ (instancetype)queryWithObject:(GTLRWorkflowExecutions_CancelExecutionRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancel";
  GTLRWorkflowExecutionsQuery_ProjectsLocationsWorkflowsExecutionsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRWorkflowExecutions_Execution class];
  query.loggingName = @"workflowexecutions.projects.locations.workflows.executions.cancel";
  return query;
}

@end

@implementation GTLRWorkflowExecutionsQuery_ProjectsLocationsWorkflowsExecutionsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRWorkflowExecutions_Execution *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/executions";
  GTLRWorkflowExecutionsQuery_ProjectsLocationsWorkflowsExecutionsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRWorkflowExecutions_Execution class];
  query.loggingName = @"workflowexecutions.projects.locations.workflows.executions.create";
  return query;
}

@end

@implementation GTLRWorkflowExecutionsQuery_ProjectsLocationsWorkflowsExecutionsGet

@dynamic name, view;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRWorkflowExecutionsQuery_ProjectsLocationsWorkflowsExecutionsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWorkflowExecutions_Execution class];
  query.loggingName = @"workflowexecutions.projects.locations.workflows.executions.get";
  return query;
}

@end

@implementation GTLRWorkflowExecutionsQuery_ProjectsLocationsWorkflowsExecutionsList

@dynamic pageSize, pageToken, parent, view;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/executions";
  GTLRWorkflowExecutionsQuery_ProjectsLocationsWorkflowsExecutionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRWorkflowExecutions_ListExecutionsResponse class];
  query.loggingName = @"workflowexecutions.projects.locations.workflows.executions.list";
  return query;
}

@end
