// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Groups Migration API (groupsmigration/v1)
// Description:
//   The Groups Migration API allows domain administrators to archive emails
//   into Google groups.
// Documentation:
//   https://developers.google.com/google-apps/groups-migration/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  JSON response template for groups migration API.
 */
@interface GTLRGroupsMigration_Groups : GTLRObject

/** The kind of insert resource this is. */
@property(nonatomic, copy, nullable) NSString *kind;

/** The status of the insert request. */
@property(nonatomic, copy, nullable) NSString *responseCode;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
