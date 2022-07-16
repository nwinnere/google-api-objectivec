// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Tasks API (cloudtasks/v2beta3)
// Description:
//   Manages the execution of large numbers of distributed requests.
// Documentation:
//   https://cloud.google.com/tasks/

#import "GTLRCloudTasksObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudTasks_AppEngineHttpRequest.httpMethod
NSString * const kGTLRCloudTasks_AppEngineHttpRequest_HttpMethod_Delete = @"DELETE";
NSString * const kGTLRCloudTasks_AppEngineHttpRequest_HttpMethod_Get = @"GET";
NSString * const kGTLRCloudTasks_AppEngineHttpRequest_HttpMethod_Head = @"HEAD";
NSString * const kGTLRCloudTasks_AppEngineHttpRequest_HttpMethod_HttpMethodUnspecified = @"HTTP_METHOD_UNSPECIFIED";
NSString * const kGTLRCloudTasks_AppEngineHttpRequest_HttpMethod_Post = @"POST";
NSString * const kGTLRCloudTasks_AppEngineHttpRequest_HttpMethod_Put = @"PUT";

// GTLRCloudTasks_CreateTaskRequest.responseView
NSString * const kGTLRCloudTasks_CreateTaskRequest_ResponseView_Basic = @"BASIC";
NSString * const kGTLRCloudTasks_CreateTaskRequest_ResponseView_Full = @"FULL";
NSString * const kGTLRCloudTasks_CreateTaskRequest_ResponseView_ViewUnspecified = @"VIEW_UNSPECIFIED";

// GTLRCloudTasks_Queue.state
NSString * const kGTLRCloudTasks_Queue_State_Disabled         = @"DISABLED";
NSString * const kGTLRCloudTasks_Queue_State_Paused           = @"PAUSED";
NSString * const kGTLRCloudTasks_Queue_State_Running          = @"RUNNING";
NSString * const kGTLRCloudTasks_Queue_State_StateUnspecified = @"STATE_UNSPECIFIED";

// GTLRCloudTasks_RunTaskRequest.responseView
NSString * const kGTLRCloudTasks_RunTaskRequest_ResponseView_Basic = @"BASIC";
NSString * const kGTLRCloudTasks_RunTaskRequest_ResponseView_Full = @"FULL";
NSString * const kGTLRCloudTasks_RunTaskRequest_ResponseView_ViewUnspecified = @"VIEW_UNSPECIFIED";

// GTLRCloudTasks_Task.view
NSString * const kGTLRCloudTasks_Task_View_Basic           = @"BASIC";
NSString * const kGTLRCloudTasks_Task_View_Full            = @"FULL";
NSString * const kGTLRCloudTasks_Task_View_ViewUnspecified = @"VIEW_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_AppEngineHttpQueue
//

@implementation GTLRCloudTasks_AppEngineHttpQueue
@dynamic appEngineRoutingOverride;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_AppEngineHttpRequest
//

@implementation GTLRCloudTasks_AppEngineHttpRequest
@dynamic appEngineRouting, body, headers, httpMethod, relativeUri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_AppEngineHttpRequest_Headers
//

@implementation GTLRCloudTasks_AppEngineHttpRequest_Headers

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_AppEngineRouting
//

@implementation GTLRCloudTasks_AppEngineRouting
@dynamic host, instance, service, version;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Attempt
//

@implementation GTLRCloudTasks_Attempt
@dynamic dispatchTime, responseStatus, responseTime, scheduleTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Binding
//

@implementation GTLRCloudTasks_Binding
@dynamic condition, members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_CreateTaskRequest
//

@implementation GTLRCloudTasks_CreateTaskRequest
@dynamic responseView, task;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Empty
//

@implementation GTLRCloudTasks_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Expr
//

@implementation GTLRCloudTasks_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_GetIamPolicyRequest
//

@implementation GTLRCloudTasks_GetIamPolicyRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_ListLocationsResponse
//

@implementation GTLRCloudTasks_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRCloudTasks_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_ListQueuesResponse
//

@implementation GTLRCloudTasks_ListQueuesResponse
@dynamic nextPageToken, queues;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"queues" : [GTLRCloudTasks_Queue class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"queues";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_ListTasksResponse
//

@implementation GTLRCloudTasks_ListTasksResponse
@dynamic nextPageToken, tasks;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tasks" : [GTLRCloudTasks_Task class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"tasks";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Location
//

@implementation GTLRCloudTasks_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Location_Labels
//

@implementation GTLRCloudTasks_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Location_Metadata
//

@implementation GTLRCloudTasks_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_PauseQueueRequest
//

@implementation GTLRCloudTasks_PauseQueueRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Policy
//

@implementation GTLRCloudTasks_Policy
@dynamic bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bindings" : [GTLRCloudTasks_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_PurgeQueueRequest
//

@implementation GTLRCloudTasks_PurgeQueueRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Queue
//

@implementation GTLRCloudTasks_Queue
@dynamic appEngineHttpQueue, name, purgeTime, rateLimits, retryConfig, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_RateLimits
//

@implementation GTLRCloudTasks_RateLimits
@dynamic maxBurstSize, maxConcurrentDispatches, maxDispatchesPerSecond;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_ResumeQueueRequest
//

@implementation GTLRCloudTasks_ResumeQueueRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_RetryConfig
//

@implementation GTLRCloudTasks_RetryConfig
@dynamic maxAttempts, maxBackoff, maxDoublings, maxRetryDuration, minBackoff;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_RunTaskRequest
//

@implementation GTLRCloudTasks_RunTaskRequest
@dynamic responseView;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_SetIamPolicyRequest
//

@implementation GTLRCloudTasks_SetIamPolicyRequest
@dynamic policy;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Status
//

@implementation GTLRCloudTasks_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCloudTasks_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Status_Details_Item
//

@implementation GTLRCloudTasks_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_Task
//

@implementation GTLRCloudTasks_Task
@dynamic appEngineHttpRequest, createTime, dispatchCount, firstAttempt,
         lastAttempt, name, responseCount, scheduleTime, view;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_TestIamPermissionsRequest
//

@implementation GTLRCloudTasks_TestIamPermissionsRequest
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudTasks_TestIamPermissionsResponse
//

@implementation GTLRCloudTasks_TestIamPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end
