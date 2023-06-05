// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   BigQuery Data Transfer API (bigquerydatatransfer/v1)
// Description:
//   Schedule queries or transfer external data from SaaS applications to Google
//   BigQuery on a regular basis.
// Documentation:
//   https://cloud.google.com/bigquery-transfer/

#import "GTLRBigQueryDataTransfer.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeBigQueryDataTransferBigquery    = @"https://www.googleapis.com/auth/bigquery";
NSString * const kGTLRAuthScopeBigQueryDataTransferBigqueryReadonly = @"https://www.googleapis.com/auth/bigquery.readonly";
NSString * const kGTLRAuthScopeBigQueryDataTransferCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLRAuthScopeBigQueryDataTransferCloudPlatformReadOnly = @"https://www.googleapis.com/auth/cloud-platform.read-only";

// ----------------------------------------------------------------------------
//   GTLRBigQueryDataTransferService
//

@implementation GTLRBigQueryDataTransferService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://bigquerydatatransfer.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
