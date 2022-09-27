// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Storage JSON API (storage/v1)
// Description:
//   Stores and retrieves potentially large, immutable data objects.
// Documentation:
//   https://developers.google.com/storage/docs/json_api/

#import "GTLRStorageObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket
//

@implementation GTLRStorage_Bucket
@dynamic acl, billing, cors, defaultEventBasedHold, defaultObjectAcl,
         encryption, ETag, iamConfiguration, identifier, kind, labels,
         lifecycle, location, locationType, logging, metageneration, name,
         owner, projectNumber, retentionPolicy, selfLink, storageClass,
         timeCreated, updated, versioning, website;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"acl" : [GTLRStorage_BucketAccessControl class],
    @"cors" : [GTLRStorage_Bucket_Cors_Item class],
    @"defaultObjectAcl" : [GTLRStorage_ObjectAccessControl class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Billing
//

@implementation GTLRStorage_Bucket_Billing
@dynamic requesterPays;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Cors_Item
//

@implementation GTLRStorage_Bucket_Cors_Item
@dynamic maxAgeSeconds, method, origin, responseHeader;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"method" : [NSString class],
    @"origin" : [NSString class],
    @"responseHeader" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Encryption
//

@implementation GTLRStorage_Bucket_Encryption
@dynamic defaultKmsKeyName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_IamConfiguration
//

@implementation GTLRStorage_Bucket_IamConfiguration
@dynamic bucketPolicyOnly;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Labels
//

@implementation GTLRStorage_Bucket_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Lifecycle
//

@implementation GTLRStorage_Bucket_Lifecycle
@dynamic rule;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rule" : [GTLRStorage_Bucket_Lifecycle_Rule_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Logging
//

@implementation GTLRStorage_Bucket_Logging
@dynamic logBucket, logObjectPrefix;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Owner
//

@implementation GTLRStorage_Bucket_Owner
@dynamic entity, entityId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_RetentionPolicy
//

@implementation GTLRStorage_Bucket_RetentionPolicy
@dynamic effectiveTime, isLocked, retentionPeriod;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Versioning
//

@implementation GTLRStorage_Bucket_Versioning
@dynamic enabled;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Website
//

@implementation GTLRStorage_Bucket_Website
@dynamic mainPageSuffix, notFoundPage;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_IamConfiguration_BucketPolicyOnly
//

@implementation GTLRStorage_Bucket_IamConfiguration_BucketPolicyOnly
@dynamic enabled, lockedTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Lifecycle_Rule_Item
//

@implementation GTLRStorage_Bucket_Lifecycle_Rule_Item
@dynamic action, condition;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Lifecycle_Rule_Item_Action
//

@implementation GTLRStorage_Bucket_Lifecycle_Rule_Item_Action
@dynamic storageClass, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Bucket_Lifecycle_Rule_Item_Condition
//

@implementation GTLRStorage_Bucket_Lifecycle_Rule_Item_Condition
@dynamic age, createdBefore, isLive, matchesPattern, matchesStorageClass,
         numNewerVersions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"matchesStorageClass" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_BucketAccessControl
//

@implementation GTLRStorage_BucketAccessControl
@dynamic bucket, domain, email, entity, entityId, ETag, identifier, kind,
         projectTeam, role, selfLink;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_BucketAccessControl_ProjectTeam
//

@implementation GTLRStorage_BucketAccessControl_ProjectTeam
@dynamic projectNumber, team;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_BucketAccessControls
//

@implementation GTLRStorage_BucketAccessControls
@dynamic items, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRStorage_BucketAccessControl class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Buckets
//

@implementation GTLRStorage_Buckets
@dynamic items, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRStorage_Bucket class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Channel
//

@implementation GTLRStorage_Channel
@dynamic address, expiration, identifier, kind, params, payload, resourceId,
         resourceUri, token, type;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Channel_Params
//

@implementation GTLRStorage_Channel_Params

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_ComposeRequest
//

@implementation GTLRStorage_ComposeRequest
@dynamic destination, kind, sourceObjects;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sourceObjects" : [GTLRStorage_ComposeRequest_SourceObjects_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_ComposeRequest_SourceObjects_Item
//

@implementation GTLRStorage_ComposeRequest_SourceObjects_Item
@dynamic generation, name, objectPreconditions;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_ComposeRequest_SourceObjects_Item_ObjectPreconditions
//

@implementation GTLRStorage_ComposeRequest_SourceObjects_Item_ObjectPreconditions
@dynamic ifGenerationMatch;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Expr
//

@implementation GTLRStorage_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_HmacKey
//

@implementation GTLRStorage_HmacKey
@dynamic kind, metadata, secret;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_HmacKeyMetadata
//

@implementation GTLRStorage_HmacKeyMetadata
@dynamic accessId, ETag, identifier, kind, projectId, selfLink,
         serviceAccountEmail, state, timeCreated, updated;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_HmacKeysMetadata
//

@implementation GTLRStorage_HmacKeysMetadata
@dynamic items, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRStorage_HmacKeyMetadata class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Notification
//

@implementation GTLRStorage_Notification
@dynamic customAttributes, ETag, eventTypes, identifier, kind, objectNamePrefix,
         payloadFormat, selfLink, topic;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"customAttributes" : @"custom_attributes",
    @"ETag" : @"etag",
    @"eventTypes" : @"event_types",
    @"identifier" : @"id",
    @"objectNamePrefix" : @"object_name_prefix",
    @"payloadFormat" : @"payload_format"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"event_types" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Notification_CustomAttributes
//

@implementation GTLRStorage_Notification_CustomAttributes

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Notifications
//

@implementation GTLRStorage_Notifications
@dynamic items, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRStorage_Notification class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Object
//

@implementation GTLRStorage_Object
@dynamic acl, bucket, cacheControl, componentCount, contentDisposition,
         contentEncoding, contentLanguage, contentType, crc32c,
         customerEncryption, ETag, eventBasedHold, generation, identifier, kind,
         kmsKeyName, md5Hash, mediaLink, metadata, metageneration, name, owner,
         retentionExpirationTime, selfLink, size, storageClass, temporaryHold,
         timeCreated, timeDeleted, timeStorageClassUpdated, updated;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"acl" : [GTLRStorage_ObjectAccessControl class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Object_CustomerEncryption
//

@implementation GTLRStorage_Object_CustomerEncryption
@dynamic encryptionAlgorithm, keySha256;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Object_Metadata
//

@implementation GTLRStorage_Object_Metadata

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Object_Owner
//

@implementation GTLRStorage_Object_Owner
@dynamic entity, entityId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_ObjectAccessControl
//

@implementation GTLRStorage_ObjectAccessControl
@dynamic bucket, domain, email, entity, entityId, ETag, generation, identifier,
         kind, object, projectTeam, role, selfLink;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_ObjectAccessControl_ProjectTeam
//

@implementation GTLRStorage_ObjectAccessControl_ProjectTeam
@dynamic projectNumber, team;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_ObjectAccessControls
//

@implementation GTLRStorage_ObjectAccessControls
@dynamic items, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRStorage_ObjectAccessControl class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Objects
//

@implementation GTLRStorage_Objects
@dynamic items, kind, nextPageToken, prefixes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRStorage_Object class],
    @"prefixes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Policy
//

@implementation GTLRStorage_Policy
@dynamic bindings, ETag, kind, resourceId;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bindings" : [GTLRStorage_Policy_Bindings_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_Policy_Bindings_Item
//

@implementation GTLRStorage_Policy_Bindings_Item
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
//   GTLRStorage_RewriteResponse
//

@implementation GTLRStorage_RewriteResponse
@dynamic done, kind, objectSize, resource, rewriteToken, totalBytesRewritten;
@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_ServiceAccount
//

@implementation GTLRStorage_ServiceAccount
@dynamic emailAddress, kind;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"emailAddress" : @"email_address" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRStorage_TestIamPermissionsResponse
//

@implementation GTLRStorage_TestIamPermissionsResponse
@dynamic kind, permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end
