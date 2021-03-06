// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Organization Policy API (orgpolicy/v2)
// Description:
//   The Org Policy API allows users to configure governance ruleson their GCP
//   resources across the Cloud Resource Hierarchy.
// Documentation:
//   https://cloud.google.com/resource-manager/docs/organization-policy/understanding-constraints

#import "GTLROrgPolicyAPI.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeOrgPolicyAPICloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLROrgPolicyAPIService
//

@implementation GTLROrgPolicyAPIService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://orgpolicy.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
