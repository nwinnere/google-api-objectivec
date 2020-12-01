// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Storage JSON API (storage/v1)
// Description:
//   Stores and retrieves potentially large, immutable data objects.
// Documentation:
//   https://developers.google.com/storage/docs/json_api/

#import "GTLRStorageQuery.h"

#import "GTLRStorageObjects.h"

// ----------------------------------------------------------------------------
// Constants

// destinationPredefinedAcl
NSString * const kGTLRStorageDestinationPredefinedAclAuthenticatedRead = @"authenticatedRead";
NSString * const kGTLRStorageDestinationPredefinedAclBucketOwnerFullControl = @"bucketOwnerFullControl";
NSString * const kGTLRStorageDestinationPredefinedAclBucketOwnerRead = @"bucketOwnerRead";
NSString * const kGTLRStorageDestinationPredefinedAclPrivate   = @"private";
NSString * const kGTLRStorageDestinationPredefinedAclProjectPrivate = @"projectPrivate";
NSString * const kGTLRStorageDestinationPredefinedAclPublicRead = @"publicRead";

// predefinedAcl
NSString * const kGTLRStoragePredefinedAclAuthenticatedRead    = @"authenticatedRead";
NSString * const kGTLRStoragePredefinedAclBucketOwnerFullControl = @"bucketOwnerFullControl";
NSString * const kGTLRStoragePredefinedAclBucketOwnerRead      = @"bucketOwnerRead";
NSString * const kGTLRStoragePredefinedAclPrivate              = @"private";
NSString * const kGTLRStoragePredefinedAclProjectPrivate       = @"projectPrivate";
NSString * const kGTLRStoragePredefinedAclPublicRead           = @"publicRead";
NSString * const kGTLRStoragePredefinedAclPublicReadWrite      = @"publicReadWrite";

// predefinedDefaultObjectAcl
NSString * const kGTLRStoragePredefinedDefaultObjectAclAuthenticatedRead = @"authenticatedRead";
NSString * const kGTLRStoragePredefinedDefaultObjectAclBucketOwnerFullControl = @"bucketOwnerFullControl";
NSString * const kGTLRStoragePredefinedDefaultObjectAclBucketOwnerRead = @"bucketOwnerRead";
NSString * const kGTLRStoragePredefinedDefaultObjectAclPrivate = @"private";
NSString * const kGTLRStoragePredefinedDefaultObjectAclProjectPrivate = @"projectPrivate";
NSString * const kGTLRStoragePredefinedDefaultObjectAclPublicRead = @"publicRead";

// projection
NSString * const kGTLRStorageProjectionFull  = @"full";
NSString * const kGTLRStorageProjectionNoAcl = @"noAcl";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRStorageQuery

@dynamic fields;

@end

@implementation GTLRStorageQuery_BucketAccessControlsDelete

@dynamic bucket, entity;

+ (instancetype)queryWithBucket:(NSString *)bucket
                         entity:(NSString *)entity {
  NSArray *pathParams = @[
    @"bucket", @"entity"
  ];
  NSString *pathURITemplate = @"b/{bucket}/acl/{entity}";
  GTLRStorageQuery_BucketAccessControlsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.entity = entity;
  query.loggingName = @"storage.bucketAccessControls.delete";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketAccessControlsGet

@dynamic bucket, entity;

+ (instancetype)queryWithBucket:(NSString *)bucket
                         entity:(NSString *)entity {
  NSArray *pathParams = @[
    @"bucket", @"entity"
  ];
  NSString *pathURITemplate = @"b/{bucket}/acl/{entity}";
  GTLRStorageQuery_BucketAccessControlsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLRStorage_BucketAccessControl class];
  query.loggingName = @"storage.bucketAccessControls.get";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketAccessControlsInsert

@dynamic bucket;

+ (instancetype)queryWithObject:(GTLRStorage_BucketAccessControl *)object
                         bucket:(NSString *)bucket {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}/acl";
  GTLRStorageQuery_BucketAccessControlsInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.expectedObjectClass = [GTLRStorage_BucketAccessControl class];
  query.loggingName = @"storage.bucketAccessControls.insert";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketAccessControlsList

@dynamic bucket;

+ (instancetype)queryWithBucket:(NSString *)bucket {
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}/acl";
  GTLRStorageQuery_BucketAccessControlsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.expectedObjectClass = [GTLRStorage_BucketAccessControls class];
  query.loggingName = @"storage.bucketAccessControls.list";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketAccessControlsPatch

@dynamic bucket, entity;

+ (instancetype)queryWithObject:(GTLRStorage_BucketAccessControl *)object
                         bucket:(NSString *)bucket
                         entity:(NSString *)entity {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"bucket", @"entity"
  ];
  NSString *pathURITemplate = @"b/{bucket}/acl/{entity}";
  GTLRStorageQuery_BucketAccessControlsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLRStorage_BucketAccessControl class];
  query.loggingName = @"storage.bucketAccessControls.patch";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketAccessControlsUpdate

@dynamic bucket, entity;

+ (instancetype)queryWithObject:(GTLRStorage_BucketAccessControl *)object
                         bucket:(NSString *)bucket
                         entity:(NSString *)entity {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"bucket", @"entity"
  ];
  NSString *pathURITemplate = @"b/{bucket}/acl/{entity}";
  GTLRStorageQuery_BucketAccessControlsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLRStorage_BucketAccessControl class];
  query.loggingName = @"storage.bucketAccessControls.update";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketsDelete

@dynamic bucket, ifMetagenerationMatch, ifMetagenerationNotMatch;

+ (instancetype)queryWithBucket:(NSString *)bucket {
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}";
  GTLRStorageQuery_BucketsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.loggingName = @"storage.buckets.delete";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketsGet

@dynamic bucket, ifMetagenerationMatch, ifMetagenerationNotMatch, projection;

+ (instancetype)queryWithBucket:(NSString *)bucket {
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}";
  GTLRStorageQuery_BucketsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.expectedObjectClass = [GTLRStorage_Bucket class];
  query.loggingName = @"storage.buckets.get";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketsInsert

@dynamic predefinedAcl, predefinedDefaultObjectAcl, project, projection;

+ (instancetype)queryWithObject:(GTLRStorage_Bucket *)object
                        project:(NSString *)project {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"b";
  GTLRStorageQuery_BucketsInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.project = project;
  query.expectedObjectClass = [GTLRStorage_Bucket class];
  query.loggingName = @"storage.buckets.insert";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketsList

@dynamic maxResults, pageToken, prefix, project, projection;

+ (instancetype)queryWithProject:(NSString *)project {
  NSString *pathURITemplate = @"b";
  GTLRStorageQuery_BucketsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.project = project;
  query.expectedObjectClass = [GTLRStorage_Buckets class];
  query.loggingName = @"storage.buckets.list";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketsPatch

@dynamic bucket, ifMetagenerationMatch, ifMetagenerationNotMatch, predefinedAcl,
         predefinedDefaultObjectAcl, projection;

+ (instancetype)queryWithObject:(GTLRStorage_Bucket *)object
                         bucket:(NSString *)bucket {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}";
  GTLRStorageQuery_BucketsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.expectedObjectClass = [GTLRStorage_Bucket class];
  query.loggingName = @"storage.buckets.patch";
  return query;
}

@end

@implementation GTLRStorageQuery_BucketsUpdate

@dynamic bucket, ifMetagenerationMatch, ifMetagenerationNotMatch, predefinedAcl,
         predefinedDefaultObjectAcl, projection;

+ (instancetype)queryWithObject:(GTLRStorage_Bucket *)object
                         bucket:(NSString *)bucket {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}";
  GTLRStorageQuery_BucketsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.expectedObjectClass = [GTLRStorage_Bucket class];
  query.loggingName = @"storage.buckets.update";
  return query;
}

@end

@implementation GTLRStorageQuery_ChannelsStop

+ (instancetype)queryWithObject:(GTLRStorage_Channel *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"channels/stop";
  GTLRStorageQuery_ChannelsStop *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.loggingName = @"storage.channels.stop";
  return query;
}

@end

@implementation GTLRStorageQuery_DefaultObjectAccessControlsDelete

@dynamic bucket, entity;

+ (instancetype)queryWithBucket:(NSString *)bucket
                         entity:(NSString *)entity {
  NSArray *pathParams = @[
    @"bucket", @"entity"
  ];
  NSString *pathURITemplate = @"b/{bucket}/defaultObjectAcl/{entity}";
  GTLRStorageQuery_DefaultObjectAccessControlsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.entity = entity;
  query.loggingName = @"storage.defaultObjectAccessControls.delete";
  return query;
}

@end

@implementation GTLRStorageQuery_DefaultObjectAccessControlsGet

@dynamic bucket, entity;

+ (instancetype)queryWithBucket:(NSString *)bucket
                         entity:(NSString *)entity {
  NSArray *pathParams = @[
    @"bucket", @"entity"
  ];
  NSString *pathURITemplate = @"b/{bucket}/defaultObjectAcl/{entity}";
  GTLRStorageQuery_DefaultObjectAccessControlsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLRStorage_ObjectAccessControl class];
  query.loggingName = @"storage.defaultObjectAccessControls.get";
  return query;
}

@end

@implementation GTLRStorageQuery_DefaultObjectAccessControlsInsert

@dynamic bucket;

+ (instancetype)queryWithObject:(GTLRStorage_ObjectAccessControl *)object
                         bucket:(NSString *)bucket {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}/defaultObjectAcl";
  GTLRStorageQuery_DefaultObjectAccessControlsInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.expectedObjectClass = [GTLRStorage_ObjectAccessControl class];
  query.loggingName = @"storage.defaultObjectAccessControls.insert";
  return query;
}

@end

@implementation GTLRStorageQuery_DefaultObjectAccessControlsList

@dynamic bucket, ifMetagenerationMatch, ifMetagenerationNotMatch;

+ (instancetype)queryWithBucket:(NSString *)bucket {
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}/defaultObjectAcl";
  GTLRStorageQuery_DefaultObjectAccessControlsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.expectedObjectClass = [GTLRStorage_ObjectAccessControls class];
  query.loggingName = @"storage.defaultObjectAccessControls.list";
  return query;
}

@end

@implementation GTLRStorageQuery_DefaultObjectAccessControlsPatch

@dynamic bucket, entity;

+ (instancetype)queryWithObject:(GTLRStorage_ObjectAccessControl *)object
                         bucket:(NSString *)bucket
                         entity:(NSString *)entity {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"bucket", @"entity"
  ];
  NSString *pathURITemplate = @"b/{bucket}/defaultObjectAcl/{entity}";
  GTLRStorageQuery_DefaultObjectAccessControlsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLRStorage_ObjectAccessControl class];
  query.loggingName = @"storage.defaultObjectAccessControls.patch";
  return query;
}

@end

@implementation GTLRStorageQuery_DefaultObjectAccessControlsUpdate

@dynamic bucket, entity;

+ (instancetype)queryWithObject:(GTLRStorage_ObjectAccessControl *)object
                         bucket:(NSString *)bucket
                         entity:(NSString *)entity {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"bucket", @"entity"
  ];
  NSString *pathURITemplate = @"b/{bucket}/defaultObjectAcl/{entity}";
  GTLRStorageQuery_DefaultObjectAccessControlsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLRStorage_ObjectAccessControl class];
  query.loggingName = @"storage.defaultObjectAccessControls.update";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectAccessControlsDelete

@dynamic bucket, entity, generation, object;

+ (instancetype)queryWithBucket:(NSString *)bucket
                         object:(NSString *)object_param
                         entity:(NSString *)entity {
  NSArray *pathParams = @[
    @"bucket", @"entity", @"object"
  ];
  NSString *pathURITemplate = @"b/{bucket}/o/{object}/acl/{entity}";
  GTLRStorageQuery_ObjectAccessControlsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.object = object_param;
  query.entity = entity;
  query.loggingName = @"storage.objectAccessControls.delete";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectAccessControlsGet

@dynamic bucket, entity, generation, object;

+ (instancetype)queryWithBucket:(NSString *)bucket
                         object:(NSString *)object_param
                         entity:(NSString *)entity {
  NSArray *pathParams = @[
    @"bucket", @"entity", @"object"
  ];
  NSString *pathURITemplate = @"b/{bucket}/o/{object}/acl/{entity}";
  GTLRStorageQuery_ObjectAccessControlsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.object = object_param;
  query.entity = entity;
  query.expectedObjectClass = [GTLRStorage_ObjectAccessControl class];
  query.loggingName = @"storage.objectAccessControls.get";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectAccessControlsInsert

@dynamic bucket, generation, object;

+ (instancetype)queryWithObject:(GTLRStorage_ObjectAccessControl *)object
                         bucket:(NSString *)bucket
                         object:(NSString *)object_param {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"bucket", @"object"
  ];
  NSString *pathURITemplate = @"b/{bucket}/o/{object}/acl";
  GTLRStorageQuery_ObjectAccessControlsInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.object = object_param;
  query.expectedObjectClass = [GTLRStorage_ObjectAccessControl class];
  query.loggingName = @"storage.objectAccessControls.insert";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectAccessControlsList

@dynamic bucket, generation, object;

+ (instancetype)queryWithBucket:(NSString *)bucket
                         object:(NSString *)object_param {
  NSArray *pathParams = @[
    @"bucket", @"object"
  ];
  NSString *pathURITemplate = @"b/{bucket}/o/{object}/acl";
  GTLRStorageQuery_ObjectAccessControlsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.object = object_param;
  query.expectedObjectClass = [GTLRStorage_ObjectAccessControls class];
  query.loggingName = @"storage.objectAccessControls.list";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectAccessControlsPatch

@dynamic bucket, entity, generation, object;

+ (instancetype)queryWithObject:(GTLRStorage_ObjectAccessControl *)object
                         bucket:(NSString *)bucket
                         object:(NSString *)object_param
                         entity:(NSString *)entity {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"bucket", @"entity", @"object"
  ];
  NSString *pathURITemplate = @"b/{bucket}/o/{object}/acl/{entity}";
  GTLRStorageQuery_ObjectAccessControlsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.object = object_param;
  query.entity = entity;
  query.expectedObjectClass = [GTLRStorage_ObjectAccessControl class];
  query.loggingName = @"storage.objectAccessControls.patch";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectAccessControlsUpdate

@dynamic bucket, entity, generation, object;

+ (instancetype)queryWithObject:(GTLRStorage_ObjectAccessControl *)object
                         bucket:(NSString *)bucket
                         object:(NSString *)object_param
                         entity:(NSString *)entity {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"bucket", @"entity", @"object"
  ];
  NSString *pathURITemplate = @"b/{bucket}/o/{object}/acl/{entity}";
  GTLRStorageQuery_ObjectAccessControlsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.object = object_param;
  query.entity = entity;
  query.expectedObjectClass = [GTLRStorage_ObjectAccessControl class];
  query.loggingName = @"storage.objectAccessControls.update";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectsCompose

@dynamic destinationBucket, destinationObject, destinationPredefinedAcl,
         ifGenerationMatch, ifMetagenerationMatch;

+ (instancetype)queryWithObject:(GTLRStorage_ComposeRequest *)object
              destinationBucket:(NSString *)destinationBucket
              destinationObject:(NSString *)destinationObject {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"destinationBucket", @"destinationObject"
  ];
  NSString *pathURITemplate = @"b/{destinationBucket}/o/{destinationObject}/compose";
  GTLRStorageQuery_ObjectsCompose *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.destinationBucket = destinationBucket;
  query.destinationObject = destinationObject;
  query.expectedObjectClass = [GTLRStorage_Object class];
  query.loggingName = @"storage.objects.compose";
  return query;
}

+ (instancetype)queryForMediaWithObject:(GTLRStorage_ComposeRequest *)object
                      destinationBucket:(NSString *)destinationBucket
                      destinationObject:(NSString *)destinationObject {
  GTLRStorageQuery_ObjectsCompose *query =
    [self queryWithObject:object
        destinationBucket:destinationBucket
        destinationObject:destinationObject];
  query.downloadAsDataObjectType = @"media";
  query.useMediaDownloadService = YES;
  query.loggingName = @"Download storage.objects.compose";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectsCopy

@dynamic destinationBucket, destinationObject, destinationPredefinedAcl,
         ifGenerationMatch, ifGenerationNotMatch, ifMetagenerationMatch,
         ifMetagenerationNotMatch, ifSourceGenerationMatch,
         ifSourceGenerationNotMatch, ifSourceMetagenerationMatch,
         ifSourceMetagenerationNotMatch, projection, sourceBucket,
         sourceGeneration, sourceObject;

+ (instancetype)queryWithObject:(GTLRStorage_Object *)object
                   sourceBucket:(NSString *)sourceBucket
                   sourceObject:(NSString *)sourceObject
              destinationBucket:(NSString *)destinationBucket
              destinationObject:(NSString *)destinationObject {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"destinationBucket", @"destinationObject", @"sourceBucket",
    @"sourceObject"
  ];
  NSString *pathURITemplate = @"b/{sourceBucket}/o/{sourceObject}/copyTo/b/{destinationBucket}/o/{destinationObject}";
  GTLRStorageQuery_ObjectsCopy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.sourceBucket = sourceBucket;
  query.sourceObject = sourceObject;
  query.destinationBucket = destinationBucket;
  query.destinationObject = destinationObject;
  query.expectedObjectClass = [GTLRStorage_Object class];
  query.loggingName = @"storage.objects.copy";
  return query;
}

+ (instancetype)queryForMediaWithObject:(GTLRStorage_Object *)object
                           sourceBucket:(NSString *)sourceBucket
                           sourceObject:(NSString *)sourceObject
                      destinationBucket:(NSString *)destinationBucket
                      destinationObject:(NSString *)destinationObject {
  GTLRStorageQuery_ObjectsCopy *query =
    [self queryWithObject:object
             sourceBucket:sourceBucket
             sourceObject:sourceObject
        destinationBucket:destinationBucket
        destinationObject:destinationObject];
  query.downloadAsDataObjectType = @"media";
  query.useMediaDownloadService = YES;
  query.loggingName = @"Download storage.objects.copy";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectsDelete

@dynamic bucket, generation, ifGenerationMatch, ifGenerationNotMatch,
         ifMetagenerationMatch, ifMetagenerationNotMatch, object;

+ (instancetype)queryWithBucket:(NSString *)bucket
                         object:(NSString *)object_param {
  NSArray *pathParams = @[
    @"bucket", @"object"
  ];
  NSString *pathURITemplate = @"b/{bucket}/o/{object}";
  GTLRStorageQuery_ObjectsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.object = object_param;
  query.loggingName = @"storage.objects.delete";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectsGet

@dynamic bucket, generation, ifGenerationMatch, ifGenerationNotMatch,
         ifMetagenerationMatch, ifMetagenerationNotMatch, object, projection;

+ (instancetype)queryWithBucket:(NSString *)bucket
                         object:(NSString *)object_param {
  NSArray *pathParams = @[
    @"bucket", @"object"
  ];
  NSString *pathURITemplate = @"b/{bucket}/o/{object}";
  GTLRStorageQuery_ObjectsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.object = object_param;
  query.expectedObjectClass = [GTLRStorage_Object class];
  query.loggingName = @"storage.objects.get";
  return query;
}

+ (instancetype)queryForMediaWithBucket:(NSString *)bucket
                                 object:(NSString *)object_param {
  GTLRStorageQuery_ObjectsGet *query =
    [self queryWithBucket:bucket
                   object:object_param];
  query.downloadAsDataObjectType = @"media";
  query.useMediaDownloadService = YES;
  query.loggingName = @"Download storage.objects.get";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectsInsert

@dynamic bucket, contentEncoding, ifGenerationMatch, ifGenerationNotMatch,
         ifMetagenerationMatch, ifMetagenerationNotMatch, name, predefinedAcl,
         projection;

+ (instancetype)queryWithObject:(GTLRStorage_Object *)object
                         bucket:(NSString *)bucket
               uploadParameters:(GTLRUploadParameters *)uploadParameters {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}/o";
  GTLRStorageQuery_ObjectsInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.uploadParameters = uploadParameters;
  query.expectedObjectClass = [GTLRStorage_Object class];
  query.loggingName = @"storage.objects.insert";
  return query;
}

+ (instancetype)queryForMediaWithObject:(GTLRStorage_Object *)object
                                 bucket:(NSString *)bucket
                       uploadParameters:(GTLRUploadParameters *)uploadParameters {
  GTLRStorageQuery_ObjectsInsert *query =
    [self queryWithObject:object
                   bucket:bucket
         uploadParameters:uploadParameters];
  query.downloadAsDataObjectType = @"media";
  query.useMediaDownloadService = YES;
  query.loggingName = @"Download storage.objects.insert";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectsList

@dynamic bucket, delimiter, maxResults, pageToken, prefix, projection, versions;

+ (instancetype)queryWithBucket:(NSString *)bucket {
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}/o";
  GTLRStorageQuery_ObjectsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bucket = bucket;
  query.expectedObjectClass = [GTLRStorage_Objects class];
  query.loggingName = @"storage.objects.list";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectsPatch

@dynamic bucket, generation, ifGenerationMatch, ifGenerationNotMatch,
         ifMetagenerationMatch, ifMetagenerationNotMatch, object, predefinedAcl,
         projection;

+ (instancetype)queryWithObject:(GTLRStorage_Object *)object
                         bucket:(NSString *)bucket
                         object:(NSString *)object_param {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"bucket", @"object"
  ];
  NSString *pathURITemplate = @"b/{bucket}/o/{object}";
  GTLRStorageQuery_ObjectsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.object = object_param;
  query.expectedObjectClass = [GTLRStorage_Object class];
  query.loggingName = @"storage.objects.patch";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectsRewrite

@dynamic destinationBucket, destinationObject, destinationPredefinedAcl,
         ifGenerationMatch, ifGenerationNotMatch, ifMetagenerationMatch,
         ifMetagenerationNotMatch, ifSourceGenerationMatch,
         ifSourceGenerationNotMatch, ifSourceMetagenerationMatch,
         ifSourceMetagenerationNotMatch, maxBytesRewrittenPerCall, projection,
         rewriteToken, sourceBucket, sourceGeneration, sourceObject;

+ (instancetype)queryWithObject:(GTLRStorage_Object *)object
                   sourceBucket:(NSString *)sourceBucket
                   sourceObject:(NSString *)sourceObject
              destinationBucket:(NSString *)destinationBucket
              destinationObject:(NSString *)destinationObject {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"destinationBucket", @"destinationObject", @"sourceBucket",
    @"sourceObject"
  ];
  NSString *pathURITemplate = @"b/{sourceBucket}/o/{sourceObject}/rewriteTo/b/{destinationBucket}/o/{destinationObject}";
  GTLRStorageQuery_ObjectsRewrite *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.sourceBucket = sourceBucket;
  query.sourceObject = sourceObject;
  query.destinationBucket = destinationBucket;
  query.destinationObject = destinationObject;
  query.expectedObjectClass = [GTLRStorage_RewriteResponse class];
  query.loggingName = @"storage.objects.rewrite";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectsUpdate

@dynamic bucket, generation, ifGenerationMatch, ifGenerationNotMatch,
         ifMetagenerationMatch, ifMetagenerationNotMatch, object, predefinedAcl,
         projection;

+ (instancetype)queryWithObject:(GTLRStorage_Object *)object
                         bucket:(NSString *)bucket
                         object:(NSString *)object_param {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"bucket", @"object"
  ];
  NSString *pathURITemplate = @"b/{bucket}/o/{object}";
  GTLRStorageQuery_ObjectsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.object = object_param;
  query.expectedObjectClass = [GTLRStorage_Object class];
  query.loggingName = @"storage.objects.update";
  return query;
}

+ (instancetype)queryForMediaWithObject:(GTLRStorage_Object *)object
                                 bucket:(NSString *)bucket
                                 object:(NSString *)object_param {
  GTLRStorageQuery_ObjectsUpdate *query =
    [self queryWithObject:object
                   bucket:bucket
                   object:object_param];
  query.downloadAsDataObjectType = @"media";
  query.useMediaDownloadService = YES;
  query.loggingName = @"Download storage.objects.update";
  return query;
}

@end

@implementation GTLRStorageQuery_ObjectsWatchAll

@dynamic bucket, delimiter, maxResults, pageToken, prefix, projection, versions;

+ (instancetype)queryWithObject:(GTLRStorage_Channel *)object
                         bucket:(NSString *)bucket {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"bucket" ];
  NSString *pathURITemplate = @"b/{bucket}/o/watch";
  GTLRStorageQuery_ObjectsWatchAll *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.bucket = bucket;
  query.expectedObjectClass = [GTLRStorage_Channel class];
  query.loggingName = @"storage.objects.watchAll";
  return query;
}

@end
