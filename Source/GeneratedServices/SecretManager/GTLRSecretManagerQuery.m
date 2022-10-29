// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Secret Manager API (secretmanager/v1beta1)
// Description:
//   Stores, manages, and secures access to application secrets.
// Documentation:
//   https://cloud.google.com/secret-manager/

#import "GTLRSecretManagerQuery.h"

#import "GTLRSecretManagerObjects.h"

@implementation GTLRSecretManagerQuery

@dynamic fields;

@end

@implementation GTLRSecretManagerQuery_ProjectsLocationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRSecretManagerQuery_ProjectsLocationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRSecretManager_Location class];
  query.loggingName = @"secretmanager.projects.locations.get";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsLocationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}/locations";
  GTLRSecretManagerQuery_ProjectsLocationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRSecretManager_ListLocationsResponse class];
  query.loggingName = @"secretmanager.projects.locations.list";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsAddVersion

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRSecretManager_AddSecretVersionRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}:addVersion";
  GTLRSecretManagerQuery_ProjectsSecretsAddVersion *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRSecretManager_SecretVersion class];
  query.loggingName = @"secretmanager.projects.secrets.addVersion";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsCreate

@dynamic parent, secretId;

+ (instancetype)queryWithObject:(GTLRSecretManager_Secret *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/secrets";
  GTLRSecretManagerQuery_ProjectsSecretsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRSecretManager_Secret class];
  query.loggingName = @"secretmanager.projects.secrets.create";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRSecretManagerQuery_ProjectsSecretsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRSecretManager_Empty class];
  query.loggingName = @"secretmanager.projects.secrets.delete";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRSecretManagerQuery_ProjectsSecretsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRSecretManager_Secret class];
  query.loggingName = @"secretmanager.projects.secrets.get";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsGetIamPolicy

@dynamic optionsRequestedPolicyVersion, resource;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"optionsRequestedPolicyVersion" : @"options.requestedPolicyVersion" };
}

+ (instancetype)queryWithResource:(NSString *)resource {
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1beta1/{+resource}:getIamPolicy";
  GTLRSecretManagerQuery_ProjectsSecretsGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resource = resource;
  query.expectedObjectClass = [GTLRSecretManager_Policy class];
  query.loggingName = @"secretmanager.projects.secrets.getIamPolicy";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/secrets";
  GTLRSecretManagerQuery_ProjectsSecretsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRSecretManager_ListSecretsResponse class];
  query.loggingName = @"secretmanager.projects.secrets.list";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRSecretManager_Secret *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRSecretManagerQuery_ProjectsSecretsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRSecretManager_Secret class];
  query.loggingName = @"secretmanager.projects.secrets.patch";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRSecretManager_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1beta1/{+resource}:setIamPolicy";
  GTLRSecretManagerQuery_ProjectsSecretsSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRSecretManager_Policy class];
  query.loggingName = @"secretmanager.projects.secrets.setIamPolicy";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRSecretManager_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1beta1/{+resource}:testIamPermissions";
  GTLRSecretManagerQuery_ProjectsSecretsTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRSecretManager_TestIamPermissionsResponse class];
  query.loggingName = @"secretmanager.projects.secrets.testIamPermissions";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsVersionsAccess

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}:access";
  GTLRSecretManagerQuery_ProjectsSecretsVersionsAccess *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRSecretManager_AccessSecretVersionResponse class];
  query.loggingName = @"secretmanager.projects.secrets.versions.access";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsVersionsDestroy

@dynamic name;

+ (instancetype)queryWithObject:(GTLRSecretManager_DestroySecretVersionRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}:destroy";
  GTLRSecretManagerQuery_ProjectsSecretsVersionsDestroy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRSecretManager_SecretVersion class];
  query.loggingName = @"secretmanager.projects.secrets.versions.destroy";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsVersionsDisable

@dynamic name;

+ (instancetype)queryWithObject:(GTLRSecretManager_DisableSecretVersionRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}:disable";
  GTLRSecretManagerQuery_ProjectsSecretsVersionsDisable *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRSecretManager_SecretVersion class];
  query.loggingName = @"secretmanager.projects.secrets.versions.disable";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsVersionsEnable

@dynamic name;

+ (instancetype)queryWithObject:(GTLRSecretManager_EnableSecretVersionRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}:enable";
  GTLRSecretManagerQuery_ProjectsSecretsVersionsEnable *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRSecretManager_SecretVersion class];
  query.loggingName = @"secretmanager.projects.secrets.versions.enable";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsVersionsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRSecretManagerQuery_ProjectsSecretsVersionsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRSecretManager_SecretVersion class];
  query.loggingName = @"secretmanager.projects.secrets.versions.get";
  return query;
}

@end

@implementation GTLRSecretManagerQuery_ProjectsSecretsVersionsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/versions";
  GTLRSecretManagerQuery_ProjectsSecretsVersionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRSecretManager_ListSecretVersionsResponse class];
  query.loggingName = @"secretmanager.projects.secrets.versions.list";
  return query;
}

@end
