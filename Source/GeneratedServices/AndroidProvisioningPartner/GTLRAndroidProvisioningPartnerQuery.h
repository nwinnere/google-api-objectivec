// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Android Device Provisioning Partner API (androiddeviceprovisioning/v1)
// Description:
//   Automates Android zero-touch enrollment for device resellers, customers,
//   and EMMs.
// Documentation:
//   https://developers.google.com/zero-touch/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAndroidProvisioningPartner_ClaimDeviceRequest;
@class GTLRAndroidProvisioningPartner_ClaimDevicesRequest;
@class GTLRAndroidProvisioningPartner_Configuration;
@class GTLRAndroidProvisioningPartner_CreateCustomerRequest;
@class GTLRAndroidProvisioningPartner_CustomerApplyConfigurationRequest;
@class GTLRAndroidProvisioningPartner_CustomerRemoveConfigurationRequest;
@class GTLRAndroidProvisioningPartner_CustomerUnclaimDeviceRequest;
@class GTLRAndroidProvisioningPartner_FindDevicesByDeviceIdentifierRequest;
@class GTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest;
@class GTLRAndroidProvisioningPartner_UnclaimDeviceRequest;
@class GTLRAndroidProvisioningPartner_UnclaimDevicesRequest;
@class GTLRAndroidProvisioningPartner_UpdateDeviceMetadataInBatchRequest;
@class GTLRAndroidProvisioningPartner_UpdateDeviceMetadataRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Android Provisioning Partner query classes.
 */
@interface GTLRAndroidProvisioningPartnerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a new configuration. Once created, a customer can apply the
 *  configuration to devices.
 *
 *  Method: androiddeviceprovisioning.customers.configurations.create
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersConfigurationsCreate : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersConfigurationsCreateWithObject:parent:]

/**
 *  Required. The customer that manages the configuration. An API resource name
 *  in the format `customers/[CUSTOMER_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Configuration.
 *
 *  Creates a new configuration. Once created, a customer can apply the
 *  configuration to devices.
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_Configuration to include
 *    in the query.
 *  @param parent Required. The customer that manages the configuration. An API
 *    resource name
 *    in the format `customers/[CUSTOMER_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersConfigurationsCreate
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_Configuration *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes an unused configuration. The API call fails if the customer has
 *  devices with the configuration applied.
 *
 *  Method: androiddeviceprovisioning.customers.configurations.delete
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersConfigurationsDelete : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersConfigurationsDeleteWithname:]

/**
 *  Required. The configuration to delete. An API resource name in the format
 *  `customers/[CUSTOMER_ID]/configurations/[CONFIGURATION_ID]`. If the
 *  configuration is applied to any devices, the API call fails.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Empty.
 *
 *  Deletes an unused configuration. The API call fails if the customer has
 *  devices with the configuration applied.
 *
 *  @param name Required. The configuration to delete. An API resource name in
 *    the format
 *    `customers/[CUSTOMER_ID]/configurations/[CONFIGURATION_ID]`. If the
 *    configuration is applied to any devices, the API call fails.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersConfigurationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the details of a configuration.
 *
 *  Method: androiddeviceprovisioning.customers.configurations.get
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersConfigurationsGet : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersConfigurationsGetWithname:]

/**
 *  Required. The configuration to get. An API resource name in the format
 *  `customers/[CUSTOMER_ID]/configurations/[CONFIGURATION_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Configuration.
 *
 *  Gets the details of a configuration.
 *
 *  @param name Required. The configuration to get. An API resource name in the
 *    format
 *    `customers/[CUSTOMER_ID]/configurations/[CONFIGURATION_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersConfigurationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists a customer's configurations.
 *
 *  Method: androiddeviceprovisioning.customers.configurations.list
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersConfigurationsList : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersConfigurationsListWithparent:]

/**
 *  Required. The customer that manages the listed configurations. An API
 *  resource name in the format `customers/[CUSTOMER_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c
 *  GTLRAndroidProvisioningPartner_CustomerListConfigurationsResponse.
 *
 *  Lists a customer's configurations.
 *
 *  @param parent Required. The customer that manages the listed configurations.
 *    An API
 *    resource name in the format `customers/[CUSTOMER_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersConfigurationsList
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a configuration's field values.
 *
 *  Method: androiddeviceprovisioning.customers.configurations.patch
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersConfigurationsPatch : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersConfigurationsPatchWithObject:name:]

/**
 *  Output only. The API resource name in the format
 *  `customers/[CUSTOMER_ID]/configurations/[CONFIGURATION_ID]`. Assigned by
 *  the server.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required. The field mask applied to the target `Configuration` before
 *  updating the fields. To learn more about using field masks, read
 *  [FieldMask](/protocol-buffers/docs/reference/google.protobuf#fieldmask) in
 *  the Protocol Buffers documentation.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Configuration.
 *
 *  Updates a configuration's field values.
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_Configuration to include
 *    in the query.
 *  @param name Output only. The API resource name in the format
 *    `customers/[CUSTOMER_ID]/configurations/[CONFIGURATION_ID]`. Assigned by
 *    the server.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersConfigurationsPatch
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_Configuration *)object
                           name:(NSString *)name;

@end

/**
 *  Applies a Configuration to the device to register the device for zero-touch
 *  enrollment. After applying a configuration to a device, the device
 *  automatically provisions itself on first boot, or next factory reset.
 *
 *  Method: androiddeviceprovisioning.customers.devices.applyConfiguration
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersDevicesApplyConfiguration : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersDevicesApplyConfigurationWithObject:parent:]

/**
 *  Required. The customer managing the device. An API resource name in the
 *  format `customers/[CUSTOMER_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Empty.
 *
 *  Applies a Configuration to the device to register the device for zero-touch
 *  enrollment. After applying a configuration to a device, the device
 *  automatically provisions itself on first boot, or next factory reset.
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_CustomerApplyConfigurationRequest to
 *    include in the query.
 *  @param parent Required. The customer managing the device. An API resource
 *    name in the
 *    format `customers/[CUSTOMER_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersDevicesApplyConfiguration
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_CustomerApplyConfigurationRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Gets the details of a device.
 *
 *  Method: androiddeviceprovisioning.customers.devices.get
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersDevicesGet : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersDevicesGetWithname:]

/**
 *  Required. The device to get. An API resource name in the format
 *  `customers/[CUSTOMER_ID]/devices/[DEVICE_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Device.
 *
 *  Gets the details of a device.
 *
 *  @param name Required. The device to get. An API resource name in the format
 *    `customers/[CUSTOMER_ID]/devices/[DEVICE_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersDevicesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists a customer's devices.
 *
 *  Method: androiddeviceprovisioning.customers.devices.list
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersDevicesList : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersDevicesListWithparent:]

/**
 *  The maximum number of devices to show in a page of results.
 *  Must be between 1 and 100 inclusive.
 */
@property(nonatomic, assign) long long pageSize;

/** A token specifying which result page to return. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The customer managing the devices. An API resource name in the
 *  format `customers/[CUSTOMER_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_CustomerListDevicesResponse.
 *
 *  Lists a customer's devices.
 *
 *  @param parent Required. The customer managing the devices. An API resource
 *    name in the
 *    format `customers/[CUSTOMER_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersDevicesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Removes a configuration from device.
 *
 *  Method: androiddeviceprovisioning.customers.devices.removeConfiguration
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersDevicesRemoveConfiguration : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersDevicesRemoveConfigurationWithObject:parent:]

/**
 *  Required. The customer managing the device in the format
 *  `customers/[CUSTOMER_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Empty.
 *
 *  Removes a configuration from device.
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_CustomerRemoveConfigurationRequest to
 *    include in the query.
 *  @param parent Required. The customer managing the device in the format
 *    `customers/[CUSTOMER_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersDevicesRemoveConfiguration
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_CustomerRemoveConfigurationRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Unclaims a device from a customer and removes it from zero-touch
 *  enrollment.
 *  After removing a device, a customer must contact their reseller to register
 *  the device into zero-touch enrollment again.
 *
 *  Method: androiddeviceprovisioning.customers.devices.unclaim
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersDevicesUnclaim : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersDevicesUnclaimWithObject:parent:]

/**
 *  Required. The customer managing the device. An API resource name in the
 *  format `customers/[CUSTOMER_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Empty.
 *
 *  Unclaims a device from a customer and removes it from zero-touch
 *  enrollment.
 *  After removing a device, a customer must contact their reseller to register
 *  the device into zero-touch enrollment again.
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_CustomerUnclaimDeviceRequest to include in
 *    the query.
 *  @param parent Required. The customer managing the device. An API resource
 *    name in the
 *    format `customers/[CUSTOMER_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersDevicesUnclaim
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_CustomerUnclaimDeviceRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Lists the DPCs (device policy controllers) that support zero-touch
 *  enrollment.
 *
 *  Method: androiddeviceprovisioning.customers.dpcs.list
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersDpcsList : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersDpcsListWithparent:]

/**
 *  Required. The customer that can use the DPCs in configurations. An API
 *  resource name in the format `customers/[CUSTOMER_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_CustomerListDpcsResponse.
 *
 *  Lists the DPCs (device policy controllers) that support zero-touch
 *  enrollment.
 *
 *  @param parent Required. The customer that can use the DPCs in
 *    configurations. An API
 *    resource name in the format `customers/[CUSTOMER_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersDpcsList
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Lists the user's customer accounts.
 *
 *  Method: androiddeviceprovisioning.customers.list
 */
@interface GTLRAndroidProvisioningPartnerQuery_CustomersList : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForCustomersList]

/**
 *  The maximum number of customers to show in a page of results.
 *  A number between 1 and 100 (inclusive).
 */
@property(nonatomic, assign) NSInteger pageSize;

/** A token specifying which result page to return. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_CustomerListCustomersResponse.
 *
 *  Lists the user's customer accounts.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_CustomersList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: androiddeviceprovisioning.operations.get
 */
@interface GTLRAndroidProvisioningPartnerQuery_OperationsGet : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_OperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a customer for zero-touch enrollment. After the method returns
 *  successfully, admin and owner roles can manage devices and EMM configs
 *  by calling API methods or using their zero-touch enrollment portal.
 *  The customer receives an email that welcomes them to zero-touch enrollment
 *  and explains how to sign into the portal.
 *
 *  Method: androiddeviceprovisioning.partners.customers.create
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersCustomersCreate : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersCustomersCreateWithObject:parent:]

/**
 *  Required. The parent resource ID in the format `partners/[PARTNER_ID]` that
 *  identifies the reseller.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Company.
 *
 *  Creates a customer for zero-touch enrollment. After the method returns
 *  successfully, admin and owner roles can manage devices and EMM configs
 *  by calling API methods or using their zero-touch enrollment portal.
 *  The customer receives an email that welcomes them to zero-touch enrollment
 *  and explains how to sign into the portal.
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_CreateCustomerRequest to
 *    include in the query.
 *  @param parent Required. The parent resource ID in the format
 *    `partners/[PARTNER_ID]` that
 *    identifies the reseller.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersCustomersCreate
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_CreateCustomerRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Lists the customers that are enrolled to the reseller identified by the
 *  `partnerId` argument. This list includes customers that the reseller
 *  created and customers that enrolled themselves using the portal.
 *
 *  Method: androiddeviceprovisioning.partners.customers.list
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersCustomersList : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersCustomersListWithpartnerId:]

/**
 *  The maximum number of results to be returned. If not specified or 0, all
 *  the records are returned.
 */
@property(nonatomic, assign) NSInteger pageSize;

/** A token identifying a page of results returned by the server. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Required. The ID of the reseller partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_ListCustomersResponse.
 *
 *  Lists the customers that are enrolled to the reseller identified by the
 *  `partnerId` argument. This list includes customers that the reseller
 *  created and customers that enrolled themselves using the portal.
 *
 *  @param partnerId Required. The ID of the reseller partner.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersCustomersList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithPartnerId:(long long)partnerId;

@end

/**
 *  Claims a device for a customer and adds it to zero-touch enrollment. If the
 *  device is already claimed by another customer, the call returns an error.
 *
 *  Method: androiddeviceprovisioning.partners.devices.claim
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesClaim : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesClaimWithObject:partnerId:]

/** Required. The ID of the reseller partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_ClaimDeviceResponse.
 *
 *  Claims a device for a customer and adds it to zero-touch enrollment. If the
 *  device is already claimed by another customer, the call returns an error.
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_ClaimDeviceRequest to
 *    include in the query.
 *  @param partnerId Required. The ID of the reseller partner.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersDevicesClaim
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_ClaimDeviceRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Claims a batch of devices for a customer asynchronously. Adds the devices
 *  to zero-touch enrollment. To learn more, read [Long‑running batch
 *  operations](/zero-touch/guides/how-it-works#operations).
 *
 *  Method: androiddeviceprovisioning.partners.devices.claimAsync
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesClaimAsync : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesClaimAsyncWithObject:partnerId:]

/** Required. The ID of the reseller partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Operation.
 *
 *  Claims a batch of devices for a customer asynchronously. Adds the devices
 *  to zero-touch enrollment. To learn more, read [Long‑running batch
 *  operations](/zero-touch/guides/how-it-works#operations).
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_ClaimDevicesRequest to
 *    include in the query.
 *  @param partnerId Required. The ID of the reseller partner.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersDevicesClaimAsync
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_ClaimDevicesRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Finds devices by hardware identifiers, such as IMEI.
 *
 *  Method: androiddeviceprovisioning.partners.devices.findByIdentifier
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesFindByIdentifier : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesFindByIdentifierWithObject:partnerId:]

/** Required. The ID of the reseller partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c
 *  GTLRAndroidProvisioningPartner_FindDevicesByDeviceIdentifierResponse.
 *
 *  Finds devices by hardware identifiers, such as IMEI.
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_FindDevicesByDeviceIdentifierRequest to
 *    include in the query.
 *  @param partnerId Required. The ID of the reseller partner.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersDevicesFindByIdentifier
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_FindDevicesByDeviceIdentifierRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Finds devices claimed for customers. The results only contain devices
 *  registered to the reseller that's identified by the `partnerId` argument.
 *  The customer's devices purchased from other resellers don't appear in the
 *  results.
 *
 *  Method: androiddeviceprovisioning.partners.devices.findByOwner
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesFindByOwner : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesFindByOwnerWithObject:partnerId:]

/** Required. The ID of the reseller partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_FindDevicesByOwnerResponse.
 *
 *  Finds devices claimed for customers. The results only contain devices
 *  registered to the reseller that's identified by the `partnerId` argument.
 *  The customer's devices purchased from other resellers don't appear in the
 *  results.
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest to include in the
 *    query.
 *  @param partnerId Required. The ID of the reseller partner.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersDevicesFindByOwner
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Gets a device.
 *
 *  Method: androiddeviceprovisioning.partners.devices.get
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesGet : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesGetWithname:]

/**
 *  Required. The device API resource name in the format
 *  `partners/[PARTNER_ID]/devices/[DEVICE_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Device.
 *
 *  Gets a device.
 *
 *  @param name Required. The device API resource name in the format
 *    `partners/[PARTNER_ID]/devices/[DEVICE_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersDevicesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Updates reseller metadata associated with the device.
 *
 *  Method: androiddeviceprovisioning.partners.devices.metadata
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesMetadata : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesMetadataWithObject:metadataOwnerId:deviceId:]

/** Required. The ID of the device. */
@property(nonatomic, assign) long long deviceId;

/**
 *  Required. The owner of the newly set metadata. Set this to the partner ID.
 */
@property(nonatomic, assign) long long metadataOwnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_DeviceMetadata.
 *
 *  Updates reseller metadata associated with the device.
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_UpdateDeviceMetadataRequest to include in
 *    the query.
 *  @param metadataOwnerId Required. The owner of the newly set metadata. Set
 *    this to the partner ID.
 *  @param deviceId Required. The ID of the device.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersDevicesMetadata
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_UpdateDeviceMetadataRequest *)object
                metadataOwnerId:(long long)metadataOwnerId
                       deviceId:(long long)deviceId;

@end

/**
 *  Unclaims a device from a customer and removes it from zero-touch
 *  enrollment.
 *
 *  Method: androiddeviceprovisioning.partners.devices.unclaim
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUnclaim : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesUnclaimWithObject:partnerId:]

/** Required. The ID of the reseller partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Empty.
 *
 *  Unclaims a device from a customer and removes it from zero-touch
 *  enrollment.
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_UnclaimDeviceRequest to
 *    include in the query.
 *  @param partnerId Required. The ID of the reseller partner.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUnclaim
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_UnclaimDeviceRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Unclaims a batch of devices for a customer asynchronously. Removes the
 *  devices from zero-touch enrollment. To learn more, read [Long‑running batch
 *  operations](/zero-touch/guides/how-it-works#operations).
 *
 *  Method: androiddeviceprovisioning.partners.devices.unclaimAsync
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUnclaimAsync : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesUnclaimAsyncWithObject:partnerId:]

/** Required. The reseller partner ID. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Operation.
 *
 *  Unclaims a batch of devices for a customer asynchronously. Removes the
 *  devices from zero-touch enrollment. To learn more, read [Long‑running batch
 *  operations](/zero-touch/guides/how-it-works#operations).
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_UnclaimDevicesRequest to
 *    include in the query.
 *  @param partnerId Required. The reseller partner ID.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUnclaimAsync
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_UnclaimDevicesRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Updates the reseller metadata attached to a batch of devices. This method
 *  updates devices asynchronously and returns an `Operation` that can be used
 *  to track progress. Read [Long‑running batch
 *  operations](/zero-touch/guides/how-it-works#operations).
 *
 *  Method: androiddeviceprovisioning.partners.devices.updateMetadataAsync
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUpdateMetadataAsync : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesUpdateMetadataAsyncWithObject:partnerId:]

/** Required. The reseller partner ID. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Operation.
 *
 *  Updates the reseller metadata attached to a batch of devices. This method
 *  updates devices asynchronously and returns an `Operation` that can be used
 *  to track progress. Read [Long‑running batch
 *  operations](/zero-touch/guides/how-it-works#operations).
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_UpdateDeviceMetadataInBatchRequest to
 *    include in the query.
 *  @param partnerId Required. The reseller partner ID.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUpdateMetadataAsync
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_UpdateDeviceMetadataInBatchRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Lists the customers of the vendor.
 *
 *  Method: androiddeviceprovisioning.partners.vendors.customers.list
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersVendorsCustomersList : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersVendorsCustomersListWithparent:]

/** The maximum number of results to be returned. */
@property(nonatomic, assign) NSInteger pageSize;

/** A token identifying a page of results returned by the server. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The resource name in the format
 *  `partners/[PARTNER_ID]/vendors/[VENDOR_ID]`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_ListVendorCustomersResponse.
 *
 *  Lists the customers of the vendor.
 *
 *  @param parent Required. The resource name in the format
 *    `partners/[PARTNER_ID]/vendors/[VENDOR_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersVendorsCustomersList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Lists the vendors of the partner.
 *
 *  Method: androiddeviceprovisioning.partners.vendors.list
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersVendorsList : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersVendorsListWithparent:]

/** The maximum number of results to be returned. */
@property(nonatomic, assign) NSInteger pageSize;

/** A token identifying a page of results returned by the server. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Required. The resource name in the format `partners/[PARTNER_ID]`. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_ListVendorsResponse.
 *
 *  Lists the vendors of the partner.
 *
 *  @param parent Required. The resource name in the format
 *    `partners/[PARTNER_ID]`.
 *
 *  @return GTLRAndroidProvisioningPartnerQuery_PartnersVendorsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
