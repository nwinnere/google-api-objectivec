// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Search Console API (searchconsole/v1)
// Description:
//   The Search Console API provides access to both Search Console data
//   (verified users only) and to public information on an URL basis (anyone)
// Documentation:
//   https://developers.google.com/webmaster-tools/search-console-api/

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

@class GTLRSearchConsole_BlockedResource;
@class GTLRSearchConsole_Image;
@class GTLRSearchConsole_MobileFriendlyIssue;
@class GTLRSearchConsole_ResourceIssue;
@class GTLRSearchConsole_TestStatus;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRSearchConsole_MobileFriendlyIssue.rule

/**
 *  Viewsport is not specified using the meta viewport tag. [Learn more]
 *  (https://support.google.com/webmasters/answer/6352293#viewport_not_configured).
 *
 *  Value: "CONFIGURE_VIEWPORT"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_MobileFriendlyIssue_Rule_ConfigureViewport;
/**
 *  Viewport defined to a fixed width. [Learn more]
 *  (https://support.google.com/webmasters/answer/6352293#fixed-width_viewport).
 *
 *  Value: "FIXED_WIDTH_VIEWPORT"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_MobileFriendlyIssue_Rule_FixedWidthViewport;
/**
 *  Unknown rule. Sorry, we don't have any description for the rule that was
 *  broken.
 *
 *  Value: "MOBILE_FRIENDLY_RULE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_MobileFriendlyIssue_Rule_MobileFriendlyRuleUnspecified;
/**
 *  Content not sized to viewport. [Learn more]
 *  (https://support.google.com/webmasters/answer/6352293#content_not_sized_to_viewport).
 *
 *  Value: "SIZE_CONTENT_TO_VIEWPORT"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_MobileFriendlyIssue_Rule_SizeContentToViewport;
/**
 *  Touch elements are too close to each other. [Learn more]
 *  (https://support.google.com/webmasters/answer/6352293#touch_elements_too_close).
 *
 *  Value: "TAP_TARGETS_TOO_CLOSE"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_MobileFriendlyIssue_Rule_TapTargetsTooClose;
/**
 *  Font size is too small for easy reading on a small screen. [Learn More]
 *  (https://support.google.com/webmasters/answer/6352293#small_font_size).
 *
 *  Value: "USE_LEGIBLE_FONT_SIZES"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_MobileFriendlyIssue_Rule_UseLegibleFontSizes;
/**
 *  Plugins incompatible with mobile devices are being used. [Learn more]
 *  (https://support.google.com/webmasters/answer/6352293#flash_usage).
 *
 *  Value: "USES_INCOMPATIBLE_PLUGINS"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_MobileFriendlyIssue_Rule_UsesIncompatiblePlugins;

// ----------------------------------------------------------------------------
// GTLRSearchConsole_RunMobileFriendlyTestResponse.mobileFriendliness

/**
 *  The page is mobile friendly.
 *
 *  Value: "MOBILE_FRIENDLY"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_RunMobileFriendlyTestResponse_MobileFriendliness_MobileFriendly;
/**
 *  Internal error when running this test. Please try running the test again.
 *
 *  Value: "MOBILE_FRIENDLY_TEST_RESULT_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_RunMobileFriendlyTestResponse_MobileFriendliness_MobileFriendlyTestResultUnspecified;
/**
 *  The page is not mobile friendly.
 *
 *  Value: "NOT_MOBILE_FRIENDLY"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_RunMobileFriendlyTestResponse_MobileFriendliness_NotMobileFriendly;

// ----------------------------------------------------------------------------
// GTLRSearchConsole_TestStatus.status

/**
 *  Inspection has completed without errors.
 *
 *  Value: "COMPLETE"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_TestStatus_Status_Complete;
/**
 *  Inspection terminated in an error state. This indicates a problem in
 *  Google's infrastructure, not a user error. Please try again later.
 *
 *  Value: "INTERNAL_ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_TestStatus_Status_InternalError;
/**
 *  Google can not access the URL because of a user error such as a robots.txt
 *  blockage, a 403 or 500 code etc. Please make sure that the URL provided is
 *  accessible by Googlebot and is not password protected.
 *
 *  Value: "PAGE_UNREACHABLE"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_TestStatus_Status_PageUnreachable;
/**
 *  Internal error when running this test. Please try running the test again.
 *
 *  Value: "TEST_STATUS_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRSearchConsole_TestStatus_Status_TestStatusUnspecified;

/**
 *  Blocked resource.
 */
@interface GTLRSearchConsole_BlockedResource : GTLRObject

/** URL of the blocked resource. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  Describe image data.
 */
@interface GTLRSearchConsole_Image : GTLRObject

/**
 *  Image data in format determined by the mime type. Currently, the format
 *  will always be "image/png", but this might change in the future.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *data;

/** The mime-type of the image data. */
@property(nonatomic, copy, nullable) NSString *mimeType;

@end


/**
 *  Mobile-friendly issue.
 */
@interface GTLRSearchConsole_MobileFriendlyIssue : GTLRObject

/**
 *  Rule violated.
 *
 *  Likely values:
 *    @arg @c kGTLRSearchConsole_MobileFriendlyIssue_Rule_ConfigureViewport
 *        Viewsport is not specified using the meta viewport tag. [Learn more]
 *        (https://support.google.com/webmasters/answer/6352293#viewport_not_configured).
 *        (Value: "CONFIGURE_VIEWPORT")
 *    @arg @c kGTLRSearchConsole_MobileFriendlyIssue_Rule_FixedWidthViewport
 *        Viewport defined to a fixed width. [Learn more]
 *        (https://support.google.com/webmasters/answer/6352293#fixed-width_viewport).
 *        (Value: "FIXED_WIDTH_VIEWPORT")
 *    @arg @c kGTLRSearchConsole_MobileFriendlyIssue_Rule_MobileFriendlyRuleUnspecified
 *        Unknown rule. Sorry, we don't have any description for the rule that
 *        was
 *        broken. (Value: "MOBILE_FRIENDLY_RULE_UNSPECIFIED")
 *    @arg @c kGTLRSearchConsole_MobileFriendlyIssue_Rule_SizeContentToViewport
 *        Content not sized to viewport. [Learn more]
 *        (https://support.google.com/webmasters/answer/6352293#content_not_sized_to_viewport).
 *        (Value: "SIZE_CONTENT_TO_VIEWPORT")
 *    @arg @c kGTLRSearchConsole_MobileFriendlyIssue_Rule_TapTargetsTooClose
 *        Touch elements are too close to each other. [Learn more]
 *        (https://support.google.com/webmasters/answer/6352293#touch_elements_too_close).
 *        (Value: "TAP_TARGETS_TOO_CLOSE")
 *    @arg @c kGTLRSearchConsole_MobileFriendlyIssue_Rule_UseLegibleFontSizes
 *        Font size is too small for easy reading on a small screen. [Learn
 *        More]
 *        (https://support.google.com/webmasters/answer/6352293#small_font_size).
 *        (Value: "USE_LEGIBLE_FONT_SIZES")
 *    @arg @c kGTLRSearchConsole_MobileFriendlyIssue_Rule_UsesIncompatiblePlugins
 *        Plugins incompatible with mobile devices are being used. [Learn more]
 *        (https://support.google.com/webmasters/answer/6352293#flash_usage).
 *        (Value: "USES_INCOMPATIBLE_PLUGINS")
 */
@property(nonatomic, copy, nullable) NSString *rule;

@end


/**
 *  Information about a resource with issue.
 */
@interface GTLRSearchConsole_ResourceIssue : GTLRObject

/** Describes a blocked resource issue. */
@property(nonatomic, strong, nullable) GTLRSearchConsole_BlockedResource *blockedResource;

@end


/**
 *  Mobile-friendly test request.
 */
@interface GTLRSearchConsole_RunMobileFriendlyTestRequest : GTLRObject

/**
 *  Whether or not screenshot is requested. Default is false.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *requestScreenshot;

/** URL for inspection. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  Mobile-friendly test response, including mobile-friendly issues and resource
 *  issues.
 */
@interface GTLRSearchConsole_RunMobileFriendlyTestResponse : GTLRObject

/**
 *  Test verdict, whether the page is mobile friendly or not.
 *
 *  Likely values:
 *    @arg @c kGTLRSearchConsole_RunMobileFriendlyTestResponse_MobileFriendliness_MobileFriendly
 *        The page is mobile friendly. (Value: "MOBILE_FRIENDLY")
 *    @arg @c kGTLRSearchConsole_RunMobileFriendlyTestResponse_MobileFriendliness_MobileFriendlyTestResultUnspecified
 *        Internal error when running this test. Please try running the test
 *        again. (Value: "MOBILE_FRIENDLY_TEST_RESULT_UNSPECIFIED")
 *    @arg @c kGTLRSearchConsole_RunMobileFriendlyTestResponse_MobileFriendliness_NotMobileFriendly
 *        The page is not mobile friendly. (Value: "NOT_MOBILE_FRIENDLY")
 */
@property(nonatomic, copy, nullable) NSString *mobileFriendliness;

/** List of mobile-usability issues. */
@property(nonatomic, strong, nullable) NSArray<GTLRSearchConsole_MobileFriendlyIssue *> *mobileFriendlyIssues;

/** Information about embedded resources issues. */
@property(nonatomic, strong, nullable) NSArray<GTLRSearchConsole_ResourceIssue *> *resourceIssues;

/** Screenshot of the requested URL. */
@property(nonatomic, strong, nullable) GTLRSearchConsole_Image *screenshot;

/** Final state of the test, can be either complete or an error. */
@property(nonatomic, strong, nullable) GTLRSearchConsole_TestStatus *testStatus;

@end


/**
 *  Final state of the test, including error details if necessary.
 */
@interface GTLRSearchConsole_TestStatus : GTLRObject

/** Error details if applicable. */
@property(nonatomic, copy, nullable) NSString *details;

/**
 *  Status of the test.
 *
 *  Likely values:
 *    @arg @c kGTLRSearchConsole_TestStatus_Status_Complete Inspection has
 *        completed without errors. (Value: "COMPLETE")
 *    @arg @c kGTLRSearchConsole_TestStatus_Status_InternalError Inspection
 *        terminated in an error state. This indicates a problem in
 *        Google's infrastructure, not a user error. Please try again later.
 *        (Value: "INTERNAL_ERROR")
 *    @arg @c kGTLRSearchConsole_TestStatus_Status_PageUnreachable Google can
 *        not access the URL because of a user error such as a robots.txt
 *        blockage, a 403 or 500 code etc. Please make sure that the URL
 *        provided is
 *        accessible by Googlebot and is not password protected. (Value:
 *        "PAGE_UNREACHABLE")
 *    @arg @c kGTLRSearchConsole_TestStatus_Status_TestStatusUnspecified
 *        Internal error when running this test. Please try running the test
 *        again. (Value: "TEST_STATUS_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *status;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
