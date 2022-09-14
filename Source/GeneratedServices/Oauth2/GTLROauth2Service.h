// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google OAuth2 API (oauth2/v2)
// Description:
//   Obtains end-user authorization grants for use with other Google APIs.
// Documentation:
//   https://developers.google.com/accounts/docs/OAuth2

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: Know who you are on Google
 *
 *  Value "https://www.googleapis.com/auth/plus.me"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeOauth2PlusMe;
/**
 *  Authorization scope: View your email address
 *
 *  Value "https://www.googleapis.com/auth/userinfo.email"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeOauth2UserinfoEmail;
/**
 *  Authorization scope: See your personal info, including any personal info
 *  you've made publicly available
 *
 *  Value "https://www.googleapis.com/auth/userinfo.profile"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeOauth2UserinfoProfile;

// ----------------------------------------------------------------------------
//   GTLROauth2Service
//

/**
 *  Service for executing Google OAuth2 API queries.
 *
 *  Obtains end-user authorization grants for use with other Google APIs.
 */
@interface GTLROauth2Service : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLROauth2Query.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
