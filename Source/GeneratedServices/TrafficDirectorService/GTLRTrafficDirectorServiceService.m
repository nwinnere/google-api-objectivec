// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Traffic Director API (trafficdirector/v2)
// Documentation:
//   https://www.envoyproxy.io/docs/envoy/latest/configuration/overview/v2_overview#management-server

#import "GTLRTrafficDirectorService.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeTrafficDirectorServiceCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRTrafficDirectorServiceService
//

@implementation GTLRTrafficDirectorServiceService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://trafficdirector.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
