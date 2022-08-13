// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Hosting API (firebasehosting/v1beta1)
// Description:
//   The Firebase Hosting REST API enables programmatic custom deployment for
//   releasing versions of your Firebase hosted content and configuration files.
// Documentation:
//   https://firebase.google.com/docs/hosting/

#import "GTLRFirebaseHostingQuery.h"

#import "GTLRFirebaseHostingObjects.h"

// ----------------------------------------------------------------------------
// Constants

// status
NSString * const kGTLRFirebaseHostingStatusActive            = @"ACTIVE";
NSString * const kGTLRFirebaseHostingStatusExpected          = @"EXPECTED";
NSString * const kGTLRFirebaseHostingStatusStatusUnspecified = @"STATUS_UNSPECIFIED";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRFirebaseHostingQuery

@dynamic fields;

@end

@implementation GTLRFirebaseHostingQuery_SitesDomainsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Domain *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/domains";
  GTLRFirebaseHostingQuery_SitesDomainsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_Domain class];
  query.loggingName = @"firebasehosting.sites.domains.create";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesDomainsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_SitesDomainsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Empty class];
  query.loggingName = @"firebasehosting.sites.domains.delete";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesDomainsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_SitesDomainsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Domain class];
  query.loggingName = @"firebasehosting.sites.domains.get";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesDomainsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/domains";
  GTLRFirebaseHostingQuery_SitesDomainsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_ListDomainsResponse class];
  query.loggingName = @"firebasehosting.sites.domains.list";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesDomainsUpdate

@dynamic name;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Domain *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_SitesDomainsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Domain class];
  query.loggingName = @"firebasehosting.sites.domains.update";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesGetConfig

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_SitesGetConfig *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_SiteConfig class];
  query.loggingName = @"firebasehosting.sites.getConfig";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesReleasesCreate

@dynamic parent, versionName;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Release *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/releases";
  GTLRFirebaseHostingQuery_SitesReleasesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_Release class];
  query.loggingName = @"firebasehosting.sites.releases.create";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesReleasesList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/releases";
  GTLRFirebaseHostingQuery_SitesReleasesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_ListReleasesResponse class];
  query.loggingName = @"firebasehosting.sites.releases.list";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesUpdateConfig

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_SiteConfig *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_SitesUpdateConfig *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_SiteConfig class];
  query.loggingName = @"firebasehosting.sites.updateConfig";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesVersionsCreate

@dynamic parent, sizeBytes, versionId;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Version *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/versions";
  GTLRFirebaseHostingQuery_SitesVersionsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_Version class];
  query.loggingName = @"firebasehosting.sites.versions.create";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesVersionsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_SitesVersionsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Empty class];
  query.loggingName = @"firebasehosting.sites.versions.delete";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesVersionsFilesList

@dynamic pageSize, pageToken, parent, status;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/files";
  GTLRFirebaseHostingQuery_SitesVersionsFilesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_ListVersionFilesResponse class];
  query.loggingName = @"firebasehosting.sites.versions.files.list";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesVersionsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Version *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_SitesVersionsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Version class];
  query.loggingName = @"firebasehosting.sites.versions.patch";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesVersionsPopulateFiles

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_PopulateVersionFilesRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}:populateFiles";
  GTLRFirebaseHostingQuery_SitesVersionsPopulateFiles *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_PopulateVersionFilesResponse class];
  query.loggingName = @"firebasehosting.sites.versions.populateFiles";
  return query;
}

@end
