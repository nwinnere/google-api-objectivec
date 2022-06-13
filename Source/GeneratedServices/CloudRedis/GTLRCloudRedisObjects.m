// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Memorystore for Redis API (redis/v1beta1)
// Description:
//   The Google Cloud Memorystore for Redis API is used for creating and
//   managing Redis instances on the Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/memorystore/docs/redis/

#import "GTLRCloudRedisObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudRedis_Instance.state
NSString * const kGTLRCloudRedis_Instance_State_Creating       = @"CREATING";
NSString * const kGTLRCloudRedis_Instance_State_Deleting       = @"DELETING";
NSString * const kGTLRCloudRedis_Instance_State_Exporting      = @"EXPORTING";
NSString * const kGTLRCloudRedis_Instance_State_Importing      = @"IMPORTING";
NSString * const kGTLRCloudRedis_Instance_State_Maintenance    = @"MAINTENANCE";
NSString * const kGTLRCloudRedis_Instance_State_Ready          = @"READY";
NSString * const kGTLRCloudRedis_Instance_State_Repairing      = @"REPAIRING";
NSString * const kGTLRCloudRedis_Instance_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRCloudRedis_Instance_State_Updating       = @"UPDATING";

// GTLRCloudRedis_Instance.tier
NSString * const kGTLRCloudRedis_Instance_Tier_Basic           = @"BASIC";
NSString * const kGTLRCloudRedis_Instance_Tier_StandardHa      = @"STANDARD_HA";
NSString * const kGTLRCloudRedis_Instance_Tier_TierUnspecified = @"TIER_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_GoogleCloudCommonOperationMetadata
//

@implementation GTLRCloudRedis_GoogleCloudCommonOperationMetadata
@dynamic apiVersion, cancelRequested, createTime, endTime, statusDetail, target,
         verb;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_GoogleCloudRedisV1beta1LocationMetadata
//

@implementation GTLRCloudRedis_GoogleCloudRedisV1beta1LocationMetadata
@dynamic availableZones;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_GoogleCloudRedisV1beta1LocationMetadata_AvailableZones
//

@implementation GTLRCloudRedis_GoogleCloudRedisV1beta1LocationMetadata_AvailableZones

+ (Class)classForAdditionalProperties {
  return [GTLRCloudRedis_GoogleCloudRedisV1beta1ZoneMetadata class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_GoogleCloudRedisV1beta1ZoneMetadata
//

@implementation GTLRCloudRedis_GoogleCloudRedisV1beta1ZoneMetadata
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Instance
//

@implementation GTLRCloudRedis_Instance
@dynamic alternativeLocationId, authorizedNetwork, createTime,
         currentLocationId, displayName, host, labels, locationId, memorySizeGb,
         name, port, redisConfigs, redisVersion, reservedIpRange, state,
         statusMessage, tier;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Instance_Labels
//

@implementation GTLRCloudRedis_Instance_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Instance_RedisConfigs
//

@implementation GTLRCloudRedis_Instance_RedisConfigs

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_ListInstancesResponse
//

@implementation GTLRCloudRedis_ListInstancesResponse
@dynamic instances, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"instances" : [GTLRCloudRedis_Instance class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"instances";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_ListLocationsResponse
//

@implementation GTLRCloudRedis_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRCloudRedis_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_ListOperationsResponse
//

@implementation GTLRCloudRedis_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRCloudRedis_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Location
//

@implementation GTLRCloudRedis_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Location_Labels
//

@implementation GTLRCloudRedis_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Location_Metadata
//

@implementation GTLRCloudRedis_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Operation
//

@implementation GTLRCloudRedis_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Operation_Metadata
//

@implementation GTLRCloudRedis_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Operation_Response
//

@implementation GTLRCloudRedis_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Status
//

@implementation GTLRCloudRedis_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCloudRedis_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudRedis_Status_Details_Item
//

@implementation GTLRCloudRedis_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end
