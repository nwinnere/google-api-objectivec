// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Access Approval API (accessapproval/v1beta1)
// Description:
//   An API for controlling access to data by Google personnel.
// Documentation:
//   https://cloud.google.com/access-approval/docs

#import "GTLRAccessApprovalObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRAccessApproval_AccessReason.type
NSString * const kGTLRAccessApproval_AccessReason_Type_CustomerInitiatedSupport = @"CUSTOMER_INITIATED_SUPPORT";
NSString * const kGTLRAccessApproval_AccessReason_Type_GoogleInitiatedReview = @"GOOGLE_INITIATED_REVIEW";
NSString * const kGTLRAccessApproval_AccessReason_Type_GoogleInitiatedService = @"GOOGLE_INITIATED_SERVICE";
NSString * const kGTLRAccessApproval_AccessReason_Type_TypeUnspecified = @"TYPE_UNSPECIFIED";

// GTLRAccessApproval_EnrolledService.enrollmentLevel
NSString * const kGTLRAccessApproval_EnrolledService_EnrollmentLevel_BlockAll = @"BLOCK_ALL";
NSString * const kGTLRAccessApproval_EnrolledService_EnrollmentLevel_EnrollmentLevelUnspecified = @"ENROLLMENT_LEVEL_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_AccessLocations
//

@implementation GTLRAccessApproval_AccessLocations
@dynamic principalOfficeCountry, principalPhysicalLocationCountry;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_AccessReason
//

@implementation GTLRAccessApproval_AccessReason
@dynamic detail, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_ApprovalRequest
//

@implementation GTLRAccessApproval_ApprovalRequest
@dynamic approve, dismiss, name, requestedExpiration, requestedLocations,
         requestedReason, requestedResourceName, requestedResourceProperties,
         requestTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_ApproveApprovalRequestMessage
//

@implementation GTLRAccessApproval_ApproveApprovalRequestMessage
@dynamic expireTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_ApproveDecision
//

@implementation GTLRAccessApproval_ApproveDecision
@dynamic approveTime, expireTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_DismissApprovalRequestMessage
//

@implementation GTLRAccessApproval_DismissApprovalRequestMessage
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_DismissDecision
//

@implementation GTLRAccessApproval_DismissDecision
@dynamic dismissTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_Empty
//

@implementation GTLRAccessApproval_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_EnrolledService
//

@implementation GTLRAccessApproval_EnrolledService
@dynamic cloudProduct, enrollmentLevel;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_ListApprovalRequestsResponse
//

@implementation GTLRAccessApproval_ListApprovalRequestsResponse
@dynamic approvalRequests, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"approvalRequests" : [GTLRAccessApproval_ApprovalRequest class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"approvalRequests";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_ResourceProperties
//

@implementation GTLRAccessApproval_ResourceProperties
@dynamic excludesDescendants;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessApproval_Settings
//

@implementation GTLRAccessApproval_Settings
@dynamic enrolledAncestor, enrolledServices, name, notificationEmails;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"enrolledServices" : [GTLRAccessApproval_EnrolledService class],
    @"notificationEmails" : [NSString class]
  };
  return map;
}

@end
