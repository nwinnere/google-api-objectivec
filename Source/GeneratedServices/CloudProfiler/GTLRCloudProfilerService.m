// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Stackdriver Profiler API (cloudprofiler/v2)
// Description:
//   Allows Google services manage the continuous profiling information.
// Documentation:
//   https://cloud.google.com/

#import "GTLRCloudProfiler.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeCloudProfilerCloudPlatform   = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLRAuthScopeCloudProfilerMonitoring      = @"https://www.googleapis.com/auth/monitoring";
NSString * const kGTLRAuthScopeCloudProfilerMonitoringWrite = @"https://www.googleapis.com/auth/monitoring.write";

// ----------------------------------------------------------------------------
//   GTLRCloudProfilerService
//

@implementation GTLRCloudProfilerService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://cloudprofiler.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
