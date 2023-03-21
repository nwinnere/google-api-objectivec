// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Pub/Sub Lite API (pubsublite/v1)
// Documentation:
//   https://cloud.google.com/pubsub/lite/docs

#import "GTLRPubsubLiteObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRPubsubLite_DeliveryConfig.deliveryRequirement
NSString * const kGTLRPubsubLite_DeliveryConfig_DeliveryRequirement_DeliverAfterStored = @"DELIVER_AFTER_STORED";
NSString * const kGTLRPubsubLite_DeliveryConfig_DeliveryRequirement_DeliverImmediately = @"DELIVER_IMMEDIATELY";
NSString * const kGTLRPubsubLite_DeliveryConfig_DeliveryRequirement_DeliveryRequirementUnspecified = @"DELIVERY_REQUIREMENT_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_Capacity
//

@implementation GTLRPubsubLite_Capacity
@dynamic publishMibPerSec, subscribeMibPerSec;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_Cursor
//

@implementation GTLRPubsubLite_Cursor
@dynamic offset;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_DeliveryConfig
//

@implementation GTLRPubsubLite_DeliveryConfig
@dynamic deliveryRequirement;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_Empty
//

@implementation GTLRPubsubLite_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_ListPartitionCursorsResponse
//

@implementation GTLRPubsubLite_ListPartitionCursorsResponse
@dynamic nextPageToken, partitionCursors;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"partitionCursors" : [GTLRPubsubLite_PartitionCursor class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"partitionCursors";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_ListSubscriptionsResponse
//

@implementation GTLRPubsubLite_ListSubscriptionsResponse
@dynamic nextPageToken, subscriptions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"subscriptions" : [GTLRPubsubLite_Subscription class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"subscriptions";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_ListTopicsResponse
//

@implementation GTLRPubsubLite_ListTopicsResponse
@dynamic nextPageToken, topics;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"topics" : [GTLRPubsubLite_Topic class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"topics";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_ListTopicSubscriptionsResponse
//

@implementation GTLRPubsubLite_ListTopicSubscriptionsResponse
@dynamic nextPageToken, subscriptions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"subscriptions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_PartitionConfig
//

@implementation GTLRPubsubLite_PartitionConfig
@dynamic capacity, count, scale;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_PartitionCursor
//

@implementation GTLRPubsubLite_PartitionCursor
@dynamic cursor, partition;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_RetentionConfig
//

@implementation GTLRPubsubLite_RetentionConfig
@dynamic period, perPartitionBytes;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_Subscription
//

@implementation GTLRPubsubLite_Subscription
@dynamic deliveryConfig, name, topic;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_Topic
//

@implementation GTLRPubsubLite_Topic
@dynamic name, partitionConfig, retentionConfig;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsubLite_TopicPartitions
//

@implementation GTLRPubsubLite_TopicPartitions
@dynamic partitionCount;
@end
