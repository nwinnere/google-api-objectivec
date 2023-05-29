// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Recommendations AI (Beta) (recommendationengine/v1beta1)
// Description:
//   Note that we now highly recommend new customers to use Retail API that
//   incorporates the GA version of the Recommendations AI funtionalities. To
//   enable Retail API, please visit
//   https://console.cloud.google.com/apis/library/retail.googleapis.com. This
//   is Recommendations AI service enables customers to build end-to-end
//   personalized recommendation systems without requiring a high level of
//   expertise in machine learning, recommendation system, or Google Cloud.
// Documentation:
//   https://cloud.google.com/recommendations-ai/docs

#import "GTLRRecommendationsAI.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeRecommendationsAICloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRRecommendationsAIService
//

@implementation GTLRRecommendationsAIService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://recommendationengine.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
