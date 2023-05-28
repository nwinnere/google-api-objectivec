// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Admin SDK API (admin/datatransfer_v1)
// Description:
//   Admin SDK lets administrators of enterprise domains to view and manage
//   resources like user, groups etc. It also provides audit and usage reports
//   of domain.
// Documentation:
//   http://developers.google.com/admin-sdk/

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
// Authorization scopes

/**
 *  Authorization scope: View and manage data transfers between users in your
 *  organization
 *
 *  Value "https://www.googleapis.com/auth/admin.datatransfer"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataTransferDatatransfer;
/**
 *  Authorization scope: View data transfers between users in your organization
 *
 *  Value "https://www.googleapis.com/auth/admin.datatransfer.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataTransferDatatransferReadonly;

// ----------------------------------------------------------------------------
//   GTLRDataTransferService
//

/**
 *  Service for executing Admin SDK API queries.
 *
 *  Admin SDK lets administrators of enterprise domains to view and manage
 *  resources like user, groups etc. It also provides audit and usage reports of
 *  domain.
 */
@interface GTLRDataTransferService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRDataTransferQuery.h. The query can the be sent with GTLRService's execute
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
