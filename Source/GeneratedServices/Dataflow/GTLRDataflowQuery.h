// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Dataflow API (dataflow/v1b3)
// Description:
//   Develops and executes data processing patterns like ETL, batch computation,
//   and continuous computation.
// Documentation:
//   https://cloud.google.com/dataflow

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRDataflow_CreateJobFromTemplateRequest;
@class GTLRDataflow_GetDebugConfigRequest;
@class GTLRDataflow_Job;
@class GTLRDataflow_LeaseWorkItemRequest;
@class GTLRDataflow_ReportWorkItemStatusRequest;
@class GTLRDataflow_SendDebugCaptureRequest;
@class GTLRDataflow_SendWorkerMessagesRequest;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// filter

/** Value: "ACTIVE" */
GTLR_EXTERN NSString * const kGTLRDataflowFilterActive;
/** Value: "ALL" */
GTLR_EXTERN NSString * const kGTLRDataflowFilterAll;
/** Value: "TERMINATED" */
GTLR_EXTERN NSString * const kGTLRDataflowFilterTerminated;
/** Value: "UNKNOWN" */
GTLR_EXTERN NSString * const kGTLRDataflowFilterUnknown;

// ----------------------------------------------------------------------------
// minimumImportance

/** Value: "JOB_MESSAGE_BASIC" */
GTLR_EXTERN NSString * const kGTLRDataflowMinimumImportanceJobMessageBasic;
/** Value: "JOB_MESSAGE_DEBUG" */
GTLR_EXTERN NSString * const kGTLRDataflowMinimumImportanceJobMessageDebug;
/** Value: "JOB_MESSAGE_DETAILED" */
GTLR_EXTERN NSString * const kGTLRDataflowMinimumImportanceJobMessageDetailed;
/** Value: "JOB_MESSAGE_ERROR" */
GTLR_EXTERN NSString * const kGTLRDataflowMinimumImportanceJobMessageError;
/** Value: "JOB_MESSAGE_IMPORTANCE_UNKNOWN" */
GTLR_EXTERN NSString * const kGTLRDataflowMinimumImportanceJobMessageImportanceUnknown;
/** Value: "JOB_MESSAGE_WARNING" */
GTLR_EXTERN NSString * const kGTLRDataflowMinimumImportanceJobMessageWarning;

// ----------------------------------------------------------------------------
// view

/** Value: "JOB_VIEW_ALL" */
GTLR_EXTERN NSString * const kGTLRDataflowViewJobViewAll;
/** Value: "JOB_VIEW_SUMMARY" */
GTLR_EXTERN NSString * const kGTLRDataflowViewJobViewSummary;
/** Value: "JOB_VIEW_UNKNOWN" */
GTLR_EXTERN NSString * const kGTLRDataflowViewJobViewUnknown;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Dataflow query classes.
 */
@interface GTLRDataflowQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a dataflow job.
 *
 *  Method: dataflow.projects.jobs.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsJobsCreate : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsJobsCreateWithObject:projectId:]

/** The project which owns the job. */
@property(nonatomic, copy, nullable) NSString *projectId;

/** DEPRECATED. This field is now on the Job message. */
@property(nonatomic, copy, nullable) NSString *replaceJobId;

/**
 *  Level of information requested in response.
 *
 *  Likely values:
 *    @arg @c kGTLRDataflowViewJobViewUnknown Value "JOB_VIEW_UNKNOWN"
 *    @arg @c kGTLRDataflowViewJobViewSummary Value "JOB_VIEW_SUMMARY"
 *    @arg @c kGTLRDataflowViewJobViewAll Value "JOB_VIEW_ALL"
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRDataflow_Job.
 *
 *  Creates a dataflow job.
 *
 *  @param object The @c GTLRDataflow_Job to include in the query.
 *  @param projectId The project which owns the job.
 *
 *  @returns GTLRDataflowQuery_ProjectsJobsCreate
 */
+ (instancetype)queryWithObject:(GTLRDataflow_Job *)object
                      projectId:(NSString *)projectId;

@end

/**
 *  Get encoded debug configuration for component. Not cacheable.
 *
 *  Method: dataflow.projects.jobs.debug.getConfig
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsJobsDebugGetConfig : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsJobsDebugGetConfigWithObject:projectId:jobId:]

/** The job id. */
@property(nonatomic, copy, nullable) NSString *jobId;

/** The project id. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRDataflow_GetDebugConfigResponse.
 *
 *  Get encoded debug configuration for component. Not cacheable.
 *
 *  @param object The @c GTLRDataflow_GetDebugConfigRequest to include in the
 *    query.
 *  @param projectId The project id.
 *  @param jobId The job id.
 *
 *  @returns GTLRDataflowQuery_ProjectsJobsDebugGetConfig
 */
+ (instancetype)queryWithObject:(GTLRDataflow_GetDebugConfigRequest *)object
                      projectId:(NSString *)projectId
                          jobId:(NSString *)jobId;

@end

/**
 *  Send encoded debug capture data for component.
 *
 *  Method: dataflow.projects.jobs.debug.sendCapture
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsJobsDebugSendCapture : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsJobsDebugSendCaptureWithObject:projectId:jobId:]

/** The job id. */
@property(nonatomic, copy, nullable) NSString *jobId;

/** The project id. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRDataflow_SendDebugCaptureResponse.
 *
 *  Send encoded debug capture data for component.
 *
 *  @param object The @c GTLRDataflow_SendDebugCaptureRequest to include in the
 *    query.
 *  @param projectId The project id.
 *  @param jobId The job id.
 *
 *  @returns GTLRDataflowQuery_ProjectsJobsDebugSendCapture
 */
+ (instancetype)queryWithObject:(GTLRDataflow_SendDebugCaptureRequest *)object
                      projectId:(NSString *)projectId
                          jobId:(NSString *)jobId;

@end

/**
 *  Gets the state of the specified dataflow job.
 *
 *  Method: dataflow.projects.jobs.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsJobsGet : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsJobsGetWithprojectId:jobId:]

/** Identifies a single job. */
@property(nonatomic, copy, nullable) NSString *jobId;

/** The project which owns the job. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Level of information requested in response.
 *
 *  Likely values:
 *    @arg @c kGTLRDataflowViewJobViewUnknown Value "JOB_VIEW_UNKNOWN"
 *    @arg @c kGTLRDataflowViewJobViewSummary Value "JOB_VIEW_SUMMARY"
 *    @arg @c kGTLRDataflowViewJobViewAll Value "JOB_VIEW_ALL"
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRDataflow_Job.
 *
 *  Gets the state of the specified dataflow job.
 *
 *  @param projectId The project which owns the job.
 *  @param jobId Identifies a single job.
 *
 *  @returns GTLRDataflowQuery_ProjectsJobsGet
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                             jobId:(NSString *)jobId;

@end

/**
 *  Request the job status.
 *
 *  Method: dataflow.projects.jobs.getMetrics
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsJobsGetMetrics : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsJobsGetMetricsWithprojectId:jobId:]

/** The job to get messages for. */
@property(nonatomic, copy, nullable) NSString *jobId;

/** A project id. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Return only metric data that has changed since this time. Default is to
 *  return all information about all metrics for the job.
 */
@property(nonatomic, copy, nullable) NSString *startTime;

/**
 *  Fetches a @c GTLRDataflow_JobMetrics.
 *
 *  Request the job status.
 *
 *  @param projectId A project id.
 *  @param jobId The job to get messages for.
 *
 *  @returns GTLRDataflowQuery_ProjectsJobsGetMetrics
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                             jobId:(NSString *)jobId;

@end

/**
 *  List the jobs of a project
 *
 *  Method: dataflow.projects.jobs.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsJobsList : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsJobsListWithprojectId:]

/**
 *  The kind of filter to use.
 *
 *  Likely values:
 *    @arg @c kGTLRDataflowFilterUnknown Value "UNKNOWN"
 *    @arg @c kGTLRDataflowFilterAll Value "ALL"
 *    @arg @c kGTLRDataflowFilterTerminated Value "TERMINATED"
 *    @arg @c kGTLRDataflowFilterActive Value "ACTIVE"
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  If there are many jobs, limit response to at most this many. The actual
 *  number of jobs returned will be the lesser of max_responses and an
 *  unspecified server-defined limit.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Set this to the 'next_page_token' field of a previous response to request
 *  additional results in a long list.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The project which owns the jobs. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Level of information requested in response. Default is SUMMARY.
 *
 *  Likely values:
 *    @arg @c kGTLRDataflowViewJobViewUnknown Value "JOB_VIEW_UNKNOWN"
 *    @arg @c kGTLRDataflowViewJobViewSummary Value "JOB_VIEW_SUMMARY"
 *    @arg @c kGTLRDataflowViewJobViewAll Value "JOB_VIEW_ALL"
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRDataflow_ListJobsResponse.
 *
 *  List the jobs of a project
 *
 *  @param projectId The project which owns the jobs.
 *
 *  @returns GTLRDataflowQuery_ProjectsJobsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId;

@end

/**
 *  Request the job status.
 *
 *  Method: dataflow.projects.jobs.messages.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsJobsMessagesList : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsJobsMessagesListWithprojectId:jobId:]

/**
 *  Return only messages with timestamps < end_time. The default is now (i.e.
 *  return up to the latest messages available).
 */
@property(nonatomic, copy, nullable) NSString *endTime;

/** The job to get messages about. */
@property(nonatomic, copy, nullable) NSString *jobId;

/**
 *  Filter to only get messages with importance >= level
 *
 *  Likely values:
 *    @arg @c kGTLRDataflowMinimumImportanceJobMessageImportanceUnknown Value
 *        "JOB_MESSAGE_IMPORTANCE_UNKNOWN"
 *    @arg @c kGTLRDataflowMinimumImportanceJobMessageDebug Value
 *        "JOB_MESSAGE_DEBUG"
 *    @arg @c kGTLRDataflowMinimumImportanceJobMessageDetailed Value
 *        "JOB_MESSAGE_DETAILED"
 *    @arg @c kGTLRDataflowMinimumImportanceJobMessageBasic Value
 *        "JOB_MESSAGE_BASIC"
 *    @arg @c kGTLRDataflowMinimumImportanceJobMessageWarning Value
 *        "JOB_MESSAGE_WARNING"
 *    @arg @c kGTLRDataflowMinimumImportanceJobMessageError Value
 *        "JOB_MESSAGE_ERROR"
 */
@property(nonatomic, copy, nullable) NSString *minimumImportance;

/**
 *  If specified, determines the maximum number of messages to return. If
 *  unspecified, the service may choose an appropriate default, or may return an
 *  arbitrarily large number of results.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  If supplied, this should be the value of next_page_token returned by an
 *  earlier call. This will cause the next page of results to be returned.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** A project id. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  If specified, return only messages with timestamps >= start_time. The
 *  default is the job creation time (i.e. beginning of messages).
 */
@property(nonatomic, copy, nullable) NSString *startTime;

/**
 *  Fetches a @c GTLRDataflow_ListJobMessagesResponse.
 *
 *  Request the job status.
 *
 *  @param projectId A project id.
 *  @param jobId The job to get messages about.
 *
 *  @returns GTLRDataflowQuery_ProjectsJobsMessagesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                             jobId:(NSString *)jobId;

@end

/**
 *  Updates the state of an existing dataflow job.
 *
 *  Method: dataflow.projects.jobs.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsJobsUpdate : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsJobsUpdateWithObject:projectId:jobId:]

/** Identifies a single job. */
@property(nonatomic, copy, nullable) NSString *jobId;

/** The project which owns the job. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRDataflow_Job.
 *
 *  Updates the state of an existing dataflow job.
 *
 *  @param object The @c GTLRDataflow_Job to include in the query.
 *  @param projectId The project which owns the job.
 *  @param jobId Identifies a single job.
 *
 *  @returns GTLRDataflowQuery_ProjectsJobsUpdate
 */
+ (instancetype)queryWithObject:(GTLRDataflow_Job *)object
                      projectId:(NSString *)projectId
                          jobId:(NSString *)jobId;

@end

/**
 *  Leases a dataflow WorkItem to run.
 *
 *  Method: dataflow.projects.jobs.workItems.lease
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsJobsWorkItemsLease : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsJobsWorkItemsLeaseWithObject:projectId:jobId:]

/** Identifies the workflow job this worker belongs to. */
@property(nonatomic, copy, nullable) NSString *jobId;

/** Identifies the project this worker belongs to. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRDataflow_LeaseWorkItemResponse.
 *
 *  Leases a dataflow WorkItem to run.
 *
 *  @param object The @c GTLRDataflow_LeaseWorkItemRequest to include in the
 *    query.
 *  @param projectId Identifies the project this worker belongs to.
 *  @param jobId Identifies the workflow job this worker belongs to.
 *
 *  @returns GTLRDataflowQuery_ProjectsJobsWorkItemsLease
 */
+ (instancetype)queryWithObject:(GTLRDataflow_LeaseWorkItemRequest *)object
                      projectId:(NSString *)projectId
                          jobId:(NSString *)jobId;

@end

/**
 *  Reports the status of dataflow WorkItems leased by a worker.
 *
 *  Method: dataflow.projects.jobs.workItems.reportStatus
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsJobsWorkItemsReportStatus : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsJobsWorkItemsReportStatusWithObject:projectId:jobId:]

/** The job which the WorkItem is part of. */
@property(nonatomic, copy, nullable) NSString *jobId;

/** The project which owns the WorkItem's job. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRDataflow_ReportWorkItemStatusResponse.
 *
 *  Reports the status of dataflow WorkItems leased by a worker.
 *
 *  @param object The @c GTLRDataflow_ReportWorkItemStatusRequest to include in
 *    the query.
 *  @param projectId The project which owns the WorkItem's job.
 *  @param jobId The job which the WorkItem is part of.
 *
 *  @returns GTLRDataflowQuery_ProjectsJobsWorkItemsReportStatus
 */
+ (instancetype)queryWithObject:(GTLRDataflow_ReportWorkItemStatusRequest *)object
                      projectId:(NSString *)projectId
                          jobId:(NSString *)jobId;

@end

/**
 *  Creates a dataflow job from a template.
 *
 *  Method: dataflow.projects.templates.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsTemplatesCreate : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsTemplatesCreateWithObject:projectId:]

/** The project which owns the job. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRDataflow_Job.
 *
 *  Creates a dataflow job from a template.
 *
 *  @param object The @c GTLRDataflow_CreateJobFromTemplateRequest to include in
 *    the query.
 *  @param projectId The project which owns the job.
 *
 *  @returns GTLRDataflowQuery_ProjectsTemplatesCreate
 */
+ (instancetype)queryWithObject:(GTLRDataflow_CreateJobFromTemplateRequest *)object
                      projectId:(NSString *)projectId;

@end

/**
 *  Send a worker_message to the service.
 *
 *  Method: dataflow.projects.workerMessages
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataflowCloudPlatform
 *    @c kGTLRAuthScopeDataflowUserinfoEmail
 */
@interface GTLRDataflowQuery_ProjectsWorkerMessages : GTLRDataflowQuery
// Previous library name was
//   +[GTLQueryDataflow queryForProjectsWorkerMessagesWithObject:projectId:]

/** The project to send the WorkerMessages to. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRDataflow_SendWorkerMessagesResponse.
 *
 *  Send a worker_message to the service.
 *
 *  @param object The @c GTLRDataflow_SendWorkerMessagesRequest to include in
 *    the query.
 *  @param projectId The project to send the WorkerMessages to.
 *
 *  @returns GTLRDataflowQuery_ProjectsWorkerMessages
 */
+ (instancetype)queryWithObject:(GTLRDataflow_SendWorkerMessagesRequest *)object
                      projectId:(NSString *)projectId;

@end

NS_ASSUME_NONNULL_END
