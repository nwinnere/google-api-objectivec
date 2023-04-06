// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Security Token Service API (sts/v1)
// Description:
//   The Security Token Service exchanges Google or third-party credentials for
//   a short-lived access token to Google Cloud resources.
// Documentation:
//   http://cloud.google.com/iam/docs/workload-identity-federation

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

@class GTLRCloudSecurityToken_GoogleIdentityStsV1ExchangeTokenRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Security Token query classes.
 */
@interface GTLRCloudSecurityTokenQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Exchanges a credential for a Google OAuth 2.0 access token.
 *
 *  Method: sts.token
 */
@interface GTLRCloudSecurityTokenQuery_V1Token : GTLRCloudSecurityTokenQuery
// Previous library name was
//   +[GTLQueryCloudSecurityToken queryForTokenWithObject:]

/**
 *  Fetches a @c
 *  GTLRCloudSecurityToken_GoogleIdentityStsV1ExchangeTokenResponse.
 *
 *  Exchanges a credential for a Google OAuth 2.0 access token.
 *
 *  @param object The @c
 *    GTLRCloudSecurityToken_GoogleIdentityStsV1ExchangeTokenRequest to include
 *    in the query.
 *
 *  @return GTLRCloudSecurityTokenQuery_V1Token
 */
+ (instancetype)queryWithObject:(GTLRCloudSecurityToken_GoogleIdentityStsV1ExchangeTokenRequest *)object;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
