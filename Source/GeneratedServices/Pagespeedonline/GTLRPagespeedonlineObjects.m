// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   PageSpeed Insights API (pagespeedonline/v5)
// Description:
//   Analyzes the performance of a web page and provides tailored suggestions to
//   make that page faster.
// Documentation:
//   https://developers.google.com/speed/docs/insights/v5/get-started

#import "GTLRPagespeedonlineObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseAuditResultV5
//

@implementation GTLRPagespeedonline_LighthouseAuditResultV5
@dynamic descriptionProperty, details, displayValue, errorMessage, explanation,
         identifier, score, scoreDisplayMode, title, warnings;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseAuditResultV5_Details
//

@implementation GTLRPagespeedonline_LighthouseAuditResultV5_Details

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseCategoryV5
//

@implementation GTLRPagespeedonline_LighthouseCategoryV5
@dynamic auditRefs, descriptionProperty, identifier, manualDescription, score,
         title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditRefs" : [GTLRPagespeedonline_LighthouseCategoryV5_AuditRefs_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseCategoryV5_AuditRefs_Item
//

@implementation GTLRPagespeedonline_LighthouseCategoryV5_AuditRefs_Item
@dynamic group, identifier, weight;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5
//

@implementation GTLRPagespeedonline_LighthouseResultV5
@dynamic audits, categories, categoryGroups, configSettings, environment,
         fetchTime, finalUrl, i18n, lighthouseVersion, requestedUrl,
         runtimeError, runWarnings, timing, userAgent;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"runWarnings" : [NSObject class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5_Audits
//

@implementation GTLRPagespeedonline_LighthouseResultV5_Audits

+ (Class)classForAdditionalProperties {
  return [GTLRPagespeedonline_LighthouseAuditResultV5 class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5_Categories
//

@implementation GTLRPagespeedonline_LighthouseResultV5_Categories
@dynamic accessibility, bestPractices, performance, pwa, seo;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"bestPractices" : @"best-practices" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5_CategoryGroups
//

@implementation GTLRPagespeedonline_LighthouseResultV5_CategoryGroups

+ (Class)classForAdditionalProperties {
  return [GTLRPagespeedonline_LighthouseResultV5_CategoryGroups_CategoryGroup class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5_ConfigSettings
//

@implementation GTLRPagespeedonline_LighthouseResultV5_ConfigSettings
@dynamic emulatedFormFactor, locale, onlyCategories;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5_Environment
//

@implementation GTLRPagespeedonline_LighthouseResultV5_Environment
@dynamic benchmarkIndex, hostUserAgent, networkUserAgent;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5_I18n
//

@implementation GTLRPagespeedonline_LighthouseResultV5_I18n
@dynamic rendererFormattedStrings;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5_RuntimeError
//

@implementation GTLRPagespeedonline_LighthouseResultV5_RuntimeError
@dynamic code, message;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5_Timing
//

@implementation GTLRPagespeedonline_LighthouseResultV5_Timing
@dynamic total;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5_CategoryGroups_CategoryGroup
//

@implementation GTLRPagespeedonline_LighthouseResultV5_CategoryGroups_CategoryGroup
@dynamic descriptionProperty, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_LighthouseResultV5_I18n_RendererFormattedStrings
//

@implementation GTLRPagespeedonline_LighthouseResultV5_I18n_RendererFormattedStrings
@dynamic auditGroupExpandTooltip, crcInitialNavigation, crcLongestDurationLabel,
         errorLabel, errorMissingAuditInfo, labDataTitle,
         lsPerformanceCategoryDescription, manualAuditsGroupTitle,
         notApplicableAuditsGroupTitle, opportunityResourceColumnLabel,
         opportunitySavingsColumnLabel, passedAuditsGroupTitle, scorescaleLabel,
         toplevelWarningsMessage, varianceDisclaimer, warningHeader;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_PagespeedApiLoadingExperienceV5
//

@implementation GTLRPagespeedonline_PagespeedApiLoadingExperienceV5
@dynamic identifier, initialUrl, metrics, overallCategory;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"identifier" : @"id",
    @"initialUrl" : @"initial_url",
    @"overallCategory" : @"overall_category"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_PagespeedApiLoadingExperienceV5_Metrics
//

@implementation GTLRPagespeedonline_PagespeedApiLoadingExperienceV5_Metrics

+ (Class)classForAdditionalProperties {
  return [GTLRPagespeedonline_PagespeedApiLoadingExperienceV5_Metrics_Metric class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_PagespeedApiLoadingExperienceV5_Metrics_Metric
//

@implementation GTLRPagespeedonline_PagespeedApiLoadingExperienceV5_Metrics_Metric
@dynamic category, distributions, percentile;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"distributions" : [GTLRPagespeedonline_PagespeedApiLoadingExperienceV5_Metrics_Metric_Distributions_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_PagespeedApiLoadingExperienceV5_Metrics_Metric_Distributions_Item
//

@implementation GTLRPagespeedonline_PagespeedApiLoadingExperienceV5_Metrics_Metric_Distributions_Item
@dynamic max, min, proportion;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_PagespeedApiPagespeedResponseV5
//

@implementation GTLRPagespeedonline_PagespeedApiPagespeedResponseV5
@dynamic analysisUTCTimestamp, captchaResult, identifier, kind,
         lighthouseResult, loadingExperience, originLoadingExperience, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPagespeedonline_PagespeedApiPagespeedResponseV5_Version
//

@implementation GTLRPagespeedonline_PagespeedApiPagespeedResponseV5_Version
@dynamic major, minor;
@end
