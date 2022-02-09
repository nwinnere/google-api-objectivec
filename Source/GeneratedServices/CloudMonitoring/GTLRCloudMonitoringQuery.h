// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Monitoring API (cloudmonitoring/v2beta2)
// Description:
//   Accesses Google Cloud Monitoring data.
// Documentation:
//   https://cloud.google.com/monitoring/v2beta2/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudMonitoring_ListMetricDescriptorsRequest;
@class GTLRCloudMonitoring_ListTimeseriesDescriptorsRequest;
@class GTLRCloudMonitoring_ListTimeseriesRequest;
@class GTLRCloudMonitoring_MetricDescriptor;
@class GTLRCloudMonitoring_WriteTimeseriesRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// aggregator

/** Value: "max" */
GTLR_EXTERN NSString * const kGTLRCloudMonitoringAggregatorMax;
/** Value: "mean" */
GTLR_EXTERN NSString * const kGTLRCloudMonitoringAggregatorMean;
/** Value: "min" */
GTLR_EXTERN NSString * const kGTLRCloudMonitoringAggregatorMin;
/** Value: "sum" */
GTLR_EXTERN NSString * const kGTLRCloudMonitoringAggregatorSum;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Cloud Monitoring query classes.
 */
@interface GTLRCloudMonitoringQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Create a new metric.
 *
 *  Method: cloudmonitoring.metricDescriptors.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMonitoringCloudPlatform
 *    @c kGTLRAuthScopeCloudMonitoringMonitoring
 */
@interface GTLRCloudMonitoringQuery_MetricDescriptorsCreate : GTLRCloudMonitoringQuery
// Previous library name was
//   +[GTLQueryCloudMonitoring queryForMetricDescriptorsCreateWithObject:project:]

/**
 *  The project id. The value can be the numeric project ID or string-based
 *  project name.
 */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRCloudMonitoring_MetricDescriptor.
 *
 *  Create a new metric.
 *
 *  @param object The @c GTLRCloudMonitoring_MetricDescriptor to include in the
 *    query.
 *  @param project The project id. The value can be the numeric project ID or
 *    string-based project name.
 *
 *  @returns GTLRCloudMonitoringQuery_MetricDescriptorsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudMonitoring_MetricDescriptor *)object
                        project:(NSString *)project;

@end

/**
 *  Delete an existing metric.
 *
 *  Method: cloudmonitoring.metricDescriptors.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMonitoringCloudPlatform
 *    @c kGTLRAuthScopeCloudMonitoringMonitoring
 */
@interface GTLRCloudMonitoringQuery_MetricDescriptorsDelete : GTLRCloudMonitoringQuery
// Previous library name was
//   +[GTLQueryCloudMonitoring queryForMetricDescriptorsDeleteWithproject:metric:]

/** Name of the metric. */
@property(nonatomic, copy, nullable) NSString *metric;

/** The project ID to which the metric belongs. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRCloudMonitoring_DeleteMetricDescriptorResponse.
 *
 *  Delete an existing metric.
 *
 *  @param project The project ID to which the metric belongs.
 *  @param metric Name of the metric.
 *
 *  @returns GTLRCloudMonitoringQuery_MetricDescriptorsDelete
 */
+ (instancetype)queryWithProject:(NSString *)project
                          metric:(NSString *)metric;

@end

/**
 *  List metric descriptors that match the query. If the query is not set, then
 *  all of the metric descriptors will be returned. Large responses will be
 *  paginated, use the nextPageToken returned in the response to request
 *  subsequent pages of results by setting the pageToken query parameter to the
 *  value of the nextPageToken.
 *
 *  Method: cloudmonitoring.metricDescriptors.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMonitoringCloudPlatform
 *    @c kGTLRAuthScopeCloudMonitoringMonitoring
 */
@interface GTLRCloudMonitoringQuery_MetricDescriptorsList : GTLRCloudMonitoringQuery
// Previous library name was
//   +[GTLQueryCloudMonitoring queryForMetricDescriptorsListWithObject:project:]

/**
 *  Maximum number of metric descriptors per page. Used for pagination. If not
 *  specified, count = 100.
 *
 *  @note If not set, the documented server-side default will be 100 (from the
 *        range 1..1000).
 */
@property(nonatomic, assign) NSInteger count;

/**
 *  The pagination token, which is used to page through large result sets. Set
 *  this value to the value of the nextPageToken to retrieve the next page of
 *  results.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The project id. The value can be the numeric project ID or string-based
 *  project name.
 */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  The query used to search against existing metrics. Separate keywords with a
 *  space; the service joins all keywords with AND, meaning that all keywords
 *  must match for a metric to be returned. If this field is omitted, all
 *  metrics are returned. If an empty string is passed with this field, no
 *  metrics are returned.
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Fetches a @c GTLRCloudMonitoring_ListMetricDescriptorsResponse.
 *
 *  List metric descriptors that match the query. If the query is not set, then
 *  all of the metric descriptors will be returned. Large responses will be
 *  paginated, use the nextPageToken returned in the response to request
 *  subsequent pages of results by setting the pageToken query parameter to the
 *  value of the nextPageToken.
 *
 *  @param object The @c GTLRCloudMonitoring_ListMetricDescriptorsRequest to
 *    include in the query.
 *  @param project The project id. The value can be the numeric project ID or
 *    string-based project name.
 *
 *  @returns GTLRCloudMonitoringQuery_MetricDescriptorsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithObject:(GTLRCloudMonitoring_ListMetricDescriptorsRequest *)object
                        project:(NSString *)project;

@end

/**
 *  List the descriptors of the time series that match the metric and labels
 *  values and that have data points in the interval. Large responses are
 *  paginated; use the nextPageToken returned in the response to request
 *  subsequent pages of results by setting the pageToken query parameter to the
 *  value of the nextPageToken.
 *
 *  Method: cloudmonitoring.timeseriesDescriptors.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMonitoringCloudPlatform
 *    @c kGTLRAuthScopeCloudMonitoringMonitoring
 */
@interface GTLRCloudMonitoringQuery_TimeseriesDescriptorsList : GTLRCloudMonitoringQuery
// Previous library name was
//   +[GTLQueryCloudMonitoring queryForTimeseriesDescriptorsListWithObject:project:metric:youngest:]

/**
 *  The aggregation function that will reduce the data points in each window to
 *  a single point. This parameter is only valid for non-cumulative metrics with
 *  a value type of INT64 or DOUBLE.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudMonitoringAggregatorMax Value "max"
 *    @arg @c kGTLRCloudMonitoringAggregatorMean Value "mean"
 *    @arg @c kGTLRCloudMonitoringAggregatorMin Value "min"
 *    @arg @c kGTLRCloudMonitoringAggregatorSum Value "sum"
 */
@property(nonatomic, copy, nullable) NSString *aggregator;

/**
 *  Maximum number of time series descriptors per page. Used for pagination. If
 *  not specified, count = 100.
 *
 *  @note If not set, the documented server-side default will be 100 (from the
 *        range 1..1000).
 */
@property(nonatomic, assign) NSInteger count;

/**
 *  A collection of labels for the matching time series, which are represented
 *  as:
 *  - key==value: key equals the value
 *  - key=~value: key regex matches the value
 *  - key!=value: key does not equal the value
 *  - key!~value: key regex does not match the value For example, to list all of
 *  the time series descriptors for the region us-central1, you could specify:
 *  label=cloud.googleapis.com%2Flocation=~us-central1.*
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *labels;

/**
 *  Metric names are protocol-free URLs as listed in the Supported Metrics page.
 *  For example, compute.googleapis.com/instance/disk/read_ops_count.
 */
@property(nonatomic, copy, nullable) NSString *metric;

/**
 *  Start of the time interval (exclusive), which is expressed as an RFC 3339
 *  timestamp. If neither oldest nor timespan is specified, the default time
 *  interval will be (youngest - 4 hours, youngest]
 */
@property(nonatomic, copy, nullable) NSString *oldest;

/**
 *  The pagination token, which is used to page through large result sets. Set
 *  this value to the value of the nextPageToken to retrieve the next page of
 *  results.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The project ID to which this time series belongs. The value can be the
 *  numeric project ID or string-based project name.
 */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Length of the time interval to query, which is an alternative way to declare
 *  the interval: (youngest - timespan, youngest]. The timespan and oldest
 *  parameters should not be used together. Units:
 *  - s: second
 *  - m: minute
 *  - h: hour
 *  - d: day
 *  - w: week Examples: 2s, 3m, 4w. Only one unit is allowed, for example: 2w3d
 *  is not allowed; you should use 17d instead.
 *  If neither oldest nor timespan is specified, the default time interval will
 *  be (youngest - 4 hours, youngest].
 */
@property(nonatomic, copy, nullable) NSString *timespan;

/**
 *  The sampling window. At most one data point will be returned for each window
 *  in the requested time interval. This parameter is only valid for
 *  non-cumulative metric types. Units:
 *  - m: minute
 *  - h: hour
 *  - d: day
 *  - w: week Examples: 3m, 4w. Only one unit is allowed, for example: 2w3d is
 *  not allowed; you should use 17d instead.
 */
@property(nonatomic, copy, nullable) NSString *window;

/**
 *  End of the time interval (inclusive), which is expressed as an RFC 3339
 *  timestamp.
 */
@property(nonatomic, copy, nullable) NSString *youngest;

/**
 *  Fetches a @c GTLRCloudMonitoring_ListTimeseriesDescriptorsResponse.
 *
 *  List the descriptors of the time series that match the metric and labels
 *  values and that have data points in the interval. Large responses are
 *  paginated; use the nextPageToken returned in the response to request
 *  subsequent pages of results by setting the pageToken query parameter to the
 *  value of the nextPageToken.
 *
 *  @param object The @c GTLRCloudMonitoring_ListTimeseriesDescriptorsRequest to
 *    include in the query.
 *  @param project The project ID to which this time series belongs. The value
 *    can be the numeric project ID or string-based project name.
 *  @param metric Metric names are protocol-free URLs as listed in the Supported
 *    Metrics page. For example,
 *    compute.googleapis.com/instance/disk/read_ops_count.
 *  @param youngest End of the time interval (inclusive), which is expressed as
 *    an RFC 3339 timestamp.
 *
 *  @returns GTLRCloudMonitoringQuery_TimeseriesDescriptorsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithObject:(GTLRCloudMonitoring_ListTimeseriesDescriptorsRequest *)object
                        project:(NSString *)project
                         metric:(NSString *)metric
                       youngest:(NSString *)youngest;

@end

/**
 *  List the data points of the time series that match the metric and labels
 *  values and that have data points in the interval. Large responses are
 *  paginated; use the nextPageToken returned in the response to request
 *  subsequent pages of results by setting the pageToken query parameter to the
 *  value of the nextPageToken.
 *
 *  Method: cloudmonitoring.timeseries.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMonitoringCloudPlatform
 *    @c kGTLRAuthScopeCloudMonitoringMonitoring
 */
@interface GTLRCloudMonitoringQuery_TimeseriesList : GTLRCloudMonitoringQuery
// Previous library name was
//   +[GTLQueryCloudMonitoring queryForTimeseriesListWithObject:project:metric:youngest:]

/**
 *  The aggregation function that will reduce the data points in each window to
 *  a single point. This parameter is only valid for non-cumulative metrics with
 *  a value type of INT64 or DOUBLE.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudMonitoringAggregatorMax Value "max"
 *    @arg @c kGTLRCloudMonitoringAggregatorMean Value "mean"
 *    @arg @c kGTLRCloudMonitoringAggregatorMin Value "min"
 *    @arg @c kGTLRCloudMonitoringAggregatorSum Value "sum"
 */
@property(nonatomic, copy, nullable) NSString *aggregator;

/**
 *  Maximum number of data points per page, which is used for pagination of
 *  results.
 *
 *  @note If not set, the documented server-side default will be 6000 (from the
 *        range 1..12000).
 */
@property(nonatomic, assign) NSInteger count;

/**
 *  A collection of labels for the matching time series, which are represented
 *  as:
 *  - key==value: key equals the value
 *  - key=~value: key regex matches the value
 *  - key!=value: key does not equal the value
 *  - key!~value: key regex does not match the value For example, to list all of
 *  the time series descriptors for the region us-central1, you could specify:
 *  label=cloud.googleapis.com%2Flocation=~us-central1.*
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *labels;

/**
 *  Metric names are protocol-free URLs as listed in the Supported Metrics page.
 *  For example, compute.googleapis.com/instance/disk/read_ops_count.
 */
@property(nonatomic, copy, nullable) NSString *metric;

/**
 *  Start of the time interval (exclusive), which is expressed as an RFC 3339
 *  timestamp. If neither oldest nor timespan is specified, the default time
 *  interval will be (youngest - 4 hours, youngest]
 */
@property(nonatomic, copy, nullable) NSString *oldest;

/**
 *  The pagination token, which is used to page through large result sets. Set
 *  this value to the value of the nextPageToken to retrieve the next page of
 *  results.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The project ID to which this time series belongs. The value can be the
 *  numeric project ID or string-based project name.
 */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Length of the time interval to query, which is an alternative way to declare
 *  the interval: (youngest - timespan, youngest]. The timespan and oldest
 *  parameters should not be used together. Units:
 *  - s: second
 *  - m: minute
 *  - h: hour
 *  - d: day
 *  - w: week Examples: 2s, 3m, 4w. Only one unit is allowed, for example: 2w3d
 *  is not allowed; you should use 17d instead.
 *  If neither oldest nor timespan is specified, the default time interval will
 *  be (youngest - 4 hours, youngest].
 */
@property(nonatomic, copy, nullable) NSString *timespan;

/**
 *  The sampling window. At most one data point will be returned for each window
 *  in the requested time interval. This parameter is only valid for
 *  non-cumulative metric types. Units:
 *  - m: minute
 *  - h: hour
 *  - d: day
 *  - w: week Examples: 3m, 4w. Only one unit is allowed, for example: 2w3d is
 *  not allowed; you should use 17d instead.
 */
@property(nonatomic, copy, nullable) NSString *window;

/**
 *  End of the time interval (inclusive), which is expressed as an RFC 3339
 *  timestamp.
 */
@property(nonatomic, copy, nullable) NSString *youngest;

/**
 *  Fetches a @c GTLRCloudMonitoring_ListTimeseriesResponse.
 *
 *  List the data points of the time series that match the metric and labels
 *  values and that have data points in the interval. Large responses are
 *  paginated; use the nextPageToken returned in the response to request
 *  subsequent pages of results by setting the pageToken query parameter to the
 *  value of the nextPageToken.
 *
 *  @param object The @c GTLRCloudMonitoring_ListTimeseriesRequest to include in
 *    the query.
 *  @param project The project ID to which this time series belongs. The value
 *    can be the numeric project ID or string-based project name.
 *  @param metric Metric names are protocol-free URLs as listed in the Supported
 *    Metrics page. For example,
 *    compute.googleapis.com/instance/disk/read_ops_count.
 *  @param youngest End of the time interval (inclusive), which is expressed as
 *    an RFC 3339 timestamp.
 *
 *  @returns GTLRCloudMonitoringQuery_TimeseriesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithObject:(GTLRCloudMonitoring_ListTimeseriesRequest *)object
                        project:(NSString *)project
                         metric:(NSString *)metric
                       youngest:(NSString *)youngest;

@end

/**
 *  Put data points to one or more time series for one or more metrics. If a
 *  time series does not exist, a new time series will be created. It is not
 *  allowed to write a time series point that is older than the existing
 *  youngest point of that time series. Points that are older than the existing
 *  youngest point of that time series will be discarded silently. Therefore,
 *  users should make sure that points of a time series are written sequentially
 *  in the order of their end time.
 *
 *  Method: cloudmonitoring.timeseries.write
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudMonitoringCloudPlatform
 *    @c kGTLRAuthScopeCloudMonitoringMonitoring
 */
@interface GTLRCloudMonitoringQuery_TimeseriesWrite : GTLRCloudMonitoringQuery
// Previous library name was
//   +[GTLQueryCloudMonitoring queryForTimeseriesWriteWithObject:project:]

/**
 *  The project ID. The value can be the numeric project ID or string-based
 *  project name.
 */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRCloudMonitoring_WriteTimeseriesResponse.
 *
 *  Put data points to one or more time series for one or more metrics. If a
 *  time series does not exist, a new time series will be created. It is not
 *  allowed to write a time series point that is older than the existing
 *  youngest point of that time series. Points that are older than the existing
 *  youngest point of that time series will be discarded silently. Therefore,
 *  users should make sure that points of a time series are written sequentially
 *  in the order of their end time.
 *
 *  @param object The @c GTLRCloudMonitoring_WriteTimeseriesRequest to include
 *    in the query.
 *  @param project The project ID. The value can be the numeric project ID or
 *    string-based project name.
 *
 *  @returns GTLRCloudMonitoringQuery_TimeseriesWrite
 */
+ (instancetype)queryWithObject:(GTLRCloudMonitoring_WriteTimeseriesRequest *)object
                        project:(NSString *)project;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
