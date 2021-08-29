// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Key Management Service (KMS) API (cloudkms/v1beta1)
// Description:
//   Manages encryption for your cloud services the same way you do on-premise.
//   You can generate, use, rotate, and destroy AES256 encryption keys.
// Documentation:
//   https://cloud.google.com/kms/

#import "GTLRCloudKMSObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudKMS_AuditLogConfig.logType
NSString * const kGTLRCloudKMS_AuditLogConfig_LogType_AdminRead = @"ADMIN_READ";
NSString * const kGTLRCloudKMS_AuditLogConfig_LogType_DataRead = @"DATA_READ";
NSString * const kGTLRCloudKMS_AuditLogConfig_LogType_DataWrite = @"DATA_WRITE";
NSString * const kGTLRCloudKMS_AuditLogConfig_LogType_LogTypeUnspecified = @"LOG_TYPE_UNSPECIFIED";

// GTLRCloudKMS_Condition.iam
NSString * const kGTLRCloudKMS_Condition_Iam_Attribution = @"ATTRIBUTION";
NSString * const kGTLRCloudKMS_Condition_Iam_Authority   = @"AUTHORITY";
NSString * const kGTLRCloudKMS_Condition_Iam_NoAttr      = @"NO_ATTR";

// GTLRCloudKMS_Condition.op
NSString * const kGTLRCloudKMS_Condition_Op_Discharged = @"DISCHARGED";
NSString * const kGTLRCloudKMS_Condition_Op_Equals     = @"EQUALS";
NSString * const kGTLRCloudKMS_Condition_Op_In         = @"IN";
NSString * const kGTLRCloudKMS_Condition_Op_NoOp       = @"NO_OP";
NSString * const kGTLRCloudKMS_Condition_Op_NotEquals  = @"NOT_EQUALS";
NSString * const kGTLRCloudKMS_Condition_Op_NotIn      = @"NOT_IN";

// GTLRCloudKMS_Condition.sys
NSString * const kGTLRCloudKMS_Condition_Sys_Ip      = @"IP";
NSString * const kGTLRCloudKMS_Condition_Sys_Name    = @"NAME";
NSString * const kGTLRCloudKMS_Condition_Sys_NoAttr  = @"NO_ATTR";
NSString * const kGTLRCloudKMS_Condition_Sys_Region  = @"REGION";
NSString * const kGTLRCloudKMS_Condition_Sys_Service = @"SERVICE";

// GTLRCloudKMS_CryptoKey.purpose
NSString * const kGTLRCloudKMS_CryptoKey_Purpose_CryptoKeyPurposeUnspecified = @"CRYPTO_KEY_PURPOSE_UNSPECIFIED";
NSString * const kGTLRCloudKMS_CryptoKey_Purpose_EncryptDecrypt = @"ENCRYPT_DECRYPT";

// GTLRCloudKMS_CryptoKeyVersion.state
NSString * const kGTLRCloudKMS_CryptoKeyVersion_State_CryptoKeyVersionStateUnspecified = @"CRYPTO_KEY_VERSION_STATE_UNSPECIFIED";
NSString * const kGTLRCloudKMS_CryptoKeyVersion_State_Destroyed = @"DESTROYED";
NSString * const kGTLRCloudKMS_CryptoKeyVersion_State_DestroyScheduled = @"DESTROY_SCHEDULED";
NSString * const kGTLRCloudKMS_CryptoKeyVersion_State_Disabled = @"DISABLED";
NSString * const kGTLRCloudKMS_CryptoKeyVersion_State_Enabled  = @"ENABLED";

// GTLRCloudKMS_Rule.action
NSString * const kGTLRCloudKMS_Rule_Action_Allow        = @"ALLOW";
NSString * const kGTLRCloudKMS_Rule_Action_AllowWithLog = @"ALLOW_WITH_LOG";
NSString * const kGTLRCloudKMS_Rule_Action_Deny         = @"DENY";
NSString * const kGTLRCloudKMS_Rule_Action_DenyWithLog  = @"DENY_WITH_LOG";
NSString * const kGTLRCloudKMS_Rule_Action_Log          = @"LOG";
NSString * const kGTLRCloudKMS_Rule_Action_NoAction     = @"NO_ACTION";

// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_AuditConfig
//

@implementation GTLRCloudKMS_AuditConfig
@dynamic auditLogConfigs, exemptedMembers, service;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditLogConfigs" : [GTLRCloudKMS_AuditLogConfig class],
    @"exemptedMembers" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_AuditLogConfig
//

@implementation GTLRCloudKMS_AuditLogConfig
@dynamic exemptedMembers, logType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"exemptedMembers" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_Binding
//

@implementation GTLRCloudKMS_Binding
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
//   GTLRCloudKMS_CloudAuditOptions
//

@implementation GTLRCloudKMS_CloudAuditOptions
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_Condition
//

@implementation GTLRCloudKMS_Condition
@dynamic iam, op, svc, sys, value, values;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"values" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_CounterOptions
//

@implementation GTLRCloudKMS_CounterOptions
@dynamic field, metric;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_CryptoKey
//

@implementation GTLRCloudKMS_CryptoKey
@dynamic createTime, name, nextRotationTime, primary, purpose, rotationPeriod;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_CryptoKeyVersion
//

@implementation GTLRCloudKMS_CryptoKeyVersion
@dynamic createTime, destroyEventTime, destroyTime, name, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_DataAccessOptions
//

@implementation GTLRCloudKMS_DataAccessOptions
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_DecryptRequest
//

@implementation GTLRCloudKMS_DecryptRequest
@dynamic additionalAuthenticatedData, ciphertext;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_DecryptResponse
//

@implementation GTLRCloudKMS_DecryptResponse
@dynamic plaintext;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_DestroyCryptoKeyVersionRequest
//

@implementation GTLRCloudKMS_DestroyCryptoKeyVersionRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_EncryptRequest
//

@implementation GTLRCloudKMS_EncryptRequest
@dynamic additionalAuthenticatedData, plaintext;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_EncryptResponse
//

@implementation GTLRCloudKMS_EncryptResponse
@dynamic ciphertext, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_KeyRing
//

@implementation GTLRCloudKMS_KeyRing
@dynamic createTime, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_ListCryptoKeysResponse
//

@implementation GTLRCloudKMS_ListCryptoKeysResponse
@dynamic cryptoKeys, nextPageToken, totalSize;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"cryptoKeys" : [GTLRCloudKMS_CryptoKey class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"cryptoKeys";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_ListCryptoKeyVersionsResponse
//

@implementation GTLRCloudKMS_ListCryptoKeyVersionsResponse
@dynamic cryptoKeyVersions, nextPageToken, totalSize;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"cryptoKeyVersions" : [GTLRCloudKMS_CryptoKeyVersion class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"cryptoKeyVersions";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_ListKeyRingsResponse
//

@implementation GTLRCloudKMS_ListKeyRingsResponse
@dynamic keyRings, nextPageToken, totalSize;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"keyRings" : [GTLRCloudKMS_KeyRing class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"keyRings";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_ListLocationsResponse
//

@implementation GTLRCloudKMS_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRCloudKMS_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_Location
//

@implementation GTLRCloudKMS_Location
@dynamic labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_Location_Labels
//

@implementation GTLRCloudKMS_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_Location_Metadata
//

@implementation GTLRCloudKMS_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_LogConfig
//

@implementation GTLRCloudKMS_LogConfig
@dynamic cloudAudit, counter, dataAccess;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_Policy
//

@implementation GTLRCloudKMS_Policy
@dynamic auditConfigs, bindings, ETag, iamOwned, rules, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditConfigs" : [GTLRCloudKMS_AuditConfig class],
    @"bindings" : [GTLRCloudKMS_Binding class],
    @"rules" : [GTLRCloudKMS_Rule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_RestoreCryptoKeyVersionRequest
//

@implementation GTLRCloudKMS_RestoreCryptoKeyVersionRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_Rule
//

@implementation GTLRCloudKMS_Rule
@dynamic action, conditions, descriptionProperty, inProperty, logConfig, notIn,
         permissions;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"inProperty" : @"in"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"conditions" : [GTLRCloudKMS_Condition class],
    @"in" : [NSString class],
    @"logConfig" : [GTLRCloudKMS_LogConfig class],
    @"notIn" : [NSString class],
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_SetIamPolicyRequest
//

@implementation GTLRCloudKMS_SetIamPolicyRequest
@dynamic policy, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudKMS_TestIamPermissionsRequest
//

@implementation GTLRCloudKMS_TestIamPermissionsRequest
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
//   GTLRCloudKMS_TestIamPermissionsResponse
//

@implementation GTLRCloudKMS_TestIamPermissionsResponse
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
//   GTLRCloudKMS_UpdateCryptoKeyPrimaryVersionRequest
//

@implementation GTLRCloudKMS_UpdateCryptoKeyPrimaryVersionRequest
@dynamic cryptoKeyVersionId;
@end
