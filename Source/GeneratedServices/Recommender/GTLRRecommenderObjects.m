// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Recommender API (recommender/v1)
// Documentation:
//   https://cloud.google.com/recommender/docs/

#import "GTLRRecommenderObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRRecommender_GoogleCloudRecommenderV1Impact.category
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_CategoryUnspecified = @"CATEGORY_UNSPECIFIED";
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Cost = @"COST";
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Manageability = @"MANAGEABILITY";
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Performance = @"PERFORMANCE";
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Security = @"SECURITY";

// GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo.state
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Active = @"ACTIVE";
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Claimed = @"CLAIMED";
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Dismissed = @"DISMISSED";
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Failed = @"FAILED";
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Succeeded = @"SUCCEEDED";

// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1CostProjection
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1CostProjection
@dynamic cost, duration;
@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1Impact
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1Impact
@dynamic category, costProjection;
@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1ListRecommendationsResponse
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1ListRecommendationsResponse
@dynamic nextPageToken, recommendations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"recommendations" : [GTLRRecommender_GoogleCloudRecommenderV1Recommendation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"recommendations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationClaimedRequest
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationClaimedRequest
@dynamic ETag, stateMetadata;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationClaimedRequest_StateMetadata
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationClaimedRequest_StateMetadata

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationFailedRequest
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationFailedRequest
@dynamic ETag, stateMetadata;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationFailedRequest_StateMetadata
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationFailedRequest_StateMetadata

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationSucceededRequest
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationSucceededRequest
@dynamic ETag, stateMetadata;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationSucceededRequest_StateMetadata
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationSucceededRequest_StateMetadata

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1Operation
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1Operation
@dynamic action, path, pathFilters, pathValueMatchers, resource, resourceType,
         sourcePath, sourceResource, value, valueMatcher;
@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1Operation_PathFilters
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1Operation_PathFilters

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1Operation_PathValueMatchers
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1Operation_PathValueMatchers

+ (Class)classForAdditionalProperties {
  return [GTLRRecommender_GoogleCloudRecommenderV1ValueMatcher class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1OperationGroup
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1OperationGroup
@dynamic operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRRecommender_GoogleCloudRecommenderV1Operation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1Recommendation
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1Recommendation
@dynamic additionalImpact, content, descriptionProperty, ETag, lastRefreshTime,
         name, primaryImpact, recommenderSubtype, stateInfo;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"ETag" : @"etag"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"additionalImpact" : [GTLRRecommender_GoogleCloudRecommenderV1Impact class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1RecommendationContent
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1RecommendationContent
@dynamic operationGroups;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operationGroups" : [GTLRRecommender_GoogleCloudRecommenderV1OperationGroup class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo
@dynamic state, stateMetadata;
@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_StateMetadata
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_StateMetadata

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleCloudRecommenderV1ValueMatcher
//

@implementation GTLRRecommender_GoogleCloudRecommenderV1ValueMatcher
@dynamic matchesPattern;
@end


// ----------------------------------------------------------------------------
//
//   GTLRRecommender_GoogleTypeMoney
//

@implementation GTLRRecommender_GoogleTypeMoney
@dynamic currencyCode, nanos, units;
@end
