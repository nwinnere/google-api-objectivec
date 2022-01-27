// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Android Management API (androidmanagement/v1)
// Description:
//   The Android Management API provides remote enterprise management of Android
//   devices and apps.
// Documentation:
//   https://developers.google.com/android/management

#import "GTLRAndroidManagementObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRAndroidManagement_ApplicationPolicy.defaultPermissionPolicy
NSString * const kGTLRAndroidManagement_ApplicationPolicy_DefaultPermissionPolicy_Deny = @"DENY";
NSString * const kGTLRAndroidManagement_ApplicationPolicy_DefaultPermissionPolicy_Grant = @"GRANT";
NSString * const kGTLRAndroidManagement_ApplicationPolicy_DefaultPermissionPolicy_PermissionPolicyUnspecified = @"PERMISSION_POLICY_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_ApplicationPolicy_DefaultPermissionPolicy_Prompt = @"PROMPT";

// GTLRAndroidManagement_ApplicationPolicy.installType
NSString * const kGTLRAndroidManagement_ApplicationPolicy_InstallType_ForceInstalled = @"FORCE_INSTALLED";
NSString * const kGTLRAndroidManagement_ApplicationPolicy_InstallType_InstallTypeUnspecified = @"INSTALL_TYPE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_ApplicationPolicy_InstallType_Preinstalled = @"PREINSTALLED";

// GTLRAndroidManagement_Command.resetPasswordFlags
NSString * const kGTLRAndroidManagement_Command_ResetPasswordFlags_DoNotAskCredentialsOnBoot = @"DO_NOT_ASK_CREDENTIALS_ON_BOOT";
NSString * const kGTLRAndroidManagement_Command_ResetPasswordFlags_RequireEntry = @"REQUIRE_ENTRY";
NSString * const kGTLRAndroidManagement_Command_ResetPasswordFlags_ResetPasswordFlagUnspecified = @"RESET_PASSWORD_FLAG_UNSPECIFIED";

// GTLRAndroidManagement_Command.type
NSString * const kGTLRAndroidManagement_Command_Type_CommandTypeUnspecified = @"COMMAND_TYPE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_Command_Type_Lock      = @"LOCK";
NSString * const kGTLRAndroidManagement_Command_Type_Reboot    = @"REBOOT";
NSString * const kGTLRAndroidManagement_Command_Type_ResetPassword = @"RESET_PASSWORD";

// GTLRAndroidManagement_Device.appliedState
NSString * const kGTLRAndroidManagement_Device_AppliedState_Active = @"ACTIVE";
NSString * const kGTLRAndroidManagement_Device_AppliedState_Deleted = @"DELETED";
NSString * const kGTLRAndroidManagement_Device_AppliedState_DeviceStateUnspecified = @"DEVICE_STATE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_Device_AppliedState_Disabled = @"DISABLED";
NSString * const kGTLRAndroidManagement_Device_AppliedState_Provisioning = @"PROVISIONING";

// GTLRAndroidManagement_Device.state
NSString * const kGTLRAndroidManagement_Device_State_Active    = @"ACTIVE";
NSString * const kGTLRAndroidManagement_Device_State_Deleted   = @"DELETED";
NSString * const kGTLRAndroidManagement_Device_State_DeviceStateUnspecified = @"DEVICE_STATE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_Device_State_Disabled  = @"DISABLED";
NSString * const kGTLRAndroidManagement_Device_State_Provisioning = @"PROVISIONING";

// GTLRAndroidManagement_Display.state
NSString * const kGTLRAndroidManagement_Display_State_DisplayStateUnspecified = @"DISPLAY_STATE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_Display_State_Doze     = @"DOZE";
NSString * const kGTLRAndroidManagement_Display_State_Off      = @"OFF";
NSString * const kGTLRAndroidManagement_Display_State_On       = @"ON";
NSString * const kGTLRAndroidManagement_Display_State_Suspended = @"SUSPENDED";

// GTLRAndroidManagement_Enterprise.enabledNotificationTypes
NSString * const kGTLRAndroidManagement_Enterprise_EnabledNotificationTypes_Command = @"COMMAND";
NSString * const kGTLRAndroidManagement_Enterprise_EnabledNotificationTypes_ComplianceReport = @"COMPLIANCE_REPORT";
NSString * const kGTLRAndroidManagement_Enterprise_EnabledNotificationTypes_Enrollment = @"ENROLLMENT";
NSString * const kGTLRAndroidManagement_Enterprise_EnabledNotificationTypes_NotificationTypeUnspecified = @"NOTIFICATION_TYPE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_Enterprise_EnabledNotificationTypes_StatusReport = @"STATUS_REPORT";

// GTLRAndroidManagement_ManagedProperty.type
NSString * const kGTLRAndroidManagement_ManagedProperty_Type_Bool = @"BOOL";
NSString * const kGTLRAndroidManagement_ManagedProperty_Type_BundleArray = @"BUNDLE_ARRAY";
NSString * const kGTLRAndroidManagement_ManagedProperty_Type_Choice = @"CHOICE";
NSString * const kGTLRAndroidManagement_ManagedProperty_Type_Hidden = @"HIDDEN";
NSString * const kGTLRAndroidManagement_ManagedProperty_Type_Integer = @"INTEGER";
NSString * const kGTLRAndroidManagement_ManagedProperty_Type_ManagedPropertyTypeUnspecified = @"MANAGED_PROPERTY_TYPE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_ManagedProperty_Type_Multiselect = @"MULTISELECT";
NSString * const kGTLRAndroidManagement_ManagedProperty_Type_String = @"STRING";

// GTLRAndroidManagement_MemoryEvent.eventType
NSString * const kGTLRAndroidManagement_MemoryEvent_EventType_ExternalStorageDetected = @"EXTERNAL_STORAGE_DETECTED";
NSString * const kGTLRAndroidManagement_MemoryEvent_EventType_ExternalStorageMeasured = @"EXTERNAL_STORAGE_MEASURED";
NSString * const kGTLRAndroidManagement_MemoryEvent_EventType_ExternalStorageRemoved = @"EXTERNAL_STORAGE_REMOVED";
NSString * const kGTLRAndroidManagement_MemoryEvent_EventType_InternalStorageMeasured = @"INTERNAL_STORAGE_MEASURED";
NSString * const kGTLRAndroidManagement_MemoryEvent_EventType_MemoryEventTypeUnspecified = @"MEMORY_EVENT_TYPE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_MemoryEvent_EventType_RamMeasured = @"RAM_MEASURED";

// GTLRAndroidManagement_NonComplianceDetail.installationFailureReason
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_InProgress = @"IN_PROGRESS";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_InstallationFailureReasonUnknown = @"INSTALLATION_FAILURE_REASON_UNKNOWN";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_InstallationFailureReasonUnspecified = @"INSTALLATION_FAILURE_REASON_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_NoLicensesRemaining = @"NO_LICENSES_REMAINING";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_NotApproved = @"NOT_APPROVED";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_NotAvailableInCountry = @"NOT_AVAILABLE_IN_COUNTRY";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_NotCompatibleWithDevice = @"NOT_COMPATIBLE_WITH_DEVICE";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_NotEnrolled = @"NOT_ENROLLED";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_NotFound = @"NOT_FOUND";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_PermissionsNotAccepted = @"PERMISSIONS_NOT_ACCEPTED";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_InstallationFailureReason_UserInvalid = @"USER_INVALID";

// GTLRAndroidManagement_NonComplianceDetail.nonComplianceReason
NSString * const kGTLRAndroidManagement_NonComplianceDetail_NonComplianceReason_AdminType = @"ADMIN_TYPE";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_NonComplianceReason_ApiLevel = @"API_LEVEL";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_NonComplianceReason_AppIncompatible = @"APP_INCOMPATIBLE";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_NonComplianceReason_AppInstalled = @"APP_INSTALLED";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_NonComplianceReason_AppNotInstalled = @"APP_NOT_INSTALLED";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_NonComplianceReason_InvalidValue = @"INVALID_VALUE";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_NonComplianceReason_NonComplianceReasonUnspecified = @"NON_COMPLIANCE_REASON_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_NonComplianceReason_Pending = @"PENDING";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_NonComplianceReason_Unsupported = @"UNSUPPORTED";
NSString * const kGTLRAndroidManagement_NonComplianceDetail_NonComplianceReason_UserAction = @"USER_ACTION";

// GTLRAndroidManagement_NonComplianceDetailCondition.nonComplianceReason
NSString * const kGTLRAndroidManagement_NonComplianceDetailCondition_NonComplianceReason_AdminType = @"ADMIN_TYPE";
NSString * const kGTLRAndroidManagement_NonComplianceDetailCondition_NonComplianceReason_ApiLevel = @"API_LEVEL";
NSString * const kGTLRAndroidManagement_NonComplianceDetailCondition_NonComplianceReason_AppIncompatible = @"APP_INCOMPATIBLE";
NSString * const kGTLRAndroidManagement_NonComplianceDetailCondition_NonComplianceReason_AppInstalled = @"APP_INSTALLED";
NSString * const kGTLRAndroidManagement_NonComplianceDetailCondition_NonComplianceReason_AppNotInstalled = @"APP_NOT_INSTALLED";
NSString * const kGTLRAndroidManagement_NonComplianceDetailCondition_NonComplianceReason_InvalidValue = @"INVALID_VALUE";
NSString * const kGTLRAndroidManagement_NonComplianceDetailCondition_NonComplianceReason_NonComplianceReasonUnspecified = @"NON_COMPLIANCE_REASON_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_NonComplianceDetailCondition_NonComplianceReason_Pending = @"PENDING";
NSString * const kGTLRAndroidManagement_NonComplianceDetailCondition_NonComplianceReason_Unsupported = @"UNSUPPORTED";
NSString * const kGTLRAndroidManagement_NonComplianceDetailCondition_NonComplianceReason_UserAction = @"USER_ACTION";

// GTLRAndroidManagement_PasswordRequirements.passwordQuality
NSString * const kGTLRAndroidManagement_PasswordRequirements_PasswordQuality_Alphabetic = @"ALPHABETIC";
NSString * const kGTLRAndroidManagement_PasswordRequirements_PasswordQuality_Alphanumeric = @"ALPHANUMERIC";
NSString * const kGTLRAndroidManagement_PasswordRequirements_PasswordQuality_Complex = @"COMPLEX";
NSString * const kGTLRAndroidManagement_PasswordRequirements_PasswordQuality_Numeric = @"NUMERIC";
NSString * const kGTLRAndroidManagement_PasswordRequirements_PasswordQuality_NumericComplex = @"NUMERIC_COMPLEX";
NSString * const kGTLRAndroidManagement_PasswordRequirements_PasswordQuality_PasswordQualityUnspecified = @"PASSWORD_QUALITY_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_PasswordRequirements_PasswordQuality_Something = @"SOMETHING";

// GTLRAndroidManagement_PermissionGrant.policy
NSString * const kGTLRAndroidManagement_PermissionGrant_Policy_Deny = @"DENY";
NSString * const kGTLRAndroidManagement_PermissionGrant_Policy_Grant = @"GRANT";
NSString * const kGTLRAndroidManagement_PermissionGrant_Policy_PermissionPolicyUnspecified = @"PERMISSION_POLICY_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_PermissionGrant_Policy_Prompt = @"PROMPT";

// GTLRAndroidManagement_Policy.defaultPermissionPolicy
NSString * const kGTLRAndroidManagement_Policy_DefaultPermissionPolicy_Deny = @"DENY";
NSString * const kGTLRAndroidManagement_Policy_DefaultPermissionPolicy_Grant = @"GRANT";
NSString * const kGTLRAndroidManagement_Policy_DefaultPermissionPolicy_PermissionPolicyUnspecified = @"PERMISSION_POLICY_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_Policy_DefaultPermissionPolicy_Prompt = @"PROMPT";

// GTLRAndroidManagement_Policy.stayOnPluggedModes
NSString * const kGTLRAndroidManagement_Policy_StayOnPluggedModes_Ac = @"AC";
NSString * const kGTLRAndroidManagement_Policy_StayOnPluggedModes_BatteryPluggedModeUnspecified = @"BATTERY_PLUGGED_MODE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_Policy_StayOnPluggedModes_Usb = @"USB";
NSString * const kGTLRAndroidManagement_Policy_StayOnPluggedModes_Wireless = @"WIRELESS";

// GTLRAndroidManagement_PowerManagementEvent.eventType
NSString * const kGTLRAndroidManagement_PowerManagementEvent_EventType_BatteryLevelCollected = @"BATTERY_LEVEL_COLLECTED";
NSString * const kGTLRAndroidManagement_PowerManagementEvent_EventType_BatteryLow = @"BATTERY_LOW";
NSString * const kGTLRAndroidManagement_PowerManagementEvent_EventType_BatteryOkay = @"BATTERY_OKAY";
NSString * const kGTLRAndroidManagement_PowerManagementEvent_EventType_BootCompleted = @"BOOT_COMPLETED";
NSString * const kGTLRAndroidManagement_PowerManagementEvent_EventType_PowerConnected = @"POWER_CONNECTED";
NSString * const kGTLRAndroidManagement_PowerManagementEvent_EventType_PowerDisconnected = @"POWER_DISCONNECTED";
NSString * const kGTLRAndroidManagement_PowerManagementEvent_EventType_PowerManagementEventTypeUnspecified = @"POWER_MANAGEMENT_EVENT_TYPE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_PowerManagementEvent_EventType_Shutdown = @"SHUTDOWN";

// GTLRAndroidManagement_SystemUpdate.type
NSString * const kGTLRAndroidManagement_SystemUpdate_Type_Automatic = @"AUTOMATIC";
NSString * const kGTLRAndroidManagement_SystemUpdate_Type_Postpone = @"POSTPONE";
NSString * const kGTLRAndroidManagement_SystemUpdate_Type_SystemUpdateTypeUnspecified = @"SYSTEM_UPDATE_TYPE_UNSPECIFIED";
NSString * const kGTLRAndroidManagement_SystemUpdate_Type_Windowed = @"WINDOWED";

// GTLRAndroidManagement_WebToken.permissions
NSString * const kGTLRAndroidManagement_WebToken_Permissions_ApproveApps = @"APPROVE_APPS";
NSString * const kGTLRAndroidManagement_WebToken_Permissions_WebTokenPermissionUnspecified = @"WEB_TOKEN_PERMISSION_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ApiLevelCondition
//

@implementation GTLRAndroidManagement_ApiLevelCondition
@dynamic minApiLevel;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Application
//

@implementation GTLRAndroidManagement_Application
@dynamic managedProperties, name, permissions, title;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"managedProperties" : [GTLRAndroidManagement_ManagedProperty class],
    @"permissions" : [GTLRAndroidManagement_ApplicationPermission class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ApplicationPermission
//

@implementation GTLRAndroidManagement_ApplicationPermission
@dynamic descriptionProperty, name, permissionId;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ApplicationPolicy
//

@implementation GTLRAndroidManagement_ApplicationPolicy
@dynamic defaultPermissionPolicy, installType, lockTaskAllowed,
         managedConfiguration, packageName, permissionGrants;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissionGrants" : [GTLRAndroidManagement_PermissionGrant class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ApplicationPolicy_ManagedConfiguration
//

@implementation GTLRAndroidManagement_ApplicationPolicy_ManagedConfiguration

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Command
//

@implementation GTLRAndroidManagement_Command
@dynamic createTime, duration, newPassword, resetPasswordFlags, type;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"resetPasswordFlags" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ComplianceRule
//

@implementation GTLRAndroidManagement_ComplianceRule
@dynamic apiLevelCondition, disableApps, nonComplianceDetailCondition;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Device
//

@implementation GTLRAndroidManagement_Device
@dynamic apiLevel, appliedPolicyName, appliedPolicyVersion, appliedState,
         disabledReason, displays, enrollmentTime, enrollmentTokenData,
         enrollmentTokenName, hardwareInfo, hardwareStatusSamples,
         lastPolicyComplianceReportTime, lastPolicySyncTime,
         lastStatusReportTime, memoryEvents, memoryInfo, name, networkInfo,
         nonComplianceDetails, policyCompliant, policyName,
         powerManagementEvents, previousDeviceNames, softwareInfo, state,
         userName;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"displays" : [GTLRAndroidManagement_Display class],
    @"hardwareStatusSamples" : [GTLRAndroidManagement_HardwareStatus class],
    @"memoryEvents" : [GTLRAndroidManagement_MemoryEvent class],
    @"nonComplianceDetails" : [GTLRAndroidManagement_NonComplianceDetail class],
    @"powerManagementEvents" : [GTLRAndroidManagement_PowerManagementEvent class],
    @"previousDeviceNames" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Display
//

@implementation GTLRAndroidManagement_Display
@dynamic density, displayId, height, name, refreshRate, state, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Empty
//

@implementation GTLRAndroidManagement_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_EnrollmentToken
//

@implementation GTLRAndroidManagement_EnrollmentToken
@dynamic additionalData, duration, expirationTimestamp, name, policyName,
         qrCode, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Enterprise
//

@implementation GTLRAndroidManagement_Enterprise
@dynamic appAutoApprovalEnabled, enabledNotificationTypes,
         enterpriseDisplayName, logo, name, primaryColor, pubsubTopic;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"enabledNotificationTypes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ExternalData
//

@implementation GTLRAndroidManagement_ExternalData
@dynamic sha256Hash, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_HardwareInfo
//

@implementation GTLRAndroidManagement_HardwareInfo
@dynamic batteryShutdownTemperatures, batteryThrottlingTemperatures, brand,
         cpuShutdownTemperatures, cpuThrottlingTemperatures,
         deviceBasebandVersion, gpuShutdownTemperatures,
         gpuThrottlingTemperatures, hardware, manufacturer, model, serialNumber,
         skinShutdownTemperatures, skinThrottlingTemperatures;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"batteryShutdownTemperatures" : [NSNumber class],
    @"batteryThrottlingTemperatures" : [NSNumber class],
    @"cpuShutdownTemperatures" : [NSNumber class],
    @"cpuThrottlingTemperatures" : [NSNumber class],
    @"gpuShutdownTemperatures" : [NSNumber class],
    @"gpuThrottlingTemperatures" : [NSNumber class],
    @"skinShutdownTemperatures" : [NSNumber class],
    @"skinThrottlingTemperatures" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_HardwareStatus
//

@implementation GTLRAndroidManagement_HardwareStatus
@dynamic batteryTemperatures, cpuTemperatures, cpuUsages, createTime, fanSpeeds,
         gpuTemperatures, skinTemperatures;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"batteryTemperatures" : [NSNumber class],
    @"cpuTemperatures" : [NSNumber class],
    @"cpuUsages" : [NSNumber class],
    @"fanSpeeds" : [NSNumber class],
    @"gpuTemperatures" : [NSNumber class],
    @"skinTemperatures" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ListDevicesResponse
//

@implementation GTLRAndroidManagement_ListDevicesResponse
@dynamic devices, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"devices" : [GTLRAndroidManagement_Device class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"devices";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ListOperationsResponse
//

@implementation GTLRAndroidManagement_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRAndroidManagement_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ListPoliciesResponse
//

@implementation GTLRAndroidManagement_ListPoliciesResponse
@dynamic nextPageToken, policies;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"policies" : [GTLRAndroidManagement_Policy class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"policies";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ManagedProperty
//

@implementation GTLRAndroidManagement_ManagedProperty
@dynamic defaultValue, descriptionProperty, entries, key, nestedProperties,
         title, type;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entries" : [GTLRAndroidManagement_ManagedPropertyEntry class],
    @"nestedProperties" : [GTLRAndroidManagement_ManagedProperty class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_ManagedPropertyEntry
//

@implementation GTLRAndroidManagement_ManagedPropertyEntry
@dynamic name, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_MemoryEvent
//

@implementation GTLRAndroidManagement_MemoryEvent
@dynamic byteCount, createTime, eventType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_MemoryInfo
//

@implementation GTLRAndroidManagement_MemoryInfo
@dynamic totalInternalStorage, totalRam;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_NetworkInfo
//

@implementation GTLRAndroidManagement_NetworkInfo
@dynamic imei, meid, wifiMacAddress;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_NonComplianceDetail
//

@implementation GTLRAndroidManagement_NonComplianceDetail
@dynamic currentValue, fieldPath, installationFailureReason,
         nonComplianceReason, packageName, settingName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_NonComplianceDetailCondition
//

@implementation GTLRAndroidManagement_NonComplianceDetailCondition
@dynamic nonComplianceReason, packageName, settingName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Operation
//

@implementation GTLRAndroidManagement_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Operation_Metadata
//

@implementation GTLRAndroidManagement_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Operation_Response
//

@implementation GTLRAndroidManagement_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_PasswordRequirements
//

@implementation GTLRAndroidManagement_PasswordRequirements
@dynamic maximumFailedPasswordsForWipe, passwordExpirationTimeout,
         passwordHistoryLength, passwordMinimumLength, passwordMinimumLetters,
         passwordMinimumLowerCase, passwordMinimumNonLetter,
         passwordMinimumNumeric, passwordMinimumSymbols,
         passwordMinimumUpperCase, passwordQuality;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_PermissionGrant
//

@implementation GTLRAndroidManagement_PermissionGrant
@dynamic permission, policy;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_PersistentPreferredActivity
//

@implementation GTLRAndroidManagement_PersistentPreferredActivity
@dynamic actions, categories, receiverActivity;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"actions" : [NSString class],
    @"categories" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Policy
//

@implementation GTLRAndroidManagement_Policy
@dynamic addUserDisabled, adjustVolumeDisabled, applications,
         blockApplicationsEnabled, cameraDisabled, complianceRules,
         debuggingFeaturesAllowed, defaultPermissionPolicy,
         factoryResetDisabled, frpAdminEmails, funDisabled,
         installUnknownSourcesAllowed, keyguardDisabled, maximumTimeToLock,
         modifyAccountsDisabled, name, networkEscapeHatchEnabled,
         openNetworkConfiguration, passwordRequirements,
         persistentPreferredActivities, removeUserDisabled, safeBootDisabled,
         screenCaptureDisabled, statusBarDisabled, statusReportingSettings,
         stayOnPluggedModes, systemUpdate, unmuteMicrophoneDisabled, version;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"applications" : [GTLRAndroidManagement_ApplicationPolicy class],
    @"complianceRules" : [GTLRAndroidManagement_ComplianceRule class],
    @"frpAdminEmails" : [NSString class],
    @"persistentPreferredActivities" : [GTLRAndroidManagement_PersistentPreferredActivity class],
    @"stayOnPluggedModes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Policy_OpenNetworkConfiguration
//

@implementation GTLRAndroidManagement_Policy_OpenNetworkConfiguration

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_PowerManagementEvent
//

@implementation GTLRAndroidManagement_PowerManagementEvent
@dynamic batteryLevel, createTime, eventType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_SignupUrl
//

@implementation GTLRAndroidManagement_SignupUrl
@dynamic name, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_SoftwareInfo
//

@implementation GTLRAndroidManagement_SoftwareInfo
@dynamic androidBuildNumber, androidBuildTime, androidVersion,
         bootloaderVersion, deviceKernelVersion, securityPatchLevel;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Status
//

@implementation GTLRAndroidManagement_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRAndroidManagement_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_Status_Details_Item
//

@implementation GTLRAndroidManagement_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_StatusReportingSettings
//

@implementation GTLRAndroidManagement_StatusReportingSettings
@dynamic displayInfoEnabled, hardwareStatusEnabled, memoryInfoEnabled,
         networkInfoEnabled, powerManagementEventsEnabled, softwareInfoEnabled;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_SystemUpdate
//

@implementation GTLRAndroidManagement_SystemUpdate
@dynamic endMinutes, startMinutes, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_UserFacingMessage
//

@implementation GTLRAndroidManagement_UserFacingMessage
@dynamic defaultMessage, localizedMessages;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_UserFacingMessage_LocalizedMessages
//

@implementation GTLRAndroidManagement_UserFacingMessage_LocalizedMessages

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAndroidManagement_WebToken
//

@implementation GTLRAndroidManagement_WebToken
@dynamic name, parentFrameUrl, permissions, value;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end
