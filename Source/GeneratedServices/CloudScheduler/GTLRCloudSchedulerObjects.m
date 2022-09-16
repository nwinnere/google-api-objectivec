// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Scheduler API (cloudscheduler/v1)
// Description:
//   Creates and manages jobs run on a regular recurring schedule.
// Documentation:
//   https://cloud.google.com/scheduler/

#import "GTLRCloudSchedulerObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudScheduler_AppEngineHttpTarget.httpMethod
NSString * const kGTLRCloudScheduler_AppEngineHttpTarget_HttpMethod_Delete = @"DELETE";
NSString * const kGTLRCloudScheduler_AppEngineHttpTarget_HttpMethod_Get = @"GET";
NSString * const kGTLRCloudScheduler_AppEngineHttpTarget_HttpMethod_Head = @"HEAD";
NSString * const kGTLRCloudScheduler_AppEngineHttpTarget_HttpMethod_HttpMethodUnspecified = @"HTTP_METHOD_UNSPECIFIED";
NSString * const kGTLRCloudScheduler_AppEngineHttpTarget_HttpMethod_Options = @"OPTIONS";
NSString * const kGTLRCloudScheduler_AppEngineHttpTarget_HttpMethod_Patch = @"PATCH";
NSString * const kGTLRCloudScheduler_AppEngineHttpTarget_HttpMethod_Post = @"POST";
NSString * const kGTLRCloudScheduler_AppEngineHttpTarget_HttpMethod_Put = @"PUT";

// GTLRCloudScheduler_HttpTarget.httpMethod
NSString * const kGTLRCloudScheduler_HttpTarget_HttpMethod_Delete = @"DELETE";
NSString * const kGTLRCloudScheduler_HttpTarget_HttpMethod_Get = @"GET";
NSString * const kGTLRCloudScheduler_HttpTarget_HttpMethod_Head = @"HEAD";
NSString * const kGTLRCloudScheduler_HttpTarget_HttpMethod_HttpMethodUnspecified = @"HTTP_METHOD_UNSPECIFIED";
NSString * const kGTLRCloudScheduler_HttpTarget_HttpMethod_Options = @"OPTIONS";
NSString * const kGTLRCloudScheduler_HttpTarget_HttpMethod_Patch = @"PATCH";
NSString * const kGTLRCloudScheduler_HttpTarget_HttpMethod_Post = @"POST";
NSString * const kGTLRCloudScheduler_HttpTarget_HttpMethod_Put = @"PUT";

// GTLRCloudScheduler_Job.state
NSString * const kGTLRCloudScheduler_Job_State_Disabled        = @"DISABLED";
NSString * const kGTLRCloudScheduler_Job_State_Enabled         = @"ENABLED";
NSString * const kGTLRCloudScheduler_Job_State_Paused          = @"PAUSED";
NSString * const kGTLRCloudScheduler_Job_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRCloudScheduler_Job_State_UpdateFailed    = @"UPDATE_FAILED";

// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_AppEngineHttpTarget
//

@implementation GTLRCloudScheduler_AppEngineHttpTarget
@dynamic appEngineRouting, body, headers, httpMethod, relativeUri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_AppEngineHttpTarget_Headers
//

@implementation GTLRCloudScheduler_AppEngineHttpTarget_Headers

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_AppEngineRouting
//

@implementation GTLRCloudScheduler_AppEngineRouting
@dynamic host, instance, service, version;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_Empty
//

@implementation GTLRCloudScheduler_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_HttpTarget
//

@implementation GTLRCloudScheduler_HttpTarget
@dynamic body, headers, httpMethod, uri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_HttpTarget_Headers
//

@implementation GTLRCloudScheduler_HttpTarget_Headers

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_Job
//

@implementation GTLRCloudScheduler_Job
@dynamic appEngineHttpTarget, descriptionProperty, httpTarget, lastAttemptTime,
         name, pubsubTarget, retryConfig, schedule, scheduleTime, state, status,
         timeZone, userUpdateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_ListJobsResponse
//

@implementation GTLRCloudScheduler_ListJobsResponse
@dynamic jobs, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"jobs" : [GTLRCloudScheduler_Job class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"jobs";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_ListLocationsResponse
//

@implementation GTLRCloudScheduler_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRCloudScheduler_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_Location
//

@implementation GTLRCloudScheduler_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_Location_Labels
//

@implementation GTLRCloudScheduler_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_Location_Metadata
//

@implementation GTLRCloudScheduler_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_PauseJobRequest
//

@implementation GTLRCloudScheduler_PauseJobRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_PubsubMessage
//

@implementation GTLRCloudScheduler_PubsubMessage
@dynamic attributes, data, messageId, publishTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_PubsubMessage_Attributes
//

@implementation GTLRCloudScheduler_PubsubMessage_Attributes

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_PubsubTarget
//

@implementation GTLRCloudScheduler_PubsubTarget
@dynamic attributes, data, topicName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_PubsubTarget_Attributes
//

@implementation GTLRCloudScheduler_PubsubTarget_Attributes

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_ResumeJobRequest
//

@implementation GTLRCloudScheduler_ResumeJobRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_RetryConfig
//

@implementation GTLRCloudScheduler_RetryConfig
@dynamic maxBackoffDuration, maxDoublings, maxRetryDuration, minBackoffDuration,
         retryCount;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_RunJobRequest
//

@implementation GTLRCloudScheduler_RunJobRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_Status
//

@implementation GTLRCloudScheduler_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCloudScheduler_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudScheduler_Status_Details_Item
//

@implementation GTLRCloudScheduler_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end
