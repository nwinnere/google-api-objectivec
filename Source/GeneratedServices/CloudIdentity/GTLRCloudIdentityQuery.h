// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Identity API (cloudidentity/v1)
// Description:
//   API for provisioning and managing identity resources.
// Documentation:
//   https://cloud.google.com/identity/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudIdentity_Group;
@class GTLRCloudIdentity_Membership;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// view

/** Value: "BASIC" */
GTLR_EXTERN NSString * const kGTLRCloudIdentityViewBasic;
/** Value: "FULL" */
GTLR_EXTERN NSString * const kGTLRCloudIdentityViewFull;
/** Value: "VIEW_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudIdentityViewViewUnspecified;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Cloud Identity query classes.
 */
@interface GTLRCloudIdentityQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a Group.
 *
 *  Method: cloudidentity.groups.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsCreate : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsCreateWithObject:]

/**
 *  Fetches a @c GTLRCloudIdentity_Operation.
 *
 *  Creates a Group.
 *
 *  @param object The @c GTLRCloudIdentity_Group to include in the query.
 *
 *  @return GTLRCloudIdentityQuery_GroupsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudIdentity_Group *)object;

@end

/**
 *  Deletes a Group.
 *
 *  Method: cloudidentity.groups.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsDelete : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsDeleteWithname:]

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Group in the format: `groups/{group_id}`, where `group_id` is the unique ID
 *  assigned to the Group.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudIdentity_Operation.
 *
 *  Deletes a Group.
 *
 *  @param name [Resource
 *    name](https://cloud.google.com/apis/design/resource_names) of the
 *    Group in the format: `groups/{group_id}`, where `group_id` is the unique
 *    ID
 *    assigned to the Group.
 *
 *  @return GTLRCloudIdentityQuery_GroupsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Retrieves a Group.
 *
 *  Method: cloudidentity.groups.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroupsReadonly
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsGet : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsGetWithname:]

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Group in the format: `groups/{group_id}`, where `group_id` is the unique ID
 *  assigned to the Group.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudIdentity_Group.
 *
 *  Retrieves a Group.
 *
 *  @param name [Resource
 *    name](https://cloud.google.com/apis/design/resource_names) of the
 *    Group in the format: `groups/{group_id}`, where `group_id` is the unique
 *    ID
 *    assigned to the Group.
 *
 *  @return GTLRCloudIdentityQuery_GroupsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List groups within a customer or a domain.
 *
 *  Method: cloudidentity.groups.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroupsReadonly
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsList : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsList]

/**
 *  The default page size is 200 (max 1000) for the BASIC view, and 50
 *  (max 500) for the FULL view.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous list request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  `Required`. May be made Optional in the future.
 *  Customer ID to list all groups from.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Group resource view to be returned. Defaults to [View.BASIC]().
 *
 *  Likely values:
 *    @arg @c kGTLRCloudIdentityViewViewUnspecified Value "VIEW_UNSPECIFIED"
 *    @arg @c kGTLRCloudIdentityViewBasic Value "BASIC"
 *    @arg @c kGTLRCloudIdentityViewFull Value "FULL"
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRCloudIdentity_ListGroupsResponse.
 *
 *  List groups within a customer or a domain.
 *
 *  @return GTLRCloudIdentityQuery_GroupsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Looks up [resource
 *  name](https://cloud.google.com/apis/design/resource_names) of a Group by
 *  its EntityKey.
 *
 *  Method: cloudidentity.groups.lookup
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroupsReadonly
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsLookup : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsLookup]

/**
 *  The ID of the entity within the given namespace. The ID must be unique
 *  within its namespace.
 */
@property(nonatomic, copy, nullable) NSString *groupKeyId;

/**
 *  Namespaces provide isolation for IDs, so an ID only needs to be unique
 *  within its namespace.
 *  Namespaces are currently only created as part of IdentitySource creation
 *  from Admin Console. A namespace `"identitysources/{identity_source_id}"` is
 *  created corresponding to every Identity Source `identity_source_id`.
 */
@property(nonatomic, copy, nullable) NSString *groupKeyNamespace;

/**
 *  Fetches a @c GTLRCloudIdentity_LookupGroupNameResponse.
 *
 *  Looks up [resource
 *  name](https://cloud.google.com/apis/design/resource_names) of a Group by
 *  its EntityKey.
 *
 *  @return GTLRCloudIdentityQuery_GroupsLookup
 */
+ (instancetype)query;

@end

/**
 *  Creates a Membership.
 *
 *  Method: cloudidentity.groups.memberships.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsMembershipsCreate : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsMembershipsCreateWithObject:parent:]

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Group to create Membership within. Format: `groups/{group_id}`, where
 *  `group_id` is the unique ID assigned to the Group.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudIdentity_Operation.
 *
 *  Creates a Membership.
 *
 *  @param object The @c GTLRCloudIdentity_Membership to include in the query.
 *  @param parent [Resource
 *    name](https://cloud.google.com/apis/design/resource_names) of the
 *    Group to create Membership within. Format: `groups/{group_id}`, where
 *    `group_id` is the unique ID assigned to the Group.
 *
 *  @return GTLRCloudIdentityQuery_GroupsMembershipsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudIdentity_Membership *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a Membership.
 *
 *  Method: cloudidentity.groups.memberships.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsMembershipsDelete : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsMembershipsDeleteWithname:]

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Membership to be deleted.
 *  Format: `groups/{group_id}/memberships/{member_id}`, where `group_id` is
 *  the unique ID assigned to the Group to which Membership belongs to, and
 *  member_id is the unique ID assigned to the member.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudIdentity_Operation.
 *
 *  Deletes a Membership.
 *
 *  @param name [Resource
 *    name](https://cloud.google.com/apis/design/resource_names) of the
 *    Membership to be deleted.
 *    Format: `groups/{group_id}/memberships/{member_id}`, where `group_id` is
 *    the unique ID assigned to the Group to which Membership belongs to, and
 *    member_id is the unique ID assigned to the member.
 *
 *  @return GTLRCloudIdentityQuery_GroupsMembershipsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Retrieves a Membership.
 *
 *  Method: cloudidentity.groups.memberships.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroupsReadonly
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsMembershipsGet : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsMembershipsGetWithname:]

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Membership to be retrieved.
 *  Format: `groups/{group_id}/memberships/{member_id}`, where `group_id` is
 *  the unique id assigned to the Group to which Membership belongs to, and
 *  `member_id` is the unique ID assigned to the member.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudIdentity_Membership.
 *
 *  Retrieves a Membership.
 *
 *  @param name [Resource
 *    name](https://cloud.google.com/apis/design/resource_names) of the
 *    Membership to be retrieved.
 *    Format: `groups/{group_id}/memberships/{member_id}`, where `group_id` is
 *    the unique id assigned to the Group to which Membership belongs to, and
 *    `member_id` is the unique ID assigned to the member.
 *
 *  @return GTLRCloudIdentityQuery_GroupsMembershipsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List Memberships within a Group.
 *
 *  Method: cloudidentity.groups.memberships.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroupsReadonly
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsMembershipsList : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsMembershipsListWithparent:]

/**
 *  The default page size is 200 (max 1000) for the BASIC view, and 50
 *  (max 500) for the FULL view.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous list request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Group to list Memberships within.
 *  Format: `groups/{group_id}`, where `group_id` is the unique ID assigned to
 *  the Group.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Membership resource view to be returned. Defaults to View.BASIC.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudIdentityViewViewUnspecified Value "VIEW_UNSPECIFIED"
 *    @arg @c kGTLRCloudIdentityViewBasic Value "BASIC"
 *    @arg @c kGTLRCloudIdentityViewFull Value "FULL"
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRCloudIdentity_ListMembershipsResponse.
 *
 *  List Memberships within a Group.
 *
 *  @param parent [Resource
 *    name](https://cloud.google.com/apis/design/resource_names) of the
 *    Group to list Memberships within.
 *    Format: `groups/{group_id}`, where `group_id` is the unique ID assigned to
 *    the Group.
 *
 *  @return GTLRCloudIdentityQuery_GroupsMembershipsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Looks up [resource
 *  name](https://cloud.google.com/apis/design/resource_names) of a Membership
 *  within a Group by member's EntityKey.
 *
 *  Method: cloudidentity.groups.memberships.lookup
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroupsReadonly
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsMembershipsLookup : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsMembershipsLookupWithparent:]

/**
 *  The ID of the entity within the given namespace. The ID must be unique
 *  within its namespace.
 */
@property(nonatomic, copy, nullable) NSString *memberKeyId;

/**
 *  Namespaces provide isolation for IDs, so an ID only needs to be unique
 *  within its namespace.
 *  Namespaces are currently only created as part of IdentitySource creation
 *  from Admin Console. A namespace `"identitysources/{identity_source_id}"` is
 *  created corresponding to every Identity Source `identity_source_id`.
 */
@property(nonatomic, copy, nullable) NSString *memberKeyNamespace;

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Group to lookup Membership within.
 *  Format: `groups/{group_id}`, where `group_id` is the unique ID assigned to
 *  the Group.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudIdentity_LookupMembershipNameResponse.
 *
 *  Looks up [resource
 *  name](https://cloud.google.com/apis/design/resource_names) of a Membership
 *  within a Group by member's EntityKey.
 *
 *  @param parent [Resource
 *    name](https://cloud.google.com/apis/design/resource_names) of the
 *    Group to lookup Membership within.
 *    Format: `groups/{group_id}`, where `group_id` is the unique ID assigned to
 *    the Group.
 *
 *  @return GTLRCloudIdentityQuery_GroupsMembershipsLookup
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a Group.
 *
 *  Method: cloudidentity.groups.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsPatch : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsPatchWithObject:name:]

/**
 *  [Resource name](https://cloud.google.com/apis/design/resource_names) of the
 *  Group in the format: `groups/{group_id}`, where group_id is the unique ID
 *  assigned to the Group.
 *  Must be left blank while creating a Group.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Editable fields: `display_name`, `description`
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudIdentity_Operation.
 *
 *  Updates a Group.
 *
 *  @param object The @c GTLRCloudIdentity_Group to include in the query.
 *  @param name [Resource
 *    name](https://cloud.google.com/apis/design/resource_names) of the
 *    Group in the format: `groups/{group_id}`, where group_id is the unique ID
 *    assigned to the Group.
 *    Must be left blank while creating a Group.
 *
 *  @return GTLRCloudIdentityQuery_GroupsPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudIdentity_Group *)object
                           name:(NSString *)name;

@end

/**
 *  Searches for Groups.
 *
 *  Method: cloudidentity.groups.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroups
 *    @c kGTLRAuthScopeCloudIdentityCloudIdentityGroupsReadonly
 *    @c kGTLRAuthScopeCloudIdentityCloudPlatform
 */
@interface GTLRCloudIdentityQuery_GroupsSearch : GTLRCloudIdentityQuery
// Previous library name was
//   +[GTLQueryCloudIdentity queryForGroupsSearch]

/**
 *  The default page size is 200 (max 1000) for the BASIC view, and 50
 *  (max 500) for the FULL view.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous search request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  `Required`. Query string for performing search on groups. Users can search
 *  on parent and label attributes of groups.
 *  EXACT match ('==') is supported on parent, and CONTAINS match ('in') is
 *  supported on labels.
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Group resource view to be returned. Defaults to [View.BASIC]().
 *
 *  Likely values:
 *    @arg @c kGTLRCloudIdentityViewViewUnspecified Value "VIEW_UNSPECIFIED"
 *    @arg @c kGTLRCloudIdentityViewBasic Value "BASIC"
 *    @arg @c kGTLRCloudIdentityViewFull Value "FULL"
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLRCloudIdentity_SearchGroupsResponse.
 *
 *  Searches for Groups.
 *
 *  @return GTLRCloudIdentityQuery_GroupsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
