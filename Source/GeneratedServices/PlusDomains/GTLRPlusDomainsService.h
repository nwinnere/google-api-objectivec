// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google+ Domains API (plusDomains/v1)
// Description:
//   Builds on top of the Google+ platform for Google Apps Domains.
// Documentation:
//   https://developers.google.com/+/domains/

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
 *  Authorization scope: View your circles and the people and pages in them
 *
 *  Value "https://www.googleapis.com/auth/plus.circles.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePlusDomainsPlusCirclesRead;
/**
 *  Authorization scope: Manage your circles and add people and pages. People
 *  and pages you add to your circles will be notified. Others may see this
 *  information publicly. People you add to circles can use Hangouts with you.
 *
 *  Value "https://www.googleapis.com/auth/plus.circles.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePlusDomainsPlusCirclesWrite;
/**
 *  Authorization scope: View your basic profile info, including your age range
 *  and language
 *
 *  Value "https://www.googleapis.com/auth/plus.login"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePlusDomainsPlusLogin;
/**
 *  Authorization scope: Know who you are on Google
 *
 *  Value "https://www.googleapis.com/auth/plus.me"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePlusDomainsPlusMe;
/**
 *  Authorization scope: Send your photos and videos to Google+
 *
 *  Value "https://www.googleapis.com/auth/plus.media.upload"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePlusDomainsPlusMediaUpload;
/**
 *  Authorization scope: View your own Google+ profile and profiles visible to
 *  you
 *
 *  Value "https://www.googleapis.com/auth/plus.profiles.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePlusDomainsPlusProfilesRead;
/**
 *  Authorization scope: View your Google+ posts, comments, and stream
 *
 *  Value "https://www.googleapis.com/auth/plus.stream.read"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePlusDomainsPlusStreamRead;
/**
 *  Authorization scope: Manage your Google+ posts, comments, and stream
 *
 *  Value "https://www.googleapis.com/auth/plus.stream.write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePlusDomainsPlusStreamWrite;
/**
 *  Authorization scope: View your email address
 *
 *  Value "https://www.googleapis.com/auth/userinfo.email"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePlusDomainsUserinfoEmail;
/**
 *  Authorization scope: View your basic profile info
 *
 *  Value "https://www.googleapis.com/auth/userinfo.profile"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePlusDomainsUserinfoProfile;

// ----------------------------------------------------------------------------
//   GTLRPlusDomainsService
//

/**
 *  Service for executing Google+ Domains API queries.
 *
 *  Builds on top of the Google+ platform for Google Apps Domains.
 */
@interface GTLRPlusDomainsService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRPlusDomainsQuery.h. The query can the be sent with GTLRService's execute
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
