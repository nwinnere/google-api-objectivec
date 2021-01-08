// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   YouTube Analytics API (youtubeAnalytics/v1)
// Description:
//   Retrieves your YouTube Analytics data.
// Documentation:
//   http://developers.google.com/youtube/analytics/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRYouTubeAnalytics_Group;
@class GTLRYouTubeAnalytics_GroupItem;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other YouTube Analytics query classes.
 */
@interface GTLRYouTubeAnalyticsQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(copy, nullable) NSString *fields;

@end

/**
 *  Retrieves a list of available batch report definitions.
 *
 *  Method: youtubeAnalytics.batchReportDefinitions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeYouTubeAnalyticsYtAnalyticsMonetaryReadonly
 *    @c kGTLRAuthScopeYouTubeAnalyticsYtAnalyticsReadonly
 */
@interface GTLRYouTubeAnalyticsQuery_BatchReportDefinitionsList : GTLRYouTubeAnalyticsQuery
// Previous library name was
//   +[GTLQueryYouTubeAnalytics queryForBatchReportDefinitionsListWithonBehalfOfContentOwner:]

/**
 *  The onBehalfOfContentOwner parameter identifies the content owner that the
 *  user is acting on behalf of.
 */
@property(copy, nullable) NSString *onBehalfOfContentOwner;

/**
 *  Fetches a @c GTLRYouTubeAnalytics_BatchReportDefinitionList.
 *
 *  Retrieves a list of available batch report definitions.
 *
 *  @param onBehalfOfContentOwner The onBehalfOfContentOwner parameter
 *    identifies the content owner that the user is acting on behalf of.
 *
 *  @returns GTLRYouTubeAnalyticsQuery_BatchReportDefinitionsList
 */
+ (instancetype)queryWithOnBehalfOfContentOwner:(NSString *)onBehalfOfContentOwner;

@end

/**
 *  Retrieves a list of processed batch reports.
 *
 *  Method: youtubeAnalytics.batchReports.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeYouTubeAnalyticsYtAnalyticsMonetaryReadonly
 *    @c kGTLRAuthScopeYouTubeAnalyticsYtAnalyticsReadonly
 */
@interface GTLRYouTubeAnalyticsQuery_BatchReportsList : GTLRYouTubeAnalyticsQuery
// Previous library name was
//   +[GTLQueryYouTubeAnalytics queryForBatchReportsListWithbatchReportDefinitionId:onBehalfOfContentOwner:]

/**
 *  The batchReportDefinitionId parameter specifies the ID of the batch
 *  reportort definition for which you are retrieving reports.
 */
@property(copy, nullable) NSString *batchReportDefinitionId;

/**
 *  The onBehalfOfContentOwner parameter identifies the content owner that the
 *  user is acting on behalf of.
 */
@property(copy, nullable) NSString *onBehalfOfContentOwner;

/**
 *  Fetches a @c GTLRYouTubeAnalytics_BatchReportList.
 *
 *  Retrieves a list of processed batch reports.
 *
 *  @param batchReportDefinitionId The batchReportDefinitionId parameter
 *    specifies the ID of the batch reportort definition for which you are
 *    retrieving reports.
 *  @param onBehalfOfContentOwner The onBehalfOfContentOwner parameter
 *    identifies the content owner that the user is acting on behalf of.
 *
 *  @returns GTLRYouTubeAnalyticsQuery_BatchReportsList
 */
+ (instancetype)queryWithBatchReportDefinitionId:(NSString *)batchReportDefinitionId
                          onBehalfOfContentOwner:(NSString *)onBehalfOfContentOwner;

@end

/**
 *  Removes an item from a group.
 *
 *  Method: youtubeAnalytics.groupItems.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutube
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutubepartner
 */
@interface GTLRYouTubeAnalyticsQuery_GroupItemsDelete : GTLRYouTubeAnalyticsQuery
// Previous library name was
//   +[GTLQueryYouTubeAnalytics queryForGroupItemsDeleteWithidentifier:]

/**
 *  The id parameter specifies the YouTube group item ID for the group that is
 *  being deleted.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(copy, nullable) NSString *identifier;

/**
 *  Note: This parameter is intended exclusively for YouTube content partners.
 *  The onBehalfOfContentOwner parameter indicates that the request's
 *  authorization credentials identify a YouTube CMS user who is acting on
 *  behalf of the content owner specified in the parameter value. This parameter
 *  is intended for YouTube content partners that own and manage many different
 *  YouTube channels. It allows content owners to authenticate once and get
 *  access to all their video and channel data, without having to provide
 *  authentication credentials for each individual channel. The CMS account that
 *  the user authenticates with must be linked to the specified YouTube content
 *  owner.
 */
@property(copy, nullable) NSString *onBehalfOfContentOwner;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Removes an item from a group.
 *
 *  @param identifier The id parameter specifies the YouTube group item ID for
 *    the group that is being deleted.
 *
 *  @returns GTLRYouTubeAnalyticsQuery_GroupItemsDelete
 */
+ (instancetype)queryWithIdentifier:(NSString *)identifier;

@end

/**
 *  Creates a group item.
 *
 *  Method: youtubeAnalytics.groupItems.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutube
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutubepartner
 */
@interface GTLRYouTubeAnalyticsQuery_GroupItemsInsert : GTLRYouTubeAnalyticsQuery
// Previous library name was
//   +[GTLQueryYouTubeAnalytics queryForGroupItemsInsertWithObject:]

/**
 *  Note: This parameter is intended exclusively for YouTube content partners.
 *  The onBehalfOfContentOwner parameter indicates that the request's
 *  authorization credentials identify a YouTube CMS user who is acting on
 *  behalf of the content owner specified in the parameter value. This parameter
 *  is intended for YouTube content partners that own and manage many different
 *  YouTube channels. It allows content owners to authenticate once and get
 *  access to all their video and channel data, without having to provide
 *  authentication credentials for each individual channel. The CMS account that
 *  the user authenticates with must be linked to the specified YouTube content
 *  owner.
 */
@property(copy, nullable) NSString *onBehalfOfContentOwner;

/**
 *  Fetches a @c GTLRYouTubeAnalytics_GroupItem.
 *
 *  Creates a group item.
 *
 *  @param object The @c GTLRYouTubeAnalytics_GroupItem to include in the query.
 *
 *  @returns GTLRYouTubeAnalyticsQuery_GroupItemsInsert
 */
+ (instancetype)queryWithObject:(GTLRYouTubeAnalytics_GroupItem *)object;

@end

/**
 *  Returns a collection of group items that match the API request parameters.
 *
 *  Method: youtubeAnalytics.groupItems.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutube
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutubepartner
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutubeReadonly
 *    @c kGTLRAuthScopeYouTubeAnalyticsYtAnalyticsReadonly
 */
@interface GTLRYouTubeAnalyticsQuery_GroupItemsList : GTLRYouTubeAnalyticsQuery
// Previous library name was
//   +[GTLQueryYouTubeAnalytics queryForGroupItemsListWithgroupId:]

/**
 *  The id parameter specifies the unique ID of the group for which you want to
 *  retrieve group items.
 */
@property(copy, nullable) NSString *groupId;

/**
 *  Note: This parameter is intended exclusively for YouTube content partners.
 *  The onBehalfOfContentOwner parameter indicates that the request's
 *  authorization credentials identify a YouTube CMS user who is acting on
 *  behalf of the content owner specified in the parameter value. This parameter
 *  is intended for YouTube content partners that own and manage many different
 *  YouTube channels. It allows content owners to authenticate once and get
 *  access to all their video and channel data, without having to provide
 *  authentication credentials for each individual channel. The CMS account that
 *  the user authenticates with must be linked to the specified YouTube content
 *  owner.
 */
@property(copy, nullable) NSString *onBehalfOfContentOwner;

/**
 *  Fetches a @c GTLRYouTubeAnalytics_GroupItemListResponse.
 *
 *  Returns a collection of group items that match the API request parameters.
 *
 *  @param groupId The id parameter specifies the unique ID of the group for
 *    which you want to retrieve group items.
 *
 *  @returns GTLRYouTubeAnalyticsQuery_GroupItemsList
 */
+ (instancetype)queryWithGroupId:(NSString *)groupId;

@end

/**
 *  Deletes a group.
 *
 *  Method: youtubeAnalytics.groups.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutube
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutubepartner
 */
@interface GTLRYouTubeAnalyticsQuery_GroupsDelete : GTLRYouTubeAnalyticsQuery
// Previous library name was
//   +[GTLQueryYouTubeAnalytics queryForGroupsDeleteWithidentifier:]

/**
 *  The id parameter specifies the YouTube group ID for the group that is being
 *  deleted.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(copy, nullable) NSString *identifier;

/**
 *  Note: This parameter is intended exclusively for YouTube content partners.
 *  The onBehalfOfContentOwner parameter indicates that the request's
 *  authorization credentials identify a YouTube CMS user who is acting on
 *  behalf of the content owner specified in the parameter value. This parameter
 *  is intended for YouTube content partners that own and manage many different
 *  YouTube channels. It allows content owners to authenticate once and get
 *  access to all their video and channel data, without having to provide
 *  authentication credentials for each individual channel. The CMS account that
 *  the user authenticates with must be linked to the specified YouTube content
 *  owner.
 */
@property(copy, nullable) NSString *onBehalfOfContentOwner;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes a group.
 *
 *  @param identifier The id parameter specifies the YouTube group ID for the
 *    group that is being deleted.
 *
 *  @returns GTLRYouTubeAnalyticsQuery_GroupsDelete
 */
+ (instancetype)queryWithIdentifier:(NSString *)identifier;

@end

/**
 *  Creates a group.
 *
 *  Method: youtubeAnalytics.groups.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutube
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutubepartner
 */
@interface GTLRYouTubeAnalyticsQuery_GroupsInsert : GTLRYouTubeAnalyticsQuery
// Previous library name was
//   +[GTLQueryYouTubeAnalytics queryForGroupsInsertWithObject:]

/**
 *  Note: This parameter is intended exclusively for YouTube content partners.
 *  The onBehalfOfContentOwner parameter indicates that the request's
 *  authorization credentials identify a YouTube CMS user who is acting on
 *  behalf of the content owner specified in the parameter value. This parameter
 *  is intended for YouTube content partners that own and manage many different
 *  YouTube channels. It allows content owners to authenticate once and get
 *  access to all their video and channel data, without having to provide
 *  authentication credentials for each individual channel. The CMS account that
 *  the user authenticates with must be linked to the specified YouTube content
 *  owner.
 */
@property(copy, nullable) NSString *onBehalfOfContentOwner;

/**
 *  Fetches a @c GTLRYouTubeAnalytics_Group.
 *
 *  Creates a group.
 *
 *  @param object The @c GTLRYouTubeAnalytics_Group to include in the query.
 *
 *  @returns GTLRYouTubeAnalyticsQuery_GroupsInsert
 */
+ (instancetype)queryWithObject:(GTLRYouTubeAnalytics_Group *)object;

@end

/**
 *  Returns a collection of groups that match the API request parameters. For
 *  example, you can retrieve all groups that the authenticated user owns, or
 *  you can retrieve one or more groups by their unique IDs.
 *
 *  Method: youtubeAnalytics.groups.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutube
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutubepartner
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutubeReadonly
 *    @c kGTLRAuthScopeYouTubeAnalyticsYtAnalyticsReadonly
 */
@interface GTLRYouTubeAnalyticsQuery_GroupsList : GTLRYouTubeAnalyticsQuery
// Previous library name was
//   +[GTLQueryYouTubeAnalytics queryForGroupsList]

/**
 *  The id parameter specifies a comma-separated list of the YouTube group ID(s)
 *  for the resource(s) that are being retrieved. In a group resource, the id
 *  property specifies the group's YouTube group ID.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(copy, nullable) NSString *identifier;

/**
 *  Set this parameter's value to true to instruct the API to only return groups
 *  owned by the authenticated user.
 */
@property(assign) BOOL mine;

/**
 *  Note: This parameter is intended exclusively for YouTube content partners.
 *  The onBehalfOfContentOwner parameter indicates that the request's
 *  authorization credentials identify a YouTube CMS user who is acting on
 *  behalf of the content owner specified in the parameter value. This parameter
 *  is intended for YouTube content partners that own and manage many different
 *  YouTube channels. It allows content owners to authenticate once and get
 *  access to all their video and channel data, without having to provide
 *  authentication credentials for each individual channel. The CMS account that
 *  the user authenticates with must be linked to the specified YouTube content
 *  owner.
 */
@property(copy, nullable) NSString *onBehalfOfContentOwner;

/**
 *  The pageToken parameter identifies a specific page in the result set that
 *  should be returned. In an API response, the nextPageToken property
 *  identifies the next page that can be retrieved.
 */
@property(copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRYouTubeAnalytics_GroupListResponse.
 *
 *  Returns a collection of groups that match the API request parameters. For
 *  example, you can retrieve all groups that the authenticated user owns, or
 *  you can retrieve one or more groups by their unique IDs.
 *
 *  @returns GTLRYouTubeAnalyticsQuery_GroupsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Modifies a group. For example, you could change a group's title.
 *
 *  Method: youtubeAnalytics.groups.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutube
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutubepartner
 */
@interface GTLRYouTubeAnalyticsQuery_GroupsUpdate : GTLRYouTubeAnalyticsQuery
// Previous library name was
//   +[GTLQueryYouTubeAnalytics queryForGroupsUpdateWithObject:]

/**
 *  Note: This parameter is intended exclusively for YouTube content partners.
 *  The onBehalfOfContentOwner parameter indicates that the request's
 *  authorization credentials identify a YouTube CMS user who is acting on
 *  behalf of the content owner specified in the parameter value. This parameter
 *  is intended for YouTube content partners that own and manage many different
 *  YouTube channels. It allows content owners to authenticate once and get
 *  access to all their video and channel data, without having to provide
 *  authentication credentials for each individual channel. The CMS account that
 *  the user authenticates with must be linked to the specified YouTube content
 *  owner.
 */
@property(copy, nullable) NSString *onBehalfOfContentOwner;

/**
 *  Fetches a @c GTLRYouTubeAnalytics_Group.
 *
 *  Modifies a group. For example, you could change a group's title.
 *
 *  @param object The @c GTLRYouTubeAnalytics_Group to include in the query.
 *
 *  @returns GTLRYouTubeAnalyticsQuery_GroupsUpdate
 */
+ (instancetype)queryWithObject:(GTLRYouTubeAnalytics_Group *)object;

@end

/**
 *  Retrieve your YouTube Analytics reports.
 *
 *  Method: youtubeAnalytics.reports.query
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutube
 *    @c kGTLRAuthScopeYouTubeAnalyticsYoutubeReadonly
 *    @c kGTLRAuthScopeYouTubeAnalyticsYtAnalyticsMonetaryReadonly
 *    @c kGTLRAuthScopeYouTubeAnalyticsYtAnalyticsReadonly
 */
@interface GTLRYouTubeAnalyticsQuery_ReportsQuery : GTLRYouTubeAnalyticsQuery
// Previous library name was
//   +[GTLQueryYouTubeAnalytics queryForReportsQueryWithids:startDate:endDate:metrics:]

/**
 *  The currency to which financial metrics should be converted. The default is
 *  US Dollar (USD). If the result contains no financial metrics, this flag will
 *  be ignored. Responds with an error if the specified currency is not
 *  recognized.
 */
@property(copy, nullable) NSString *currency;

/**
 *  A comma-separated list of YouTube Analytics dimensions, such as views or
 *  ageGroup,gender. See the Available Reports document for a list of the
 *  reports that you can retrieve and the dimensions used for those reports.
 *  Also see the Dimensions document for definitions of those dimensions.
 */
@property(copy, nullable) NSString *dimensions;

/**
 *  The end date for fetching YouTube Analytics data. The value should be in
 *  YYYY-MM-DD format.
 */
@property(copy, nullable) NSString *endDate;

/**
 *  A list of filters that should be applied when retrieving YouTube Analytics
 *  data. The Available Reports document identifies the dimensions that can be
 *  used to filter each report, and the Dimensions document defines those
 *  dimensions. If a request uses multiple filters, join them together with a
 *  semicolon (;), and the returned result table will satisfy both filters. For
 *  example, a filters parameter value of video==dMH0bHeiRNg;country==IT
 *  restricts the result set to include data for the given video in Italy.
 */
@property(copy, nullable) NSString *filters;

/**
 *  Identifies the YouTube channel or content owner for which you are retrieving
 *  YouTube Analytics data.
 *  - To request data for a YouTube user, set the ids parameter value to
 *  channel==CHANNEL_ID, where CHANNEL_ID specifies the unique YouTube channel
 *  ID.
 *  - To request data for a YouTube CMS content owner, set the ids parameter
 *  value to contentOwner==OWNER_NAME, where OWNER_NAME is the CMS name of the
 *  content owner.
 */
@property(copy, nullable) NSString *ids;

/** The maximum number of rows to include in the response. */
@property(assign) NSInteger maxResults;

/**
 *  A comma-separated list of YouTube Analytics metrics, such as views or
 *  likes,dislikes. See the Available Reports document for a list of the reports
 *  that you can retrieve and the metrics available in each report, and see the
 *  Metrics document for definitions of those metrics.
 */
@property(copy, nullable) NSString *metrics;

/**
 *  A comma-separated list of dimensions or metrics that determine the sort
 *  order for YouTube Analytics data. By default the sort order is ascending.
 *  The '-' prefix causes descending sort order.
 */
@property(copy, nullable) NSString *sort;

/**
 *  The start date for fetching YouTube Analytics data. The value should be in
 *  YYYY-MM-DD format.
 */
@property(copy, nullable) NSString *startDate;

/**
 *  An index of the first entity to retrieve. Use this parameter as a pagination
 *  mechanism along with the max-results parameter (one-based, inclusive).
 */
@property(assign) NSInteger startIndex;

/**
 *  Fetches a @c GTLRYouTubeAnalytics_ResultTable.
 *
 *  Retrieve your YouTube Analytics reports.
 *
 *  @param ids Identifies the YouTube channel or content owner for which you are
 *    retrieving YouTube Analytics data.
 *    - To request data for a YouTube user, set the ids parameter value to
 *    channel==CHANNEL_ID, where CHANNEL_ID specifies the unique YouTube channel
 *    ID.
 *    - To request data for a YouTube CMS content owner, set the ids parameter
 *    value to contentOwner==OWNER_NAME, where OWNER_NAME is the CMS name of the
 *    content owner.
 *  @param startDate The start date for fetching YouTube Analytics data. The
 *    value should be in YYYY-MM-DD format.
 *  @param endDate The end date for fetching YouTube Analytics data. The value
 *    should be in YYYY-MM-DD format.
 *  @param metrics A comma-separated list of YouTube Analytics metrics, such as
 *    views or likes,dislikes. See the Available Reports document for a list of
 *    the reports that you can retrieve and the metrics available in each
 *    report, and see the Metrics document for definitions of those metrics.
 *
 *  @returns GTLRYouTubeAnalyticsQuery_ReportsQuery
 */
+ (instancetype)queryWithIds:(NSString *)ids
                   startDate:(NSString *)startDate
                     endDate:(NSString *)endDate
                     metrics:(NSString *)metrics;

@end

NS_ASSUME_NONNULL_END
