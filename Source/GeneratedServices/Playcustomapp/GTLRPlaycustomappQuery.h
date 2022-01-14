// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Custom App Publishing API (playcustomapp/v1)
// Description:
//   An API to publish custom Android apps.
// Documentation:
//   https://developers.google.com/android/work/play/custom-app-api

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRPlaycustomapp_CustomApp;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Playcustomapp query classes.
 */
@interface GTLRPlaycustomappQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Create and publish a new custom app.
 *
 *  Method: playcustomapp.accounts.customApps.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePlaycustomappAndroidpublisher
 */
@interface GTLRPlaycustomappQuery_AccountsCustomAppsCreate : GTLRPlaycustomappQuery
// Previous library name was
//   +[GTLQueryPlaycustomapp queryForAccountsCustomAppsCreateWithObject:account:]

/** Developer account ID. */
@property(nonatomic, assign) long long account;

/**
 *  Fetches a @c GTLRPlaycustomapp_CustomApp.
 *
 *  Create and publish a new custom app.
 *
 *  @param object The @c GTLRPlaycustomapp_CustomApp to include in the query.
 *  @param account Developer account ID.
 *  @param uploadParameters The media to include in this query. Maximum size
 *    100MB. Accepted MIME type: * / *
 *
 *  @returns GTLRPlaycustomappQuery_AccountsCustomAppsCreate
 */
+ (instancetype)queryWithObject:(GTLRPlaycustomapp_CustomApp *)object
                        account:(long long)account
               uploadParameters:(nullable GTLRUploadParameters *)uploadParameters;

@end

NS_ASSUME_NONNULL_END
