// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Enterprise License Manager API (licensing/v1)
// Description:
//   The Google Enterprise License Manager API's allows you to license apps for
//   all the users of a domain managed by you.
// Documentation:
//   https://developers.google.com/admin-sdk/licensing/

#import "GTLRLicensing.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeLicensingAppsLicensing = @"https://www.googleapis.com/auth/apps.licensing";

// ----------------------------------------------------------------------------
//   GTLRLicensingService
//

@implementation GTLRLicensingService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://www.googleapis.com/";
    self.batchPath = @"batch/licensing/v1";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

+ (NSDictionary<NSString *, Class> *)kindStringToClassMap {
  return @{
    @"licensing#licenseAssignment" : [GTLRLicensing_LicenseAssignment class],
    @"licensing#licenseAssignmentList" : [GTLRLicensing_LicenseAssignmentList class],
  };
}

@end
