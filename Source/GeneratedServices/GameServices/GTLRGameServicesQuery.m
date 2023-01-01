// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Game Services API (gameservices/v1beta)
// Description:
//   Deploy and manage infrastructure for global multiplayer gaming experiences.
// Documentation:
//   https://cloud.google.com/solutions/gaming/

#import "GTLRGameServicesQuery.h"

#import "GTLRGameServicesObjects.h"

@implementation GTLRGameServicesQuery

@dynamic fields;

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsConfigsCreate

@dynamic configId, parent;

+ (instancetype)queryWithObject:(GTLRGameServices_GameServerConfig *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/configs";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsConfigsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.configs.create";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsConfigsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsConfigsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.configs.delete";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsConfigsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsConfigsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_GameServerConfig class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.configs.get";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsConfigsList

@dynamic filter, orderBy, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/configs";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsConfigsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRGameServices_ListGameServerConfigsResponse class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.configs.list";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsCreate

@dynamic deploymentId, parent;

+ (instancetype)queryWithObject:(GTLRGameServices_GameServerDeployment *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/gameServerDeployments";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.create";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.delete";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsFetchDeploymentState

@dynamic name;

+ (instancetype)queryWithObject:(GTLRGameServices_FetchDeploymentStateRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}:fetchDeploymentState";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsFetchDeploymentState *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_FetchDeploymentStateResponse class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.fetchDeploymentState";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_GameServerDeployment class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.get";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsGetIamPolicy

@dynamic optionsRequestedPolicyVersion, resource;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"optionsRequestedPolicyVersion" : @"options.requestedPolicyVersion" };
}

+ (instancetype)queryWithResource:(NSString *)resource {
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1beta/{+resource}:getIamPolicy";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resource = resource;
  query.expectedObjectClass = [GTLRGameServices_Policy class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.getIamPolicy";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsGetRollout

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}/rollout";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsGetRollout *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_GameServerDeploymentRollout class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.getRollout";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsList

@dynamic filter, orderBy, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/gameServerDeployments";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRGameServices_ListGameServerDeploymentsResponse class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.list";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRGameServices_GameServerDeployment *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.patch";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsPreviewRollout

@dynamic name, previewTime, updateMask;

+ (instancetype)queryWithObject:(GTLRGameServices_GameServerDeploymentRollout *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}/rollout:preview";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsPreviewRollout *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_PreviewGameServerDeploymentRolloutResponse class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.previewRollout";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRGameServices_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1beta/{+resource}:setIamPolicy";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRGameServices_Policy class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.setIamPolicy";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRGameServices_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1beta/{+resource}:testIamPermissions";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRGameServices_TestIamPermissionsResponse class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.testIamPermissions";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsUpdateRollout

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRGameServices_GameServerDeploymentRollout *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}/rollout";
  GTLRGameServicesQuery_ProjectsLocationsGameServerDeploymentsUpdateRollout *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.gameServerDeployments.updateRollout";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Location class];
  query.loggingName = @"gameservices.projects.locations.get";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsList

@dynamic filter, includeUnrevealedLocations, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}/locations";
  GTLRGameServicesQuery_ProjectsLocationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_ListLocationsResponse class];
  query.loggingName = @"gameservices.projects.locations.list";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsOperationsCancel

@dynamic name;

+ (instancetype)queryWithObject:(GTLRGameServices_CancelOperationRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}:cancel";
  GTLRGameServicesQuery_ProjectsLocationsOperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Empty class];
  query.loggingName = @"gameservices.projects.locations.operations.cancel";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsOperationsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsOperationsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Empty class];
  query.loggingName = @"gameservices.projects.locations.operations.delete";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.operations.get";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}/operations";
  GTLRGameServicesQuery_ProjectsLocationsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_ListOperationsResponse class];
  query.loggingName = @"gameservices.projects.locations.operations.list";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsCreate

@dynamic parent, realmId;

+ (instancetype)queryWithObject:(GTLRGameServices_Realm *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/realms";
  GTLRGameServicesQuery_ProjectsLocationsRealmsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.realms.create";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsRealmsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.realms.delete";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersCreate

@dynamic gameServerClusterId, parent;

+ (instancetype)queryWithObject:(GTLRGameServices_GameServerCluster *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/gameServerClusters";
  GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.realms.gameServerClusters.create";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.realms.gameServerClusters.delete";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_GameServerCluster class];
  query.loggingName = @"gameservices.projects.locations.realms.gameServerClusters.get";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersList

@dynamic filter, orderBy, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/gameServerClusters";
  GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRGameServices_ListGameServerClustersResponse class];
  query.loggingName = @"gameservices.projects.locations.realms.gameServerClusters.list";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRGameServices_GameServerCluster *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.realms.gameServerClusters.patch";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersPreviewCreate

@dynamic gameServerClusterId, parent, previewTime;

+ (instancetype)queryWithObject:(GTLRGameServices_GameServerCluster *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/gameServerClusters:previewCreate";
  GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersPreviewCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRGameServices_PreviewCreateGameServerClusterResponse class];
  query.loggingName = @"gameservices.projects.locations.realms.gameServerClusters.previewCreate";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersPreviewDelete

@dynamic name, previewTime;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}:previewDelete";
  GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersPreviewDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_PreviewDeleteGameServerClusterResponse class];
  query.loggingName = @"gameservices.projects.locations.realms.gameServerClusters.previewDelete";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersPreviewUpdate

@dynamic name, previewTime, updateMask;

+ (instancetype)queryWithObject:(GTLRGameServices_GameServerCluster *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}:previewUpdate";
  GTLRGameServicesQuery_ProjectsLocationsRealmsGameServerClustersPreviewUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_PreviewUpdateGameServerClusterResponse class];
  query.loggingName = @"gameservices.projects.locations.realms.gameServerClusters.previewUpdate";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsRealmsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Realm class];
  query.loggingName = @"gameservices.projects.locations.realms.get";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsList

@dynamic filter, orderBy, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/realms";
  GTLRGameServicesQuery_ProjectsLocationsRealmsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRGameServices_ListRealmsResponse class];
  query.loggingName = @"gameservices.projects.locations.realms.list";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRGameServices_Realm *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRGameServicesQuery_ProjectsLocationsRealmsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_Operation class];
  query.loggingName = @"gameservices.projects.locations.realms.patch";
  return query;
}

@end

@implementation GTLRGameServicesQuery_ProjectsLocationsRealmsPreviewUpdate

@dynamic name, previewTime, updateMask;

+ (instancetype)queryWithObject:(GTLRGameServices_Realm *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}:previewUpdate";
  GTLRGameServicesQuery_ProjectsLocationsRealmsPreviewUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRGameServices_PreviewRealmUpdateResponse class];
  query.loggingName = @"gameservices.projects.locations.realms.previewUpdate";
  return query;
}

@end
