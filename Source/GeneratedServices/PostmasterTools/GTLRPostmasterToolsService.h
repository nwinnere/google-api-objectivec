// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Gmail Postmaster Tools API (gmailpostmastertools/v1beta1)
// Description:
//   The Postmaster Tools API is a RESTful API that provides programmatic access
//   to email traffic metrics (like spam reports, delivery errors etc) otherwise
//   available through the Gmail Postmaster Tools UI currently.
// Documentation:
//   https://developers.google.com/gmail/postmaster

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
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
// Authorization scope

/**
 *  Authorization scope: See email traffic metrics for the domains you have
 *  registered in Gmail Postmaster Tools
 *
 *  Value "https://www.googleapis.com/auth/postmaster.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopePostmasterToolsPostmasterReadonly;

// ----------------------------------------------------------------------------
//   GTLRPostmasterToolsService
//

/**
 *  Service for executing Gmail Postmaster Tools API queries.
 *
 *  The Postmaster Tools API is a RESTful API that provides programmatic access
 *  to email traffic metrics (like spam reports, delivery errors etc) otherwise
 *  available through the Gmail Postmaster Tools UI currently.
 */
@interface GTLRPostmasterToolsService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRPostmasterToolsQuery.h. The query can the be sent with GTLRService's
// execute methods,
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
