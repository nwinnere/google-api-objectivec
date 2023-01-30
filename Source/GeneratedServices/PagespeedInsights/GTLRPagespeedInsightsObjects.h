// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   PageSpeed Insights API (pagespeedonline/v5)
// Description:
//   The PageSpeed Insights API lets you analyze the performance of your website
//   with a simple API. It offers tailored suggestions for how you can optimize
//   your site, and lets you easily integrate PageSpeed Insights analysis into
//   your development tools and workflow.
// Documentation:
//   https://developers.google.com/speed/docs/insights/v5/about

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

@class GTLRPagespeedInsights_AuditRefs;
@class GTLRPagespeedInsights_Bucket;
@class GTLRPagespeedInsights_Categories;
@class GTLRPagespeedInsights_CategoryGroupV5;
@class GTLRPagespeedInsights_ConfigSettings;
@class GTLRPagespeedInsights_Environment;
@class GTLRPagespeedInsights_I18n;
@class GTLRPagespeedInsights_LighthouseAuditResultV5;
@class GTLRPagespeedInsights_LighthouseAuditResultV5_Details;
@class GTLRPagespeedInsights_LighthouseCategoryV5;
@class GTLRPagespeedInsights_LighthouseResultV5;
@class GTLRPagespeedInsights_LighthouseResultV5_Audits;
@class GTLRPagespeedInsights_LighthouseResultV5_CategoryGroups;
@class GTLRPagespeedInsights_PagespeedApiLoadingExperienceV5;
@class GTLRPagespeedInsights_PagespeedApiLoadingExperienceV5_Metrics;
@class GTLRPagespeedInsights_PagespeedVersion;
@class GTLRPagespeedInsights_RendererFormattedStrings;
@class GTLRPagespeedInsights_RuntimeError;
@class GTLRPagespeedInsights_StackPack;
@class GTLRPagespeedInsights_StackPack_Descriptions;
@class GTLRPagespeedInsights_Timing;
@class GTLRPagespeedInsights_UserPageLoadMetricV5;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  A light reference to an audit by id, used to group and weight audits in a
 *  given category.
 */
@interface GTLRPagespeedInsights_AuditRefs : GTLRObject

/** The category group that the audit belongs to (optional). */
@property(nonatomic, copy, nullable) NSString *group;

/**
 *  The audit ref id.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The weight this audit's score has on the overall category score.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *weight;

@end


/**
 *  A proportion of data in the total distribution, bucketed by a min/max
 *  percentage. Each bucket's range is bounded by min <= x < max, In
 *  millisecond.
 */
@interface GTLRPagespeedInsights_Bucket : GTLRObject

/**
 *  Upper bound for a bucket's range.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *max;

/**
 *  Lower bound for a bucket's range.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *min;

/**
 *  The proportion of data in this bucket.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *proportion;

@end


/**
 *  The categories in a Lighthouse run.
 */
@interface GTLRPagespeedInsights_Categories : GTLRObject

/**
 *  The accessibility category, containing all accessibility related audits.
 */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_LighthouseCategoryV5 *accessibility;

/**
 *  The best practices category, containing all best practices related
 *  audits.
 */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_LighthouseCategoryV5 *bestPractices;

/** The performance category, containing all performance related audits. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_LighthouseCategoryV5 *performance;

/**
 *  The Progressive-Web-App (PWA) category, containing all pwa related
 *  audits.
 */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_LighthouseCategoryV5 *pwa;

/**
 *  The Search-Engine-Optimization (SEO) category, containing all seo related
 *  audits.
 */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_LighthouseCategoryV5 *seo;

@end


/**
 *  Message containing a category
 */
@interface GTLRPagespeedInsights_CategoryGroupV5 : GTLRObject

/**
 *  The description of what the category is grouping
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** The human readable title of the group */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  Message containing the configuration settings for the Lighthouse run.
 */
@interface GTLRPagespeedInsights_ConfigSettings : GTLRObject

/**
 *  How Lighthouse was run, e.g. from the Chrome extension or from the npm
 *  module.
 */
@property(nonatomic, copy, nullable) NSString *channel;

/** The form factor the emulation should use. */
@property(nonatomic, copy, nullable) NSString *emulatedFormFactor;

/** The locale setting. */
@property(nonatomic, copy, nullable) NSString *locale;

/**
 *  List of categories of audits the run should conduct.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id onlyCategories;

@end


/**
 *  Message containing environment configuration for a Lighthouse run.
 */
@interface GTLRPagespeedInsights_Environment : GTLRObject

/**
 *  The benchmark index number that indicates rough device class.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *benchmarkIndex;

/** The user agent string of the version of Chrome used. */
@property(nonatomic, copy, nullable) NSString *hostUserAgent;

/** The user agent string that was sent over the network. */
@property(nonatomic, copy, nullable) NSString *networkUserAgent;

@end


/**
 *  Message containing the i18n data for the LHR - Version 1.
 */
@interface GTLRPagespeedInsights_I18n : GTLRObject

/**
 *  Internationalized strings that are formatted to the locale in
 *  configSettings.
 */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_RendererFormattedStrings *rendererFormattedStrings;

@end


/**
 *  An audit's result object in a Lighthouse result.
 */
@interface GTLRPagespeedInsights_LighthouseAuditResultV5 : GTLRObject

/**
 *  The description of the audit.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** Freeform details section of the audit. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_LighthouseAuditResultV5_Details *details;

/** The value that should be displayed on the UI for this audit. */
@property(nonatomic, copy, nullable) NSString *displayValue;

/** An error message from a thrown error inside the audit. */
@property(nonatomic, copy, nullable) NSString *errorMessage;

/** An explanation of the errors in the audit. */
@property(nonatomic, copy, nullable) NSString *explanation;

/**
 *  The audit's id.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  A numeric value that has a meaning specific to the audit, e.g. the number
 *  of nodes in the DOM or the timestamp of a specific load event. More
 *  information can be found in the audit details, if present.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numericValue;

/**
 *  The score of the audit, can be null.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id score;

/** The enumerated score display mode. */
@property(nonatomic, copy, nullable) NSString *scoreDisplayMode;

/** The human readable title. */
@property(nonatomic, copy, nullable) NSString *title;

/**
 *  Possible warnings that occurred in the audit, can be null.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id warnings;

@end


/**
 *  Freeform details section of the audit.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRPagespeedInsights_LighthouseAuditResultV5_Details : GTLRObject
@end


/**
 *  A Lighthouse category.
 */
@interface GTLRPagespeedInsights_LighthouseCategoryV5 : GTLRObject

/** An array of references to all the audit members of this category. */
@property(nonatomic, strong, nullable) NSArray<GTLRPagespeedInsights_AuditRefs *> *auditRefs;

/**
 *  A more detailed description of the category and its importance.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The string identifier of the category.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** A description for the manual audits in the category. */
@property(nonatomic, copy, nullable) NSString *manualDescription;

/**
 *  The overall score of the category, the weighted average of all its audits.
 *  (The category's score, can be null.)
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id score;

/** The human-friendly name of the category. */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  The Lighthouse result object.
 */
@interface GTLRPagespeedInsights_LighthouseResultV5 : GTLRObject

/** Map of audits in the LHR. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_LighthouseResultV5_Audits *audits;

/** Map of categories in the LHR. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_Categories *categories;

/** Map of category groups in the LHR. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_LighthouseResultV5_CategoryGroups *categoryGroups;

/** The configuration settings for this LHR. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_ConfigSettings *configSettings;

/** Environment settings that were used when making this LHR. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_Environment *environment;

/** The time that this run was fetched. */
@property(nonatomic, copy, nullable) NSString *fetchTime;

/** The final resolved url that was audited. */
@property(nonatomic, copy, nullable) NSString *finalUrl;

/** The internationalization strings that are required to render the LHR. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_I18n *i18n;

/** The lighthouse version that was used to generate this LHR. */
@property(nonatomic, copy, nullable) NSString *lighthouseVersion;

/** The original requested url. */
@property(nonatomic, copy, nullable) NSString *requestedUrl;

/**
 *  A top-level error message that, if present, indicates a serious enough
 *  problem that this Lighthouse result may need to be discarded.
 */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_RuntimeError *runtimeError;

/**
 *  List of all run warnings in the LHR. Will always output to at least `[]`.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) NSArray *runWarnings;

/** The Stack Pack advice strings. */
@property(nonatomic, strong, nullable) NSArray<GTLRPagespeedInsights_StackPack *> *stackPacks;

/** Timing information for this LHR. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_Timing *timing;

/** The user agent that was used to run this LHR. */
@property(nonatomic, copy, nullable) NSString *userAgent;

@end


/**
 *  Map of audits in the LHR.
 *
 *  @note This class is documented as having more properties of
 *        GTLRPagespeedInsights_LighthouseAuditResultV5. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRPagespeedInsights_LighthouseResultV5_Audits : GTLRObject
@end


/**
 *  Map of category groups in the LHR.
 *
 *  @note This class is documented as having more properties of
 *        GTLRPagespeedInsights_CategoryGroupV5. Use @c -additionalJSONKeys and
 *        @c -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRPagespeedInsights_LighthouseResultV5_CategoryGroups : GTLRObject
@end


/**
 *  The CrUX loading experience object that contains CrUX data breakdowns.
 */
@interface GTLRPagespeedInsights_PagespeedApiLoadingExperienceV5 : GTLRObject

/**
 *  The url, pattern or origin which the metrics are on.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The requested URL, which may differ from the resolved "id". */
@property(nonatomic, copy, nullable) NSString *initialUrl;

/** The map of <metrics, data>. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_PagespeedApiLoadingExperienceV5_Metrics *metrics;

/** The human readable speed "category" of the id. */
@property(nonatomic, copy, nullable) NSString *overallCategory;

@end


/**
 *  The map of <metrics, data>.
 *
 *  @note This class is documented as having more properties of
 *        GTLRPagespeedInsights_UserPageLoadMetricV5. Use @c -additionalJSONKeys
 *        and @c -additionalPropertyForName: to get the list of properties and
 *        then fetch them; or @c -additionalProperties to fetch them all at
 *        once.
 */
@interface GTLRPagespeedInsights_PagespeedApiLoadingExperienceV5_Metrics : GTLRObject
@end


/**
 *  The Pagespeed API response object.
 */
@interface GTLRPagespeedInsights_PagespeedApiPagespeedResponseV5 : GTLRObject

/** The UTC timestamp of this analysis. */
@property(nonatomic, copy, nullable) NSString *analysisUTCTimestamp;

/** The captcha verify result */
@property(nonatomic, copy, nullable) NSString *captchaResult;

/**
 *  Canonicalized and final URL for the document, after following page
 *  redirects (if any).
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Kind of result. */
@property(nonatomic, copy, nullable) NSString *kind;

/** Lighthouse response for the audit url as an object. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_LighthouseResultV5 *lighthouseResult;

/** Metrics of end users' page loading experience. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_PagespeedApiLoadingExperienceV5 *loadingExperience;

/** Metrics of the aggregated page loading experience of the origin */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_PagespeedApiLoadingExperienceV5 *originLoadingExperience;

/** The version of PageSpeed used to generate these results. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_PagespeedVersion *version;

@end


/**
 *  The Pagespeed Version object.
 */
@interface GTLRPagespeedInsights_PagespeedVersion : GTLRObject

/** The major version number of PageSpeed used to generate these results. */
@property(nonatomic, copy, nullable) NSString *major;

/** The minor version number of PageSpeed used to generate these results. */
@property(nonatomic, copy, nullable) NSString *minor;

@end


/**
 *  Message holding the formatted strings used in the renderer.
 */
@interface GTLRPagespeedInsights_RendererFormattedStrings : GTLRObject

/** The tooltip text on an expandable chevron icon. */
@property(nonatomic, copy, nullable) NSString *auditGroupExpandTooltip;

/** The label for the initial request in a critical request chain. */
@property(nonatomic, copy, nullable) NSString *crcInitialNavigation;

/** The label for values shown in the summary of critical request chains. */
@property(nonatomic, copy, nullable) NSString *crcLongestDurationLabel;

/** The label shown next to an audit or metric that has had an error. */
@property(nonatomic, copy, nullable) NSString *errorLabel;

/** The error string shown next to an erroring audit. */
@property(nonatomic, copy, nullable) NSString *errorMissingAuditInfo;

/** The title of the lab data performance category. */
@property(nonatomic, copy, nullable) NSString *labDataTitle;

/**
 *  The disclaimer shown under performance explaning that the network can
 *  vary.
 */
@property(nonatomic, copy, nullable) NSString *lsPerformanceCategoryDescription;

/**
 *  The heading shown above a list of audits that were not computerd in the
 *  run.
 */
@property(nonatomic, copy, nullable) NSString *manualAuditsGroupTitle;

/** The heading shown above a list of audits that do not apply to a page. */
@property(nonatomic, copy, nullable) NSString *notApplicableAuditsGroupTitle;

/**
 *  The heading for the estimated page load savings opportunity of an
 *  audit.
 */
@property(nonatomic, copy, nullable) NSString *opportunityResourceColumnLabel;

/** The heading for the estimated page load savings of opportunity audits. */
@property(nonatomic, copy, nullable) NSString *opportunitySavingsColumnLabel;

/** The heading that is shown above a list of audits that are passing. */
@property(nonatomic, copy, nullable) NSString *passedAuditsGroupTitle;

/** The label that explains the score gauges scale (0-49, 50-89, 90-100). */
@property(nonatomic, copy, nullable) NSString *scorescaleLabel;

/**
 *  The label shown preceding important warnings that may have invalidated
 *  an entire report.
 */
@property(nonatomic, copy, nullable) NSString *toplevelWarningsMessage;

/** The disclaimer shown below a performance metric value. */
@property(nonatomic, copy, nullable) NSString *varianceDisclaimer;

/** The label shown above a bulleted list of warnings. */
@property(nonatomic, copy, nullable) NSString *warningHeader;

@end


/**
 *  Message containing a runtime error config.
 */
@interface GTLRPagespeedInsights_RuntimeError : GTLRObject

/** The enumerated Lighthouse Error code. */
@property(nonatomic, copy, nullable) NSString *code;

/** A human readable message explaining the error code. */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  Message containing Stack Pack information.
 */
@interface GTLRPagespeedInsights_StackPack : GTLRObject

/** The stack pack advice strings. */
@property(nonatomic, strong, nullable) GTLRPagespeedInsights_StackPack_Descriptions *descriptions;

/** The stack pack icon data uri. */
@property(nonatomic, copy, nullable) NSString *iconDataURL;

/**
 *  The stack pack id.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The stack pack title. */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  The stack pack advice strings.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRPagespeedInsights_StackPack_Descriptions : GTLRObject
@end


/**
 *  Message containing the performance timing data for the Lighthouse run.
 */
@interface GTLRPagespeedInsights_Timing : GTLRObject

/**
 *  The total duration of Lighthouse's run.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *total;

@end


/**
 *  A CrUX metric object for a single metric and form factor.
 */
@interface GTLRPagespeedInsights_UserPageLoadMetricV5 : GTLRObject

/** The category of the specific time metric. */
@property(nonatomic, copy, nullable) NSString *category;

/** Metric distributions. Proportions should sum up to 1. */
@property(nonatomic, strong, nullable) NSArray<GTLRPagespeedInsights_Bucket *> *distributions;

/** Identifies the form factor of the metric being collected. */
@property(nonatomic, copy, nullable) NSString *formFactor;

/**
 *  The median number of the metric, in millisecond.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *median;

/** Identifies the type of the metric. */
@property(nonatomic, copy, nullable) NSString *metricId;

/**
 *  We use this field to store certain percentile value for this metric.
 *  For v4, this field contains pc50.
 *  For v5, this field contains pc90.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *percentile;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
