// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud DNS API (dns/v1)
// Description:
//   Configures and serves authoritative DNS records.
// Documentation:
//   https://developers.google.com/cloud-dns

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRDns_Change;
@class GTLRDns_ManagedZone;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// sortBy

/** Value: "changeSequence" */
GTLR_EXTERN NSString * const kGTLRDnsSortByChangeSequence;
/** Value: "id" */
GTLR_EXTERN NSString * const kGTLRDnsSortById;
/** Value: "startTime" */
GTLR_EXTERN NSString * const kGTLRDnsSortByStartTime;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Dns query classes.
 */
@interface GTLRDnsQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Atomically update the ResourceRecordSet collection.
 *
 *  Method: dns.changes.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ChangesCreate : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForChangesCreateWithObject:project:managedZone:]

/**
 *  For mutating operation requests only. An optional identifier specified by
 *  the client. Must be unique for operation resources in the Operations
 *  collection.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/**
 *  Identifies the managed zone addressed by this request. Can be the managed
 *  zone name or id.
 */
@property(nonatomic, copy, nullable) NSString *managedZone;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_Change.
 *
 *  Atomically update the ResourceRecordSet collection.
 *
 *  @param object The @c GTLRDns_Change to include in the query.
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *    Can be the managed zone name or id.
 *
 *  @returns GTLRDnsQuery_ChangesCreate
 */
+ (instancetype)queryWithObject:(GTLRDns_Change *)object
                        project:(NSString *)project
                    managedZone:(NSString *)managedZone;

@end

/**
 *  Fetch the representation of an existing Change.
 *
 *  Method: dns.changes.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadonly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ChangesGet : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForChangesGetWithproject:managedZone:changeId:]

/**
 *  The identifier of the requested change, from a previous
 *  ResourceRecordSetsChangeResponse.
 */
@property(nonatomic, copy, nullable) NSString *changeId;

/**
 *  For mutating operation requests only. An optional identifier specified by
 *  the client. Must be unique for operation resources in the Operations
 *  collection.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/**
 *  Identifies the managed zone addressed by this request. Can be the managed
 *  zone name or id.
 */
@property(nonatomic, copy, nullable) NSString *managedZone;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_Change.
 *
 *  Fetch the representation of an existing Change.
 *
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *    Can be the managed zone name or id.
 *  @param changeId The identifier of the requested change, from a previous
 *    ResourceRecordSetsChangeResponse.
 *
 *  @returns GTLRDnsQuery_ChangesGet
 */
+ (instancetype)queryWithProject:(NSString *)project
                     managedZone:(NSString *)managedZone
                        changeId:(NSString *)changeId;

@end

/**
 *  Enumerate Changes to a ResourceRecordSet collection.
 *
 *  Method: dns.changes.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadonly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ChangesList : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForChangesListWithproject:managedZone:]

/**
 *  Identifies the managed zone addressed by this request. Can be the managed
 *  zone name or id.
 */
@property(nonatomic, copy, nullable) NSString *managedZone;

/**
 *  Optional. Maximum number of results to be returned. If unspecified, the
 *  server will decide how many results to return.
 */
@property(nonatomic, assign) NSInteger maxResults;

/**
 *  Optional. A tag returned by a previous list request that was truncated. Use
 *  this parameter to continue a previous list request.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Sorting criterion. The only supported value is change sequence.
 *
 *  Likely values:
 *    @arg @c kGTLRDnsSortByChangeSequence Value "changeSequence"
 *
 *  @note If not set, the documented server-side default will be
 *        kGTLRDnsSortByChangeSequence.
 */
@property(nonatomic, copy, nullable) NSString *sortBy;

/** Sorting order direction: 'ascending' or 'descending'. */
@property(nonatomic, copy, nullable) NSString *sortOrder;

/**
 *  Fetches a @c GTLRDns_ChangesListResponse.
 *
 *  Enumerate Changes to a ResourceRecordSet collection.
 *
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *    Can be the managed zone name or id.
 *
 *  @returns GTLRDnsQuery_ChangesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project
                     managedZone:(NSString *)managedZone;

@end

/**
 *  Fetch the representation of an existing DnsKey.
 *
 *  Method: dns.dnsKeys.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadonly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_DnsKeysGet : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForDnsKeysGetWithproject:managedZone:dnsKeyId:]

/**
 *  For mutating operation requests only. An optional identifier specified by
 *  the client. Must be unique for operation resources in the Operations
 *  collection.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/**
 *  An optional comma-separated list of digest types to compute and display for
 *  key signing keys. If omitted, the recommended digest type will be computed
 *  and displayed.
 */
@property(nonatomic, copy, nullable) NSString *digestType;

/** The identifier of the requested DnsKey. */
@property(nonatomic, copy, nullable) NSString *dnsKeyId;

/**
 *  Identifies the managed zone addressed by this request. Can be the managed
 *  zone name or id.
 */
@property(nonatomic, copy, nullable) NSString *managedZone;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_DnsKey.
 *
 *  Fetch the representation of an existing DnsKey.
 *
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *    Can be the managed zone name or id.
 *  @param dnsKeyId The identifier of the requested DnsKey.
 *
 *  @returns GTLRDnsQuery_DnsKeysGet
 */
+ (instancetype)queryWithProject:(NSString *)project
                     managedZone:(NSString *)managedZone
                        dnsKeyId:(NSString *)dnsKeyId;

@end

/**
 *  Enumerate DnsKeys to a ResourceRecordSet collection.
 *
 *  Method: dns.dnsKeys.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadonly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_DnsKeysList : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForDnsKeysListWithproject:managedZone:]

/**
 *  An optional comma-separated list of digest types to compute and display for
 *  key signing keys. If omitted, the recommended digest type will be computed
 *  and displayed.
 */
@property(nonatomic, copy, nullable) NSString *digestType;

/**
 *  Identifies the managed zone addressed by this request. Can be the managed
 *  zone name or id.
 */
@property(nonatomic, copy, nullable) NSString *managedZone;

/**
 *  Optional. Maximum number of results to be returned. If unspecified, the
 *  server will decide how many results to return.
 */
@property(nonatomic, assign) NSInteger maxResults;

/**
 *  Optional. A tag returned by a previous list request that was truncated. Use
 *  this parameter to continue a previous list request.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_DnsKeysListResponse.
 *
 *  Enumerate DnsKeys to a ResourceRecordSet collection.
 *
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *    Can be the managed zone name or id.
 *
 *  @returns GTLRDnsQuery_DnsKeysList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project
                     managedZone:(NSString *)managedZone;

@end

/**
 *  Fetch the representation of an existing Operation.
 *
 *  Method: dns.managedZoneOperations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadonly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ManagedZoneOperationsGet : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForManagedZoneOperationsGetWithproject:managedZone:operation:]

/**
 *  For mutating operation requests only. An optional identifier specified by
 *  the client. Must be unique for operation resources in the Operations
 *  collection.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/** Identifies the managed zone addressed by this request. */
@property(nonatomic, copy, nullable) NSString *managedZone;

/** Identifies the operation addressed by this request. */
@property(nonatomic, copy, nullable) NSString *operation;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_Operation.
 *
 *  Fetch the representation of an existing Operation.
 *
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *  @param operation Identifies the operation addressed by this request.
 *
 *  @returns GTLRDnsQuery_ManagedZoneOperationsGet
 */
+ (instancetype)queryWithProject:(NSString *)project
                     managedZone:(NSString *)managedZone
                       operation:(NSString *)operation;

@end

/**
 *  Enumerate Operations for the given ManagedZone.
 *
 *  Method: dns.managedZoneOperations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadonly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ManagedZoneOperationsList : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForManagedZoneOperationsListWithproject:managedZone:]

/** Identifies the managed zone addressed by this request. */
@property(nonatomic, copy, nullable) NSString *managedZone;

/**
 *  Optional. Maximum number of results to be returned. If unspecified, the
 *  server will decide how many results to return.
 */
@property(nonatomic, assign) NSInteger maxResults;

/**
 *  Optional. A tag returned by a previous list request that was truncated. Use
 *  this parameter to continue a previous list request.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Sorting criterion. The only supported values are START_TIME and ID.
 *
 *  Likely values:
 *    @arg @c kGTLRDnsSortById Value "id"
 *    @arg @c kGTLRDnsSortByStartTime Value "startTime"
 *
 *  @note If not set, the documented server-side default will be
 *        kGTLRDnsSortByStartTime.
 */
@property(nonatomic, copy, nullable) NSString *sortBy;

/**
 *  Fetches a @c GTLRDns_ManagedZoneOperationsListResponse.
 *
 *  Enumerate Operations for the given ManagedZone.
 *
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *
 *  @returns GTLRDnsQuery_ManagedZoneOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project
                     managedZone:(NSString *)managedZone;

@end

/**
 *  Create a new ManagedZone.
 *
 *  Method: dns.managedZones.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ManagedZonesCreate : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForManagedZonesCreateWithObject:project:]

/**
 *  For mutating operation requests only. An optional identifier specified by
 *  the client. Must be unique for operation resources in the Operations
 *  collection.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_ManagedZone.
 *
 *  Create a new ManagedZone.
 *
 *  @param object The @c GTLRDns_ManagedZone to include in the query.
 *  @param project Identifies the project addressed by this request.
 *
 *  @returns GTLRDnsQuery_ManagedZonesCreate
 */
+ (instancetype)queryWithObject:(GTLRDns_ManagedZone *)object
                        project:(NSString *)project;

@end

/**
 *  Delete a previously created ManagedZone.
 *
 *  Method: dns.managedZones.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ManagedZonesDelete : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForManagedZonesDeleteWithproject:managedZone:]

/**
 *  For mutating operation requests only. An optional identifier specified by
 *  the client. Must be unique for operation resources in the Operations
 *  collection.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/**
 *  Identifies the managed zone addressed by this request. Can be the managed
 *  zone name or id.
 */
@property(nonatomic, copy, nullable) NSString *managedZone;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Delete a previously created ManagedZone.
 *
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *    Can be the managed zone name or id.
 *
 *  @returns GTLRDnsQuery_ManagedZonesDelete
 */
+ (instancetype)queryWithProject:(NSString *)project
                     managedZone:(NSString *)managedZone;

@end

/**
 *  Fetch the representation of an existing ManagedZone.
 *
 *  Method: dns.managedZones.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadonly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ManagedZonesGet : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForManagedZonesGetWithproject:managedZone:]

/**
 *  For mutating operation requests only. An optional identifier specified by
 *  the client. Must be unique for operation resources in the Operations
 *  collection.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/**
 *  Identifies the managed zone addressed by this request. Can be the managed
 *  zone name or id.
 */
@property(nonatomic, copy, nullable) NSString *managedZone;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_ManagedZone.
 *
 *  Fetch the representation of an existing ManagedZone.
 *
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *    Can be the managed zone name or id.
 *
 *  @returns GTLRDnsQuery_ManagedZonesGet
 */
+ (instancetype)queryWithProject:(NSString *)project
                     managedZone:(NSString *)managedZone;

@end

/**
 *  Enumerate ManagedZones that have been created but not yet deleted.
 *
 *  Method: dns.managedZones.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadonly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ManagedZonesList : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForManagedZonesListWithproject:]

/** Restricts the list to return only zones with this domain name. */
@property(nonatomic, copy, nullable) NSString *dnsName;

/**
 *  Optional. Maximum number of results to be returned. If unspecified, the
 *  server will decide how many results to return.
 */
@property(nonatomic, assign) NSInteger maxResults;

/**
 *  Optional. A tag returned by a previous list request that was truncated. Use
 *  this parameter to continue a previous list request.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_ManagedZonesListResponse.
 *
 *  Enumerate ManagedZones that have been created but not yet deleted.
 *
 *  @param project Identifies the project addressed by this request.
 *
 *  @returns GTLRDnsQuery_ManagedZonesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project;

@end

/**
 *  Update an existing ManagedZone. This method supports patch semantics.
 *
 *  Method: dns.managedZones.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ManagedZonesPatch : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForManagedZonesPatchWithObject:project:managedZone:]

/**
 *  For mutating operation requests only. An optional identifier specified by
 *  the client. Must be unique for operation resources in the Operations
 *  collection.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/**
 *  Identifies the managed zone addressed by this request. Can be the managed
 *  zone name or id.
 */
@property(nonatomic, copy, nullable) NSString *managedZone;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_Operation.
 *
 *  Update an existing ManagedZone. This method supports patch semantics.
 *
 *  @param object The @c GTLRDns_ManagedZone to include in the query.
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *    Can be the managed zone name or id.
 *
 *  @returns GTLRDnsQuery_ManagedZonesPatch
 */
+ (instancetype)queryWithObject:(GTLRDns_ManagedZone *)object
                        project:(NSString *)project
                    managedZone:(NSString *)managedZone;

@end

/**
 *  Update an existing ManagedZone.
 *
 *  Method: dns.managedZones.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ManagedZonesUpdate : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForManagedZonesUpdateWithObject:project:managedZone:]

/**
 *  For mutating operation requests only. An optional identifier specified by
 *  the client. Must be unique for operation resources in the Operations
 *  collection.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/**
 *  Identifies the managed zone addressed by this request. Can be the managed
 *  zone name or id.
 */
@property(nonatomic, copy, nullable) NSString *managedZone;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_Operation.
 *
 *  Update an existing ManagedZone.
 *
 *  @param object The @c GTLRDns_ManagedZone to include in the query.
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *    Can be the managed zone name or id.
 *
 *  @returns GTLRDnsQuery_ManagedZonesUpdate
 */
+ (instancetype)queryWithObject:(GTLRDns_ManagedZone *)object
                        project:(NSString *)project
                    managedZone:(NSString *)managedZone;

@end

/**
 *  Fetch the representation of an existing Project.
 *
 *  Method: dns.projects.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadonly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ProjectsGet : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForProjectsGetWithproject:]

/**
 *  For mutating operation requests only. An optional identifier specified by
 *  the client. Must be unique for operation resources in the Operations
 *  collection.
 */
@property(nonatomic, copy, nullable) NSString *clientOperationId;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRDns_Project.
 *
 *  Fetch the representation of an existing Project.
 *
 *  @param project Identifies the project addressed by this request.
 *
 *  @returns GTLRDnsQuery_ProjectsGet
 */
+ (instancetype)queryWithProject:(NSString *)project;

@end

/**
 *  Enumerate ResourceRecordSets that have been created but not yet deleted.
 *
 *  Method: dns.resourceRecordSets.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDnsCloudPlatform
 *    @c kGTLRAuthScopeDnsCloudPlatformReadOnly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadonly
 *    @c kGTLRAuthScopeDnsNdevClouddnsReadwrite
 */
@interface GTLRDnsQuery_ResourceRecordSetsList : GTLRDnsQuery
// Previous library name was
//   +[GTLQueryDns queryForResourceRecordSetsListWithproject:managedZone:]

/**
 *  Identifies the managed zone addressed by this request. Can be the managed
 *  zone name or id.
 */
@property(nonatomic, copy, nullable) NSString *managedZone;

/**
 *  Optional. Maximum number of results to be returned. If unspecified, the
 *  server will decide how many results to return.
 */
@property(nonatomic, assign) NSInteger maxResults;

/**
 *  Restricts the list to return only records with this fully qualified domain
 *  name.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Optional. A tag returned by a previous list request that was truncated. Use
 *  this parameter to continue a previous list request.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Identifies the project addressed by this request. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Restricts the list to return only records of this type. If present, the
 *  "name" parameter must also be present.
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  Fetches a @c GTLRDns_ResourceRecordSetsListResponse.
 *
 *  Enumerate ResourceRecordSets that have been created but not yet deleted.
 *
 *  @param project Identifies the project addressed by this request.
 *  @param managedZone Identifies the managed zone addressed by this request.
 *    Can be the managed zone name or id.
 *
 *  @returns GTLRDnsQuery_ResourceRecordSetsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithProject:(NSString *)project
                     managedZone:(NSString *)managedZone;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
