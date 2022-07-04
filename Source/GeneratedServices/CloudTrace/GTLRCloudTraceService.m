// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Stackdriver Trace API (cloudtrace/v2)
// Description:
//   Sends application trace data to Stackdriver Trace for viewing. Trace data
//   is collected for all App Engine applications by default. Trace data from
//   other applications can be provided using this API. This library is used to
//   interact with the Trace API directly. If you are looking to instrument your
//   application for Stackdriver Trace, we recommend using OpenCensus.
// Documentation:
//   https://cloud.google.com/trace

#import "GTLRCloudTrace.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeCloudTraceCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLRAuthScopeCloudTraceTraceAppend   = @"https://www.googleapis.com/auth/trace.append";

// ----------------------------------------------------------------------------
//   GTLRCloudTraceService
//

@implementation GTLRCloudTraceService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://cloudtrace.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
