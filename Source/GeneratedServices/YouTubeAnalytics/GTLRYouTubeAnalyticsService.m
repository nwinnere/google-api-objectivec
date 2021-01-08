// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   YouTube Analytics API (youtubeAnalytics/v1)
// Description:
//   Retrieves your YouTube Analytics data.
// Documentation:
//   http://developers.google.com/youtube/analytics/

#import "GTLRYouTubeAnalytics.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeYouTubeAnalyticsYoutube         = @"https://www.googleapis.com/auth/youtube";
NSString * const kGTLRAuthScopeYouTubeAnalyticsYoutubepartner  = @"https://www.googleapis.com/auth/youtubepartner";
NSString * const kGTLRAuthScopeYouTubeAnalyticsYoutubeReadonly = @"https://www.googleapis.com/auth/youtube.readonly";
NSString * const kGTLRAuthScopeYouTubeAnalyticsYtAnalyticsMonetaryReadonly = @"https://www.googleapis.com/auth/yt-analytics-monetary.readonly";
NSString * const kGTLRAuthScopeYouTubeAnalyticsYtAnalyticsReadonly = @"https://www.googleapis.com/auth/yt-analytics.readonly";

// ----------------------------------------------------------------------------
//   GTLRYouTubeAnalyticsService
//

@implementation GTLRYouTubeAnalyticsService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://www.googleapis.com/";
    self.servicePath = @"youtube/analytics/v1/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

+ (NSDictionary<NSString *, Class> *)kindStringToClassMap {
  return @{
    @"youtube#group" : [GTLRYouTubeAnalytics_Group class],
    @"youtube#groupItem" : [GTLRYouTubeAnalytics_GroupItem class],
    @"youtube#groupItemListResponse" : [GTLRYouTubeAnalytics_GroupItemListResponse class],
    @"youtube#groupListResponse" : [GTLRYouTubeAnalytics_GroupListResponse class],
    @"youtubeAnalytics#batchReport" : [GTLRYouTubeAnalytics_BatchReport class],
    @"youtubeAnalytics#batchReportDefinition" : [GTLRYouTubeAnalytics_BatchReportDefinition class],
    @"youtubeAnalytics#batchReportDefinitionList" : [GTLRYouTubeAnalytics_BatchReportDefinitionList class],
    @"youtubeAnalytics#batchReportList" : [GTLRYouTubeAnalytics_BatchReportList class],
    @"youtubeAnalytics#resultTable" : [GTLRYouTubeAnalytics_ResultTable class],
  };
}

@end
