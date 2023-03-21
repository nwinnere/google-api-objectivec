// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   DoubleClick Bid Manager API (doubleclickbidmanager/v1.1)
// Description:
//   DoubleClick Bid Manager API allows users to manage and create campaigns and
//   reports.
// Documentation:
//   https://developers.google.com/bid-manager/

#import "GTLRDoubleClickBidManager.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeDoubleClickBidManager = @"https://www.googleapis.com/auth/doubleclickbidmanager";

// ----------------------------------------------------------------------------
//   GTLRDoubleClickBidManagerService
//

@implementation GTLRDoubleClickBidManagerService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://doubleclickbidmanager.googleapis.com/";
    self.servicePath = @"doubleclickbidmanager/v1.1/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
