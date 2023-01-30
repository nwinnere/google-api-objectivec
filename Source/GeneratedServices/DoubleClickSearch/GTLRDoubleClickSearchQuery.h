// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Search Ads 360 API (doubleclicksearch/v2)
// Description:
//   Reports and modifies your advertising data in DoubleClick Search (for
//   example, campaigns, ad groups, keywords, and conversions).
// Documentation:
//   https://developers.google.com/doubleclick-search/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRDoubleClickSearch_ConversionList;
@class GTLRDoubleClickSearch_ReportRequest;
@class GTLRDoubleClickSearch_UpdateAvailabilityRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other DoubleClickSearch query classes.
 */
@interface GTLRDoubleClickSearchQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Retrieves a list of conversions from a DoubleClick Search engine account.
 *
 *  Method: doubleclicksearch.conversion.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDoubleClickSearch
 */
@interface GTLRDoubleClickSearchQuery_ConversionGet : GTLRDoubleClickSearchQuery
// Previous library name was
//   +[GTLQueryDoubleClickSearch queryForConversionGetWithagencyId:advertiserId:engineAccountId:endDate:rowCount:startDate:startRow:]

/** Numeric ID of the ad group. */
@property(nonatomic, assign) long long adGroupId;

/** Numeric ID of the ad. */
@property(nonatomic, assign) long long adId;

/** Numeric ID of the advertiser. */
@property(nonatomic, assign) long long advertiserId;

/** Numeric ID of the agency. */
@property(nonatomic, assign) long long agencyId;

/** Numeric ID of the campaign. */
@property(nonatomic, assign) long long campaignId;

/** Numeric ID of the criterion. */
@property(nonatomic, assign) long long criterionId;

/**
 *  Last date (inclusive) on which to retrieve conversions. Format is yyyymmdd.
 *
 *  @note The documented range is 20091101..99991231.
 */
@property(nonatomic, assign) NSInteger endDate;

/** Numeric ID of the engine account. */
@property(nonatomic, assign) long long engineAccountId;

/**
 *  The number of conversions to return per call.
 *
 *  @note The documented range is 1..1000.
 */
@property(nonatomic, assign) NSInteger rowCount;

/**
 *  First date (inclusive) on which to retrieve conversions. Format is yyyymmdd.
 *
 *  @note The documented range is 20091101..99991231.
 */
@property(nonatomic, assign) NSInteger startDate;

/** The 0-based starting index for retrieving conversions results. */
@property(nonatomic, assign) NSUInteger startRow;

/**
 *  Fetches a @c GTLRDoubleClickSearch_ConversionList.
 *
 *  Retrieves a list of conversions from a DoubleClick Search engine account.
 *
 *  @param agencyId Numeric ID of the agency.
 *  @param advertiserId Numeric ID of the advertiser.
 *  @param engineAccountId Numeric ID of the engine account.
 *  @param endDate Last date (inclusive) on which to retrieve conversions.
 *    Format is yyyymmdd. (Range 20091101..99991231)
 *  @param rowCount The number of conversions to return per call. (Range
 *    1..1000)
 *  @param startDate First date (inclusive) on which to retrieve conversions.
 *    Format is yyyymmdd. (Range 20091101..99991231)
 *  @param startRow The 0-based starting index for retrieving conversions
 *    results.
 *
 *  @return GTLRDoubleClickSearchQuery_ConversionGet
 */
+ (instancetype)queryWithAgencyId:(long long)agencyId
                     advertiserId:(long long)advertiserId
                  engineAccountId:(long long)engineAccountId
                          endDate:(NSInteger)endDate
                         rowCount:(NSInteger)rowCount
                        startDate:(NSInteger)startDate
                         startRow:(NSUInteger)startRow;

@end

/**
 *  Inserts a batch of new conversions into DoubleClick Search.
 *
 *  Method: doubleclicksearch.conversion.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDoubleClickSearch
 */
@interface GTLRDoubleClickSearchQuery_ConversionInsert : GTLRDoubleClickSearchQuery
// Previous library name was
//   +[GTLQueryDoubleClickSearch queryForConversionInsertWithObject:]

/**
 *  Fetches a @c GTLRDoubleClickSearch_ConversionList.
 *
 *  Inserts a batch of new conversions into DoubleClick Search.
 *
 *  @param object The @c GTLRDoubleClickSearch_ConversionList to include in the
 *    query.
 *
 *  @return GTLRDoubleClickSearchQuery_ConversionInsert
 */
+ (instancetype)queryWithObject:(GTLRDoubleClickSearch_ConversionList *)object;

@end

/**
 *  Updates a batch of conversions in DoubleClick Search.
 *
 *  Method: doubleclicksearch.conversion.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDoubleClickSearch
 */
@interface GTLRDoubleClickSearchQuery_ConversionUpdate : GTLRDoubleClickSearchQuery
// Previous library name was
//   +[GTLQueryDoubleClickSearch queryForConversionUpdateWithObject:]

/**
 *  Fetches a @c GTLRDoubleClickSearch_ConversionList.
 *
 *  Updates a batch of conversions in DoubleClick Search.
 *
 *  @param object The @c GTLRDoubleClickSearch_ConversionList to include in the
 *    query.
 *
 *  @return GTLRDoubleClickSearchQuery_ConversionUpdate
 */
+ (instancetype)queryWithObject:(GTLRDoubleClickSearch_ConversionList *)object;

@end

/**
 *  Updates the availabilities of a batch of floodlight activities in
 *  DoubleClick Search.
 *
 *  Method: doubleclicksearch.conversion.updateAvailability
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDoubleClickSearch
 */
@interface GTLRDoubleClickSearchQuery_ConversionUpdateAvailability : GTLRDoubleClickSearchQuery
// Previous library name was
//   +[GTLQueryDoubleClickSearch queryForConversionUpdateAvailabilityWithObject:]

/**
 *  Fetches a @c GTLRDoubleClickSearch_UpdateAvailabilityResponse.
 *
 *  Updates the availabilities of a batch of floodlight activities in
 *  DoubleClick Search.
 *
 *  @param object The @c GTLRDoubleClickSearch_UpdateAvailabilityRequest to
 *    include in the query.
 *
 *  @return GTLRDoubleClickSearchQuery_ConversionUpdateAvailability
 */
+ (instancetype)queryWithObject:(GTLRDoubleClickSearch_UpdateAvailabilityRequest *)object;

@end

/**
 *  Generates and returns a report immediately.
 *
 *  Method: doubleclicksearch.reports.generate
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDoubleClickSearch
 */
@interface GTLRDoubleClickSearchQuery_ReportsGenerate : GTLRDoubleClickSearchQuery
// Previous library name was
//   +[GTLQueryDoubleClickSearch queryForReportsGenerateWithObject:]

/**
 *  Fetches a @c GTLRDoubleClickSearch_Report.
 *
 *  Generates and returns a report immediately.
 *
 *  @param object The @c GTLRDoubleClickSearch_ReportRequest to include in the
 *    query.
 *
 *  @return GTLRDoubleClickSearchQuery_ReportsGenerate
 */
+ (instancetype)queryWithObject:(GTLRDoubleClickSearch_ReportRequest *)object;

@end

/**
 *  Polls for the status of a report request.
 *
 *  Method: doubleclicksearch.reports.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDoubleClickSearch
 */
@interface GTLRDoubleClickSearchQuery_ReportsGet : GTLRDoubleClickSearchQuery
// Previous library name was
//   +[GTLQueryDoubleClickSearch queryForReportsGetWithreportId:]

/** ID of the report request being polled. */
@property(nonatomic, copy, nullable) NSString *reportId;

/**
 *  Fetches a @c GTLRDoubleClickSearch_Report.
 *
 *  Polls for the status of a report request.
 *
 *  @param reportId ID of the report request being polled.
 *
 *  @return GTLRDoubleClickSearchQuery_ReportsGet
 */
+ (instancetype)queryWithReportId:(NSString *)reportId;

@end

/**
 *  Downloads a report file encoded in UTF-8.
 *
 *  Method: doubleclicksearch.reports.getFile
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDoubleClickSearch
 */
@interface GTLRDoubleClickSearchQuery_ReportsGetFile : GTLRDoubleClickSearchQuery
// Previous library name was
//   +[GTLQueryDoubleClickSearch queryForReportsGetFileWithreportId:reportFragment:]

/** The index of the report fragment to download. */
@property(nonatomic, assign) NSInteger reportFragment;

/** ID of the report. */
@property(nonatomic, copy, nullable) NSString *reportId;

/**
 *  Fetches the requested resource data as a @c GTLRDataObject.
 *
 *  Downloads a report file encoded in UTF-8.
 *
 *  @param reportId ID of the report.
 *  @param reportFragment The index of the report fragment to download.
 *
 *  @return GTLRDoubleClickSearchQuery_ReportsGetFile
 */
+ (instancetype)queryForMediaWithReportId:(NSString *)reportId
                           reportFragment:(NSInteger)reportFragment;

@end

/**
 *  Inserts a report request into the reporting system.
 *
 *  Method: doubleclicksearch.reports.request
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDoubleClickSearch
 */
@interface GTLRDoubleClickSearchQuery_ReportsRequest : GTLRDoubleClickSearchQuery
// Previous library name was
//   +[GTLQueryDoubleClickSearch queryForReportsRequestWithObject:]

/**
 *  Fetches a @c GTLRDoubleClickSearch_Report.
 *
 *  Inserts a report request into the reporting system.
 *
 *  @param object The @c GTLRDoubleClickSearch_ReportRequest to include in the
 *    query.
 *
 *  @return GTLRDoubleClickSearchQuery_ReportsRequest
 */
+ (instancetype)queryWithObject:(GTLRDoubleClickSearch_ReportRequest *)object;

@end

/**
 *  Retrieve the list of saved columns for a specified advertiser.
 *
 *  Method: doubleclicksearch.savedColumns.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDoubleClickSearch
 */
@interface GTLRDoubleClickSearchQuery_SavedColumnsList : GTLRDoubleClickSearchQuery
// Previous library name was
//   +[GTLQueryDoubleClickSearch queryForSavedColumnsListWithagencyId:advertiserId:]

/** DS ID of the advertiser. */
@property(nonatomic, assign) long long advertiserId;

/** DS ID of the agency. */
@property(nonatomic, assign) long long agencyId;

/**
 *  Fetches a @c GTLRDoubleClickSearch_SavedColumnList.
 *
 *  Retrieve the list of saved columns for a specified advertiser.
 *
 *  @param agencyId DS ID of the agency.
 *  @param advertiserId DS ID of the advertiser.
 *
 *  @return GTLRDoubleClickSearchQuery_SavedColumnsList
 */
+ (instancetype)queryWithAgencyId:(long long)agencyId
                     advertiserId:(long long)advertiserId;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
