// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   DoubleClick Bid Manager API (doubleclickbidmanager/v1)
// Description:
//   API for viewing and managing your reports in DoubleClick Bid Manager.
// Documentation:
//   https://developers.google.com/bid-manager/

#import "GTLRDoubleClickBidManagerQuery.h"

#import "GTLRDoubleClickBidManagerObjects.h"

@implementation GTLRDoubleClickBidManagerQuery

@dynamic fields;

@end

@implementation GTLRDoubleClickBidManagerQuery_LineitemsDownloadlineitems

+ (instancetype)queryWithObject:(GTLRDoubleClickBidManager_DownloadLineItemsRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"lineitems/downloadlineitems";
  GTLRDoubleClickBidManagerQuery_LineitemsDownloadlineitems *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRDoubleClickBidManager_DownloadLineItemsResponse class];
  query.loggingName = @"doubleclickbidmanager.lineitems.downloadlineitems";
  return query;
}

@end

@implementation GTLRDoubleClickBidManagerQuery_LineitemsUploadlineitems

+ (instancetype)queryWithObject:(GTLRDoubleClickBidManager_UploadLineItemsRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"lineitems/uploadlineitems";
  GTLRDoubleClickBidManagerQuery_LineitemsUploadlineitems *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRDoubleClickBidManager_UploadLineItemsResponse class];
  query.loggingName = @"doubleclickbidmanager.lineitems.uploadlineitems";
  return query;
}

@end

@implementation GTLRDoubleClickBidManagerQuery_QueriesCreatequery

+ (instancetype)queryWithObject:(GTLRDoubleClickBidManager_Query *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"query";
  GTLRDoubleClickBidManagerQuery_QueriesCreatequery *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRDoubleClickBidManager_Query class];
  query.loggingName = @"doubleclickbidmanager.queries.createquery";
  return query;
}

@end

@implementation GTLRDoubleClickBidManagerQuery_QueriesDeletequery

@dynamic queryId;

+ (instancetype)queryWithQueryId:(long long)queryId {
  NSArray *pathParams = @[ @"queryId" ];
  NSString *pathURITemplate = @"query/{queryId}";
  GTLRDoubleClickBidManagerQuery_QueriesDeletequery *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.queryId = queryId;
  query.loggingName = @"doubleclickbidmanager.queries.deletequery";
  return query;
}

@end

@implementation GTLRDoubleClickBidManagerQuery_QueriesGetquery

@dynamic queryId;

+ (instancetype)queryWithQueryId:(long long)queryId {
  NSArray *pathParams = @[ @"queryId" ];
  NSString *pathURITemplate = @"query/{queryId}";
  GTLRDoubleClickBidManagerQuery_QueriesGetquery *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.queryId = queryId;
  query.expectedObjectClass = [GTLRDoubleClickBidManager_Query class];
  query.loggingName = @"doubleclickbidmanager.queries.getquery";
  return query;
}

@end

@implementation GTLRDoubleClickBidManagerQuery_QueriesListqueries

+ (instancetype)query {
  NSString *pathURITemplate = @"queries";
  GTLRDoubleClickBidManagerQuery_QueriesListqueries *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRDoubleClickBidManager_ListQueriesResponse class];
  query.loggingName = @"doubleclickbidmanager.queries.listqueries";
  return query;
}

@end

@implementation GTLRDoubleClickBidManagerQuery_QueriesRunquery

@dynamic queryId;

+ (instancetype)queryWithObject:(GTLRDoubleClickBidManager_RunQueryRequest *)object
                        queryId:(long long)queryId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"queryId" ];
  NSString *pathURITemplate = @"query/{queryId}";
  GTLRDoubleClickBidManagerQuery_QueriesRunquery *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.queryId = queryId;
  query.loggingName = @"doubleclickbidmanager.queries.runquery";
  return query;
}

@end

@implementation GTLRDoubleClickBidManagerQuery_ReportsListreports

@dynamic queryId;

+ (instancetype)queryWithQueryId:(long long)queryId {
  NSArray *pathParams = @[ @"queryId" ];
  NSString *pathURITemplate = @"queries/{queryId}/reports";
  GTLRDoubleClickBidManagerQuery_ReportsListreports *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.queryId = queryId;
  query.expectedObjectClass = [GTLRDoubleClickBidManager_ListReportsResponse class];
  query.loggingName = @"doubleclickbidmanager.reports.listreports";
  return query;
}

@end

@implementation GTLRDoubleClickBidManagerQuery_RubiconNotifyproposalchange

+ (instancetype)queryWithObject:(GTLRDoubleClickBidManager_NotifyProposalChangeRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"rubicon/notifyproposalchange";
  GTLRDoubleClickBidManagerQuery_RubiconNotifyproposalchange *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.loggingName = @"doubleclickbidmanager.rubicon.notifyproposalchange";
  return query;
}

@end
