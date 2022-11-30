// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Hosting API (firebasehosting/v1beta1)
// Description:
//   The Firebase Hosting REST API enables programmatic and customizable
//   deployments to your Firebase-hosted sites. Use this REST API to deploy new
//   or updated hosting configurations and content files.
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

@implementation GTLRFirebaseHostingQuery_ProjectsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_ProjectsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Operation class];
  query.loggingName = @"firebasehosting.projects.operations.get";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesChannelsReleasesCreate

@dynamic parent, versionName;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Release *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/releases";
  GTLRFirebaseHostingQuery_ProjectsSitesChannelsReleasesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_Release class];
  query.loggingName = @"firebasehosting.projects.sites.channels.releases.create";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesChannelsReleasesList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/releases";
  GTLRFirebaseHostingQuery_ProjectsSitesChannelsReleasesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_ListReleasesResponse class];
  query.loggingName = @"firebasehosting.projects.sites.channels.releases.list";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesDomainsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Domain *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/domains";
  GTLRFirebaseHostingQuery_ProjectsSitesDomainsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_Domain class];
  query.loggingName = @"firebasehosting.projects.sites.domains.create";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesDomainsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_ProjectsSitesDomainsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Empty class];
  query.loggingName = @"firebasehosting.projects.sites.domains.delete";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesDomainsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_ProjectsSitesDomainsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Domain class];
  query.loggingName = @"firebasehosting.projects.sites.domains.get";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesDomainsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/domains";
  GTLRFirebaseHostingQuery_ProjectsSitesDomainsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_ListDomainsResponse class];
  query.loggingName = @"firebasehosting.projects.sites.domains.list";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesDomainsUpdate

@dynamic name;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Domain *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_ProjectsSitesDomainsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Domain class];
  query.loggingName = @"firebasehosting.projects.sites.domains.update";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesGetConfig

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_ProjectsSitesGetConfig *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_SiteConfig class];
  query.loggingName = @"firebasehosting.projects.sites.getConfig";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesReleasesCreate

@dynamic parent, versionName;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Release *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/releases";
  GTLRFirebaseHostingQuery_ProjectsSitesReleasesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_Release class];
  query.loggingName = @"firebasehosting.projects.sites.releases.create";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesReleasesList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/releases";
  GTLRFirebaseHostingQuery_ProjectsSitesReleasesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_ListReleasesResponse class];
  query.loggingName = @"firebasehosting.projects.sites.releases.list";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesUpdateConfig

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_SiteConfig *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_ProjectsSitesUpdateConfig *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_SiteConfig class];
  query.loggingName = @"firebasehosting.projects.sites.updateConfig";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesVersionsClone

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_CloneVersionRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/versions:clone";
  GTLRFirebaseHostingQuery_ProjectsSitesVersionsClone *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_Operation class];
  query.loggingName = @"firebasehosting.projects.sites.versions.clone";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesVersionsCreate

@dynamic parent, sizeBytes, versionId;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Version *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/versions";
  GTLRFirebaseHostingQuery_ProjectsSitesVersionsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_Version class];
  query.loggingName = @"firebasehosting.projects.sites.versions.create";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesVersionsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_ProjectsSitesVersionsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Empty class];
  query.loggingName = @"firebasehosting.projects.sites.versions.delete";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesVersionsFilesList

@dynamic pageSize, pageToken, parent, status;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/files";
  GTLRFirebaseHostingQuery_ProjectsSitesVersionsFilesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_ListVersionFilesResponse class];
  query.loggingName = @"firebasehosting.projects.sites.versions.files.list";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesVersionsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/versions";
  GTLRFirebaseHostingQuery_ProjectsSitesVersionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_ListVersionsResponse class];
  query.loggingName = @"firebasehosting.projects.sites.versions.list";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesVersionsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Version *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRFirebaseHostingQuery_ProjectsSitesVersionsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRFirebaseHosting_Version class];
  query.loggingName = @"firebasehosting.projects.sites.versions.patch";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_ProjectsSitesVersionsPopulateFiles

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_PopulateVersionFilesRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}:populateFiles";
  GTLRFirebaseHostingQuery_ProjectsSitesVersionsPopulateFiles *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_PopulateVersionFilesResponse class];
  query.loggingName = @"firebasehosting.projects.sites.versions.populateFiles";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesChannelsReleasesCreate

@dynamic parent, versionName;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_Release *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/releases";
  GTLRFirebaseHostingQuery_SitesChannelsReleasesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_Release class];
  query.loggingName = @"firebasehosting.sites.channels.releases.create";
  return query;
}

@end

@implementation GTLRFirebaseHostingQuery_SitesChannelsReleasesList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/releases";
  GTLRFirebaseHostingQuery_SitesChannelsReleasesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_ListReleasesResponse class];
  query.loggingName = @"firebasehosting.sites.channels.releases.list";
  return query;
}

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

@implementation GTLRFirebaseHostingQuery_SitesVersionsClone

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRFirebaseHosting_CloneVersionRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/versions:clone";
  GTLRFirebaseHostingQuery_SitesVersionsClone *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_Operation class];
  query.loggingName = @"firebasehosting.sites.versions.clone";
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

@implementation GTLRFirebaseHostingQuery_SitesVersionsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/versions";
  GTLRFirebaseHostingQuery_SitesVersionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRFirebaseHosting_ListVersionsResponse class];
  query.loggingName = @"firebasehosting.sites.versions.list";
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
