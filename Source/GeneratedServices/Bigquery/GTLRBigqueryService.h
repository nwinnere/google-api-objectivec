// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   BigQuery API (bigquery/v2)
// Description:
//   A data platform for customers to create, manage, share and query data.
// Documentation:
//   https://cloud.google.com/bigquery/

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
 *  Authorization scope: View and manage your data in Google BigQuery
 *
 *  Value "https://www.googleapis.com/auth/bigquery"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigquery;
/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud Platform services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryCloudPlatformReadOnly;
/**
 *  Authorization scope: Manage your data and permissions in Google Cloud
 *  Storage
 *
 *  Value "https://www.googleapis.com/auth/devstorage.full_control"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryDevstorageFullControl;
/**
 *  Authorization scope: View your data in Google Cloud Storage
 *
 *  Value "https://www.googleapis.com/auth/devstorage.read_only"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryDevstorageReadOnly;
/**
 *  Authorization scope: Manage your data in Google Cloud Storage
 *
 *  Value "https://www.googleapis.com/auth/devstorage.read_write"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryDevstorageReadWrite;
/**
 *  Authorization scope: Insert data into Google BigQuery
 *
 *  Value "https://www.googleapis.com/auth/bigquery.insertdata"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryInsertdata;
/**
 *  Authorization scope: View your data in Google BigQuery
 *
 *  Value "https://www.googleapis.com/auth/bigquery.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryReadonly;

// ----------------------------------------------------------------------------
//   GTLRBigqueryService
//

/**
 *  Service for executing BigQuery API queries.
 *
 *  A data platform for customers to create, manage, share and query data.
 */
@interface GTLRBigqueryService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRBigqueryQuery.h. The query can the be sent with GTLRService's execute
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
