// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Real-time Bidding API (realtimebidding/v1)
// Description:
//   Allows external bidders to manage their RTB integration with Google. This
//   includes managing bidder endpoints, QPS quotas, configuring what ad
//   inventory to receive via pretargeting, submitting creatives for
//   verification, and accessing creative metadata such as approval status.
// Documentation:
//   https://developers.google.com/authorized-buyers/apis/realtimebidding/reference/rest/

#import "GTLRRealTimeBiddingQuery.h"

#import "GTLRRealTimeBiddingObjects.h"

// ----------------------------------------------------------------------------
// Constants

// view
NSString * const kGTLRRealTimeBiddingViewCreativeViewUnspecified = @"CREATIVE_VIEW_UNSPECIFIED";
NSString * const kGTLRRealTimeBiddingViewFull                  = @"FULL";
NSString * const kGTLRRealTimeBiddingViewServingDecisionOnly   = @"SERVING_DECISION_ONLY";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRRealTimeBiddingQuery

@dynamic fields;

@end

@implementation GTLRRealTimeBiddingQuery_BiddersCreativesList

@dynamic filter, pageSize, pageToken, parent, view;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/creatives";
  GTLRRealTimeBiddingQuery_BiddersCreativesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRRealTimeBidding_ListCreativesResponse class];
  query.loggingName = @"realtimebidding.bidders.creatives.list";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersCreativesWatch

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_WatchCreativesRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/creatives:watch";
  GTLRRealTimeBiddingQuery_BiddersCreativesWatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRRealTimeBidding_WatchCreativesResponse class];
  query.loggingName = @"realtimebidding.bidders.creatives.watch";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsActivate

@dynamic name;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_ActivatePretargetingConfigRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:activate";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsActivate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.activate";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsAddTargetedApps

@dynamic pretargetingConfig;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_AddTargetedAppsRequest *)object
             pretargetingConfig:(NSString *)pretargetingConfig {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"pretargetingConfig" ];
  NSString *pathURITemplate = @"v1/{+pretargetingConfig}:addTargetedApps";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsAddTargetedApps *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.pretargetingConfig = pretargetingConfig;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.addTargetedApps";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsAddTargetedPublishers

@dynamic pretargetingConfig;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_AddTargetedPublishersRequest *)object
             pretargetingConfig:(NSString *)pretargetingConfig {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"pretargetingConfig" ];
  NSString *pathURITemplate = @"v1/{+pretargetingConfig}:addTargetedPublishers";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsAddTargetedPublishers *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.pretargetingConfig = pretargetingConfig;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.addTargetedPublishers";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsAddTargetedSites

@dynamic pretargetingConfig;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_AddTargetedSitesRequest *)object
             pretargetingConfig:(NSString *)pretargetingConfig {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"pretargetingConfig" ];
  NSString *pathURITemplate = @"v1/{+pretargetingConfig}:addTargetedSites";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsAddTargetedSites *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.pretargetingConfig = pretargetingConfig;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.addTargetedSites";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_PretargetingConfig *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/pretargetingConfigs";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.create";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_Empty class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.delete";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.get";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/pretargetingConfigs";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRRealTimeBidding_ListPretargetingConfigsResponse class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.list";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_PretargetingConfig *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.patch";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsRemoveTargetedApps

@dynamic pretargetingConfig;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_RemoveTargetedAppsRequest *)object
             pretargetingConfig:(NSString *)pretargetingConfig {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"pretargetingConfig" ];
  NSString *pathURITemplate = @"v1/{+pretargetingConfig}:removeTargetedApps";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsRemoveTargetedApps *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.pretargetingConfig = pretargetingConfig;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.removeTargetedApps";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsRemoveTargetedPublishers

@dynamic pretargetingConfig;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_RemoveTargetedPublishersRequest *)object
             pretargetingConfig:(NSString *)pretargetingConfig {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"pretargetingConfig" ];
  NSString *pathURITemplate = @"v1/{+pretargetingConfig}:removeTargetedPublishers";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsRemoveTargetedPublishers *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.pretargetingConfig = pretargetingConfig;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.removeTargetedPublishers";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsRemoveTargetedSites

@dynamic pretargetingConfig;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_RemoveTargetedSitesRequest *)object
             pretargetingConfig:(NSString *)pretargetingConfig {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"pretargetingConfig" ];
  NSString *pathURITemplate = @"v1/{+pretargetingConfig}:removeTargetedSites";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsRemoveTargetedSites *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.pretargetingConfig = pretargetingConfig;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.removeTargetedSites";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsSuspend

@dynamic name;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_SuspendPretargetingConfigRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:suspend";
  GTLRRealTimeBiddingQuery_BiddersPretargetingConfigsSuspend *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_PretargetingConfig class];
  query.loggingName = @"realtimebidding.bidders.pretargetingConfigs.suspend";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersCreativesCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_Creative *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/creatives";
  GTLRRealTimeBiddingQuery_BuyersCreativesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRRealTimeBidding_Creative class];
  query.loggingName = @"realtimebidding.buyers.creatives.create";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersCreativesGet

@dynamic name, view;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRealTimeBiddingQuery_BuyersCreativesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_Creative class];
  query.loggingName = @"realtimebidding.buyers.creatives.get";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersCreativesList

@dynamic filter, pageSize, pageToken, parent, view;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/creatives";
  GTLRRealTimeBiddingQuery_BuyersCreativesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRRealTimeBidding_ListCreativesResponse class];
  query.loggingName = @"realtimebidding.buyers.creatives.list";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersCreativesPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_Creative *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRealTimeBiddingQuery_BuyersCreativesPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_Creative class];
  query.loggingName = @"realtimebidding.buyers.creatives.patch";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersGetRemarketingTag

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:getRemarketingTag";
  GTLRRealTimeBiddingQuery_BuyersGetRemarketingTag *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_GetRemarketingTagResponse class];
  query.loggingName = @"realtimebidding.buyers.getRemarketingTag";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersUserListsClose

@dynamic name;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_CloseUserListRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:close";
  GTLRRealTimeBiddingQuery_BuyersUserListsClose *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_UserList class];
  query.loggingName = @"realtimebidding.buyers.userLists.close";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersUserListsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_UserList *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/userLists";
  GTLRRealTimeBiddingQuery_BuyersUserListsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRRealTimeBidding_UserList class];
  query.loggingName = @"realtimebidding.buyers.userLists.create";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersUserListsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRealTimeBiddingQuery_BuyersUserListsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_UserList class];
  query.loggingName = @"realtimebidding.buyers.userLists.get";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersUserListsGetRemarketingTag

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:getRemarketingTag";
  GTLRRealTimeBiddingQuery_BuyersUserListsGetRemarketingTag *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_GetRemarketingTagResponse class];
  query.loggingName = @"realtimebidding.buyers.userLists.getRemarketingTag";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersUserListsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/userLists";
  GTLRRealTimeBiddingQuery_BuyersUserListsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRRealTimeBidding_ListUserListsResponse class];
  query.loggingName = @"realtimebidding.buyers.userLists.list";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersUserListsOpen

@dynamic name;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_OpenUserListRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:open";
  GTLRRealTimeBiddingQuery_BuyersUserListsOpen *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_UserList class];
  query.loggingName = @"realtimebidding.buyers.userLists.open";
  return query;
}

@end

@implementation GTLRRealTimeBiddingQuery_BuyersUserListsUpdate

@dynamic name;

+ (instancetype)queryWithObject:(GTLRRealTimeBidding_UserList *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRRealTimeBiddingQuery_BuyersUserListsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRRealTimeBidding_UserList class];
  query.loggingName = @"realtimebidding.buyers.userLists.update";
  return query;
}

@end
