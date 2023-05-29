// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Access Context Manager API (accesscontextmanager/v1)
// Description:
//   An API for setting attribute based access control to requests to GCP
//   services.
// Documentation:
//   https://cloud.google.com/access-context-manager/docs/reference/rest/

#import "GTLRAccessContextManagerObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRAccessContextManager_BasicLevel.combiningFunction
NSString * const kGTLRAccessContextManager_BasicLevel_CombiningFunction_And = @"AND";
NSString * const kGTLRAccessContextManager_BasicLevel_CombiningFunction_Or = @"OR";

// GTLRAccessContextManager_DevicePolicy.allowedDeviceManagementLevels
NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedDeviceManagementLevels_Basic = @"BASIC";
NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedDeviceManagementLevels_Complete = @"COMPLETE";
NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedDeviceManagementLevels_ManagementUnspecified = @"MANAGEMENT_UNSPECIFIED";
NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedDeviceManagementLevels_None = @"NONE";

// GTLRAccessContextManager_DevicePolicy.allowedEncryptionStatuses
NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedEncryptionStatuses_Encrypted = @"ENCRYPTED";
NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedEncryptionStatuses_EncryptionUnspecified = @"ENCRYPTION_UNSPECIFIED";
NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedEncryptionStatuses_EncryptionUnsupported = @"ENCRYPTION_UNSUPPORTED";
NSString * const kGTLRAccessContextManager_DevicePolicy_AllowedEncryptionStatuses_Unencrypted = @"UNENCRYPTED";

// GTLRAccessContextManager_EgressFrom.identityType
NSString * const kGTLRAccessContextManager_EgressFrom_IdentityType_AnyIdentity = @"ANY_IDENTITY";
NSString * const kGTLRAccessContextManager_EgressFrom_IdentityType_AnyServiceAccount = @"ANY_SERVICE_ACCOUNT";
NSString * const kGTLRAccessContextManager_EgressFrom_IdentityType_AnyUserAccount = @"ANY_USER_ACCOUNT";
NSString * const kGTLRAccessContextManager_EgressFrom_IdentityType_IdentityTypeUnspecified = @"IDENTITY_TYPE_UNSPECIFIED";

// GTLRAccessContextManager_IngressFrom.identityType
NSString * const kGTLRAccessContextManager_IngressFrom_IdentityType_AnyIdentity = @"ANY_IDENTITY";
NSString * const kGTLRAccessContextManager_IngressFrom_IdentityType_AnyServiceAccount = @"ANY_SERVICE_ACCOUNT";
NSString * const kGTLRAccessContextManager_IngressFrom_IdentityType_AnyUserAccount = @"ANY_USER_ACCOUNT";
NSString * const kGTLRAccessContextManager_IngressFrom_IdentityType_IdentityTypeUnspecified = @"IDENTITY_TYPE_UNSPECIFIED";

// GTLRAccessContextManager_OsConstraint.osType
NSString * const kGTLRAccessContextManager_OsConstraint_OsType_Android = @"ANDROID";
NSString * const kGTLRAccessContextManager_OsConstraint_OsType_DesktopChromeOs = @"DESKTOP_CHROME_OS";
NSString * const kGTLRAccessContextManager_OsConstraint_OsType_DesktopLinux = @"DESKTOP_LINUX";
NSString * const kGTLRAccessContextManager_OsConstraint_OsType_DesktopMac = @"DESKTOP_MAC";
NSString * const kGTLRAccessContextManager_OsConstraint_OsType_DesktopWindows = @"DESKTOP_WINDOWS";
NSString * const kGTLRAccessContextManager_OsConstraint_OsType_Ios = @"IOS";
NSString * const kGTLRAccessContextManager_OsConstraint_OsType_OsUnspecified = @"OS_UNSPECIFIED";

// GTLRAccessContextManager_ServicePerimeter.perimeterType
NSString * const kGTLRAccessContextManager_ServicePerimeter_PerimeterType_PerimeterTypeBridge = @"PERIMETER_TYPE_BRIDGE";
NSString * const kGTLRAccessContextManager_ServicePerimeter_PerimeterType_PerimeterTypeRegular = @"PERIMETER_TYPE_REGULAR";

// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_AccessLevel
//

@implementation GTLRAccessContextManager_AccessLevel
@dynamic basic, custom, descriptionProperty, name, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_AccessPolicy
//

@implementation GTLRAccessContextManager_AccessPolicy
@dynamic ETag, name, parent, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ApiOperation
//

@implementation GTLRAccessContextManager_ApiOperation
@dynamic methodSelectors, serviceName;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"methodSelectors" : [GTLRAccessContextManager_MethodSelector class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_BasicLevel
//

@implementation GTLRAccessContextManager_BasicLevel
@dynamic combiningFunction, conditions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"conditions" : [GTLRAccessContextManager_Condition class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_CancelOperationRequest
//

@implementation GTLRAccessContextManager_CancelOperationRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_CommitServicePerimetersRequest
//

@implementation GTLRAccessContextManager_CommitServicePerimetersRequest
@dynamic ETag;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_CommitServicePerimetersResponse
//

@implementation GTLRAccessContextManager_CommitServicePerimetersResponse
@dynamic servicePerimeters;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"servicePerimeters" : [GTLRAccessContextManager_ServicePerimeter class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_Condition
//

@implementation GTLRAccessContextManager_Condition
@dynamic devicePolicy, ipSubnetworks, members, negate, regions,
         requiredAccessLevels;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"ipSubnetworks" : [NSString class],
    @"members" : [NSString class],
    @"regions" : [NSString class],
    @"requiredAccessLevels" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_CustomLevel
//

@implementation GTLRAccessContextManager_CustomLevel
@dynamic expr;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_DevicePolicy
//

@implementation GTLRAccessContextManager_DevicePolicy
@dynamic allowedDeviceManagementLevels, allowedEncryptionStatuses,
         osConstraints, requireAdminApproval, requireCorpOwned,
         requireScreenlock;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedDeviceManagementLevels" : [NSString class],
    @"allowedEncryptionStatuses" : [NSString class],
    @"osConstraints" : [GTLRAccessContextManager_OsConstraint class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_EgressFrom
//

@implementation GTLRAccessContextManager_EgressFrom
@dynamic identities, identityType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"identities" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_EgressPolicy
//

@implementation GTLRAccessContextManager_EgressPolicy
@dynamic egressFrom, egressTo;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_EgressTo
//

@implementation GTLRAccessContextManager_EgressTo
@dynamic operations, resources;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRAccessContextManager_ApiOperation class],
    @"resources" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_Empty
//

@implementation GTLRAccessContextManager_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_Expr
//

@implementation GTLRAccessContextManager_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_GcpUserAccessBinding
//

@implementation GTLRAccessContextManager_GcpUserAccessBinding
@dynamic accessLevels, groupKey, name;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accessLevels" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_IngressFrom
//

@implementation GTLRAccessContextManager_IngressFrom
@dynamic identities, identityType, sources;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"identities" : [NSString class],
    @"sources" : [GTLRAccessContextManager_IngressSource class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_IngressPolicy
//

@implementation GTLRAccessContextManager_IngressPolicy
@dynamic ingressFrom, ingressTo;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_IngressSource
//

@implementation GTLRAccessContextManager_IngressSource
@dynamic accessLevel, resource;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_IngressTo
//

@implementation GTLRAccessContextManager_IngressTo
@dynamic operations, resources;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRAccessContextManager_ApiOperation class],
    @"resources" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ListAccessLevelsResponse
//

@implementation GTLRAccessContextManager_ListAccessLevelsResponse
@dynamic accessLevels, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accessLevels" : [GTLRAccessContextManager_AccessLevel class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"accessLevels";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ListAccessPoliciesResponse
//

@implementation GTLRAccessContextManager_ListAccessPoliciesResponse
@dynamic accessPolicies, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accessPolicies" : [GTLRAccessContextManager_AccessPolicy class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"accessPolicies";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ListGcpUserAccessBindingsResponse
//

@implementation GTLRAccessContextManager_ListGcpUserAccessBindingsResponse
@dynamic gcpUserAccessBindings, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"gcpUserAccessBindings" : [GTLRAccessContextManager_GcpUserAccessBinding class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"gcpUserAccessBindings";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ListOperationsResponse
//

@implementation GTLRAccessContextManager_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRAccessContextManager_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ListServicePerimetersResponse
//

@implementation GTLRAccessContextManager_ListServicePerimetersResponse
@dynamic nextPageToken, servicePerimeters;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"servicePerimeters" : [GTLRAccessContextManager_ServicePerimeter class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"servicePerimeters";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_MethodSelector
//

@implementation GTLRAccessContextManager_MethodSelector
@dynamic method, permission;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_Operation
//

@implementation GTLRAccessContextManager_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_Operation_Metadata
//

@implementation GTLRAccessContextManager_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_Operation_Response
//

@implementation GTLRAccessContextManager_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_OsConstraint
//

@implementation GTLRAccessContextManager_OsConstraint
@dynamic minimumVersion, osType, requireVerifiedChromeOs;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ReplaceAccessLevelsRequest
//

@implementation GTLRAccessContextManager_ReplaceAccessLevelsRequest
@dynamic accessLevels, ETag;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accessLevels" : [GTLRAccessContextManager_AccessLevel class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ReplaceAccessLevelsResponse
//

@implementation GTLRAccessContextManager_ReplaceAccessLevelsResponse
@dynamic accessLevels;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accessLevels" : [GTLRAccessContextManager_AccessLevel class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ReplaceServicePerimetersRequest
//

@implementation GTLRAccessContextManager_ReplaceServicePerimetersRequest
@dynamic ETag, servicePerimeters;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"servicePerimeters" : [GTLRAccessContextManager_ServicePerimeter class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ReplaceServicePerimetersResponse
//

@implementation GTLRAccessContextManager_ReplaceServicePerimetersResponse
@dynamic servicePerimeters;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"servicePerimeters" : [GTLRAccessContextManager_ServicePerimeter class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ServicePerimeter
//

@implementation GTLRAccessContextManager_ServicePerimeter
@dynamic descriptionProperty, name, perimeterType, spec, status, title,
         useExplicitDryRunSpec;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_ServicePerimeterConfig
//

@implementation GTLRAccessContextManager_ServicePerimeterConfig
@dynamic accessLevels, egressPolicies, ingressPolicies, resources,
         restrictedServices, vpcAccessibleServices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accessLevels" : [NSString class],
    @"egressPolicies" : [GTLRAccessContextManager_EgressPolicy class],
    @"ingressPolicies" : [GTLRAccessContextManager_IngressPolicy class],
    @"resources" : [NSString class],
    @"restrictedServices" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_Status
//

@implementation GTLRAccessContextManager_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRAccessContextManager_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_Status_Details_Item
//

@implementation GTLRAccessContextManager_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAccessContextManager_VpcAccessibleServices
//

@implementation GTLRAccessContextManager_VpcAccessibleServices
@dynamic allowedServices, enableRestriction;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedServices" : [NSString class]
  };
  return map;
}

@end
