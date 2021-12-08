// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Compute Engine Instance Group Updater API (replicapoolupdater/v1beta1)
// Description:
//   [Deprecated. Please use compute.instanceGroupManagers.update method.
//   replicapoolupdater API will be disabled after December 30th, 2016] Updates
//   groups of Compute Engine instances.
// Documentation:
//   https://cloud.google.com/compute/docs/instance-groups/manager/#applying_rolling_updates_using_the_updater_service

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRReplicapoolupdater_RollingUpdate;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Replicapoolupdater query classes.
 */
@interface GTLRReplicapoolupdaterQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Cancels an update. The update must be PAUSED before it can be cancelled.
 *  This has no effect if the update is already CANCELLED.
 *
 *  Method: replicapoolupdater.rollingUpdates.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatform
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapool
 */
@interface GTLRReplicapoolupdaterQuery_RollingUpdatesCancel : GTLRReplicapoolupdaterQuery
// Previous library name was
//   +[GTLQueryReplicapoolupdater queryForRollingUpdatesCancelWithproject:zoneProperty:rollingUpdate:]

/** The Google Developers Console project name. */
@property(nonatomic, copy, nullable) NSString *project;

/** The name of the update. */
@property(nonatomic, copy, nullable) NSString *rollingUpdate;

/**
 *  The name of the zone in which the update's target resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRReplicapoolupdater_Operation.
 *
 *  Cancels an update. The update must be PAUSED before it can be cancelled.
 *  This has no effect if the update is already CANCELLED.
 *
 *  @param project The Google Developers Console project name.
 *  @param zoneProperty The name of the zone in which the update's target
 *    resides.
 *  @param rollingUpdate The name of the update.
 *
 *  @returns GTLRReplicapoolupdaterQuery_RollingUpdatesCancel
 */
+ (instancetype)queryWithProject:(NSString *)project
                    zoneProperty:(NSString *)zoneProperty
                   rollingUpdate:(NSString *)rollingUpdate;

@end

/**
 *  Returns information about an update.
 *
 *  Method: replicapoolupdater.rollingUpdates.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatform
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatformReadOnly
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapool
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapoolReadonly
 */
@interface GTLRReplicapoolupdaterQuery_RollingUpdatesGet : GTLRReplicapoolupdaterQuery
// Previous library name was
//   +[GTLQueryReplicapoolupdater queryForRollingUpdatesGetWithproject:zoneProperty:rollingUpdate:]

/** The Google Developers Console project name. */
@property(nonatomic, copy, nullable) NSString *project;

/** The name of the update. */
@property(nonatomic, copy, nullable) NSString *rollingUpdate;

/**
 *  The name of the zone in which the update's target resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRReplicapoolupdater_RollingUpdate.
 *
 *  Returns information about an update.
 *
 *  @param project The Google Developers Console project name.
 *  @param zoneProperty The name of the zone in which the update's target
 *    resides.
 *  @param rollingUpdate The name of the update.
 *
 *  @returns GTLRReplicapoolupdaterQuery_RollingUpdatesGet
 */
+ (instancetype)queryWithProject:(NSString *)project
                    zoneProperty:(NSString *)zoneProperty
                   rollingUpdate:(NSString *)rollingUpdate;

@end

/**
 *  Inserts and starts a new update.
 *
 *  Method: replicapoolupdater.rollingUpdates.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatform
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapool
 */
@interface GTLRReplicapoolupdaterQuery_RollingUpdatesInsert : GTLRReplicapoolupdaterQuery
// Previous library name was
//   +[GTLQueryReplicapoolupdater queryForRollingUpdatesInsertWithObject:project:zoneProperty:]

/** The Google Developers Console project name. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  The name of the zone in which the update's target resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRReplicapoolupdater_Operation.
 *
 *  Inserts and starts a new update.
 *
 *  @param object The @c GTLRReplicapoolupdater_RollingUpdate to include in the
 *    query.
 *  @param project The Google Developers Console project name.
 *  @param zoneProperty The name of the zone in which the update's target
 *    resides.
 *
 *  @returns GTLRReplicapoolupdaterQuery_RollingUpdatesInsert
 */
+ (instancetype)queryWithObject:(GTLRReplicapoolupdater_RollingUpdate *)object
                        project:(NSString *)project
                   zoneProperty:(NSString *)zoneProperty;

@end

/**
 *  Lists recent updates for a given managed instance group, in reverse
 *  chronological order and paginated format.
 *
 *  Method: replicapoolupdater.rollingUpdates.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatform
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatformReadOnly
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapool
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapoolReadonly
 */
@interface GTLRReplicapoolupdaterQuery_RollingUpdatesList : GTLRReplicapoolupdaterQuery
// Previous library name was
//   +[GTLQueryReplicapoolupdater queryForRollingUpdatesListWithproject:zoneProperty:]

/** Optional. Filter expression for filtering listed resources. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Optional. Maximum count of results to be returned. Maximum value is 500 and
 *  default value is 500.
 *
 *  @note If not set, the documented server-side default will be 500 (from the
 *        range 0..500).
 */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Optional. Tag returned by a previous list request truncated by maxResults.
 *  Used to continue a previous list request.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The Google Developers Console project name. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  The name of the zone in which the update's target resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRReplicapoolupdater_RollingUpdateList.
 *
 *  Lists recent updates for a given managed instance group, in reverse
 *  chronological order and paginated format.
 *
 *  @param project The Google Developers Console project name.
 *  @param zoneProperty The name of the zone in which the update's target
 *    resides.
 *
 *  @returns GTLRReplicapoolupdaterQuery_RollingUpdatesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project
                    zoneProperty:(NSString *)zoneProperty;

@end

/**
 *  Lists the current status for each instance within a given update.
 *
 *  Method: replicapoolupdater.rollingUpdates.listInstanceUpdates
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatform
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatformReadOnly
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapool
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapoolReadonly
 */
@interface GTLRReplicapoolupdaterQuery_RollingUpdatesListInstanceUpdates : GTLRReplicapoolupdaterQuery
// Previous library name was
//   +[GTLQueryReplicapoolupdater queryForRollingUpdatesListInstanceUpdatesWithproject:zoneProperty:rollingUpdate:]

/** Optional. Filter expression for filtering listed resources. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Optional. Maximum count of results to be returned. Maximum value is 500 and
 *  default value is 500.
 *
 *  @note If not set, the documented server-side default will be 500 (from the
 *        range 0..500).
 */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Optional. Tag returned by a previous list request truncated by maxResults.
 *  Used to continue a previous list request.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The Google Developers Console project name. */
@property(nonatomic, copy, nullable) NSString *project;

/** The name of the update. */
@property(nonatomic, copy, nullable) NSString *rollingUpdate;

/**
 *  The name of the zone in which the update's target resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRReplicapoolupdater_InstanceUpdateList.
 *
 *  Lists the current status for each instance within a given update.
 *
 *  @param project The Google Developers Console project name.
 *  @param zoneProperty The name of the zone in which the update's target
 *    resides.
 *  @param rollingUpdate The name of the update.
 *
 *  @returns GTLRReplicapoolupdaterQuery_RollingUpdatesListInstanceUpdates
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project
                    zoneProperty:(NSString *)zoneProperty
                   rollingUpdate:(NSString *)rollingUpdate;

@end

/**
 *  Pauses the update in state from ROLLING_FORWARD or ROLLING_BACK. Has no
 *  effect if invoked when the state of the update is PAUSED.
 *
 *  Method: replicapoolupdater.rollingUpdates.pause
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatform
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapool
 */
@interface GTLRReplicapoolupdaterQuery_RollingUpdatesPause : GTLRReplicapoolupdaterQuery
// Previous library name was
//   +[GTLQueryReplicapoolupdater queryForRollingUpdatesPauseWithproject:zoneProperty:rollingUpdate:]

/** The Google Developers Console project name. */
@property(nonatomic, copy, nullable) NSString *project;

/** The name of the update. */
@property(nonatomic, copy, nullable) NSString *rollingUpdate;

/**
 *  The name of the zone in which the update's target resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRReplicapoolupdater_Operation.
 *
 *  Pauses the update in state from ROLLING_FORWARD or ROLLING_BACK. Has no
 *  effect if invoked when the state of the update is PAUSED.
 *
 *  @param project The Google Developers Console project name.
 *  @param zoneProperty The name of the zone in which the update's target
 *    resides.
 *  @param rollingUpdate The name of the update.
 *
 *  @returns GTLRReplicapoolupdaterQuery_RollingUpdatesPause
 */
+ (instancetype)queryWithProject:(NSString *)project
                    zoneProperty:(NSString *)zoneProperty
                   rollingUpdate:(NSString *)rollingUpdate;

@end

/**
 *  Continues an update in PAUSED state. Has no effect if invoked when the state
 *  of the update is ROLLED_OUT.
 *
 *  Method: replicapoolupdater.rollingUpdates.resume
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatform
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapool
 */
@interface GTLRReplicapoolupdaterQuery_RollingUpdatesResume : GTLRReplicapoolupdaterQuery
// Previous library name was
//   +[GTLQueryReplicapoolupdater queryForRollingUpdatesResumeWithproject:zoneProperty:rollingUpdate:]

/** The Google Developers Console project name. */
@property(nonatomic, copy, nullable) NSString *project;

/** The name of the update. */
@property(nonatomic, copy, nullable) NSString *rollingUpdate;

/**
 *  The name of the zone in which the update's target resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRReplicapoolupdater_Operation.
 *
 *  Continues an update in PAUSED state. Has no effect if invoked when the state
 *  of the update is ROLLED_OUT.
 *
 *  @param project The Google Developers Console project name.
 *  @param zoneProperty The name of the zone in which the update's target
 *    resides.
 *  @param rollingUpdate The name of the update.
 *
 *  @returns GTLRReplicapoolupdaterQuery_RollingUpdatesResume
 */
+ (instancetype)queryWithProject:(NSString *)project
                    zoneProperty:(NSString *)zoneProperty
                   rollingUpdate:(NSString *)rollingUpdate;

@end

/**
 *  Rolls back the update in state from ROLLING_FORWARD or PAUSED. Has no effect
 *  if invoked when the state of the update is ROLLED_BACK.
 *
 *  Method: replicapoolupdater.rollingUpdates.rollback
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatform
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapool
 */
@interface GTLRReplicapoolupdaterQuery_RollingUpdatesRollback : GTLRReplicapoolupdaterQuery
// Previous library name was
//   +[GTLQueryReplicapoolupdater queryForRollingUpdatesRollbackWithproject:zoneProperty:rollingUpdate:]

/** The Google Developers Console project name. */
@property(nonatomic, copy, nullable) NSString *project;

/** The name of the update. */
@property(nonatomic, copy, nullable) NSString *rollingUpdate;

/**
 *  The name of the zone in which the update's target resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRReplicapoolupdater_Operation.
 *
 *  Rolls back the update in state from ROLLING_FORWARD or PAUSED. Has no effect
 *  if invoked when the state of the update is ROLLED_BACK.
 *
 *  @param project The Google Developers Console project name.
 *  @param zoneProperty The name of the zone in which the update's target
 *    resides.
 *  @param rollingUpdate The name of the update.
 *
 *  @returns GTLRReplicapoolupdaterQuery_RollingUpdatesRollback
 */
+ (instancetype)queryWithProject:(NSString *)project
                    zoneProperty:(NSString *)zoneProperty
                   rollingUpdate:(NSString *)rollingUpdate;

@end

/**
 *  Retrieves the specified zone-specific operation resource.
 *
 *  Method: replicapoolupdater.zoneOperations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatform
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapool
 */
@interface GTLRReplicapoolupdaterQuery_ZoneOperationsGet : GTLRReplicapoolupdaterQuery
// Previous library name was
//   +[GTLQueryReplicapoolupdater queryForZoneOperationsGetWithproject:zoneProperty:operation:]

/** Name of the operation resource to return. */
@property(nonatomic, copy, nullable) NSString *operation;

/** Name of the project scoping this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Name of the zone scoping this request.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRReplicapoolupdater_Operation.
 *
 *  Retrieves the specified zone-specific operation resource.
 *
 *  @param project Name of the project scoping this request.
 *  @param zoneProperty Name of the zone scoping this request.
 *  @param operation Name of the operation resource to return.
 *
 *  @returns GTLRReplicapoolupdaterQuery_ZoneOperationsGet
 */
+ (instancetype)queryWithProject:(NSString *)project
                    zoneProperty:(NSString *)zoneProperty
                       operation:(NSString *)operation;

@end

/**
 *  Retrieves the list of Operation resources contained within the specified
 *  zone.
 *
 *  Method: replicapoolupdater.zoneOperations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeReplicapoolupdaterCloudPlatform
 *    @c kGTLRAuthScopeReplicapoolupdaterReplicapool
 */
@interface GTLRReplicapoolupdaterQuery_ZoneOperationsList : GTLRReplicapoolupdaterQuery
// Previous library name was
//   +[GTLQueryReplicapoolupdater queryForZoneOperationsListWithproject:zoneProperty:]

/** Optional. Filter expression for filtering listed resources. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Optional. Maximum count of results to be returned. Maximum value is 500 and
 *  default value is 500.
 *
 *  @note If not set, the documented server-side default will be 500 (from the
 *        range 0..500).
 */
@property(nonatomic, assign) NSUInteger maxResults;

/**
 *  Optional. Tag returned by a previous list request truncated by maxResults.
 *  Used to continue a previous list request.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Name of the project scoping this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Name of the zone scoping this request.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRReplicapoolupdater_OperationList.
 *
 *  Retrieves the list of Operation resources contained within the specified
 *  zone.
 *
 *  @param project Name of the project scoping this request.
 *  @param zoneProperty Name of the zone scoping this request.
 *
 *  @returns GTLRReplicapoolupdaterQuery_ZoneOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project
                    zoneProperty:(NSString *)zoneProperty;

@end

NS_ASSUME_NONNULL_END
