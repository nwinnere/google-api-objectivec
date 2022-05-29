// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   G Suite Vault API (vault/v1)
// Description:
//   Archiving and eDiscovery for G Suite.
// Documentation:
//   https://developers.google.com/vault

#import "GTLRVaultQuery.h"

#import "GTLRVaultObjects.h"

// ----------------------------------------------------------------------------
// Constants

// state
NSString * const kGTLRVaultStateClosed           = @"CLOSED";
NSString * const kGTLRVaultStateDeleted          = @"DELETED";
NSString * const kGTLRVaultStateOpen             = @"OPEN";
NSString * const kGTLRVaultStateStateUnspecified = @"STATE_UNSPECIFIED";

// view
NSString * const kGTLRVaultViewBasic               = @"BASIC";
NSString * const kGTLRVaultViewBasicHold           = @"BASIC_HOLD";
NSString * const kGTLRVaultViewFull                = @"FULL";
NSString * const kGTLRVaultViewFullHold            = @"FULL_HOLD";
NSString * const kGTLRVaultViewHoldViewUnspecified = @"HOLD_VIEW_UNSPECIFIED";
NSString * const kGTLRVaultViewViewUnspecified     = @"VIEW_UNSPECIFIED";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRVaultQuery

@dynamic fields;

@end

@implementation GTLRVaultQuery_MattersAddPermissions

@dynamic matterId;

+ (instancetype)queryWithObject:(GTLRVault_AddMatterPermissionsRequest *)object
                       matterId:(NSString *)matterId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"matterId" ];
  NSString *pathURITemplate = @"v1/matters/{matterId}:addPermissions";
  GTLRVaultQuery_MattersAddPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.matterId = matterId;
  query.expectedObjectClass = [GTLRVault_MatterPermission class];
  query.loggingName = @"vault.matters.addPermissions";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersClose

@dynamic matterId;

+ (instancetype)queryWithObject:(GTLRVault_CloseMatterRequest *)object
                       matterId:(NSString *)matterId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"matterId" ];
  NSString *pathURITemplate = @"v1/matters/{matterId}:close";
  GTLRVaultQuery_MattersClose *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.matterId = matterId;
  query.expectedObjectClass = [GTLRVault_CloseMatterResponse class];
  query.loggingName = @"vault.matters.close";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersCreate

+ (instancetype)queryWithObject:(GTLRVault_Matter *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"v1/matters";
  GTLRVaultQuery_MattersCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRVault_Matter class];
  query.loggingName = @"vault.matters.create";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersDelete

@dynamic matterId;

+ (instancetype)queryWithMatterId:(NSString *)matterId {
  NSArray *pathParams = @[ @"matterId" ];
  NSString *pathURITemplate = @"v1/matters/{matterId}";
  GTLRVaultQuery_MattersDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.matterId = matterId;
  query.expectedObjectClass = [GTLRVault_Matter class];
  query.loggingName = @"vault.matters.delete";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersGet

@dynamic matterId, view;

+ (instancetype)queryWithMatterId:(NSString *)matterId {
  NSArray *pathParams = @[ @"matterId" ];
  NSString *pathURITemplate = @"v1/matters/{matterId}";
  GTLRVaultQuery_MattersGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.matterId = matterId;
  query.expectedObjectClass = [GTLRVault_Matter class];
  query.loggingName = @"vault.matters.get";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersHoldsAccountsCreate

@dynamic holdId, matterId;

+ (instancetype)queryWithObject:(GTLRVault_HeldAccount *)object
                       matterId:(NSString *)matterId
                         holdId:(NSString *)holdId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"holdId", @"matterId"
  ];
  NSString *pathURITemplate = @"v1/matters/{matterId}/holds/{holdId}/accounts";
  GTLRVaultQuery_MattersHoldsAccountsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.matterId = matterId;
  query.holdId = holdId;
  query.expectedObjectClass = [GTLRVault_HeldAccount class];
  query.loggingName = @"vault.matters.holds.accounts.create";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersHoldsAccountsDelete

@dynamic accountId, holdId, matterId;

+ (instancetype)queryWithMatterId:(NSString *)matterId
                           holdId:(NSString *)holdId
                        accountId:(NSString *)accountId {
  NSArray *pathParams = @[
    @"accountId", @"holdId", @"matterId"
  ];
  NSString *pathURITemplate = @"v1/matters/{matterId}/holds/{holdId}/accounts/{accountId}";
  GTLRVaultQuery_MattersHoldsAccountsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.matterId = matterId;
  query.holdId = holdId;
  query.accountId = accountId;
  query.expectedObjectClass = [GTLRVault_Empty class];
  query.loggingName = @"vault.matters.holds.accounts.delete";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersHoldsAccountsList

@dynamic holdId, matterId;

+ (instancetype)queryWithMatterId:(NSString *)matterId
                           holdId:(NSString *)holdId {
  NSArray *pathParams = @[
    @"holdId", @"matterId"
  ];
  NSString *pathURITemplate = @"v1/matters/{matterId}/holds/{holdId}/accounts";
  GTLRVaultQuery_MattersHoldsAccountsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.matterId = matterId;
  query.holdId = holdId;
  query.expectedObjectClass = [GTLRVault_ListHeldAccountsResponse class];
  query.loggingName = @"vault.matters.holds.accounts.list";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersHoldsCreate

@dynamic matterId;

+ (instancetype)queryWithObject:(GTLRVault_Hold *)object
                       matterId:(NSString *)matterId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"matterId" ];
  NSString *pathURITemplate = @"v1/matters/{matterId}/holds";
  GTLRVaultQuery_MattersHoldsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.matterId = matterId;
  query.expectedObjectClass = [GTLRVault_Hold class];
  query.loggingName = @"vault.matters.holds.create";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersHoldsDelete

@dynamic holdId, matterId;

+ (instancetype)queryWithMatterId:(NSString *)matterId
                           holdId:(NSString *)holdId {
  NSArray *pathParams = @[
    @"holdId", @"matterId"
  ];
  NSString *pathURITemplate = @"v1/matters/{matterId}/holds/{holdId}";
  GTLRVaultQuery_MattersHoldsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.matterId = matterId;
  query.holdId = holdId;
  query.expectedObjectClass = [GTLRVault_Empty class];
  query.loggingName = @"vault.matters.holds.delete";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersHoldsGet

@dynamic holdId, matterId, view;

+ (instancetype)queryWithMatterId:(NSString *)matterId
                           holdId:(NSString *)holdId {
  NSArray *pathParams = @[
    @"holdId", @"matterId"
  ];
  NSString *pathURITemplate = @"v1/matters/{matterId}/holds/{holdId}";
  GTLRVaultQuery_MattersHoldsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.matterId = matterId;
  query.holdId = holdId;
  query.expectedObjectClass = [GTLRVault_Hold class];
  query.loggingName = @"vault.matters.holds.get";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersHoldsList

@dynamic matterId, pageSize, pageToken, view;

+ (instancetype)queryWithMatterId:(NSString *)matterId {
  NSArray *pathParams = @[ @"matterId" ];
  NSString *pathURITemplate = @"v1/matters/{matterId}/holds";
  GTLRVaultQuery_MattersHoldsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.matterId = matterId;
  query.expectedObjectClass = [GTLRVault_ListHoldsResponse class];
  query.loggingName = @"vault.matters.holds.list";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersHoldsUpdate

@dynamic holdId, matterId;

+ (instancetype)queryWithObject:(GTLRVault_Hold *)object
                       matterId:(NSString *)matterId
                         holdId:(NSString *)holdId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"holdId", @"matterId"
  ];
  NSString *pathURITemplate = @"v1/matters/{matterId}/holds/{holdId}";
  GTLRVaultQuery_MattersHoldsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.matterId = matterId;
  query.holdId = holdId;
  query.expectedObjectClass = [GTLRVault_Hold class];
  query.loggingName = @"vault.matters.holds.update";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersList

@dynamic pageSize, pageToken, state, view;

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/matters";
  GTLRVaultQuery_MattersList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRVault_ListMattersResponse class];
  query.loggingName = @"vault.matters.list";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersRemovePermissions

@dynamic matterId;

+ (instancetype)queryWithObject:(GTLRVault_RemoveMatterPermissionsRequest *)object
                       matterId:(NSString *)matterId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"matterId" ];
  NSString *pathURITemplate = @"v1/matters/{matterId}:removePermissions";
  GTLRVaultQuery_MattersRemovePermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.matterId = matterId;
  query.expectedObjectClass = [GTLRVault_Empty class];
  query.loggingName = @"vault.matters.removePermissions";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersReopen

@dynamic matterId;

+ (instancetype)queryWithObject:(GTLRVault_ReopenMatterRequest *)object
                       matterId:(NSString *)matterId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"matterId" ];
  NSString *pathURITemplate = @"v1/matters/{matterId}:reopen";
  GTLRVaultQuery_MattersReopen *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.matterId = matterId;
  query.expectedObjectClass = [GTLRVault_ReopenMatterResponse class];
  query.loggingName = @"vault.matters.reopen";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersUndelete

@dynamic matterId;

+ (instancetype)queryWithObject:(GTLRVault_UndeleteMatterRequest *)object
                       matterId:(NSString *)matterId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"matterId" ];
  NSString *pathURITemplate = @"v1/matters/{matterId}:undelete";
  GTLRVaultQuery_MattersUndelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.matterId = matterId;
  query.expectedObjectClass = [GTLRVault_Matter class];
  query.loggingName = @"vault.matters.undelete";
  return query;
}

@end

@implementation GTLRVaultQuery_MattersUpdate

@dynamic matterId;

+ (instancetype)queryWithObject:(GTLRVault_Matter *)object
                       matterId:(NSString *)matterId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"matterId" ];
  NSString *pathURITemplate = @"v1/matters/{matterId}";
  GTLRVaultQuery_MattersUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.matterId = matterId;
  query.expectedObjectClass = [GTLRVault_Matter class];
  query.loggingName = @"vault.matters.update";
  return query;
}

@end
