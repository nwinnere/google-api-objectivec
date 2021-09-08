// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Tool Results API (toolresults/v1beta3)
// Description:
//   Reads and publishes results from Cloud Test Lab.
// Documentation:
//   https://developers.google.com/cloud-test-lab/

#import "GTLRToolResultsQuery.h"

#import "GTLRToolResultsObjects.h"

// ----------------------------------------------------------------------------
// Constants

// filter
NSString * const kGTLRToolResultsFilterCpu                     = @"cpu";
NSString * const kGTLRToolResultsFilterMemory                  = @"memory";
NSString * const kGTLRToolResultsFilterNetwork                 = @"network";
NSString * const kGTLRToolResultsFilterPerfMetricTypeUnspecified = @"perfMetricTypeUnspecified";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRToolResultsQuery

@dynamic fields;

@end

@implementation GTLRToolResultsQuery_ProjectsGetSettings

@dynamic projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId {
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"{projectId}/settings";
  GTLRToolResultsQuery_ProjectsGetSettings *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRToolResults_ProjectSettings class];
  query.loggingName = @"toolresults.projects.getSettings";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesCreate

@dynamic projectId, requestId;

+ (instancetype)queryWithObject:(GTLRToolResults_History *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"{projectId}/histories";
  GTLRToolResultsQuery_ProjectsHistoriesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRToolResults_History class];
  query.loggingName = @"toolresults.projects.histories.create";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsCreate

@dynamic historyId, projectId, requestId;

+ (instancetype)queryWithObject:(GTLRToolResults_Execution *)object
                      projectId:(NSString *)projectId
                      historyId:(NSString *)historyId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"historyId", @"projectId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.historyId = historyId;
  query.expectedObjectClass = [GTLRToolResults_Execution class];
  query.loggingName = @"toolresults.projects.histories.executions.create";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsGet

@dynamic executionId, historyId, projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         historyId:(NSString *)historyId
                       executionId:(NSString *)executionId {
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.expectedObjectClass = [GTLRToolResults_Execution class];
  query.loggingName = @"toolresults.projects.histories.executions.get";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsList

@dynamic historyId, pageSize, pageToken, projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         historyId:(NSString *)historyId {
  NSArray *pathParams = @[
    @"historyId", @"projectId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.historyId = historyId;
  query.expectedObjectClass = [GTLRToolResults_ListExecutionsResponse class];
  query.loggingName = @"toolresults.projects.histories.executions.list";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsPatch

@dynamic executionId, historyId, projectId, requestId;

+ (instancetype)queryWithObject:(GTLRToolResults_Execution *)object
                      projectId:(NSString *)projectId
                      historyId:(NSString *)historyId
                    executionId:(NSString *)executionId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.expectedObjectClass = [GTLRToolResults_Execution class];
  query.loggingName = @"toolresults.projects.histories.executions.patch";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsCreate

@dynamic executionId, historyId, projectId, requestId;

+ (instancetype)queryWithObject:(GTLRToolResults_Step *)object
                      projectId:(NSString *)projectId
                      historyId:(NSString *)historyId
                    executionId:(NSString *)executionId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.expectedObjectClass = [GTLRToolResults_Step class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.create";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsGet

@dynamic executionId, historyId, projectId, stepId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         historyId:(NSString *)historyId
                       executionId:(NSString *)executionId
                            stepId:(NSString *)stepId {
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.expectedObjectClass = [GTLRToolResults_Step class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.get";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsGetPerfMetricsSummary

@dynamic executionId, historyId, projectId, stepId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         historyId:(NSString *)historyId
                       executionId:(NSString *)executionId
                            stepId:(NSString *)stepId {
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}/perfMetricsSummary";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsGetPerfMetricsSummary *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.expectedObjectClass = [GTLRToolResults_PerfMetricsSummary class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.getPerfMetricsSummary";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsList

@dynamic executionId, historyId, pageSize, pageToken, projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         historyId:(NSString *)historyId
                       executionId:(NSString *)executionId {
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.expectedObjectClass = [GTLRToolResults_ListStepsResponse class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.list";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPatch

@dynamic executionId, historyId, projectId, requestId, stepId;

+ (instancetype)queryWithObject:(GTLRToolResults_Step *)object
                      projectId:(NSString *)projectId
                      historyId:(NSString *)historyId
                    executionId:(NSString *)executionId
                         stepId:(NSString *)stepId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.expectedObjectClass = [GTLRToolResults_Step class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.patch";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfMetricsSummaryCreate

@dynamic executionId, historyId, projectId, stepId;

+ (instancetype)queryWithObject:(GTLRToolResults_PerfMetricsSummary *)object
                      projectId:(NSString *)projectId
                      historyId:(NSString *)historyId
                    executionId:(NSString *)executionId
                         stepId:(NSString *)stepId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}/perfMetricsSummary";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfMetricsSummaryCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.expectedObjectClass = [GTLRToolResults_PerfMetricsSummary class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.perfMetricsSummary.create";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfSampleSeriesCreate

@dynamic executionId, historyId, projectId, stepId;

+ (instancetype)queryWithObject:(GTLRToolResults_PerfSampleSeries *)object
                      projectId:(NSString *)projectId
                      historyId:(NSString *)historyId
                    executionId:(NSString *)executionId
                         stepId:(NSString *)stepId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}/perfSampleSeries";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfSampleSeriesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.expectedObjectClass = [GTLRToolResults_PerfSampleSeries class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.perfSampleSeries.create";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfSampleSeriesGet

@dynamic executionId, historyId, projectId, sampleSeriesId, stepId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         historyId:(NSString *)historyId
                       executionId:(NSString *)executionId
                            stepId:(NSString *)stepId
                    sampleSeriesId:(NSString *)sampleSeriesId {
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"sampleSeriesId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}/perfSampleSeries/{sampleSeriesId}";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfSampleSeriesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.sampleSeriesId = sampleSeriesId;
  query.expectedObjectClass = [GTLRToolResults_PerfSampleSeries class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.perfSampleSeries.get";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfSampleSeriesList

@dynamic executionId, filter, historyId, projectId, stepId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"filter" : [NSString class]
  };
  return map;
}

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         historyId:(NSString *)historyId
                       executionId:(NSString *)executionId
                            stepId:(NSString *)stepId {
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}/perfSampleSeries";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfSampleSeriesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.expectedObjectClass = [GTLRToolResults_ListPerfSampleSeriesResponse class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.perfSampleSeries.list";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfSampleSeriesSamplesBatchCreate

@dynamic executionId, historyId, projectId, sampleSeriesId, stepId;

+ (instancetype)queryWithObject:(GTLRToolResults_BatchCreatePerfSamplesRequest *)object
                      projectId:(NSString *)projectId
                      historyId:(NSString *)historyId
                    executionId:(NSString *)executionId
                         stepId:(NSString *)stepId
                 sampleSeriesId:(NSString *)sampleSeriesId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"sampleSeriesId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}/perfSampleSeries/{sampleSeriesId}/samples:batchCreate";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfSampleSeriesSamplesBatchCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.sampleSeriesId = sampleSeriesId;
  query.expectedObjectClass = [GTLRToolResults_BatchCreatePerfSamplesResponse class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.perfSampleSeries.samples.batchCreate";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfSampleSeriesSamplesList

@dynamic executionId, historyId, pageSize, pageToken, projectId, sampleSeriesId,
         stepId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         historyId:(NSString *)historyId
                       executionId:(NSString *)executionId
                            stepId:(NSString *)stepId
                    sampleSeriesId:(NSString *)sampleSeriesId {
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"sampleSeriesId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}/perfSampleSeries/{sampleSeriesId}/samples";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPerfSampleSeriesSamplesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.sampleSeriesId = sampleSeriesId;
  query.expectedObjectClass = [GTLRToolResults_ListPerfSamplesResponse class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.perfSampleSeries.samples.list";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPublishXunitXmlFiles

@dynamic executionId, historyId, projectId, stepId;

+ (instancetype)queryWithObject:(GTLRToolResults_PublishXunitXmlFilesRequest *)object
                      projectId:(NSString *)projectId
                      historyId:(NSString *)historyId
                    executionId:(NSString *)executionId
                         stepId:(NSString *)stepId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}:publishXunitXmlFiles";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsPublishXunitXmlFiles *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.expectedObjectClass = [GTLRToolResults_Step class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.publishXunitXmlFiles";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsThumbnailsList

@dynamic executionId, historyId, pageSize, pageToken, projectId, stepId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         historyId:(NSString *)historyId
                       executionId:(NSString *)executionId
                            stepId:(NSString *)stepId {
  NSArray *pathParams = @[
    @"executionId", @"historyId", @"projectId", @"stepId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}/executions/{executionId}/steps/{stepId}/thumbnails";
  GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsThumbnailsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.historyId = historyId;
  query.executionId = executionId;
  query.stepId = stepId;
  query.expectedObjectClass = [GTLRToolResults_ListStepThumbnailsResponse class];
  query.loggingName = @"toolresults.projects.histories.executions.steps.thumbnails.list";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesGet

@dynamic historyId, projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         historyId:(NSString *)historyId {
  NSArray *pathParams = @[
    @"historyId", @"projectId"
  ];
  NSString *pathURITemplate = @"{projectId}/histories/{historyId}";
  GTLRToolResultsQuery_ProjectsHistoriesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.historyId = historyId;
  query.expectedObjectClass = [GTLRToolResults_History class];
  query.loggingName = @"toolresults.projects.histories.get";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsHistoriesList

@dynamic filterByName, pageSize, pageToken, projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId {
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"{projectId}/histories";
  GTLRToolResultsQuery_ProjectsHistoriesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRToolResults_ListHistoriesResponse class];
  query.loggingName = @"toolresults.projects.histories.list";
  return query;
}

@end

@implementation GTLRToolResultsQuery_ProjectsInitializeSettings

@dynamic projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId {
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"{projectId}:initializeSettings";
  GTLRToolResultsQuery_ProjectsInitializeSettings *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRToolResults_ProjectSettings class];
  query.loggingName = @"toolresults.projects.initializeSettings";
  return query;
}

@end
