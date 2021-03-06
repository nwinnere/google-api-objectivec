// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   AdMob API (admob/v1)
// Description:
//   The AdMob API allows publishers to programmatically get information about
//   their AdMob account.
// Documentation:
//   https://developers.google.com/admob/api/

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

@class GTLRAdMob_GenerateMediationReportRequest;
@class GTLRAdMob_GenerateNetworkReportRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other AdMob query classes.
 */
@interface GTLRAdMobQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets information about the specified AdMob publisher account.
 *
 *  Method: admob.accounts.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdMobReadonly
 *    @c kGTLRAuthScopeAdMobReport
 */
@interface GTLRAdMobQuery_AccountsGet : GTLRAdMobQuery
// Previous library name was
//   +[GTLQueryAdMob queryForAccountsGetWithname:]

/**
 *  Resource name of the publisher account to retrieve. Example:
 *  accounts/pub-9876543210987654
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAdMob_PublisherAccount.
 *
 *  Gets information about the specified AdMob publisher account.
 *
 *  @param name Resource name of the publisher account to retrieve. Example:
 *    accounts/pub-9876543210987654
 *
 *  @return GTLRAdMobQuery_AccountsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists the AdMob publisher account that was most recently signed in to from
 *  the AdMob UI. For more information, see
 *  https://support.google.com/admob/answer/10243672.
 *
 *  Method: admob.accounts.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdMobReadonly
 *    @c kGTLRAuthScopeAdMobReport
 */
@interface GTLRAdMobQuery_AccountsList : GTLRAdMobQuery
// Previous library name was
//   +[GTLQueryAdMob queryForAccountsList]

/** Maximum number of accounts to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The value returned by the last `ListPublisherAccountsResponse`; indicates
 *  that this is a continuation of a prior `ListPublisherAccounts` call, and
 *  that the system should return the next page of data.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAdMob_ListPublisherAccountsResponse.
 *
 *  Lists the AdMob publisher account that was most recently signed in to from
 *  the AdMob UI. For more information, see
 *  https://support.google.com/admob/answer/10243672.
 *
 *  @return GTLRAdMobQuery_AccountsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Generates an AdMob Mediation report based on the provided report
 *  specification. Returns result of a server-side streaming RPC. The result is
 *  returned in a sequence of responses.
 *
 *  Method: admob.accounts.mediationReport.generate
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdMobReadonly
 *    @c kGTLRAuthScopeAdMobReport
 */
@interface GTLRAdMobQuery_AccountsMediationReportGenerate : GTLRAdMobQuery
// Previous library name was
//   +[GTLQueryAdMob queryForAccountsMediationReportGenerateWithObject:parent:]

/**
 *  Resource name of the account to generate the report for. Example:
 *  accounts/pub-9876543210987654
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAdMob_GenerateMediationReportResponse.
 *
 *  Generates an AdMob Mediation report based on the provided report
 *  specification. Returns result of a server-side streaming RPC. The result is
 *  returned in a sequence of responses.
 *
 *  @param object The @c GTLRAdMob_GenerateMediationReportRequest to include in
 *    the query.
 *  @param parent Resource name of the account to generate the report for.
 *    Example: accounts/pub-9876543210987654
 *
 *  @return GTLRAdMobQuery_AccountsMediationReportGenerate
 */
+ (instancetype)queryWithObject:(GTLRAdMob_GenerateMediationReportRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Generates an AdMob Network report based on the provided report
 *  specification. Returns result of a server-side streaming RPC. The result is
 *  returned in a sequence of responses.
 *
 *  Method: admob.accounts.networkReport.generate
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAdMobReadonly
 *    @c kGTLRAuthScopeAdMobReport
 */
@interface GTLRAdMobQuery_AccountsNetworkReportGenerate : GTLRAdMobQuery
// Previous library name was
//   +[GTLQueryAdMob queryForAccountsNetworkReportGenerateWithObject:parent:]

/**
 *  Resource name of the account to generate the report for. Example:
 *  accounts/pub-9876543210987654
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAdMob_GenerateNetworkReportResponse.
 *
 *  Generates an AdMob Network report based on the provided report
 *  specification. Returns result of a server-side streaming RPC. The result is
 *  returned in a sequence of responses.
 *
 *  @param object The @c GTLRAdMob_GenerateNetworkReportRequest to include in
 *    the query.
 *  @param parent Resource name of the account to generate the report for.
 *    Example: accounts/pub-9876543210987654
 *
 *  @return GTLRAdMobQuery_AccountsNetworkReportGenerate
 */
+ (instancetype)queryWithObject:(GTLRAdMob_GenerateNetworkReportRequest *)object
                         parent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
