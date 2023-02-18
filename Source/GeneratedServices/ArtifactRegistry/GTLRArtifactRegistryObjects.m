// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Artifact Registry API (artifactregistry/v1beta1)
// Description:
//   Store and manage build artifacts in a scalable and integrated service built
//   on Google infrastructure.
// Documentation:
//   https://cloud.google.com/artifacts/docs/

#import "GTLRArtifactRegistryObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRArtifactRegistry_Hash.type
NSString * const kGTLRArtifactRegistry_Hash_Type_HashTypeUnspecified = @"HASH_TYPE_UNSPECIFIED";
NSString * const kGTLRArtifactRegistry_Hash_Type_Sha256        = @"SHA256";

// GTLRArtifactRegistry_Repository.format
NSString * const kGTLRArtifactRegistry_Repository_Format_Docker = @"DOCKER";
NSString * const kGTLRArtifactRegistry_Repository_Format_FormatUnspecified = @"FORMAT_UNSPECIFIED";
NSString * const kGTLRArtifactRegistry_Repository_Format_Maven = @"MAVEN";
NSString * const kGTLRArtifactRegistry_Repository_Format_Npm   = @"NPM";

// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Binding
//

@implementation GTLRArtifactRegistry_Binding
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
//   GTLRArtifactRegistry_Empty
//

@implementation GTLRArtifactRegistry_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Expr
//

@implementation GTLRArtifactRegistry_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_File
//

@implementation GTLRArtifactRegistry_File
@dynamic createTime, hashes, name, owner, sizeBytes, updateTime;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"hashes" : [GTLRArtifactRegistry_Hash class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Hash
//

@implementation GTLRArtifactRegistry_Hash
@dynamic type, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_ListFilesResponse
//

@implementation GTLRArtifactRegistry_ListFilesResponse
@dynamic files, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"files" : [GTLRArtifactRegistry_File class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"files";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_ListLocationsResponse
//

@implementation GTLRArtifactRegistry_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRArtifactRegistry_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_ListOperationsResponse
//

@implementation GTLRArtifactRegistry_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRArtifactRegistry_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_ListPackagesResponse
//

@implementation GTLRArtifactRegistry_ListPackagesResponse
@dynamic nextPageToken, packages;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"packages" : [GTLRArtifactRegistry_Package class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"packages";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_ListRepositoriesResponse
//

@implementation GTLRArtifactRegistry_ListRepositoriesResponse
@dynamic nextPageToken, repositories;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"repositories" : [GTLRArtifactRegistry_Repository class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"repositories";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_ListTagsResponse
//

@implementation GTLRArtifactRegistry_ListTagsResponse
@dynamic nextPageToken, tags;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tags" : [GTLRArtifactRegistry_Tag class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"tags";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_ListVersionsResponse
//

@implementation GTLRArtifactRegistry_ListVersionsResponse
@dynamic nextPageToken, versions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"versions" : [GTLRArtifactRegistry_Version class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"versions";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Location
//

@implementation GTLRArtifactRegistry_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Location_Labels
//

@implementation GTLRArtifactRegistry_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Location_Metadata
//

@implementation GTLRArtifactRegistry_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Operation
//

@implementation GTLRArtifactRegistry_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Operation_Metadata
//

@implementation GTLRArtifactRegistry_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Operation_Response
//

@implementation GTLRArtifactRegistry_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Package
//

@implementation GTLRArtifactRegistry_Package
@dynamic createTime, displayName, name, updateTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Policy
//

@implementation GTLRArtifactRegistry_Policy
@dynamic bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bindings" : [GTLRArtifactRegistry_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Repository
//

@implementation GTLRArtifactRegistry_Repository
@dynamic createTime, descriptionProperty, format, labels, name, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Repository_Labels
//

@implementation GTLRArtifactRegistry_Repository_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_SetIamPolicyRequest
//

@implementation GTLRArtifactRegistry_SetIamPolicyRequest
@dynamic policy;
@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Status
//

@implementation GTLRArtifactRegistry_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRArtifactRegistry_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Status_Details_Item
//

@implementation GTLRArtifactRegistry_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_Tag
//

@implementation GTLRArtifactRegistry_Tag
@dynamic name, version;
@end


// ----------------------------------------------------------------------------
//
//   GTLRArtifactRegistry_TestIamPermissionsRequest
//

@implementation GTLRArtifactRegistry_TestIamPermissionsRequest
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
//   GTLRArtifactRegistry_TestIamPermissionsResponse
//

@implementation GTLRArtifactRegistry_TestIamPermissionsResponse
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
//   GTLRArtifactRegistry_Version
//

@implementation GTLRArtifactRegistry_Version
@dynamic createTime, descriptionProperty, name, relatedTags, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"relatedTags" : [GTLRArtifactRegistry_Tag class]
  };
  return map;
}

@end
