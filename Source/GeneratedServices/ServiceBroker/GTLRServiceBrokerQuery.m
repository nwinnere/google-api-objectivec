// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Service Broker API (servicebroker/v1)
// Description:
//   The Google Cloud Platform Service Broker API provides Google hosted
//   implementation of the Open Service Broker API
//   (https://www.openservicebrokerapi.org/).
// Documentation:
//   https://cloud.google.com/kubernetes-engine/docs/concepts/add-on/service-broker

#import "GTLRServiceBrokerQuery.h"

#import "GTLRServiceBrokerObjects.h"

@implementation GTLRServiceBrokerQuery

@dynamic fields;

@end

@implementation GTLRServiceBrokerQuery_V1GetIamPolicy

@dynamic resource;

+ (instancetype)queryWithResource:(NSString *)resource {
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:getIamPolicy";
  GTLRServiceBrokerQuery_V1GetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resource = resource;
  query.expectedObjectClass = [GTLRServiceBroker_GoogleIamV1Policy class];
  query.loggingName = @"servicebroker.getIamPolicy";
  return query;
}

@end

@implementation GTLRServiceBrokerQuery_V1SetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRServiceBroker_GoogleIamV1SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:setIamPolicy";
  GTLRServiceBrokerQuery_V1SetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRServiceBroker_GoogleIamV1Policy class];
  query.loggingName = @"servicebroker.setIamPolicy";
  return query;
}

@end

@implementation GTLRServiceBrokerQuery_V1TestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRServiceBroker_GoogleIamV1TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:testIamPermissions";
  GTLRServiceBrokerQuery_V1TestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRServiceBroker_GoogleIamV1TestIamPermissionsResponse class];
  query.loggingName = @"servicebroker.testIamPermissions";
  return query;
}

@end
