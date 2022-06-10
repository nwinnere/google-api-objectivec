// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Apps Script API (script/v1)
// Description:
//   An API for managing and executing Google Apps Script projects.
// Documentation:
//   https://developers.google.com/apps-script/api/

#import "GTLRScriptQuery.h"

#import "GTLRScriptObjects.h"

// ----------------------------------------------------------------------------
// Constants

// metricsGranularity
NSString * const kGTLRScriptMetricsGranularityDaily            = @"DAILY";
NSString * const kGTLRScriptMetricsGranularityUnspecifiedGranularity = @"UNSPECIFIED_GRANULARITY";
NSString * const kGTLRScriptMetricsGranularityWeekly           = @"WEEKLY";

// scriptProcessFilterStatuses
NSString * const kGTLRScriptScriptProcessFilterStatusesCanceled = @"CANCELED";
NSString * const kGTLRScriptScriptProcessFilterStatusesCompleted = @"COMPLETED";
NSString * const kGTLRScriptScriptProcessFilterStatusesDelayed = @"DELAYED";
NSString * const kGTLRScriptScriptProcessFilterStatusesFailed  = @"FAILED";
NSString * const kGTLRScriptScriptProcessFilterStatusesPaused  = @"PAUSED";
NSString * const kGTLRScriptScriptProcessFilterStatusesProcessStatusUnspecified = @"PROCESS_STATUS_UNSPECIFIED";
NSString * const kGTLRScriptScriptProcessFilterStatusesRunning = @"RUNNING";
NSString * const kGTLRScriptScriptProcessFilterStatusesTimedOut = @"TIMED_OUT";
NSString * const kGTLRScriptScriptProcessFilterStatusesUnknown = @"UNKNOWN";

// scriptProcessFilterTypes
NSString * const kGTLRScriptScriptProcessFilterTypesAddOn      = @"ADD_ON";
NSString * const kGTLRScriptScriptProcessFilterTypesEditor     = @"EDITOR";
NSString * const kGTLRScriptScriptProcessFilterTypesExecutionApi = @"EXECUTION_API";
NSString * const kGTLRScriptScriptProcessFilterTypesMenu       = @"MENU";
NSString * const kGTLRScriptScriptProcessFilterTypesProcessTypeUnspecified = @"PROCESS_TYPE_UNSPECIFIED";
NSString * const kGTLRScriptScriptProcessFilterTypesSimpleTrigger = @"SIMPLE_TRIGGER";
NSString * const kGTLRScriptScriptProcessFilterTypesTimeDriven = @"TIME_DRIVEN";
NSString * const kGTLRScriptScriptProcessFilterTypesTrigger    = @"TRIGGER";
NSString * const kGTLRScriptScriptProcessFilterTypesWebapp     = @"WEBAPP";

// scriptProcessFilterUserAccessLevels
NSString * const kGTLRScriptScriptProcessFilterUserAccessLevelsNone = @"NONE";
NSString * const kGTLRScriptScriptProcessFilterUserAccessLevelsOwner = @"OWNER";
NSString * const kGTLRScriptScriptProcessFilterUserAccessLevelsRead = @"READ";
NSString * const kGTLRScriptScriptProcessFilterUserAccessLevelsUserAccessLevelUnspecified = @"USER_ACCESS_LEVEL_UNSPECIFIED";
NSString * const kGTLRScriptScriptProcessFilterUserAccessLevelsWrite = @"WRITE";

// userProcessFilterStatuses
NSString * const kGTLRScriptUserProcessFilterStatusesCanceled  = @"CANCELED";
NSString * const kGTLRScriptUserProcessFilterStatusesCompleted = @"COMPLETED";
NSString * const kGTLRScriptUserProcessFilterStatusesDelayed   = @"DELAYED";
NSString * const kGTLRScriptUserProcessFilterStatusesFailed    = @"FAILED";
NSString * const kGTLRScriptUserProcessFilterStatusesPaused    = @"PAUSED";
NSString * const kGTLRScriptUserProcessFilterStatusesProcessStatusUnspecified = @"PROCESS_STATUS_UNSPECIFIED";
NSString * const kGTLRScriptUserProcessFilterStatusesRunning   = @"RUNNING";
NSString * const kGTLRScriptUserProcessFilterStatusesTimedOut  = @"TIMED_OUT";
NSString * const kGTLRScriptUserProcessFilterStatusesUnknown   = @"UNKNOWN";

// userProcessFilterTypes
NSString * const kGTLRScriptUserProcessFilterTypesAddOn        = @"ADD_ON";
NSString * const kGTLRScriptUserProcessFilterTypesEditor       = @"EDITOR";
NSString * const kGTLRScriptUserProcessFilterTypesExecutionApi = @"EXECUTION_API";
NSString * const kGTLRScriptUserProcessFilterTypesMenu         = @"MENU";
NSString * const kGTLRScriptUserProcessFilterTypesProcessTypeUnspecified = @"PROCESS_TYPE_UNSPECIFIED";
NSString * const kGTLRScriptUserProcessFilterTypesSimpleTrigger = @"SIMPLE_TRIGGER";
NSString * const kGTLRScriptUserProcessFilterTypesTimeDriven   = @"TIME_DRIVEN";
NSString * const kGTLRScriptUserProcessFilterTypesTrigger      = @"TRIGGER";
NSString * const kGTLRScriptUserProcessFilterTypesWebapp       = @"WEBAPP";

// userProcessFilterUserAccessLevels
NSString * const kGTLRScriptUserProcessFilterUserAccessLevelsNone = @"NONE";
NSString * const kGTLRScriptUserProcessFilterUserAccessLevelsOwner = @"OWNER";
NSString * const kGTLRScriptUserProcessFilterUserAccessLevelsRead = @"READ";
NSString * const kGTLRScriptUserProcessFilterUserAccessLevelsUserAccessLevelUnspecified = @"USER_ACCESS_LEVEL_UNSPECIFIED";
NSString * const kGTLRScriptUserProcessFilterUserAccessLevelsWrite = @"WRITE";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRScriptQuery

@dynamic fields;

@end

@implementation GTLRScriptQuery_ProcessesList

@dynamic pageSize, pageToken, userProcessFilterDeploymentId,
         userProcessFilterEndTime, userProcessFilterFunctionName,
         userProcessFilterProjectName, userProcessFilterScriptId,
         userProcessFilterStartTime, userProcessFilterStatuses,
         userProcessFilterTypes, userProcessFilterUserAccessLevels;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"userProcessFilterDeploymentId" : @"userProcessFilter.deploymentId",
    @"userProcessFilterEndTime" : @"userProcessFilter.endTime",
    @"userProcessFilterFunctionName" : @"userProcessFilter.functionName",
    @"userProcessFilterProjectName" : @"userProcessFilter.projectName",
    @"userProcessFilterScriptId" : @"userProcessFilter.scriptId",
    @"userProcessFilterStartTime" : @"userProcessFilter.startTime",
    @"userProcessFilterStatuses" : @"userProcessFilter.statuses",
    @"userProcessFilterTypes" : @"userProcessFilter.types",
    @"userProcessFilterUserAccessLevels" : @"userProcessFilter.userAccessLevels"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"userProcessFilter.statuses" : [NSString class],
    @"userProcessFilter.types" : [NSString class],
    @"userProcessFilter.userAccessLevels" : [NSString class]
  };
  return map;
}

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/processes";
  GTLRScriptQuery_ProcessesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRScript_ListUserProcessesResponse class];
  query.loggingName = @"script.processes.list";
  return query;
}

@end

@implementation GTLRScriptQuery_ProcessesListScriptProcesses

@dynamic pageSize, pageToken, scriptId, scriptProcessFilterDeploymentId,
         scriptProcessFilterEndTime, scriptProcessFilterFunctionName,
         scriptProcessFilterStartTime, scriptProcessFilterStatuses,
         scriptProcessFilterTypes, scriptProcessFilterUserAccessLevels;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"scriptProcessFilterDeploymentId" : @"scriptProcessFilter.deploymentId",
    @"scriptProcessFilterEndTime" : @"scriptProcessFilter.endTime",
    @"scriptProcessFilterFunctionName" : @"scriptProcessFilter.functionName",
    @"scriptProcessFilterStartTime" : @"scriptProcessFilter.startTime",
    @"scriptProcessFilterStatuses" : @"scriptProcessFilter.statuses",
    @"scriptProcessFilterTypes" : @"scriptProcessFilter.types",
    @"scriptProcessFilterUserAccessLevels" : @"scriptProcessFilter.userAccessLevels"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"scriptProcessFilter.statuses" : [NSString class],
    @"scriptProcessFilter.types" : [NSString class],
    @"scriptProcessFilter.userAccessLevels" : [NSString class]
  };
  return map;
}

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/processes:listScriptProcesses";
  GTLRScriptQuery_ProcessesListScriptProcesses *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRScript_ListScriptProcessesResponse class];
  query.loggingName = @"script.processes.listScriptProcesses";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsCreate

+ (instancetype)queryWithObject:(GTLRScript_CreateProjectRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"v1/projects";
  GTLRScriptQuery_ProjectsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRScript_Project class];
  query.loggingName = @"script.projects.create";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsDeploymentsCreate

@dynamic scriptId;

+ (instancetype)queryWithObject:(GTLRScript_DeploymentConfig *)object
                       scriptId:(NSString *)scriptId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"scriptId" ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/deployments";
  GTLRScriptQuery_ProjectsDeploymentsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.scriptId = scriptId;
  query.expectedObjectClass = [GTLRScript_Deployment class];
  query.loggingName = @"script.projects.deployments.create";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsDeploymentsDelete

@dynamic deploymentId, scriptId;

+ (instancetype)queryWithScriptId:(NSString *)scriptId
                     deploymentId:(NSString *)deploymentId {
  NSArray *pathParams = @[
    @"deploymentId", @"scriptId"
  ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/deployments/{deploymentId}";
  GTLRScriptQuery_ProjectsDeploymentsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.scriptId = scriptId;
  query.deploymentId = deploymentId;
  query.expectedObjectClass = [GTLRScript_Empty class];
  query.loggingName = @"script.projects.deployments.delete";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsDeploymentsGet

@dynamic deploymentId, scriptId;

+ (instancetype)queryWithScriptId:(NSString *)scriptId
                     deploymentId:(NSString *)deploymentId {
  NSArray *pathParams = @[
    @"deploymentId", @"scriptId"
  ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/deployments/{deploymentId}";
  GTLRScriptQuery_ProjectsDeploymentsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.scriptId = scriptId;
  query.deploymentId = deploymentId;
  query.expectedObjectClass = [GTLRScript_Deployment class];
  query.loggingName = @"script.projects.deployments.get";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsDeploymentsList

@dynamic pageSize, pageToken, scriptId;

+ (instancetype)queryWithScriptId:(NSString *)scriptId {
  NSArray *pathParams = @[ @"scriptId" ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/deployments";
  GTLRScriptQuery_ProjectsDeploymentsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.scriptId = scriptId;
  query.expectedObjectClass = [GTLRScript_ListDeploymentsResponse class];
  query.loggingName = @"script.projects.deployments.list";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsDeploymentsUpdate

@dynamic deploymentId, scriptId;

+ (instancetype)queryWithObject:(GTLRScript_UpdateDeploymentRequest *)object
                       scriptId:(NSString *)scriptId
                   deploymentId:(NSString *)deploymentId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"deploymentId", @"scriptId"
  ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/deployments/{deploymentId}";
  GTLRScriptQuery_ProjectsDeploymentsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.scriptId = scriptId;
  query.deploymentId = deploymentId;
  query.expectedObjectClass = [GTLRScript_Deployment class];
  query.loggingName = @"script.projects.deployments.update";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsGet

@dynamic scriptId;

+ (instancetype)queryWithScriptId:(NSString *)scriptId {
  NSArray *pathParams = @[ @"scriptId" ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}";
  GTLRScriptQuery_ProjectsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.scriptId = scriptId;
  query.expectedObjectClass = [GTLRScript_Project class];
  query.loggingName = @"script.projects.get";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsGetContent

@dynamic scriptId, versionNumber;

+ (instancetype)queryWithScriptId:(NSString *)scriptId {
  NSArray *pathParams = @[ @"scriptId" ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/content";
  GTLRScriptQuery_ProjectsGetContent *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.scriptId = scriptId;
  query.expectedObjectClass = [GTLRScript_Content class];
  query.loggingName = @"script.projects.getContent";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsGetMetrics

@dynamic metricsFilterDeploymentId, metricsGranularity, scriptId;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"metricsFilterDeploymentId" : @"metricsFilter.deploymentId" };
}

+ (instancetype)queryWithScriptId:(NSString *)scriptId {
  NSArray *pathParams = @[ @"scriptId" ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/metrics";
  GTLRScriptQuery_ProjectsGetMetrics *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.scriptId = scriptId;
  query.expectedObjectClass = [GTLRScript_Metrics class];
  query.loggingName = @"script.projects.getMetrics";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsUpdateContent

@dynamic scriptId;

+ (instancetype)queryWithObject:(GTLRScript_Content *)object
                       scriptId:(NSString *)scriptId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"scriptId" ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/content";
  GTLRScriptQuery_ProjectsUpdateContent *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.scriptId = scriptId;
  query.expectedObjectClass = [GTLRScript_Content class];
  query.loggingName = @"script.projects.updateContent";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsVersionsCreate

@dynamic scriptId;

+ (instancetype)queryWithObject:(GTLRScript_Version *)object
                       scriptId:(NSString *)scriptId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"scriptId" ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/versions";
  GTLRScriptQuery_ProjectsVersionsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.scriptId = scriptId;
  query.expectedObjectClass = [GTLRScript_Version class];
  query.loggingName = @"script.projects.versions.create";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsVersionsGet

@dynamic scriptId, versionNumber;

+ (instancetype)queryWithScriptId:(NSString *)scriptId
                    versionNumber:(NSInteger)versionNumber {
  NSArray *pathParams = @[
    @"scriptId", @"versionNumber"
  ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/versions/{versionNumber}";
  GTLRScriptQuery_ProjectsVersionsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.scriptId = scriptId;
  query.versionNumber = versionNumber;
  query.expectedObjectClass = [GTLRScript_Version class];
  query.loggingName = @"script.projects.versions.get";
  return query;
}

@end

@implementation GTLRScriptQuery_ProjectsVersionsList

@dynamic pageSize, pageToken, scriptId;

+ (instancetype)queryWithScriptId:(NSString *)scriptId {
  NSArray *pathParams = @[ @"scriptId" ];
  NSString *pathURITemplate = @"v1/projects/{scriptId}/versions";
  GTLRScriptQuery_ProjectsVersionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.scriptId = scriptId;
  query.expectedObjectClass = [GTLRScript_ListVersionsResponse class];
  query.loggingName = @"script.projects.versions.list";
  return query;
}

@end

@implementation GTLRScriptQuery_ScriptsRun

@dynamic scriptId;

+ (instancetype)queryWithObject:(GTLRScript_ExecutionRequest *)object
                       scriptId:(NSString *)scriptId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"scriptId" ];
  NSString *pathURITemplate = @"v1/scripts/{scriptId}:run";
  GTLRScriptQuery_ScriptsRun *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.scriptId = scriptId;
  query.expectedObjectClass = [GTLRScript_Operation class];
  query.loggingName = @"script.scripts.run";
  return query;
}

@end
