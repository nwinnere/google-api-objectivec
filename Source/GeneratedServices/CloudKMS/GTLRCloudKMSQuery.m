// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Key Management Service (KMS) API (cloudkms/v1)
// Description:
//   Manages encryption for your cloud services the same way you do on-premises.
//   You can generate, use, rotate, and destroy AES256 encryption keys.
// Documentation:
//   https://cloud.google.com/kms/

#import "GTLRCloudKMSQuery.h"

#import "GTLRCloudKMSObjects.h"

@implementation GTLRCloudKMSQuery

@dynamic fields;

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudKMSQuery_ProjectsLocationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_Location class];
  query.loggingName = @"cloudkms.projects.locations.get";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCreate

@dynamic keyRingId, parent;

+ (instancetype)queryWithObject:(GTLRCloudKMS_KeyRing *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/keyRings";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudKMS_KeyRing class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.create";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCreate

@dynamic cryptoKeyId, parent;

+ (instancetype)queryWithObject:(GTLRCloudKMS_CryptoKey *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/cryptoKeys";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudKMS_CryptoKey class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.create";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRCloudKMS_CryptoKeyVersion *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/cryptoKeyVersions";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudKMS_CryptoKeyVersion class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.create";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsDestroy

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudKMS_DestroyCryptoKeyVersionRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:destroy";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsDestroy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_CryptoKeyVersion class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.destroy";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_CryptoKeyVersion class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.get";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/cryptoKeyVersions";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudKMS_ListCryptoKeyVersionsResponse class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.list";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudKMS_CryptoKeyVersion *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_CryptoKeyVersion class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.patch";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsRestore

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudKMS_RestoreCryptoKeyVersionRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:restore";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysCryptoKeyVersionsRestore *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_CryptoKeyVersion class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.cryptoKeyVersions.restore";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysDecrypt

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudKMS_DecryptRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:decrypt";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysDecrypt *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_DecryptResponse class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.decrypt";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysEncrypt

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudKMS_EncryptRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:encrypt";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysEncrypt *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_EncryptResponse class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.encrypt";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_CryptoKey class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.get";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysGetIamPolicy

@dynamic resource;

+ (instancetype)queryWithResource:(NSString *)resource {
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:getIamPolicy";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudKMS_Policy class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.getIamPolicy";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/cryptoKeys";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudKMS_ListCryptoKeysResponse class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.list";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudKMS_CryptoKey *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_CryptoKey class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.patch";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRCloudKMS_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:setIamPolicy";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudKMS_Policy class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.setIamPolicy";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRCloudKMS_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:testIamPermissions";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudKMS_TestIamPermissionsResponse class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.testIamPermissions";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysUpdatePrimaryVersion

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudKMS_UpdateCryptoKeyPrimaryVersionRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:updatePrimaryVersion";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsCryptoKeysUpdatePrimaryVersion *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_CryptoKey class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.cryptoKeys.updatePrimaryVersion";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_KeyRing class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.get";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsGetIamPolicy

@dynamic resource;

+ (instancetype)queryWithResource:(NSString *)resource {
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:getIamPolicy";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudKMS_Policy class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.getIamPolicy";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/keyRings";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudKMS_ListKeyRingsResponse class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.list";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRCloudKMS_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:setIamPolicy";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudKMS_Policy class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.setIamPolicy";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsKeyRingsTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRCloudKMS_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:testIamPermissions";
  GTLRCloudKMSQuery_ProjectsLocationsKeyRingsTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudKMS_TestIamPermissionsResponse class];
  query.loggingName = @"cloudkms.projects.locations.keyRings.testIamPermissions";
  return query;
}

@end

@implementation GTLRCloudKMSQuery_ProjectsLocationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/locations";
  GTLRCloudKMSQuery_ProjectsLocationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudKMS_ListLocationsResponse class];
  query.loggingName = @"cloudkms.projects.locations.list";
  return query;
}

@end
