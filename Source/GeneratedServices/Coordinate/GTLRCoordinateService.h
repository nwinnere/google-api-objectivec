// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Maps Coordinate API (coordinate/v1)
// Description:
//   Lets you view and manage jobs in a Coordinate team.
// Documentation:
//   https://developers.google.com/coordinate/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your Google Maps Coordinate jobs
 *
 *  Value "https://www.googleapis.com/auth/coordinate"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCoordinate;
/**
 *  Authorization scope: View your Google Coordinate jobs
 *
 *  Value "https://www.googleapis.com/auth/coordinate.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCoordinateReadonly;

// ----------------------------------------------------------------------------
//   GTLRCoordinateService
//

/**
 *  Service for executing Google Maps Coordinate API queries.
 *
 *  Lets you view and manage jobs in a Coordinate team.
 */
@interface GTLRCoordinateService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRCoordinateQuery.h. The query can the be sent with GTLRService's execute
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
