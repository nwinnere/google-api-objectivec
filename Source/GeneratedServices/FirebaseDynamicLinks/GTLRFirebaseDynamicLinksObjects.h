// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Dynamic Links API (firebasedynamiclinks/v1)
// Description:
//   Programmatically creates and manages Firebase Dynamic Links.
// Documentation:
//   https://firebase.google.com/docs/dynamic-links/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirebaseDynamicLinks_AnalyticsInfo;
@class GTLRFirebaseDynamicLinks_AndroidInfo;
@class GTLRFirebaseDynamicLinks_DynamicLinkEventStat;
@class GTLRFirebaseDynamicLinks_DynamicLinkInfo;
@class GTLRFirebaseDynamicLinks_DynamicLinkWarning;
@class GTLRFirebaseDynamicLinks_GooglePlayAnalytics;
@class GTLRFirebaseDynamicLinks_IosInfo;
@class GTLRFirebaseDynamicLinks_ITunesConnectAnalytics;
@class GTLRFirebaseDynamicLinks_NavigationInfo;
@class GTLRFirebaseDynamicLinks_SocialMetaTagInfo;
@class GTLRFirebaseDynamicLinks_Suffix;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRFirebaseDynamicLinks_DynamicLinkEventStat.event

/**
 *  Indicates that the app is opened for the first time after an install
 *  triggered by FDLs
 *
 *  Value: "APP_FIRST_OPEN"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_AppFirstOpen;
/**
 *  Indicates that an FDL triggers an app install from Play store, currently
 *  it's impossible to get stats from App store.
 *
 *  Value: "APP_INSTALL"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_AppInstall;
/**
 *  Indicates that the app is opened via an FDL for non-first time.
 *
 *  Value: "APP_RE_OPEN"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_AppReOpen;
/**
 *  Indicates that an FDL is clicked by users.
 *
 *  Value: "CLICK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_Click;
/**
 *  Unspecified type.
 *
 *  Value: "DYNAMIC_LINK_EVENT_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_DynamicLinkEventUnspecified;
/**
 *  Indicates that an FDL redirects users to fallback link.
 *
 *  Value: "REDIRECT"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_Redirect;

// ----------------------------------------------------------------------------
// GTLRFirebaseDynamicLinks_DynamicLinkEventStat.platform

/**
 *  Represents Android platform.
 *  All apps and browsers on Android are classfied in this category.
 *
 *  Value: "ANDROID"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Platform_Android;
/**
 *  Represents desktop.
 *  Note: other platforms like Windows, Blackberry, Amazon fall into this
 *  category.
 *
 *  Value: "DESKTOP"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Platform_Desktop;
/**
 *  Unspecified platform.
 *
 *  Value: "DYNAMIC_LINK_PLATFORM_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Platform_DynamicLinkPlatformUnspecified;
/**
 *  Represents iOS platform.
 *  All apps and browsers on iOS are classfied in this category.
 *
 *  Value: "IOS"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Platform_Ios;

// ----------------------------------------------------------------------------
// GTLRFirebaseDynamicLinks_DynamicLinkWarning.warningCode

/**
 *  isAd param format is incorrect.
 *
 *  Value: "BAD_AD_PARAM"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadAdParam;
/**
 *  Debug param format is incorrect.
 *
 *  Value: "BAD_DEBUG_PARAM"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadDebugParam;
/**
 *  Android fallback link has an invalid (non http/https) URI scheme.
 *
 *  Value: "BAD_URI_SCHEME_ANDROID_FALLBACK_LINK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeAndroidFallbackLink;
/**
 *  iOS fallback link has an invalid (non http/https) URI scheme.
 *
 *  Value: "BAD_URI_SCHEME_IOS_FALLBACK_LINK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeIosFallbackLink;
/**
 *  iPad fallback link has an invalid (non http/https) URI scheme.
 *
 *  Value: "BAD_URI_SCHEME_IPAD_FALLBACK_LINK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeIpadFallbackLink;
/**
 *  Social meta tag image link has an invalid (non http/https) URI scheme.
 *
 *  Value: "BAD_URI_SCHEME_SOCIAL_IMAGE_LINK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeSocialImageLink;
/** Value: "BAD_URI_SCHEME_SOCIAL_URL" */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeSocialUrl;
/**
 *  Unknown code.
 *
 *  Value: "CODE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_CodeUnspecified;
/**
 *  Indicates a certain param is deprecated.
 *
 *  Value: "DEPRECATED_PARAM"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_DeprecatedParam;
/**
 *  Dynamic Link URL length is too long.
 *
 *  Value: "LINK_LENGTH_TOO_LONG"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_LinkLengthTooLong;
/**
 *  Dynamic Link URL contains fragments.
 *
 *  Value: "LINK_WITH_FRAGMENTS"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_LinkWithFragments;
/**
 *  The Android package does not match any in developer's DevConsole project.
 *
 *  Value: "NOT_IN_PROJECT_ANDROID_PACKAGE_NAME"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotInProjectAndroidPackageName;
/**
 *  The iOS bundle ID does not match any in developer's DevConsole project.
 *
 *  Value: "NOT_IN_PROJECT_IOS_BUNDLE_ID"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotInProjectIosBundleId;
/**
 *  The iPad bundle ID does not match any in developer's DevConsole project.
 *
 *  Value: "NOT_IN_PROJECT_IPAD_BUNDLE_ID"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotInProjectIpadBundleId;
/**
 *  The Android minimum version code has to be a valid integer.
 *
 *  Value: "NOT_INTEGER_ANDROID_PACKAGE_MIN_VERSION"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotIntegerAndroidPackageMinVersion;
/**
 *  The iOS bundle ID does not match with the given iOS store ID.
 *
 *  Value: "NOT_MATCHING_IOS_BUNDLE_ID_AND_STORE_ID"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotMatchingIosBundleIdAndStoreId;
/**
 *  iOS app store ID format is incorrect, e.g. not numeric.
 *
 *  Value: "NOT_NUMERIC_IOS_APP_STORE_ID"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotNumericIosAppStoreId;
/**
 *  Android fallback link is not a valid URI.
 *
 *  Value: "NOT_URI_ANDROID_FALLBACK_LINK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriAndroidFallbackLink;
/**
 *  Android link is not a valid URI.
 *
 *  Value: "NOT_URI_ANDROID_LINK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriAndroidLink;
/**
 *  iOS fallback link is not a valid URI.
 *
 *  Value: "NOT_URI_IOS_FALLBACK_LINK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriIosFallbackLink;
/**
 *  iPad fallback link is not a valid URI.
 *
 *  Value: "NOT_URI_IPAD_FALLBACK_LINK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriIpadFallbackLink;
/**
 *  Social meta tag image link is not a valid URI.
 *
 *  Value: "NOT_URI_SOCIAL_IMAGE_LINK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriSocialImageLink;
/** Value: "NOT_URI_SOCIAL_URL" */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriSocialUrl;
/**
 *  Indicates certain paramater is too long.
 *
 *  Value: "TOO_LONG_PARAM"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_TooLongParam;
/**
 *  Android link param is not needed, e.g. when param 'al' and 'link' have
 *  the same value..
 *
 *  Value: "UNNECESSARY_ANDROID_LINK"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryAndroidLink;
/**
 *  Android package min version param is not needed, e.g. when
 *  'apn' is missing.
 *
 *  Value: "UNNECESSARY_ANDROID_PACKAGE_MIN_VERSION"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryAndroidPackageMinVersion;
/**
 *  iOS app store ID is not needed.
 *
 *  Value: "UNNECESSARY_IOS_APP_STORE_ID"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryIosAppStoreId;
/**
 *  iOS URL scheme is not needed, e.g. when 'ibi' are 'ipbi' are all missing.
 *
 *  Value: "UNNECESSARY_IOS_URL_SCHEME"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryIosUrlScheme;
/**
 *  Indicates certain paramater is not recognized.
 *
 *  Value: "UNRECOGNIZED_PARAM"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnrecognizedParam;

// ----------------------------------------------------------------------------
// GTLRFirebaseDynamicLinks_Suffix.option

/**
 *  The suffix option is not specified, performs as NOT_GUESSABLE .
 *
 *  Value: "OPTION_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_Suffix_Option_OptionUnspecified;
/**
 *  Short Dynamic Link suffix is a base62 [0-9A-Za-z] string starting with a
 *  length of 4 chars. the length will increase when all the space is
 *  occupied.
 *
 *  Value: "SHORT"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_Suffix_Option_Short;
/**
 *  Short Dynamic Link suffix is a base62 [0-9A-Za-z] encoded string of
 *  a random generated 96 bit random number, which has a length of 17 chars.
 *  For example, "nlAR8U4SlKRZw1cb2".
 *  It prevents other people from guessing and crawling short Dynamic Links
 *  that contain personal identifiable information.
 *
 *  Value: "UNGUESSABLE"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseDynamicLinks_Suffix_Option_Unguessable;

/**
 *  Tracking parameters supported by Dynamic Link.
 */
@interface GTLRFirebaseDynamicLinks_AnalyticsInfo : GTLRObject

/** Google Play Campaign Measurements. */
@property(nonatomic, strong, nullable) GTLRFirebaseDynamicLinks_GooglePlayAnalytics *googlePlayAnalytics;

/** iTunes Connect App Analytics. */
@property(nonatomic, strong, nullable) GTLRFirebaseDynamicLinks_ITunesConnectAnalytics *itunesConnectAnalytics;

@end


/**
 *  Android related attributes to the Dynamic Link.
 */
@interface GTLRFirebaseDynamicLinks_AndroidInfo : GTLRObject

/** Link to open on Android if the app is not installed. */
@property(nonatomic, copy, nullable) NSString *androidFallbackLink;

/** If specified, this overrides the ‘link’ parameter on Android. */
@property(nonatomic, copy, nullable) NSString *androidLink;

/**
 *  Minimum version code for the Android app. If the installed app’s version
 *  code is lower, then the user is taken to the Play Store.
 */
@property(nonatomic, copy, nullable) NSString *androidMinPackageVersionCode;

/** Android package name of the app. */
@property(nonatomic, copy, nullable) NSString *androidPackageName;

@end


/**
 *  Request to create a short Dynamic Link.
 */
@interface GTLRFirebaseDynamicLinks_CreateShortDynamicLinkRequest : GTLRObject

/**
 *  Information about the Dynamic Link to be shortened.
 *  [Learn
 *  more](https://firebase.google.com/docs/dynamic-links/android#create-a-dynamic-link-programmatically).
 */
@property(nonatomic, strong, nullable) GTLRFirebaseDynamicLinks_DynamicLinkInfo *dynamicLinkInfo;

/**
 *  Full long Dynamic Link URL with desired query parameters specified.
 *  For example,
 *  "https://sample.app.goo.gl/?link=http://www.google.com&apn=com.sample",
 *  [Learn
 *  more](https://firebase.google.com/docs/dynamic-links/android#create-a-dynamic-link-programmatically).
 */
@property(nonatomic, copy, nullable) NSString *longDynamicLink;

/** Short Dynamic Link suffix. Optional. */
@property(nonatomic, strong, nullable) GTLRFirebaseDynamicLinks_Suffix *suffix;

@end


/**
 *  Response to create a short Dynamic Link.
 */
@interface GTLRFirebaseDynamicLinks_CreateShortDynamicLinkResponse : GTLRObject

/** Preivew link to show the link flow chart. */
@property(nonatomic, copy, nullable) NSString *previewLink;

/** Short Dynamic Link value. e.g. https://abcd.app.goo.gl/wxyz */
@property(nonatomic, copy, nullable) NSString *shortLink;

/** Information about potential warnings on link creation. */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseDynamicLinks_DynamicLinkWarning *> *warning;

@end


/**
 *  Dynamic Link event stat.
 */
@interface GTLRFirebaseDynamicLinks_DynamicLinkEventStat : GTLRObject

/**
 *  The number of times this event occurred.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

/**
 *  Link event.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_AppFirstOpen
 *        Indicates that the app is opened for the first time after an install
 *        triggered by FDLs (Value: "APP_FIRST_OPEN")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_AppInstall
 *        Indicates that an FDL triggers an app install from Play store,
 *        currently
 *        it's impossible to get stats from App store. (Value: "APP_INSTALL")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_AppReOpen
 *        Indicates that the app is opened via an FDL for non-first time.
 *        (Value: "APP_RE_OPEN")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_Click
 *        Indicates that an FDL is clicked by users. (Value: "CLICK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_DynamicLinkEventUnspecified
 *        Unspecified type. (Value: "DYNAMIC_LINK_EVENT_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Event_Redirect
 *        Indicates that an FDL redirects users to fallback link. (Value:
 *        "REDIRECT")
 */
@property(nonatomic, copy, nullable) NSString *event;

/**
 *  Requested platform.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Platform_Android
 *        Represents Android platform.
 *        All apps and browsers on Android are classfied in this category.
 *        (Value: "ANDROID")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Platform_Desktop
 *        Represents desktop.
 *        Note: other platforms like Windows, Blackberry, Amazon fall into this
 *        category. (Value: "DESKTOP")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Platform_DynamicLinkPlatformUnspecified
 *        Unspecified platform. (Value: "DYNAMIC_LINK_PLATFORM_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkEventStat_Platform_Ios
 *        Represents iOS platform.
 *        All apps and browsers on iOS are classfied in this category. (Value:
 *        "IOS")
 */
@property(nonatomic, copy, nullable) NSString *platform;

@end


/**
 *  Information about a Dynamic Link.
 */
@interface GTLRFirebaseDynamicLinks_DynamicLinkInfo : GTLRObject

/**
 *  Parameters used for tracking. See all tracking parameters in the
 *  [documentation](https://firebase.google.com/docs/dynamic-links/create-manually).
 */
@property(nonatomic, strong, nullable) GTLRFirebaseDynamicLinks_AnalyticsInfo *analyticsInfo;

/**
 *  Android related information. See Android related parameters in the
 *  [documentation](https://firebase.google.com/docs/dynamic-links/create-manually).
 */
@property(nonatomic, strong, nullable) GTLRFirebaseDynamicLinks_AndroidInfo *androidInfo;

/**
 *  Dynamic Links domain that the project owns, e.g. abcd.app.goo.gl
 *  [Learn more](https://firebase.google.com/docs/dynamic-links/android/receive)
 *  on how to set up Dynamic Link domain associated with your Firebase project.
 *  Required.
 */
@property(nonatomic, copy, nullable) NSString *dynamicLinkDomain;

/**
 *  iOS related information. See iOS related parameters in the
 *  [documentation](https://firebase.google.com/docs/dynamic-links/create-manually).
 */
@property(nonatomic, strong, nullable) GTLRFirebaseDynamicLinks_IosInfo *iosInfo;

/**
 *  The link your app will open, You can specify any URL your app can handle.
 *  This link must be a well-formatted URL, be properly URL-encoded, and use
 *  the HTTP or HTTPS scheme. See 'link' parameters in the
 *  [documentation](https://firebase.google.com/docs/dynamic-links/create-manually).
 *  Required.
 */
@property(nonatomic, copy, nullable) NSString *link;

/** Information of navigation behavior of a Firebase Dynamic Links. */
@property(nonatomic, strong, nullable) GTLRFirebaseDynamicLinks_NavigationInfo *navigationInfo;

/**
 *  Parameters for social meta tag params.
 *  Used to set meta tag data for link previews on social sites.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseDynamicLinks_SocialMetaTagInfo *socialMetaTagInfo;

@end


/**
 *  Analytics stats of a Dynamic Link for a given timeframe.
 */
@interface GTLRFirebaseDynamicLinks_DynamicLinkStats : GTLRObject

/** Dynamic Link event stats. */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseDynamicLinks_DynamicLinkEventStat *> *linkEventStats;

@end


/**
 *  Dynamic Links warning messages.
 */
@interface GTLRFirebaseDynamicLinks_DynamicLinkWarning : GTLRObject

/**
 *  The warning code.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadAdParam
 *        isAd param format is incorrect. (Value: "BAD_AD_PARAM")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadDebugParam
 *        Debug param format is incorrect. (Value: "BAD_DEBUG_PARAM")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeAndroidFallbackLink
 *        Android fallback link has an invalid (non http/https) URI scheme.
 *        (Value: "BAD_URI_SCHEME_ANDROID_FALLBACK_LINK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeIosFallbackLink
 *        iOS fallback link has an invalid (non http/https) URI scheme. (Value:
 *        "BAD_URI_SCHEME_IOS_FALLBACK_LINK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeIpadFallbackLink
 *        iPad fallback link has an invalid (non http/https) URI scheme. (Value:
 *        "BAD_URI_SCHEME_IPAD_FALLBACK_LINK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeSocialImageLink
 *        Social meta tag image link has an invalid (non http/https) URI scheme.
 *        (Value: "BAD_URI_SCHEME_SOCIAL_IMAGE_LINK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_BadUriSchemeSocialUrl
 *        Value "BAD_URI_SCHEME_SOCIAL_URL"
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_CodeUnspecified
 *        Unknown code. (Value: "CODE_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_DeprecatedParam
 *        Indicates a certain param is deprecated. (Value: "DEPRECATED_PARAM")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_LinkLengthTooLong
 *        Dynamic Link URL length is too long. (Value: "LINK_LENGTH_TOO_LONG")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_LinkWithFragments
 *        Dynamic Link URL contains fragments. (Value: "LINK_WITH_FRAGMENTS")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotInProjectAndroidPackageName
 *        The Android package does not match any in developer's DevConsole
 *        project. (Value: "NOT_IN_PROJECT_ANDROID_PACKAGE_NAME")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotInProjectIosBundleId
 *        The iOS bundle ID does not match any in developer's DevConsole
 *        project. (Value: "NOT_IN_PROJECT_IOS_BUNDLE_ID")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotInProjectIpadBundleId
 *        The iPad bundle ID does not match any in developer's DevConsole
 *        project. (Value: "NOT_IN_PROJECT_IPAD_BUNDLE_ID")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotIntegerAndroidPackageMinVersion
 *        The Android minimum version code has to be a valid integer. (Value:
 *        "NOT_INTEGER_ANDROID_PACKAGE_MIN_VERSION")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotMatchingIosBundleIdAndStoreId
 *        The iOS bundle ID does not match with the given iOS store ID. (Value:
 *        "NOT_MATCHING_IOS_BUNDLE_ID_AND_STORE_ID")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotNumericIosAppStoreId
 *        iOS app store ID format is incorrect, e.g. not numeric. (Value:
 *        "NOT_NUMERIC_IOS_APP_STORE_ID")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriAndroidFallbackLink
 *        Android fallback link is not a valid URI. (Value:
 *        "NOT_URI_ANDROID_FALLBACK_LINK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriAndroidLink
 *        Android link is not a valid URI. (Value: "NOT_URI_ANDROID_LINK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriIosFallbackLink
 *        iOS fallback link is not a valid URI. (Value:
 *        "NOT_URI_IOS_FALLBACK_LINK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriIpadFallbackLink
 *        iPad fallback link is not a valid URI. (Value:
 *        "NOT_URI_IPAD_FALLBACK_LINK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriSocialImageLink
 *        Social meta tag image link is not a valid URI. (Value:
 *        "NOT_URI_SOCIAL_IMAGE_LINK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_NotUriSocialUrl
 *        Value "NOT_URI_SOCIAL_URL"
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_TooLongParam
 *        Indicates certain paramater is too long. (Value: "TOO_LONG_PARAM")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryAndroidLink
 *        Android link param is not needed, e.g. when param 'al' and 'link' have
 *        the same value.. (Value: "UNNECESSARY_ANDROID_LINK")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryAndroidPackageMinVersion
 *        Android package min version param is not needed, e.g. when
 *        'apn' is missing. (Value: "UNNECESSARY_ANDROID_PACKAGE_MIN_VERSION")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryIosAppStoreId
 *        iOS app store ID is not needed. (Value:
 *        "UNNECESSARY_IOS_APP_STORE_ID")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnnecessaryIosUrlScheme
 *        iOS URL scheme is not needed, e.g. when 'ibi' are 'ipbi' are all
 *        missing. (Value: "UNNECESSARY_IOS_URL_SCHEME")
 *    @arg @c kGTLRFirebaseDynamicLinks_DynamicLinkWarning_WarningCode_UnrecognizedParam
 *        Indicates certain paramater is not recognized. (Value:
 *        "UNRECOGNIZED_PARAM")
 */
@property(nonatomic, copy, nullable) NSString *warningCode;

/** The document describing the warning, and helps resolve. */
@property(nonatomic, copy, nullable) NSString *warningDocumentLink;

/** The warning message to help developers improve their requests. */
@property(nonatomic, copy, nullable) NSString *warningMessage;

@end


/**
 *  Parameters for Google Play Campaign Measurements.
 *  [Learn
 *  more](https://developers.google.com/analytics/devguides/collection/android/v4/campaigns#campaign-params)
 */
@interface GTLRFirebaseDynamicLinks_GooglePlayAnalytics : GTLRObject

/**
 *  [AdWords autotagging
 *  parameter](https://support.google.com/analytics/answer/1033981?hl=en);
 *  used to measure Google AdWords ads. This value is generated dynamically
 *  and should never be modified.
 */
@property(nonatomic, copy, nullable) NSString *gclid;

/**
 *  Campaign name; used for keyword analysis to identify a specific product
 *  promotion or strategic campaign.
 */
@property(nonatomic, copy, nullable) NSString *utmCampaign;

/**
 *  Campaign content; used for A/B testing and content-targeted ads to
 *  differentiate ads or links that point to the same URL.
 */
@property(nonatomic, copy, nullable) NSString *utmContent;

/**
 *  Campaign medium; used to identify a medium such as email or cost-per-click.
 */
@property(nonatomic, copy, nullable) NSString *utmMedium;

/**
 *  Campaign source; used to identify a search engine, newsletter, or other
 *  source.
 */
@property(nonatomic, copy, nullable) NSString *utmSource;

/** Campaign term; used with paid search to supply the keywords for ads. */
@property(nonatomic, copy, nullable) NSString *utmTerm;

@end


/**
 *  iOS related attributes to the Dynamic Link..
 */
@interface GTLRFirebaseDynamicLinks_IosInfo : GTLRObject

/** iOS App Store ID. */
@property(nonatomic, copy, nullable) NSString *iosAppStoreId;

/** iOS bundle ID of the app. */
@property(nonatomic, copy, nullable) NSString *iosBundleId;

/**
 *  Custom (destination) scheme to use for iOS. By default, we’ll use the
 *  bundle ID as the custom scheme. Developer can override this behavior using
 *  this param.
 */
@property(nonatomic, copy, nullable) NSString *iosCustomScheme;

/** Link to open on iOS if the app is not installed. */
@property(nonatomic, copy, nullable) NSString *iosFallbackLink;

/** iPad bundle ID of the app. */
@property(nonatomic, copy, nullable) NSString *iosIpadBundleId;

/** If specified, this overrides the ios_fallback_link value on iPads. */
@property(nonatomic, copy, nullable) NSString *iosIpadFallbackLink;

@end


/**
 *  Parameters for iTunes Connect App Analytics.
 */
@interface GTLRFirebaseDynamicLinks_ITunesConnectAnalytics : GTLRObject

/** Affiliate token used to create affiliate-coded links. */
@property(nonatomic, copy, nullable) NSString *at;

/**
 *  Campaign text that developers can optionally add to any link in order to
 *  track sales from a specific marketing campaign.
 */
@property(nonatomic, copy, nullable) NSString *ct;

/** iTune media types, including music, podcasts, audiobooks and so on. */
@property(nonatomic, copy, nullable) NSString *mt;

/**
 *  Provider token that enables analytics for Dynamic Links from within iTunes
 *  Connect.
 */
@property(nonatomic, copy, nullable) NSString *pt;

@end


/**
 *  Information of navigation behavior.
 */
@interface GTLRFirebaseDynamicLinks_NavigationInfo : GTLRObject

/**
 *  If this option is on, FDL click will be forced to redirect rather than
 *  show an interstitial page.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *enableForcedRedirect;

@end


/**
 *  Parameters for social meta tag params.
 *  Used to set meta tag data for link previews on social sites.
 */
@interface GTLRFirebaseDynamicLinks_SocialMetaTagInfo : GTLRObject

/** A short description of the link. Optional. */
@property(nonatomic, copy, nullable) NSString *socialDescription;

/** An image url string. Optional. */
@property(nonatomic, copy, nullable) NSString *socialImageLink;

/** Title to be displayed. Optional. */
@property(nonatomic, copy, nullable) NSString *socialTitle;

@end


/**
 *  Short Dynamic Link suffix.
 */
@interface GTLRFirebaseDynamicLinks_Suffix : GTLRObject

/**
 *  Suffix option.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseDynamicLinks_Suffix_Option_OptionUnspecified The
 *        suffix option is not specified, performs as NOT_GUESSABLE . (Value:
 *        "OPTION_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseDynamicLinks_Suffix_Option_Short Short Dynamic Link
 *        suffix is a base62 [0-9A-Za-z] string starting with a
 *        length of 4 chars. the length will increase when all the space is
 *        occupied. (Value: "SHORT")
 *    @arg @c kGTLRFirebaseDynamicLinks_Suffix_Option_Unguessable Short Dynamic
 *        Link suffix is a base62 [0-9A-Za-z] encoded string of
 *        a random generated 96 bit random number, which has a length of 17
 *        chars.
 *        For example, "nlAR8U4SlKRZw1cb2".
 *        It prevents other people from guessing and crawling short Dynamic
 *        Links
 *        that contain personal identifiable information. (Value: "UNGUESSABLE")
 */
@property(nonatomic, copy, nullable) NSString *option;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
