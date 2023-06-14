// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   My Business Account Management API (mybusinessaccountmanagement/v1)
// Description:
//   The My Business Account Management API provides an interface for managing
//   access to a location on Google.
// Documentation:
//   https://developers.google.com/my-business/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRMyBusinessAccountManagement_AcceptInvitationRequest;
@class GTLRMyBusinessAccountManagement_Account;
@class GTLRMyBusinessAccountManagement_Admin;
@class GTLRMyBusinessAccountManagement_DeclineInvitationRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other My Business Account Management query classes.
 */
@interface GTLRMyBusinessAccountManagementQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Invites the specified user to become an administrator for the specified
 *  account. The invitee must accept the invitation in order to be granted
 *  access to the account. See AcceptInvitation to programmatically accept an
 *  invitation.
 *
 *  Method: mybusinessaccountmanagement.accounts.admins.create
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsAdminsCreate : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsAdminsCreateWithObject:parent:]

/**
 *  Required. The resource name of the account this admin is created for.
 *  `accounts/{account_id}`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Admin.
 *
 *  Invites the specified user to become an administrator for the specified
 *  account. The invitee must accept the invitation in order to be granted
 *  access to the account. See AcceptInvitation to programmatically accept an
 *  invitation.
 *
 *  @param object The @c GTLRMyBusinessAccountManagement_Admin to include in the
 *    query.
 *  @param parent Required. The resource name of the account this admin is
 *    created for. `accounts/{account_id}`.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsAdminsCreate
 */
+ (instancetype)queryWithObject:(GTLRMyBusinessAccountManagement_Admin *)object
                         parent:(NSString *)parent;

@end

/**
 *  Removes the specified admin from the specified account.
 *
 *  Method: mybusinessaccountmanagement.accounts.admins.delete
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsAdminsDelete : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsAdminsDeleteWithname:]

/**
 *  Required. The resource name of the admin to remove from the account.
 *  `accounts/{account_id}/admins/{admin_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Empty.
 *
 *  Removes the specified admin from the specified account.
 *
 *  @param name Required. The resource name of the admin to remove from the
 *    account. `accounts/{account_id}/admins/{admin_id}`.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsAdminsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists the admins for the specified account.
 *
 *  Method: mybusinessaccountmanagement.accounts.admins.list
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsAdminsList : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsAdminsListWithparent:]

/**
 *  Required. The name of the account from which to retrieve a list of admins.
 *  `accounts/{account_id}/admins`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_ListAccountAdminsResponse.
 *
 *  Lists the admins for the specified account.
 *
 *  @param parent Required. The name of the account from which to retrieve a
 *    list of admins. `accounts/{account_id}/admins`.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsAdminsList
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates the Admin for the specified Account Admin.
 *
 *  Method: mybusinessaccountmanagement.accounts.admins.patch
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsAdminsPatch : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsAdminsPatchWithObject:name:]

/**
 *  Immutable. The resource name. For account admins, this is in the form:
 *  `accounts/{account_id}/admins/{admin_id}` For location admins, this is in
 *  the form: `locations/{location_id}/admins/{admin_id}` This field will be
 *  ignored if set during admin creation.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required. The specific fields that should be updated. The only editable
 *  field is role.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Admin.
 *
 *  Updates the Admin for the specified Account Admin.
 *
 *  @param object The @c GTLRMyBusinessAccountManagement_Admin to include in the
 *    query.
 *  @param name Immutable. The resource name. For account admins, this is in the
 *    form: `accounts/{account_id}/admins/{admin_id}` For location admins, this
 *    is in the form: `locations/{location_id}/admins/{admin_id}` This field
 *    will be ignored if set during admin creation.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsAdminsPatch
 */
+ (instancetype)queryWithObject:(GTLRMyBusinessAccountManagement_Admin *)object
                           name:(NSString *)name;

@end

/**
 *  Creates an account with the specified name and type under the given parent.
 *  - Personal accounts and Organizations cannot be created. - User Groups
 *  cannot be created with a Personal account as primary owner. - Location
 *  Groups cannot be created with a primary owner of a Personal account if the
 *  Personal account is in an Organization. - Location Groups cannot own
 *  Location Groups.
 *
 *  Method: mybusinessaccountmanagement.accounts.create
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsCreate : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsCreateWithObject:]

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Account.
 *
 *  Creates an account with the specified name and type under the given parent.
 *  - Personal accounts and Organizations cannot be created. - User Groups
 *  cannot be created with a Personal account as primary owner. - Location
 *  Groups cannot be created with a primary owner of a Personal account if the
 *  Personal account is in an Organization. - Location Groups cannot own
 *  Location Groups.
 *
 *  @param object The @c GTLRMyBusinessAccountManagement_Account to include in
 *    the query.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsCreate
 */
+ (instancetype)queryWithObject:(GTLRMyBusinessAccountManagement_Account *)object;

@end

/**
 *  Gets the specified account. Returns `NOT_FOUND` if the account does not
 *  exist or if the caller does not have access rights to it.
 *
 *  Method: mybusinessaccountmanagement.accounts.get
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsGet : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsGetWithname:]

/** Required. The name of the account to fetch. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Account.
 *
 *  Gets the specified account. Returns `NOT_FOUND` if the account does not
 *  exist or if the caller does not have access rights to it.
 *
 *  @param name Required. The name of the account to fetch.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Accepts the specified invitation.
 *
 *  Method: mybusinessaccountmanagement.accounts.invitations.accept
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsInvitationsAccept : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsInvitationsAcceptWithObject:name:]

/**
 *  Required. The name of the invitation that is being accepted.
 *  `accounts/{account_id}/invitations/{invitation_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Empty.
 *
 *  Accepts the specified invitation.
 *
 *  @param object The @c GTLRMyBusinessAccountManagement_AcceptInvitationRequest
 *    to include in the query.
 *  @param name Required. The name of the invitation that is being accepted.
 *    `accounts/{account_id}/invitations/{invitation_id}`
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsInvitationsAccept
 */
+ (instancetype)queryWithObject:(GTLRMyBusinessAccountManagement_AcceptInvitationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Declines the specified invitation.
 *
 *  Method: mybusinessaccountmanagement.accounts.invitations.decline
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsInvitationsDecline : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsInvitationsDeclineWithObject:name:]

/**
 *  Required. The name of the account invitation that is being declined.
 *  `accounts/{account_id}/invitations/{invitation_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Empty.
 *
 *  Declines the specified invitation.
 *
 *  @param object The @c
 *    GTLRMyBusinessAccountManagement_DeclineInvitationRequest to include in the
 *    query.
 *  @param name Required. The name of the account invitation that is being
 *    declined. `accounts/{account_id}/invitations/{invitation_id}`
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsInvitationsDecline
 */
+ (instancetype)queryWithObject:(GTLRMyBusinessAccountManagement_DeclineInvitationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Lists pending invitations for the specified account.
 *
 *  Method: mybusinessaccountmanagement.accounts.invitations.list
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsInvitationsList : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsInvitationsListWithparent:]

/**
 *  Optional. Filtering the response is supported via the Invitation.target_type
 *  field.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Required. The name of the account from which the list of invitations is
 *  being retrieved. `accounts/{account_id}/invitations`
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_ListInvitationsResponse.
 *
 *  Lists pending invitations for the specified account.
 *
 *  @param parent Required. The name of the account from which the list of
 *    invitations is being retrieved. `accounts/{account_id}/invitations`
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsInvitationsList
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Lists all of the accounts for the authenticated user. This includes all
 *  accounts that the user owns, as well as any accounts for which the user has
 *  management rights.
 *
 *  Method: mybusinessaccountmanagement.accounts.list
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsList : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsList]

/**
 *  Optional. A filter constraining the accounts to return. The response
 *  includes only entries that match the filter. If `filter` is empty, then no
 *  constraints are applied and all accounts (paginated) are retrieved for the
 *  requested account. For example, a request with the filter `type=USER_GROUP`
 *  will only return user groups. The `type` field is the only supported filter.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Optional. How many accounts to fetch per page. The minimum supported
 *  page_size is 2. The default and maximum is 20.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. If specified, the next page of accounts is retrieved. The
 *  `pageToken` is returned when a call to `accounts.list` returns more results
 *  than can fit into the requested page size.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Optional. The resource name of the account for which the list of directly
 *  accessible accounts is to be retrieved. This only makes sense for
 *  Organizations and User Groups. If empty, will return `ListAccounts` for the
 *  authenticated user. `accounts/{account_id}`.
 */
@property(nonatomic, copy, nullable) NSString *parentAccount;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_ListAccountsResponse.
 *
 *  Lists all of the accounts for the authenticated user. This includes all
 *  accounts that the user owns, as well as any accounts for which the user has
 *  management rights.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Updates the specified business account. Personal accounts cannot be updated
 *  using this method.
 *
 *  Method: mybusinessaccountmanagement.accounts.patch
 */
@interface GTLRMyBusinessAccountManagementQuery_AccountsPatch : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForAccountsPatchWithObject:name:]

/** Immutable. The resource name, in the format `accounts/{account_id}`. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required. The specific fields that should be updated. The only editable
 *  field is `accountName`.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Optional. If true, the request is validated without actually updating the
 *  account.
 */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Account.
 *
 *  Updates the specified business account. Personal accounts cannot be updated
 *  using this method.
 *
 *  @param object The @c GTLRMyBusinessAccountManagement_Account to include in
 *    the query.
 *  @param name Immutable. The resource name, in the format
 *    `accounts/{account_id}`.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_AccountsPatch
 */
+ (instancetype)queryWithObject:(GTLRMyBusinessAccountManagement_Account *)object
                           name:(NSString *)name;

@end

/**
 *  Invites the specified user to become an administrator for the specified
 *  location. The invitee must accept the invitation in order to be granted
 *  access to the location. See AcceptInvitation to programmatically accept an
 *  invitation.
 *
 *  Method: mybusinessaccountmanagement.locations.admins.create
 */
@interface GTLRMyBusinessAccountManagementQuery_LocationsAdminsCreate : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForLocationsAdminsCreateWithObject:parent:]

/**
 *  Required. The resource name of the location this admin is created for.
 *  `locations/{location_id}/admins`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Admin.
 *
 *  Invites the specified user to become an administrator for the specified
 *  location. The invitee must accept the invitation in order to be granted
 *  access to the location. See AcceptInvitation to programmatically accept an
 *  invitation.
 *
 *  @param object The @c GTLRMyBusinessAccountManagement_Admin to include in the
 *    query.
 *  @param parent Required. The resource name of the location this admin is
 *    created for. `locations/{location_id}/admins`.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_LocationsAdminsCreate
 */
+ (instancetype)queryWithObject:(GTLRMyBusinessAccountManagement_Admin *)object
                         parent:(NSString *)parent;

@end

/**
 *  Removes the specified admin as a manager of the specified location.
 *
 *  Method: mybusinessaccountmanagement.locations.admins.delete
 */
@interface GTLRMyBusinessAccountManagementQuery_LocationsAdminsDelete : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForLocationsAdminsDeleteWithname:]

/** Required. The resource name of the admin to remove from the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Empty.
 *
 *  Removes the specified admin as a manager of the specified location.
 *
 *  @param name Required. The resource name of the admin to remove from the
 *    location.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_LocationsAdminsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists all of the admins for the specified location.
 *
 *  Method: mybusinessaccountmanagement.locations.admins.list
 */
@interface GTLRMyBusinessAccountManagementQuery_LocationsAdminsList : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForLocationsAdminsListWithparent:]

/**
 *  Required. The name of the location to list admins of.
 *  `locations/{location_id}/admins`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_ListLocationAdminsResponse.
 *
 *  Lists all of the admins for the specified location.
 *
 *  @param parent Required. The name of the location to list admins of.
 *    `locations/{location_id}/admins`.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_LocationsAdminsList
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates the Admin for the specified location. Only the AdminRole of the
 *  Admin can be updated.
 *
 *  Method: mybusinessaccountmanagement.locations.admins.patch
 */
@interface GTLRMyBusinessAccountManagementQuery_LocationsAdminsPatch : GTLRMyBusinessAccountManagementQuery
// Previous library name was
//   +[GTLQueryMyBusinessAccountManagement queryForLocationsAdminsPatchWithObject:name:]

/**
 *  Immutable. The resource name. For account admins, this is in the form:
 *  `accounts/{account_id}/admins/{admin_id}` For location admins, this is in
 *  the form: `locations/{location_id}/admins/{admin_id}` This field will be
 *  ignored if set during admin creation.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required. The specific fields that should be updated. The only editable
 *  field is role.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRMyBusinessAccountManagement_Admin.
 *
 *  Updates the Admin for the specified location. Only the AdminRole of the
 *  Admin can be updated.
 *
 *  @param object The @c GTLRMyBusinessAccountManagement_Admin to include in the
 *    query.
 *  @param name Immutable. The resource name. For account admins, this is in the
 *    form: `accounts/{account_id}/admins/{admin_id}` For location admins, this
 *    is in the form: `locations/{location_id}/admins/{admin_id}` This field
 *    will be ignored if set during admin creation.
 *
 *  @return GTLRMyBusinessAccountManagementQuery_LocationsAdminsPatch
 */
+ (instancetype)queryWithObject:(GTLRMyBusinessAccountManagement_Admin *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
