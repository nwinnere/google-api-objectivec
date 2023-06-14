// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Docs API (docs/v1)
// Description:
//   Reads and writes Google Docs documents.
// Documentation:
//   https://developers.google.com/docs/

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
 *  Authorization scope: See, create, and edit all Google Docs documents you
 *  have access to
 *
 *  Value "https://www.googleapis.com/auth/documents"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDocsDocuments;
/**
 *  Authorization scope: View your Google Docs documents
 *
 *  Value "https://www.googleapis.com/auth/documents.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDocsDocumentsReadonly;
/**
 *  Authorization scope: See, edit, create, and delete all of your Google Drive
 *  files
 *
 *  Value "https://www.googleapis.com/auth/drive"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDocsDrive;
/**
 *  Authorization scope: View and manage Google Drive files and folders that you
 *  have opened or created with this app
 *
 *  Value "https://www.googleapis.com/auth/drive.file"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDocsDriveFile;
/**
 *  Authorization scope: See and download all your Google Drive files
 *
 *  Value "https://www.googleapis.com/auth/drive.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDocsDriveReadonly;

// ----------------------------------------------------------------------------
//   GTLRDocsService
//

/**
 *  Service for executing Google Docs API queries.
 *
 *  Reads and writes Google Docs documents.
 */
@interface GTLRDocsService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRDocsQuery.h. The query can the be sent with GTLRService's execute
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
