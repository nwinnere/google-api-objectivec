// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   SAS Portal API (sasportal/v1alpha1)
// Documentation:
//   https://developers.google.com/spectrum-access-system/

#import "GTLRSASPortalObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRSASPortal_Device.state
NSString * const kGTLRSASPortal_Device_State_Deregistered      = @"DEREGISTERED";
NSString * const kGTLRSASPortal_Device_State_DeviceStateUnspecified = @"DEVICE_STATE_UNSPECIFIED";
NSString * const kGTLRSASPortal_Device_State_Registered        = @"REGISTERED";
NSString * const kGTLRSASPortal_Device_State_Reserved          = @"RESERVED";

// GTLRSASPortal_DeviceAirInterface.radioTechnology
NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_CambiumNetworks = @"CAMBIUM_NETWORKS";
NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_DoodleCbrs = @"DOODLE_CBRS";
NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_EUtra = @"E_UTRA";
NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_FourGBbwSaa1 = @"FOUR_G_BBW_SAA_1";
NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_Nr = @"NR";
NSString * const kGTLRSASPortal_DeviceAirInterface_RadioTechnology_RadioTechnologyUnspecified = @"RADIO_TECHNOLOGY_UNSPECIFIED";

// GTLRSASPortal_DeviceConfig.category
NSString * const kGTLRSASPortal_DeviceConfig_Category_DeviceCategoryA = @"DEVICE_CATEGORY_A";
NSString * const kGTLRSASPortal_DeviceConfig_Category_DeviceCategoryB = @"DEVICE_CATEGORY_B";
NSString * const kGTLRSASPortal_DeviceConfig_Category_DeviceCategoryUnspecified = @"DEVICE_CATEGORY_UNSPECIFIED";

// GTLRSASPortal_DeviceConfig.measurementCapabilities
NSString * const kGTLRSASPortal_DeviceConfig_MeasurementCapabilities_MeasurementCapabilityReceivedPowerWithGrant = @"MEASUREMENT_CAPABILITY_RECEIVED_POWER_WITH_GRANT";
NSString * const kGTLRSASPortal_DeviceConfig_MeasurementCapabilities_MeasurementCapabilityReceivedPowerWithoutGrant = @"MEASUREMENT_CAPABILITY_RECEIVED_POWER_WITHOUT_GRANT";
NSString * const kGTLRSASPortal_DeviceConfig_MeasurementCapabilities_MeasurementCapabilityUnspecified = @"MEASUREMENT_CAPABILITY_UNSPECIFIED";

// GTLRSASPortal_DeviceConfig.state
NSString * const kGTLRSASPortal_DeviceConfig_State_DeviceConfigStateUnspecified = @"DEVICE_CONFIG_STATE_UNSPECIFIED";
NSString * const kGTLRSASPortal_DeviceConfig_State_Draft       = @"DRAFT";
NSString * const kGTLRSASPortal_DeviceConfig_State_Final       = @"FINAL";

// GTLRSASPortal_DeviceGrant.channelType
NSString * const kGTLRSASPortal_DeviceGrant_ChannelType_ChannelTypeGaa = @"CHANNEL_TYPE_GAA";
NSString * const kGTLRSASPortal_DeviceGrant_ChannelType_ChannelTypePal = @"CHANNEL_TYPE_PAL";
NSString * const kGTLRSASPortal_DeviceGrant_ChannelType_ChannelTypeUnspecified = @"CHANNEL_TYPE_UNSPECIFIED";

// GTLRSASPortal_DeviceGrant.state
NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateAuthorized = @"GRANT_STATE_AUTHORIZED";
NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateExpired = @"GRANT_STATE_EXPIRED";
NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateGranted = @"GRANT_STATE_GRANTED";
NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateSuspended = @"GRANT_STATE_SUSPENDED";
NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateTerminated = @"GRANT_STATE_TERMINATED";
NSString * const kGTLRSASPortal_DeviceGrant_State_GrantStateUnspecified = @"GRANT_STATE_UNSPECIFIED";

// GTLRSASPortal_InstallationParams.heightType
NSString * const kGTLRSASPortal_InstallationParams_HeightType_HeightTypeAgl = @"HEIGHT_TYPE_AGL";
NSString * const kGTLRSASPortal_InstallationParams_HeightType_HeightTypeAmsl = @"HEIGHT_TYPE_AMSL";
NSString * const kGTLRSASPortal_InstallationParams_HeightType_HeightTypeUnspecified = @"HEIGHT_TYPE_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Assignment
//

@implementation GTLRSASPortal_Assignment
@dynamic members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_CreateSignedDeviceRequest
//

@implementation GTLRSASPortal_CreateSignedDeviceRequest
@dynamic encodedDevice, installerId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Customer
//

@implementation GTLRSASPortal_Customer
@dynamic displayName, name, sasUserIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sasUserIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Device
//

@implementation GTLRSASPortal_Device
@dynamic activeConfig, displayName, fccId, grants, name, preloadedConfig,
         serialNumber, state;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"grants" : [GTLRSASPortal_DeviceGrant class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_DeviceAirInterface
//

@implementation GTLRSASPortal_DeviceAirInterface
@dynamic radioTechnology, supportedSpec;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_DeviceConfig
//

@implementation GTLRSASPortal_DeviceConfig
@dynamic airInterface, callSign, category, installationParams, isSigned,
         measurementCapabilities, model, state, updateTime, userId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"measurementCapabilities" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_DeviceGrant
//

@implementation GTLRSASPortal_DeviceGrant
@dynamic channelType, expireTime, frequencyRange, maxEirp, moveList, state;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"moveList" : [GTLRSASPortal_DpaMoveList class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_DeviceModel
//

@implementation GTLRSASPortal_DeviceModel
@dynamic firmwareVersion, hardwareVersion, name, softwareVersion, vendor;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_DpaMoveList
//

@implementation GTLRSASPortal_DpaMoveList
@dynamic dpaId, frequencyRange;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Empty
//

@implementation GTLRSASPortal_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_FrequencyRange
//

@implementation GTLRSASPortal_FrequencyRange
@dynamic highFrequencyMhz, lowFrequencyMhz;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_GenerateSecretRequest
//

@implementation GTLRSASPortal_GenerateSecretRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_GenerateSecretResponse
//

@implementation GTLRSASPortal_GenerateSecretResponse
@dynamic secret;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_GetPolicyRequest
//

@implementation GTLRSASPortal_GetPolicyRequest
@dynamic resource;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_InstallationParams
//

@implementation GTLRSASPortal_InstallationParams
@dynamic antennaAzimuth, antennaBeamwidth, antennaDowntilt, antennaGain,
         antennaModel, eirpCapability, height, heightType, horizontalAccuracy,
         indoorDeployment, latitude, longitude, verticalAccuracy;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_ListCustomersResponse
//

@implementation GTLRSASPortal_ListCustomersResponse
@dynamic customers, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"customers" : [GTLRSASPortal_Customer class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"customers";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_ListDevicesResponse
//

@implementation GTLRSASPortal_ListDevicesResponse
@dynamic devices, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"devices" : [GTLRSASPortal_Device class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"devices";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_ListNodesResponse
//

@implementation GTLRSASPortal_ListNodesResponse
@dynamic nextPageToken, nodes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"nodes" : [GTLRSASPortal_Node class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"nodes";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_MoveDeviceRequest
//

@implementation GTLRSASPortal_MoveDeviceRequest
@dynamic destination;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_MoveNodeRequest
//

@implementation GTLRSASPortal_MoveNodeRequest
@dynamic destination;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Node
//

@implementation GTLRSASPortal_Node
@dynamic displayName, name, sasUserIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sasUserIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Operation
//

@implementation GTLRSASPortal_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Operation_Metadata
//

@implementation GTLRSASPortal_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Operation_Response
//

@implementation GTLRSASPortal_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Policy
//

@implementation GTLRSASPortal_Policy
@dynamic assignments, ETag;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"assignments" : [GTLRSASPortal_Assignment class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_SetPolicyRequest
//

@implementation GTLRSASPortal_SetPolicyRequest
@dynamic policy, resource;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_SignDeviceRequest
//

@implementation GTLRSASPortal_SignDeviceRequest
@dynamic device;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Status
//

@implementation GTLRSASPortal_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRSASPortal_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_Status_Details_Item
//

@implementation GTLRSASPortal_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_TestPermissionsRequest
//

@implementation GTLRSASPortal_TestPermissionsRequest
@dynamic permissions, resource;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_TestPermissionsResponse
//

@implementation GTLRSASPortal_TestPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_UpdateSignedDeviceRequest
//

@implementation GTLRSASPortal_UpdateSignedDeviceRequest
@dynamic encodedDevice, installerId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_ValidateInstallerRequest
//

@implementation GTLRSASPortal_ValidateInstallerRequest
@dynamic encodedSecret, installerId, secret;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSASPortal_ValidateInstallerResponse
//

@implementation GTLRSASPortal_ValidateInstallerResponse
@end
