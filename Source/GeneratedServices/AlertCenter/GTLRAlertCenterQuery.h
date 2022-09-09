// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   G Suite Alert Center API (alertcenter/v1beta1)
// Description:
//   Manages alerts on issues affecting your domain.
// Documentation:
//   https://developers.google.com/admin-sdk/alertcenter/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAlertCenter_AlertFeedback;
@class GTLRAlertCenter_Settings;
@class GTLRAlertCenter_UndeleteAlertRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other AlertCenter query classes.
 */
@interface GTLRAlertCenterQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Marks the specified alert for deletion. An alert that has been marked for
 *  deletion is removed from Alert Center after 30 days.
 *  Marking an alert for deletion has no effect on an alert which has
 *  already been marked for deletion. Attempting to mark a nonexistent alert
 *  for deletion results in a `NOT_FOUND` error.
 *
 *  Method: alertcenter.alerts.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAlertCenterAppsAlerts
 */
@interface GTLRAlertCenterQuery_AlertsDelete : GTLRAlertCenterQuery
// Previous library name was
//   +[GTLQueryAlertCenter queryForAlertsDeleteWithalertId:]

/** Required. The identifier of the alert to delete. */
@property(nonatomic, copy, nullable) NSString *alertId;

/**
 *  Optional. The unique identifier of the G Suite organization account of the
 *  customer the alert is associated with.
 *  Inferred from the caller identity if not provided.
 */
@property(nonatomic, copy, nullable) NSString *customerId;

/**
 *  Fetches a @c GTLRAlertCenter_Empty.
 *
 *  Marks the specified alert for deletion. An alert that has been marked for
 *  deletion is removed from Alert Center after 30 days.
 *  Marking an alert for deletion has no effect on an alert which has
 *  already been marked for deletion. Attempting to mark a nonexistent alert
 *  for deletion results in a `NOT_FOUND` error.
 *
 *  @param alertId Required. The identifier of the alert to delete.
 *
 *  @return GTLRAlertCenterQuery_AlertsDelete
 */
+ (instancetype)queryWithAlertId:(NSString *)alertId;

@end

/**
 *  Creates new feedback for an alert. Attempting to create a feedback for
 *  a non-existent alert returns `NOT_FOUND` error.
 *
 *  Method: alertcenter.alerts.feedback.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAlertCenterAppsAlerts
 */
@interface GTLRAlertCenterQuery_AlertsFeedbackCreate : GTLRAlertCenterQuery
// Previous library name was
//   +[GTLQueryAlertCenter queryForAlertsFeedbackCreateWithObject:alertId:]

/** Required. The identifier of the alert this feedback belongs to. */
@property(nonatomic, copy, nullable) NSString *alertId;

/**
 *  Optional. The unique identifier of the G Suite organization account of the
 *  customer the alert is associated with.
 *  Inferred from the caller identity if not provided.
 */
@property(nonatomic, copy, nullable) NSString *customerId;

/**
 *  Fetches a @c GTLRAlertCenter_AlertFeedback.
 *
 *  Creates new feedback for an alert. Attempting to create a feedback for
 *  a non-existent alert returns `NOT_FOUND` error.
 *
 *  @param object The @c GTLRAlertCenter_AlertFeedback to include in the query.
 *  @param alertId Required. The identifier of the alert this feedback belongs
 *    to.
 *
 *  @return GTLRAlertCenterQuery_AlertsFeedbackCreate
 */
+ (instancetype)queryWithObject:(GTLRAlertCenter_AlertFeedback *)object
                        alertId:(NSString *)alertId;

@end

/**
 *  Lists all the feedback for an alert. Attempting to list feedbacks for
 *  a non-existent alert returns `NOT_FOUND` error.
 *
 *  Method: alertcenter.alerts.feedback.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAlertCenterAppsAlerts
 */
@interface GTLRAlertCenterQuery_AlertsFeedbackList : GTLRAlertCenterQuery
// Previous library name was
//   +[GTLQueryAlertCenter queryForAlertsFeedbackListWithalertId:]

/**
 *  Required. The alert identifier.
 *  The "-" wildcard could be used to represent all alerts.
 */
@property(nonatomic, copy, nullable) NSString *alertId;

/**
 *  Optional. The unique identifier of the G Suite organization account of the
 *  customer the alert feedback are associated with.
 *  Inferred from the caller identity if not provided.
 */
@property(nonatomic, copy, nullable) NSString *customerId;

/**
 *  Optional. A query string for filtering alert feedback results.
 *  For more details, see [Query
 *  filters](/admin-sdk/alertcenter/guides/query-filters) and [Supported
 *  query filter
 *  fields](/admin-sdk/alertcenter/reference/filter-fields#alerts.feedback.list).
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Fetches a @c GTLRAlertCenter_ListAlertFeedbackResponse.
 *
 *  Lists all the feedback for an alert. Attempting to list feedbacks for
 *  a non-existent alert returns `NOT_FOUND` error.
 *
 *  @param alertId Required. The alert identifier.
 *    The "-" wildcard could be used to represent all alerts.
 *
 *  @return GTLRAlertCenterQuery_AlertsFeedbackList
 */
+ (instancetype)queryWithAlertId:(NSString *)alertId;

@end

/**
 *  Gets the specified alert. Attempting to get a nonexistent alert returns
 *  `NOT_FOUND` error.
 *
 *  Method: alertcenter.alerts.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAlertCenterAppsAlerts
 */
@interface GTLRAlertCenterQuery_AlertsGet : GTLRAlertCenterQuery
// Previous library name was
//   +[GTLQueryAlertCenter queryForAlertsGetWithalertId:]

/** Required. The identifier of the alert to retrieve. */
@property(nonatomic, copy, nullable) NSString *alertId;

/**
 *  Optional. The unique identifier of the G Suite organization account of the
 *  customer the alert is associated with.
 *  Inferred from the caller identity if not provided.
 */
@property(nonatomic, copy, nullable) NSString *customerId;

/**
 *  Fetches a @c GTLRAlertCenter_Alert.
 *
 *  Gets the specified alert. Attempting to get a nonexistent alert returns
 *  `NOT_FOUND` error.
 *
 *  @param alertId Required. The identifier of the alert to retrieve.
 *
 *  @return GTLRAlertCenterQuery_AlertsGet
 */
+ (instancetype)queryWithAlertId:(NSString *)alertId;

@end

/**
 *  Lists the alerts.
 *
 *  Method: alertcenter.alerts.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAlertCenterAppsAlerts
 */
@interface GTLRAlertCenterQuery_AlertsList : GTLRAlertCenterQuery
// Previous library name was
//   +[GTLQueryAlertCenter queryForAlertsList]

/**
 *  Optional. The unique identifier of the G Suite organization account of the
 *  customer the alerts are associated with.
 *  Inferred from the caller identity if not provided.
 */
@property(nonatomic, copy, nullable) NSString *customerId;

/**
 *  Optional. A query string for filtering alert results.
 *  For more details, see [Query
 *  filters](/admin-sdk/alertcenter/guides/query-filters) and [Supported
 *  query filter
 *  fields](/admin-sdk/alertcenter/reference/filter-fields#alerts.list).
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Optional. The sort order of the list results.
 *  If not specified results may be returned in arbitrary order.
 *  You can sort the results in descending order based on the creation
 *  timestamp using `order_by="create_time desc"`.
 *  Currently, only sorting by `create_time desc` is supported.
 */
@property(nonatomic, copy, nullable) NSString *orderBy;

/**
 *  Optional. The requested page size. Server may return fewer items than
 *  requested. If unspecified, server picks an appropriate default.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. A token identifying a page of results the server should return.
 *  If empty, a new iteration is started. To continue an iteration, pass in
 *  the value from the previous ListAlertsResponse's
 *  next_page_token field.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAlertCenter_ListAlertsResponse.
 *
 *  Lists the alerts.
 *
 *  @return GTLRAlertCenterQuery_AlertsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Restores, or "undeletes", an alert that was marked for deletion within the
 *  past 30 days. Attempting to undelete an alert which was marked for deletion
 *  over 30 days ago (which has been removed from the Alert Center database) or
 *  a nonexistent alert returns a `NOT_FOUND` error. Attempting to
 *  undelete an alert which has not been marked for deletion has no effect.
 *
 *  Method: alertcenter.alerts.undelete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAlertCenterAppsAlerts
 */
@interface GTLRAlertCenterQuery_AlertsUndelete : GTLRAlertCenterQuery
// Previous library name was
//   +[GTLQueryAlertCenter queryForAlertsUndeleteWithObject:alertId:]

/** Required. The identifier of the alert to undelete. */
@property(nonatomic, copy, nullable) NSString *alertId;

/**
 *  Fetches a @c GTLRAlertCenter_Alert.
 *
 *  Restores, or "undeletes", an alert that was marked for deletion within the
 *  past 30 days. Attempting to undelete an alert which was marked for deletion
 *  over 30 days ago (which has been removed from the Alert Center database) or
 *  a nonexistent alert returns a `NOT_FOUND` error. Attempting to
 *  undelete an alert which has not been marked for deletion has no effect.
 *
 *  @param object The @c GTLRAlertCenter_UndeleteAlertRequest to include in the
 *    query.
 *  @param alertId Required. The identifier of the alert to undelete.
 *
 *  @return GTLRAlertCenterQuery_AlertsUndelete
 */
+ (instancetype)queryWithObject:(GTLRAlertCenter_UndeleteAlertRequest *)object
                        alertId:(NSString *)alertId;

@end

/**
 *  Returns customer-level settings.
 *
 *  Method: alertcenter.getSettings
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAlertCenterAppsAlerts
 */
@interface GTLRAlertCenterQuery_V1beta1GetSettings : GTLRAlertCenterQuery
// Previous library name was
//   +[GTLQueryAlertCenter queryForGetSettings]

/**
 *  Optional. The unique identifier of the G Suite organization account of the
 *  customer the alert settings are associated with.
 *  Inferred from the caller identity if not provided.
 */
@property(nonatomic, copy, nullable) NSString *customerId;

/**
 *  Fetches a @c GTLRAlertCenter_Settings.
 *
 *  Returns customer-level settings.
 *
 *  @return GTLRAlertCenterQuery_V1beta1GetSettings
 */
+ (instancetype)query;

@end

/**
 *  Updates the customer-level settings.
 *
 *  Method: alertcenter.updateSettings
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAlertCenterAppsAlerts
 */
@interface GTLRAlertCenterQuery_V1beta1UpdateSettings : GTLRAlertCenterQuery
// Previous library name was
//   +[GTLQueryAlertCenter queryForUpdateSettingsWithObject:]

/**
 *  Optional. The unique identifier of the G Suite organization account of the
 *  customer the alert settings are associated with.
 *  Inferred from the caller identity if not provided.
 */
@property(nonatomic, copy, nullable) NSString *customerId;

/**
 *  Fetches a @c GTLRAlertCenter_Settings.
 *
 *  Updates the customer-level settings.
 *
 *  @param object The @c GTLRAlertCenter_Settings to include in the query.
 *
 *  @return GTLRAlertCenterQuery_V1beta1UpdateSettings
 */
+ (instancetype)queryWithObject:(GTLRAlertCenter_Settings *)object;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
