// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Enterprise Apps Reseller API (reseller/v1)
// Description:
//   Creates and manages your customers and their subscriptions.
// Documentation:
//   https://developers.google.com/google-apps/reseller/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRReseller_ChangePlanRequest;
@class GTLRReseller_Customer;
@class GTLRReseller_RenewalSettings;
@class GTLRReseller_Seats;
@class GTLRReseller_Subscription;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// deletionType

/**
 *  Cancels the subscription immediately
 *
 *  Value: "cancel"
 */
GTLR_EXTERN NSString * const kGTLRResellerDeletionTypeCancel;
/**
 *  Downgrades a Google Apps for Business subscription to Google Apps
 *
 *  Value: "downgrade"
 */
GTLR_EXTERN NSString * const kGTLRResellerDeletionTypeDowngrade;
/**
 *  Suspends the subscriptions for 4 days before cancelling it
 *
 *  Value: "suspend"
 */
GTLR_EXTERN NSString * const kGTLRResellerDeletionTypeSuspend;
/**
 *  Transfers a subscription directly to Google
 *
 *  Value: "transfer_to_direct"
 */
GTLR_EXTERN NSString * const kGTLRResellerDeletionTypeTransferToDirect;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Reseller query classes.
 */
@interface GTLRResellerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(copy, nullable) NSString *fields;

@end

/**
 *  Gets a customer resource if one exists and is owned by the reseller.
 *
 *  Method: reseller.customers.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 *    @c kGTLRAuthScopeResellerAppsOrderReadonly
 */
@interface GTLRResellerQuery_CustomersGet : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForCustomersGetWithcustomerId:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/**
 *  Fetches a @c GTLRReseller_Customer.
 *
 *  Gets a customer resource if one exists and is owned by the reseller.
 *
 *  @param customerId Id of the Customer
 *
 *  @returns GTLRResellerQuery_CustomersGet
 */
+ (instancetype)queryWithCustomerId:(NSString *)customerId;

@end

/**
 *  Creates a customer resource if one does not already exist.
 *
 *  Method: reseller.customers.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_CustomersInsert : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForCustomersInsertWithObject:]

/**
 *  An auth token needed for inserting a customer for which domain already
 *  exists. Can be generated at https://admin.google.com/TransferToken.
 *  Optional.
 */
@property(copy, nullable) NSString *customerAuthToken;

/**
 *  Fetches a @c GTLRReseller_Customer.
 *
 *  Creates a customer resource if one does not already exist.
 *
 *  @param object The @c GTLRReseller_Customer to include in the query.
 *
 *  @returns GTLRResellerQuery_CustomersInsert
 */
+ (instancetype)queryWithObject:(GTLRReseller_Customer *)object;

@end

/**
 *  Update a customer resource if one it exists and is owned by the reseller.
 *  This method supports patch semantics.
 *
 *  Method: reseller.customers.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_CustomersPatch : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForCustomersPatchWithObject:customerId:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/**
 *  Fetches a @c GTLRReseller_Customer.
 *
 *  Update a customer resource if one it exists and is owned by the reseller.
 *  This method supports patch semantics.
 *
 *  @param object The @c GTLRReseller_Customer to include in the query.
 *  @param customerId Id of the Customer
 *
 *  @returns GTLRResellerQuery_CustomersPatch
 */
+ (instancetype)queryWithObject:(GTLRReseller_Customer *)object
                     customerId:(NSString *)customerId;

@end

/**
 *  Update a customer resource if one it exists and is owned by the reseller.
 *
 *  Method: reseller.customers.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_CustomersUpdate : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForCustomersUpdateWithObject:customerId:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/**
 *  Fetches a @c GTLRReseller_Customer.
 *
 *  Update a customer resource if one it exists and is owned by the reseller.
 *
 *  @param object The @c GTLRReseller_Customer to include in the query.
 *  @param customerId Id of the Customer
 *
 *  @returns GTLRResellerQuery_CustomersUpdate
 */
+ (instancetype)queryWithObject:(GTLRReseller_Customer *)object
                     customerId:(NSString *)customerId;

@end

/**
 *  Activates a subscription previously suspended by the reseller
 *
 *  Method: reseller.subscriptions.activate
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_SubscriptionsActivate : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForSubscriptionsActivateWithcustomerId:subscriptionId:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/** Id of the subscription, which is unique for a customer */
@property(copy, nullable) NSString *subscriptionId;

/**
 *  Fetches a @c GTLRReseller_Subscription.
 *
 *  Activates a subscription previously suspended by the reseller
 *
 *  @param customerId Id of the Customer
 *  @param subscriptionId Id of the subscription, which is unique for a customer
 *
 *  @returns GTLRResellerQuery_SubscriptionsActivate
 */
+ (instancetype)queryWithCustomerId:(NSString *)customerId
                     subscriptionId:(NSString *)subscriptionId;

@end

/**
 *  Changes the plan of a subscription
 *
 *  Method: reseller.subscriptions.changePlan
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_SubscriptionsChangePlan : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForSubscriptionsChangePlanWithObject:customerId:subscriptionId:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/** Id of the subscription, which is unique for a customer */
@property(copy, nullable) NSString *subscriptionId;

/**
 *  Fetches a @c GTLRReseller_Subscription.
 *
 *  Changes the plan of a subscription
 *
 *  @param object The @c GTLRReseller_ChangePlanRequest to include in the query.
 *  @param customerId Id of the Customer
 *  @param subscriptionId Id of the subscription, which is unique for a customer
 *
 *  @returns GTLRResellerQuery_SubscriptionsChangePlan
 */
+ (instancetype)queryWithObject:(GTLRReseller_ChangePlanRequest *)object
                     customerId:(NSString *)customerId
                 subscriptionId:(NSString *)subscriptionId;

@end

/**
 *  Changes the renewal settings of a subscription
 *
 *  Method: reseller.subscriptions.changeRenewalSettings
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_SubscriptionsChangeRenewalSettings : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForSubscriptionsChangeRenewalSettingsWithObject:customerId:subscriptionId:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/** Id of the subscription, which is unique for a customer */
@property(copy, nullable) NSString *subscriptionId;

/**
 *  Fetches a @c GTLRReseller_Subscription.
 *
 *  Changes the renewal settings of a subscription
 *
 *  @param object The @c GTLRReseller_RenewalSettings to include in the query.
 *  @param customerId Id of the Customer
 *  @param subscriptionId Id of the subscription, which is unique for a customer
 *
 *  @returns GTLRResellerQuery_SubscriptionsChangeRenewalSettings
 */
+ (instancetype)queryWithObject:(GTLRReseller_RenewalSettings *)object
                     customerId:(NSString *)customerId
                 subscriptionId:(NSString *)subscriptionId;

@end

/**
 *  Changes the seats configuration of a subscription
 *
 *  Method: reseller.subscriptions.changeSeats
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_SubscriptionsChangeSeats : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForSubscriptionsChangeSeatsWithObject:customerId:subscriptionId:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/** Id of the subscription, which is unique for a customer */
@property(copy, nullable) NSString *subscriptionId;

/**
 *  Fetches a @c GTLRReseller_Subscription.
 *
 *  Changes the seats configuration of a subscription
 *
 *  @param object The @c GTLRReseller_Seats to include in the query.
 *  @param customerId Id of the Customer
 *  @param subscriptionId Id of the subscription, which is unique for a customer
 *
 *  @returns GTLRResellerQuery_SubscriptionsChangeSeats
 */
+ (instancetype)queryWithObject:(GTLRReseller_Seats *)object
                     customerId:(NSString *)customerId
                 subscriptionId:(NSString *)subscriptionId;

@end

/**
 *  Cancels/Downgrades a subscription.
 *
 *  Method: reseller.subscriptions.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_SubscriptionsDelete : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForSubscriptionsDeleteWithcustomerId:subscriptionId:deletionType:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/**
 *  Whether the subscription is to be fully cancelled or downgraded
 *
 *  Likely values:
 *    @arg @c kGTLRResellerDeletionTypeCancel Cancels the subscription
 *        immediately (Value: "cancel")
 *    @arg @c kGTLRResellerDeletionTypeDowngrade Downgrades a Google Apps for
 *        Business subscription to Google Apps (Value: "downgrade")
 *    @arg @c kGTLRResellerDeletionTypeSuspend Suspends the subscriptions for 4
 *        days before cancelling it (Value: "suspend")
 *    @arg @c kGTLRResellerDeletionTypeTransferToDirect Transfers a subscription
 *        directly to Google (Value: "transfer_to_direct")
 */
@property(copy, nullable) NSString *deletionType;

/** Id of the subscription, which is unique for a customer */
@property(copy, nullable) NSString *subscriptionId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Cancels/Downgrades a subscription.
 *
 *  @param customerId Id of the Customer
 *  @param subscriptionId Id of the subscription, which is unique for a customer
 *  @param deletionType Whether the subscription is to be fully cancelled or
 *    downgraded
 *
 *  Likely values for @c deletionType:
 *    @arg @c kGTLRResellerDeletionTypeCancel Cancels the subscription
 *        immediately (Value: "cancel")
 *    @arg @c kGTLRResellerDeletionTypeDowngrade Downgrades a Google Apps for
 *        Business subscription to Google Apps (Value: "downgrade")
 *    @arg @c kGTLRResellerDeletionTypeSuspend Suspends the subscriptions for 4
 *        days before cancelling it (Value: "suspend")
 *    @arg @c kGTLRResellerDeletionTypeTransferToDirect Transfers a subscription
 *        directly to Google (Value: "transfer_to_direct")
 *
 *  @returns GTLRResellerQuery_SubscriptionsDelete
 */
+ (instancetype)queryWithCustomerId:(NSString *)customerId
                     subscriptionId:(NSString *)subscriptionId
                       deletionType:(NSString *)deletionType;

@end

/**
 *  Gets a subscription of the customer.
 *
 *  Method: reseller.subscriptions.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 *    @c kGTLRAuthScopeResellerAppsOrderReadonly
 */
@interface GTLRResellerQuery_SubscriptionsGet : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForSubscriptionsGetWithcustomerId:subscriptionId:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/** Id of the subscription, which is unique for a customer */
@property(copy, nullable) NSString *subscriptionId;

/**
 *  Fetches a @c GTLRReseller_Subscription.
 *
 *  Gets a subscription of the customer.
 *
 *  @param customerId Id of the Customer
 *  @param subscriptionId Id of the subscription, which is unique for a customer
 *
 *  @returns GTLRResellerQuery_SubscriptionsGet
 */
+ (instancetype)queryWithCustomerId:(NSString *)customerId
                     subscriptionId:(NSString *)subscriptionId;

@end

/**
 *  Creates/Transfers a subscription for the customer.
 *
 *  Method: reseller.subscriptions.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_SubscriptionsInsert : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForSubscriptionsInsertWithObject:customerId:]

/**
 *  An auth token needed for transferring a subscription. Can be generated at
 *  https://www.google.com/a/cpanel/customer-domain/TransferToken. Optional.
 */
@property(copy, nullable) NSString *customerAuthToken;

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/**
 *  Fetches a @c GTLRReseller_Subscription.
 *
 *  Creates/Transfers a subscription for the customer.
 *
 *  @param object The @c GTLRReseller_Subscription to include in the query.
 *  @param customerId Id of the Customer
 *
 *  @returns GTLRResellerQuery_SubscriptionsInsert
 */
+ (instancetype)queryWithObject:(GTLRReseller_Subscription *)object
                     customerId:(NSString *)customerId;

@end

/**
 *  Lists subscriptions of a reseller, optionally filtered by a customer name
 *  prefix.
 *
 *  Method: reseller.subscriptions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 *    @c kGTLRAuthScopeResellerAppsOrderReadonly
 */
@interface GTLRResellerQuery_SubscriptionsList : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForSubscriptionsList]

/**
 *  An auth token needed if the customer is not a resold customer of this
 *  reseller. Can be generated at
 *  https://www.google.com/a/cpanel/customer-domain/TransferToken.Optional.
 */
@property(copy, nullable) NSString *customerAuthToken;

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/**
 *  Prefix of the customer's domain name by which the subscriptions should be
 *  filtered. Optional
 */
@property(copy, nullable) NSString *customerNamePrefix;

/**
 *  Maximum number of results to return
 *
 *  @note The documented range is 1..100.
 */
@property(assign) NSUInteger maxResults;

/** Token to specify next page in the list */
@property(copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRReseller_Subscriptions.
 *
 *  Lists subscriptions of a reseller, optionally filtered by a customer name
 *  prefix.
 *
 *  @returns GTLRResellerQuery_SubscriptionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Starts paid service of a trial subscription
 *
 *  Method: reseller.subscriptions.startPaidService
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_SubscriptionsStartPaidService : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForSubscriptionsStartPaidServiceWithcustomerId:subscriptionId:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/** Id of the subscription, which is unique for a customer */
@property(copy, nullable) NSString *subscriptionId;

/**
 *  Fetches a @c GTLRReseller_Subscription.
 *
 *  Starts paid service of a trial subscription
 *
 *  @param customerId Id of the Customer
 *  @param subscriptionId Id of the subscription, which is unique for a customer
 *
 *  @returns GTLRResellerQuery_SubscriptionsStartPaidService
 */
+ (instancetype)queryWithCustomerId:(NSString *)customerId
                     subscriptionId:(NSString *)subscriptionId;

@end

/**
 *  Suspends an active subscription
 *
 *  Method: reseller.subscriptions.suspend
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeResellerAppsOrder
 */
@interface GTLRResellerQuery_SubscriptionsSuspend : GTLRResellerQuery
// Previous library name was
//   +[GTLQueryReseller queryForSubscriptionsSuspendWithcustomerId:subscriptionId:]

/** Id of the Customer */
@property(copy, nullable) NSString *customerId;

/** Id of the subscription, which is unique for a customer */
@property(copy, nullable) NSString *subscriptionId;

/**
 *  Fetches a @c GTLRReseller_Subscription.
 *
 *  Suspends an active subscription
 *
 *  @param customerId Id of the Customer
 *  @param subscriptionId Id of the subscription, which is unique for a customer
 *
 *  @returns GTLRResellerQuery_SubscriptionsSuspend
 */
+ (instancetype)queryWithCustomerId:(NSString *)customerId
                     subscriptionId:(NSString *)subscriptionId;

@end

NS_ASSUME_NONNULL_END
