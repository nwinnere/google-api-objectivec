// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Service Networking API (servicenetworking/v1)
// Description:
//   Provides automatic management of network configurations necessary for
//   certain services.
// Documentation:
//   https://cloud.google.com/service-infrastructure/docs/service-networking/getting-started

#import "GTLRServiceNetworkingQuery.h"

#import "GTLRServiceNetworkingObjects.h"

@implementation GTLRServiceNetworkingQuery

@dynamic fields;

@end

@implementation GTLRServiceNetworkingQuery_OperationsCancel

@dynamic name;

+ (instancetype)queryWithObject:(GTLRServiceNetworking_CancelOperationRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancel";
  GTLRServiceNetworkingQuery_OperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRServiceNetworking_Empty class];
  query.loggingName = @"servicenetworking.operations.cancel";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_OperationsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRServiceNetworkingQuery_OperationsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRServiceNetworking_Empty class];
  query.loggingName = @"servicenetworking.operations.delete";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_OperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRServiceNetworkingQuery_OperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRServiceNetworking_Operation class];
  query.loggingName = @"servicenetworking.operations.get";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_OperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRServiceNetworkingQuery_OperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRServiceNetworking_ListOperationsResponse class];
  query.loggingName = @"servicenetworking.operations.list";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_ServicesAddSubnetwork

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRServiceNetworking_AddSubnetworkRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}:addSubnetwork";
  GTLRServiceNetworkingQuery_ServicesAddSubnetwork *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRServiceNetworking_Operation class];
  query.loggingName = @"servicenetworking.services.addSubnetwork";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_ServicesConnectionsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRServiceNetworking_Connection *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/connections";
  GTLRServiceNetworkingQuery_ServicesConnectionsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRServiceNetworking_Operation class];
  query.loggingName = @"servicenetworking.services.connections.create";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_ServicesConnectionsList

@dynamic network, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/connections";
  GTLRServiceNetworkingQuery_ServicesConnectionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRServiceNetworking_ListConnectionsResponse class];
  query.loggingName = @"servicenetworking.services.connections.list";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_ServicesConnectionsPatch

@dynamic force, name, updateMask;

+ (instancetype)queryWithObject:(GTLRServiceNetworking_Connection *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRServiceNetworkingQuery_ServicesConnectionsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRServiceNetworking_Operation class];
  query.loggingName = @"servicenetworking.services.connections.patch";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_ServicesDisableVpcServiceControls

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRServiceNetworking_DisableVpcServiceControlsRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}:disableVpcServiceControls";
  GTLRServiceNetworkingQuery_ServicesDisableVpcServiceControls *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRServiceNetworking_Operation class];
  query.loggingName = @"servicenetworking.services.disableVpcServiceControls";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_ServicesEnableVpcServiceControls

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRServiceNetworking_EnableVpcServiceControlsRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}:enableVpcServiceControls";
  GTLRServiceNetworkingQuery_ServicesEnableVpcServiceControls *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRServiceNetworking_Operation class];
  query.loggingName = @"servicenetworking.services.enableVpcServiceControls";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_ServicesRolesAdd

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRServiceNetworking_AddRolesRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/roles:add";
  GTLRServiceNetworkingQuery_ServicesRolesAdd *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRServiceNetworking_Operation class];
  query.loggingName = @"servicenetworking.services.roles.add";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_ServicesSearchRange

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRServiceNetworking_SearchRangeRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}:searchRange";
  GTLRServiceNetworkingQuery_ServicesSearchRange *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRServiceNetworking_Operation class];
  query.loggingName = @"servicenetworking.services.searchRange";
  return query;
}

@end

@implementation GTLRServiceNetworkingQuery_ServicesValidate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRServiceNetworking_ValidateConsumerConfigRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}:validate";
  GTLRServiceNetworkingQuery_ServicesValidate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRServiceNetworking_ValidateConsumerConfigResponse class];
  query.loggingName = @"servicenetworking.services.validate";
  return query;
}

@end
