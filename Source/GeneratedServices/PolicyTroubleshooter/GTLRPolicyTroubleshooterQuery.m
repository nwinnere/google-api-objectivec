// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Policy Troubleshooter API (policytroubleshooter/v1)
// Documentation:
//   https://cloud.google.com/iam/

#import "GTLRPolicyTroubleshooterQuery.h"

#import "GTLRPolicyTroubleshooterObjects.h"

@implementation GTLRPolicyTroubleshooterQuery

@dynamic fields;

@end

@implementation GTLRPolicyTroubleshooterQuery_IamTroubleshoot

+ (instancetype)queryWithObject:(GTLRPolicyTroubleshooter_GoogleCloudPolicytroubleshooterV1TroubleshootIamPolicyRequest *)object {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSString *pathURITemplate = @"v1/iam:troubleshoot";
  GTLRPolicyTroubleshooterQuery_IamTroubleshoot *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRPolicyTroubleshooter_GoogleCloudPolicytroubleshooterV1TroubleshootIamPolicyResponse class];
  query.loggingName = @"policytroubleshooter.iam.troubleshoot";
  return query;
}

@end
