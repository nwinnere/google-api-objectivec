// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   SAS Portal API (sasportal/v1alpha1)
// Documentation:
//   https://developers.google.com/spectrum-access-system/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRSASPortal_BulkCreateDeviceRequest;
@class GTLRSASPortal_CreateSignedDeviceRequest;
@class GTLRSASPortal_Customer;
@class GTLRSASPortal_Device;
@class GTLRSASPortal_GenerateSecretRequest;
@class GTLRSASPortal_GetPolicyRequest;
@class GTLRSASPortal_MoveDeviceRequest;
@class GTLRSASPortal_MoveNodeRequest;
@class GTLRSASPortal_Node;
@class GTLRSASPortal_SetPolicyRequest;
@class GTLRSASPortal_SignDeviceRequest;
@class GTLRSASPortal_TestPermissionsRequest;
@class GTLRSASPortal_UpdateSignedDeviceRequest;
@class GTLRSASPortal_ValidateInstallerRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other SASPortal query classes.
 */
@interface GTLRSASPortalQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a device under a node or customer. Returned devices are unordered.
 *
 *  Method: sasportal.customers.devices.bulk
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersDevicesBulk : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersDevicesBulkWithObject:parent:]

/** Required. The name of the parent resource. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_BulkCreateDeviceResponse.
 *
 *  Creates a device under a node or customer. Returned devices are unordered.
 *
 *  @param object The @c GTLRSASPortal_BulkCreateDeviceRequest to include in the
 *    query.
 *  @param parent Required. The name of the parent resource.
 *
 *  @return GTLRSASPortalQuery_CustomersDevicesBulk
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_BulkCreateDeviceRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Creates a device under a node or customer.
 *
 *  Method: sasportal.customers.devices.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersDevicesCreate : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersDevicesCreateWithObject:parent:]

/** Required. The name of the parent resource. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_Device.
 *
 *  Creates a device under a node or customer.
 *
 *  @param object The @c GTLRSASPortal_Device to include in the query.
 *  @param parent Required. The name of the parent resource.
 *
 *  @return GTLRSASPortalQuery_CustomersDevicesCreate
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_Device *)object
                         parent:(NSString *)parent;

@end

/**
 *  Creates a signed device under a
 *  node or customer.
 *
 *  Method: sasportal.customers.devices.createSigned
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersDevicesCreateSigned : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersDevicesCreateSignedWithObject:parent:]

/** Required. The name of the parent resource. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_Device.
 *
 *  Creates a signed device under a
 *  node or customer.
 *
 *  @param object The @c GTLRSASPortal_CreateSignedDeviceRequest to include in
 *    the query.
 *  @param parent Required. The name of the parent resource.
 *
 *  @return GTLRSASPortalQuery_CustomersDevicesCreateSigned
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_CreateSignedDeviceRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a device.
 *
 *  Method: sasportal.customers.devices.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersDevicesDelete : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersDevicesDeleteWithname:]

/** Required. The name of the device. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Empty.
 *
 *  Deletes a device.
 *
 *  @param name Required. The name of the device.
 *
 *  @return GTLRSASPortalQuery_CustomersDevicesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets details about a device.
 *
 *  Method: sasportal.customers.devices.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersDevicesGet : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersDevicesGetWithname:]

/** Required. The name of the device. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Device.
 *
 *  Gets details about a device.
 *
 *  @param name Required. The name of the device.
 *
 *  @return GTLRSASPortalQuery_CustomersDevicesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists devices under a node or customer.
 *
 *  Method: sasportal.customers.devices.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersDevicesList : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersDevicesListWithparent:]

/**
 *  The filter expression. The filter should have one of the following
 *  formats: "sn=123454" or "display_name=MyDevice". sn
 *  corresponds to serial_number of the device. The filter is case insensitive.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of devices to return in the response. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to ListDevices
 *  that indicates where this listing should continue from.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Required. The name of the parent resource. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_ListDevicesResponse.
 *
 *  Lists devices under a node or customer.
 *
 *  @param parent Required. The name of the parent resource.
 *
 *  @return GTLRSASPortalQuery_CustomersDevicesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Moves a device under another node or customer.
 *
 *  Method: sasportal.customers.devices.move
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersDevicesMove : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersDevicesMoveWithObject:name:]

/** Required. The name of the device to move. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Operation.
 *
 *  Moves a device under another node or customer.
 *
 *  @param object The @c GTLRSASPortal_MoveDeviceRequest to include in the
 *    query.
 *  @param name Required. The name of the device to move.
 *
 *  @return GTLRSASPortalQuery_CustomersDevicesMove
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_MoveDeviceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Updates a device.
 *
 *  Method: sasportal.customers.devices.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersDevicesPatch : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersDevicesPatchWithObject:name:]

/** Output only. The resource path name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRSASPortal_Device.
 *
 *  Updates a device.
 *
 *  @param object The @c GTLRSASPortal_Device to include in the query.
 *  @param name Output only. The resource path name.
 *
 *  @return GTLRSASPortalQuery_CustomersDevicesPatch
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_Device *)object
                           name:(NSString *)name;

@end

/**
 *  Signs a device.
 *
 *  Method: sasportal.customers.devices.signDevice
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersDevicesSignDevice : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersDevicesSignDeviceWithObject:name:]

/** Output only. The resource path name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Empty.
 *
 *  Signs a device.
 *
 *  @param object The @c GTLRSASPortal_SignDeviceRequest to include in the
 *    query.
 *  @param name Output only. The resource path name.
 *
 *  @return GTLRSASPortalQuery_CustomersDevicesSignDevice
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_SignDeviceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Updates a signed device.
 *
 *  Method: sasportal.customers.devices.updateSigned
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersDevicesUpdateSigned : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersDevicesUpdateSignedWithObject:name:]

/** Required. The name of the device to update. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Device.
 *
 *  Updates a signed device.
 *
 *  @param object The @c GTLRSASPortal_UpdateSignedDeviceRequest to include in
 *    the query.
 *  @param name Required. The name of the device to update.
 *
 *  @return GTLRSASPortalQuery_CustomersDevicesUpdateSigned
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_UpdateSignedDeviceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Returns a requested customer.
 *
 *  Method: sasportal.customers.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersGet : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersGetWithname:]

/** Required. The name of the customer. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Customer.
 *
 *  Returns a requested customer.
 *
 *  @param name Required. The name of the customer.
 *
 *  @return GTLRSASPortalQuery_CustomersGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Returns a list of requested customers.
 *
 *  Method: sasportal.customers.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersList : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersList]

/**
 *  The maximum number of customers
 *  to return in the response.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to ListCustomers method
 *  that indicates where
 *  this listing should continue from.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRSASPortal_ListCustomersResponse.
 *
 *  Returns a list of requested customers.
 *
 *  @return GTLRSASPortalQuery_CustomersList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Creates a new node.
 *
 *  Method: sasportal.customers.nodes.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersNodesCreate : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersNodesCreateWithObject:parent:]

/** Required. The parent resource name where the node is to be created. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_Node.
 *
 *  Creates a new node.
 *
 *  @param object The @c GTLRSASPortal_Node to include in the query.
 *  @param parent Required. The parent resource name where the node is to be
 *    created.
 *
 *  @return GTLRSASPortalQuery_CustomersNodesCreate
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_Node *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a node.
 *
 *  Method: sasportal.customers.nodes.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersNodesDelete : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersNodesDeleteWithname:]

/** Required. The name of the node. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Empty.
 *
 *  Deletes a node.
 *
 *  @param name Required. The name of the node.
 *
 *  @return GTLRSASPortalQuery_CustomersNodesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Returns a requested node.
 *
 *  Method: sasportal.customers.nodes.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersNodesGet : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersNodesGetWithname:]

/** Required. The name of the node. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Node.
 *
 *  Returns a requested node.
 *
 *  @param name Required. The name of the node.
 *
 *  @return GTLRSASPortalQuery_CustomersNodesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists nodes.
 *
 *  Method: sasportal.customers.nodes.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersNodesList : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersNodesListWithparent:]

/** The maximum number of nodes to return in the response. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to ListNodes method
 *  that indicates where this listing should continue from.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Required. The parent resource name, for example, "nodes/1". */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_ListNodesResponse.
 *
 *  Lists nodes.
 *
 *  @param parent Required. The parent resource name, for example, "nodes/1".
 *
 *  @return GTLRSASPortalQuery_CustomersNodesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Moves a node under another node or customer.
 *
 *  Method: sasportal.customers.nodes.move
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersNodesMove : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersNodesMoveWithObject:name:]

/**
 *  Required. The name of the node to
 *  move.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Operation.
 *
 *  Moves a node under another node or customer.
 *
 *  @param object The @c GTLRSASPortal_MoveNodeRequest to include in the query.
 *  @param name Required. The name of the node to
 *    move.
 *
 *  @return GTLRSASPortalQuery_CustomersNodesMove
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_MoveNodeRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Updates an existing node.
 *
 *  Method: sasportal.customers.nodes.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersNodesPatch : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersNodesPatchWithObject:name:]

/** Output only. Resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRSASPortal_Node.
 *
 *  Updates an existing node.
 *
 *  @param object The @c GTLRSASPortal_Node to include in the query.
 *  @param name Output only. Resource name.
 *
 *  @return GTLRSASPortalQuery_CustomersNodesPatch
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_Node *)object
                           name:(NSString *)name;

@end

/**
 *  Updates an existing customer.
 *
 *  Method: sasportal.customers.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_CustomersPatch : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForCustomersPatchWithObject:name:]

/** Output only. Resource name of the customer. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRSASPortal_Customer.
 *
 *  Updates an existing customer.
 *
 *  @param object The @c GTLRSASPortal_Customer to include in the query.
 *  @param name Output only. Resource name of the customer.
 *
 *  @return GTLRSASPortalQuery_CustomersPatch
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_Customer *)object
                           name:(NSString *)name;

@end

/**
 *  Generates a secret to be used with the ValidateInstaller method
 *
 *  Method: sasportal.installer.generateSecret
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_InstallerGenerateSecret : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForInstallerGenerateSecretWithObject:]

/**
 *  Fetches a @c GTLRSASPortal_GenerateSecretResponse.
 *
 *  Generates a secret to be used with the ValidateInstaller method
 *
 *  @param object The @c GTLRSASPortal_GenerateSecretRequest to include in the
 *    query.
 *
 *  @return GTLRSASPortalQuery_InstallerGenerateSecret
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_GenerateSecretRequest *)object;

@end

/**
 *  Validates the identity of a Certified Professional Installer (CPI).
 *
 *  Method: sasportal.installer.validate
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_InstallerValidate : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForInstallerValidateWithObject:]

/**
 *  Fetches a @c GTLRSASPortal_ValidateInstallerResponse.
 *
 *  Validates the identity of a Certified Professional Installer (CPI).
 *
 *  @param object The @c GTLRSASPortal_ValidateInstallerRequest to include in
 *    the query.
 *
 *  @return GTLRSASPortalQuery_InstallerValidate
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_ValidateInstallerRequest *)object;

@end

/**
 *  Creates a device under a node or customer. Returned devices are unordered.
 *
 *  Method: sasportal.nodes.devices.bulk
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesDevicesBulk : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesDevicesBulkWithObject:parent:]

/** Required. The name of the parent resource. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_BulkCreateDeviceResponse.
 *
 *  Creates a device under a node or customer. Returned devices are unordered.
 *
 *  @param object The @c GTLRSASPortal_BulkCreateDeviceRequest to include in the
 *    query.
 *  @param parent Required. The name of the parent resource.
 *
 *  @return GTLRSASPortalQuery_NodesDevicesBulk
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_BulkCreateDeviceRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Creates a device under a node or customer.
 *
 *  Method: sasportal.nodes.devices.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesDevicesCreate : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesDevicesCreateWithObject:parent:]

/** Required. The name of the parent resource. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_Device.
 *
 *  Creates a device under a node or customer.
 *
 *  @param object The @c GTLRSASPortal_Device to include in the query.
 *  @param parent Required. The name of the parent resource.
 *
 *  @return GTLRSASPortalQuery_NodesDevicesCreate
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_Device *)object
                         parent:(NSString *)parent;

@end

/**
 *  Creates a signed device under a
 *  node or customer.
 *
 *  Method: sasportal.nodes.devices.createSigned
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesDevicesCreateSigned : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesDevicesCreateSignedWithObject:parent:]

/** Required. The name of the parent resource. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_Device.
 *
 *  Creates a signed device under a
 *  node or customer.
 *
 *  @param object The @c GTLRSASPortal_CreateSignedDeviceRequest to include in
 *    the query.
 *  @param parent Required. The name of the parent resource.
 *
 *  @return GTLRSASPortalQuery_NodesDevicesCreateSigned
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_CreateSignedDeviceRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a device.
 *
 *  Method: sasportal.nodes.devices.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesDevicesDelete : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesDevicesDeleteWithname:]

/** Required. The name of the device. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Empty.
 *
 *  Deletes a device.
 *
 *  @param name Required. The name of the device.
 *
 *  @return GTLRSASPortalQuery_NodesDevicesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets details about a device.
 *
 *  Method: sasportal.nodes.devices.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesDevicesGet : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesDevicesGetWithname:]

/** Required. The name of the device. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Device.
 *
 *  Gets details about a device.
 *
 *  @param name Required. The name of the device.
 *
 *  @return GTLRSASPortalQuery_NodesDevicesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists devices under a node or customer.
 *
 *  Method: sasportal.nodes.devices.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesDevicesList : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesDevicesListWithparent:]

/**
 *  The filter expression. The filter should have one of the following
 *  formats: "sn=123454" or "display_name=MyDevice". sn
 *  corresponds to serial_number of the device. The filter is case insensitive.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of devices to return in the response. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to ListDevices
 *  that indicates where this listing should continue from.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Required. The name of the parent resource. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_ListDevicesResponse.
 *
 *  Lists devices under a node or customer.
 *
 *  @param parent Required. The name of the parent resource.
 *
 *  @return GTLRSASPortalQuery_NodesDevicesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Moves a device under another node or customer.
 *
 *  Method: sasportal.nodes.devices.move
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesDevicesMove : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesDevicesMoveWithObject:name:]

/** Required. The name of the device to move. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Operation.
 *
 *  Moves a device under another node or customer.
 *
 *  @param object The @c GTLRSASPortal_MoveDeviceRequest to include in the
 *    query.
 *  @param name Required. The name of the device to move.
 *
 *  @return GTLRSASPortalQuery_NodesDevicesMove
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_MoveDeviceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Updates a device.
 *
 *  Method: sasportal.nodes.devices.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesDevicesPatch : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesDevicesPatchWithObject:name:]

/** Output only. The resource path name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRSASPortal_Device.
 *
 *  Updates a device.
 *
 *  @param object The @c GTLRSASPortal_Device to include in the query.
 *  @param name Output only. The resource path name.
 *
 *  @return GTLRSASPortalQuery_NodesDevicesPatch
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_Device *)object
                           name:(NSString *)name;

@end

/**
 *  Signs a device.
 *
 *  Method: sasportal.nodes.devices.signDevice
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesDevicesSignDevice : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesDevicesSignDeviceWithObject:name:]

/** Output only. The resource path name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Empty.
 *
 *  Signs a device.
 *
 *  @param object The @c GTLRSASPortal_SignDeviceRequest to include in the
 *    query.
 *  @param name Output only. The resource path name.
 *
 *  @return GTLRSASPortalQuery_NodesDevicesSignDevice
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_SignDeviceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Updates a signed device.
 *
 *  Method: sasportal.nodes.devices.updateSigned
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesDevicesUpdateSigned : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesDevicesUpdateSignedWithObject:name:]

/** Required. The name of the device to update. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Device.
 *
 *  Updates a signed device.
 *
 *  @param object The @c GTLRSASPortal_UpdateSignedDeviceRequest to include in
 *    the query.
 *  @param name Required. The name of the device to update.
 *
 *  @return GTLRSASPortalQuery_NodesDevicesUpdateSigned
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_UpdateSignedDeviceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Creates a new node.
 *
 *  Method: sasportal.nodes.nodes.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesNodesCreate : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesNodesCreateWithObject:parent:]

/** Required. The parent resource name where the node is to be created. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_Node.
 *
 *  Creates a new node.
 *
 *  @param object The @c GTLRSASPortal_Node to include in the query.
 *  @param parent Required. The parent resource name where the node is to be
 *    created.
 *
 *  @return GTLRSASPortalQuery_NodesNodesCreate
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_Node *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a node.
 *
 *  Method: sasportal.nodes.nodes.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesNodesDelete : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesNodesDeleteWithname:]

/** Required. The name of the node. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Empty.
 *
 *  Deletes a node.
 *
 *  @param name Required. The name of the node.
 *
 *  @return GTLRSASPortalQuery_NodesNodesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Returns a requested node.
 *
 *  Method: sasportal.nodes.nodes.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesNodesGet : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesNodesGetWithname:]

/** Required. The name of the node. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Node.
 *
 *  Returns a requested node.
 *
 *  @param name Required. The name of the node.
 *
 *  @return GTLRSASPortalQuery_NodesNodesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists nodes.
 *
 *  Method: sasportal.nodes.nodes.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesNodesList : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesNodesListWithparent:]

/** The maximum number of nodes to return in the response. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to ListNodes method
 *  that indicates where this listing should continue from.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Required. The parent resource name, for example, "nodes/1". */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRSASPortal_ListNodesResponse.
 *
 *  Lists nodes.
 *
 *  @param parent Required. The parent resource name, for example, "nodes/1".
 *
 *  @return GTLRSASPortalQuery_NodesNodesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Moves a node under another node or customer.
 *
 *  Method: sasportal.nodes.nodes.move
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesNodesMove : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesNodesMoveWithObject:name:]

/**
 *  Required. The name of the node to
 *  move.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRSASPortal_Operation.
 *
 *  Moves a node under another node or customer.
 *
 *  @param object The @c GTLRSASPortal_MoveNodeRequest to include in the query.
 *  @param name Required. The name of the node to
 *    move.
 *
 *  @return GTLRSASPortalQuery_NodesNodesMove
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_MoveNodeRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Updates an existing node.
 *
 *  Method: sasportal.nodes.nodes.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_NodesNodesPatch : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForNodesNodesPatchWithObject:name:]

/** Output only. Resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRSASPortal_Node.
 *
 *  Updates an existing node.
 *
 *  @param object The @c GTLRSASPortal_Node to include in the query.
 *  @param name Output only. Resource name.
 *
 *  @return GTLRSASPortalQuery_NodesNodesPatch
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_Node *)object
                           name:(NSString *)name;

@end

/**
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  Method: sasportal.policies.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_PoliciesGet : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForPoliciesGetWithObject:]

/**
 *  Fetches a @c GTLRSASPortal_Policy.
 *
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  @param object The @c GTLRSASPortal_GetPolicyRequest to include in the query.
 *
 *  @return GTLRSASPortalQuery_PoliciesGet
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_GetPolicyRequest *)object;

@end

/**
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  Method: sasportal.policies.set
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_PoliciesSet : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForPoliciesSetWithObject:]

/**
 *  Fetches a @c GTLRSASPortal_Policy.
 *
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  @param object The @c GTLRSASPortal_SetPolicyRequest to include in the query.
 *
 *  @return GTLRSASPortalQuery_PoliciesSet
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_SetPolicyRequest *)object;

@end

/**
 *  Returns permissions that a caller has on the specified resource.
 *
 *  Method: sasportal.policies.test
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeSASPortalUserinfoEmail
 */
@interface GTLRSASPortalQuery_PoliciesTest : GTLRSASPortalQuery
// Previous library name was
//   +[GTLQuerySASPortal queryForPoliciesTestWithObject:]

/**
 *  Fetches a @c GTLRSASPortal_TestPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified resource.
 *
 *  @param object The @c GTLRSASPortal_TestPermissionsRequest to include in the
 *    query.
 *
 *  @return GTLRSASPortalQuery_PoliciesTest
 */
+ (instancetype)queryWithObject:(GTLRSASPortal_TestPermissionsRequest *)object;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
