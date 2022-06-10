// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Service Control API (servicecontrol/v1)
// Description:
//   Google Service Control provides control plane functionality to managed
//   services, such as logging, monitoring, and status checks.
// Documentation:
//   https://cloud.google.com/service-control/

#import "GTLRServiceControlObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRServiceControl_CheckError.code
NSString * const kGTLRServiceControl_CheckError_Code_AbuserDetected = @"ABUSER_DETECTED";
NSString * const kGTLRServiceControl_CheckError_Code_ApiKeyExpired = @"API_KEY_EXPIRED";
NSString * const kGTLRServiceControl_CheckError_Code_ApiKeyInvalid = @"API_KEY_INVALID";
NSString * const kGTLRServiceControl_CheckError_Code_ApiKeyNotFound = @"API_KEY_NOT_FOUND";
NSString * const kGTLRServiceControl_CheckError_Code_ApiTargetBlocked = @"API_TARGET_BLOCKED";
NSString * const kGTLRServiceControl_CheckError_Code_BillingDisabled = @"BILLING_DISABLED";
NSString * const kGTLRServiceControl_CheckError_Code_BillingStatusUnavailable = @"BILLING_STATUS_UNAVAILABLE";
NSString * const kGTLRServiceControl_CheckError_Code_BudgetExceeded = @"BUDGET_EXCEEDED";
NSString * const kGTLRServiceControl_CheckError_Code_ClientAppBlocked = @"CLIENT_APP_BLOCKED";
NSString * const kGTLRServiceControl_CheckError_Code_CloudResourceManagerBackendUnavailable = @"CLOUD_RESOURCE_MANAGER_BACKEND_UNAVAILABLE";
NSString * const kGTLRServiceControl_CheckError_Code_DenialOfServiceDetected = @"DENIAL_OF_SERVICE_DETECTED";
NSString * const kGTLRServiceControl_CheckError_Code_ErrorCodeUnspecified = @"ERROR_CODE_UNSPECIFIED";
NSString * const kGTLRServiceControl_CheckError_Code_InvalidCredential = @"INVALID_CREDENTIAL";
NSString * const kGTLRServiceControl_CheckError_Code_IpAddressBlocked = @"IP_ADDRESS_BLOCKED";
NSString * const kGTLRServiceControl_CheckError_Code_LoadShedding = @"LOAD_SHEDDING";
NSString * const kGTLRServiceControl_CheckError_Code_LoasProjectDisabled = @"LOAS_PROJECT_DISABLED";
NSString * const kGTLRServiceControl_CheckError_Code_LoasProjectLookupUnavailable = @"LOAS_PROJECT_LOOKUP_UNAVAILABLE";
NSString * const kGTLRServiceControl_CheckError_Code_LoasRoleInvalid = @"LOAS_ROLE_INVALID";
NSString * const kGTLRServiceControl_CheckError_Code_NamespaceLookupUnavailable = @"NAMESPACE_LOOKUP_UNAVAILABLE";
NSString * const kGTLRServiceControl_CheckError_Code_NoLoasProject = @"NO_LOAS_PROJECT";
NSString * const kGTLRServiceControl_CheckError_Code_NotFound  = @"NOT_FOUND";
NSString * const kGTLRServiceControl_CheckError_Code_PermissionDenied = @"PERMISSION_DENIED";
NSString * const kGTLRServiceControl_CheckError_Code_ProjectDeleted = @"PROJECT_DELETED";
NSString * const kGTLRServiceControl_CheckError_Code_ProjectInvalid = @"PROJECT_INVALID";
NSString * const kGTLRServiceControl_CheckError_Code_QuotaCheckUnavailable = @"QUOTA_CHECK_UNAVAILABLE";
NSString * const kGTLRServiceControl_CheckError_Code_RefererBlocked = @"REFERER_BLOCKED";
NSString * const kGTLRServiceControl_CheckError_Code_ResourceExhausted = @"RESOURCE_EXHAUSTED";
NSString * const kGTLRServiceControl_CheckError_Code_SecurityPolicyBackendUnavailable = @"SECURITY_POLICY_BACKEND_UNAVAILABLE";
NSString * const kGTLRServiceControl_CheckError_Code_SecurityPolicyViolated = @"SECURITY_POLICY_VIOLATED";
NSString * const kGTLRServiceControl_CheckError_Code_ServiceNotActivated = @"SERVICE_NOT_ACTIVATED";
NSString * const kGTLRServiceControl_CheckError_Code_ServiceStatusUnavailable = @"SERVICE_STATUS_UNAVAILABLE";
NSString * const kGTLRServiceControl_CheckError_Code_SpatulaHeaderInvalid = @"SPATULA_HEADER_INVALID";
NSString * const kGTLRServiceControl_CheckError_Code_VisibilityDenied = @"VISIBILITY_DENIED";

// GTLRServiceControl_LogEntry.severity
NSString * const kGTLRServiceControl_LogEntry_Severity_Alert   = @"ALERT";
NSString * const kGTLRServiceControl_LogEntry_Severity_Critical = @"CRITICAL";
NSString * const kGTLRServiceControl_LogEntry_Severity_Debug   = @"DEBUG";
NSString * const kGTLRServiceControl_LogEntry_Severity_Default = @"DEFAULT";
NSString * const kGTLRServiceControl_LogEntry_Severity_Emergency = @"EMERGENCY";
NSString * const kGTLRServiceControl_LogEntry_Severity_Error   = @"ERROR";
NSString * const kGTLRServiceControl_LogEntry_Severity_Info    = @"INFO";
NSString * const kGTLRServiceControl_LogEntry_Severity_Notice  = @"NOTICE";
NSString * const kGTLRServiceControl_LogEntry_Severity_Warning = @"WARNING";

// GTLRServiceControl_Operation.importance
NSString * const kGTLRServiceControl_Operation_Importance_Debug = @"DEBUG";
NSString * const kGTLRServiceControl_Operation_Importance_High = @"HIGH";
NSString * const kGTLRServiceControl_Operation_Importance_Low  = @"LOW";

// GTLRServiceControl_QuotaError.code
NSString * const kGTLRServiceControl_QuotaError_Code_ApiKeyExpired = @"API_KEY_EXPIRED";
NSString * const kGTLRServiceControl_QuotaError_Code_ApiKeyInvalid = @"API_KEY_INVALID";
NSString * const kGTLRServiceControl_QuotaError_Code_BillingNotActive = @"BILLING_NOT_ACTIVE";
NSString * const kGTLRServiceControl_QuotaError_Code_BillingStatusUnavailable = @"BILLING_STATUS_UNAVAILABLE";
NSString * const kGTLRServiceControl_QuotaError_Code_LoasRoleInvalid = @"LOAS_ROLE_INVALID";
NSString * const kGTLRServiceControl_QuotaError_Code_NoLoasProject = @"NO_LOAS_PROJECT";
NSString * const kGTLRServiceControl_QuotaError_Code_OutOfRange = @"OUT_OF_RANGE";
NSString * const kGTLRServiceControl_QuotaError_Code_ProjectDeleted = @"PROJECT_DELETED";
NSString * const kGTLRServiceControl_QuotaError_Code_ProjectStatusUnavailable = @"PROJECT_STATUS_UNAVAILABLE";
NSString * const kGTLRServiceControl_QuotaError_Code_QuotaSystemUnavailable = @"QUOTA_SYSTEM_UNAVAILABLE";
NSString * const kGTLRServiceControl_QuotaError_Code_ResourceExhausted = @"RESOURCE_EXHAUSTED";
NSString * const kGTLRServiceControl_QuotaError_Code_ServiceStatusUnavailable = @"SERVICE_STATUS_UNAVAILABLE";
NSString * const kGTLRServiceControl_QuotaError_Code_SpatulaHeaderInvalid = @"SPATULA_HEADER_INVALID";
NSString * const kGTLRServiceControl_QuotaError_Code_Unspecified = @"UNSPECIFIED";

// GTLRServiceControl_QuotaOperation.quotaMode
NSString * const kGTLRServiceControl_QuotaOperation_QuotaMode_BestEffort = @"BEST_EFFORT";
NSString * const kGTLRServiceControl_QuotaOperation_QuotaMode_CheckOnly = @"CHECK_ONLY";
NSString * const kGTLRServiceControl_QuotaOperation_QuotaMode_Normal = @"NORMAL";
NSString * const kGTLRServiceControl_QuotaOperation_QuotaMode_Unspecified = @"UNSPECIFIED";

// GTLRServiceControl_QuotaProperties.quotaMode
NSString * const kGTLRServiceControl_QuotaProperties_QuotaMode_Acquire = @"ACQUIRE";
NSString * const kGTLRServiceControl_QuotaProperties_QuotaMode_AcquireBestEffort = @"ACQUIRE_BEST_EFFORT";
NSString * const kGTLRServiceControl_QuotaProperties_QuotaMode_Check = @"CHECK";
NSString * const kGTLRServiceControl_QuotaProperties_QuotaMode_Release = @"RELEASE";

// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AllocateInfo
//

@implementation GTLRServiceControl_AllocateInfo
@dynamic unusedArguments;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"unusedArguments" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AllocateQuotaRequest
//

@implementation GTLRServiceControl_AllocateQuotaRequest
@dynamic allocateOperation, serviceConfigId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AllocateQuotaResponse
//

@implementation GTLRServiceControl_AllocateQuotaResponse
@dynamic allocateErrors, allocateInfo, operationId, quotaMetrics,
         serviceConfigId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allocateErrors" : [GTLRServiceControl_QuotaError class],
    @"quotaMetrics" : [GTLRServiceControl_MetricValueSet class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AuditLog
//

@implementation GTLRServiceControl_AuditLog
@dynamic authenticationInfo, authorizationInfo, metadata, methodName,
         numResponseItems, request, requestMetadata, resourceLocation,
         resourceName, response, serviceData, serviceName, status;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"authorizationInfo" : [GTLRServiceControl_AuthorizationInfo class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AuditLog_Metadata
//

@implementation GTLRServiceControl_AuditLog_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AuditLog_Request
//

@implementation GTLRServiceControl_AuditLog_Request

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AuditLog_Response
//

@implementation GTLRServiceControl_AuditLog_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AuditLog_ServiceData
//

@implementation GTLRServiceControl_AuditLog_ServiceData

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Auth
//

@implementation GTLRServiceControl_Auth
@dynamic accessLevels, audiences, claims, presenter, principal;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accessLevels" : [NSString class],
    @"audiences" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Auth_Claims
//

@implementation GTLRServiceControl_Auth_Claims

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AuthenticationInfo
//

@implementation GTLRServiceControl_AuthenticationInfo
@dynamic authoritySelector, principalEmail, thirdPartyPrincipal;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AuthenticationInfo_ThirdPartyPrincipal
//

@implementation GTLRServiceControl_AuthenticationInfo_ThirdPartyPrincipal

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_AuthorizationInfo
//

@implementation GTLRServiceControl_AuthorizationInfo
@dynamic granted, permission, resource, resourceAttributes;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_CheckError
//

@implementation GTLRServiceControl_CheckError
@dynamic code, detail, subject;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_CheckInfo
//

@implementation GTLRServiceControl_CheckInfo
@dynamic consumerInfo, unusedArguments;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"unusedArguments" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_CheckRequest
//

@implementation GTLRServiceControl_CheckRequest
@dynamic operation, requestProjectSettings, serviceConfigId,
         skipActivationCheck;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_CheckResponse
//

@implementation GTLRServiceControl_CheckResponse
@dynamic checkErrors, checkInfo, operationId, quotaInfo, serviceConfigId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"checkErrors" : [GTLRServiceControl_CheckError class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ConsumerInfo
//

@implementation GTLRServiceControl_ConsumerInfo
@dynamic projectNumber;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Distribution
//

@implementation GTLRServiceControl_Distribution
@dynamic bucketCounts, count, explicitBuckets, exponentialBuckets,
         linearBuckets, maximum, mean, minimum, sumOfSquaredDeviation;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bucketCounts" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_EndReconciliationRequest
//

@implementation GTLRServiceControl_EndReconciliationRequest
@dynamic reconciliationOperation, serviceConfigId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_EndReconciliationResponse
//

@implementation GTLRServiceControl_EndReconciliationResponse
@dynamic operationId, quotaMetrics, reconciliationErrors, serviceConfigId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"quotaMetrics" : [GTLRServiceControl_MetricValueSet class],
    @"reconciliationErrors" : [GTLRServiceControl_QuotaError class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ExplicitBuckets
//

@implementation GTLRServiceControl_ExplicitBuckets
@dynamic bounds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bounds" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ExponentialBuckets
//

@implementation GTLRServiceControl_ExponentialBuckets
@dynamic growthFactor, numFiniteBuckets, scale;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_LinearBuckets
//

@implementation GTLRServiceControl_LinearBuckets
@dynamic numFiniteBuckets, offset, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_LogEntry
//

@implementation GTLRServiceControl_LogEntry
@dynamic insertId, labels, name, protoPayload, severity, structPayload,
         textPayload, timestamp;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_LogEntry_Labels
//

@implementation GTLRServiceControl_LogEntry_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_LogEntry_ProtoPayload
//

@implementation GTLRServiceControl_LogEntry_ProtoPayload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_LogEntry_StructPayload
//

@implementation GTLRServiceControl_LogEntry_StructPayload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_MetricValue
//

@implementation GTLRServiceControl_MetricValue
@dynamic boolValue, distributionValue, doubleValue, endTime, int64Value, labels,
         moneyValue, startTime, stringValue;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_MetricValue_Labels
//

@implementation GTLRServiceControl_MetricValue_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_MetricValueSet
//

@implementation GTLRServiceControl_MetricValueSet
@dynamic metricName, metricValues;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"metricValues" : [GTLRServiceControl_MetricValue class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Money
//

@implementation GTLRServiceControl_Money
@dynamic currencyCode, nanos, units;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Operation
//

@implementation GTLRServiceControl_Operation
@dynamic consumerId, endTime, importance, labels, logEntries, metricValueSets,
         operationId, operationName, quotaProperties, resourceContainer,
         resources, startTime, userLabels;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"logEntries" : [GTLRServiceControl_LogEntry class],
    @"metricValueSets" : [GTLRServiceControl_MetricValueSet class],
    @"resources" : [GTLRServiceControl_ResourceInfo class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Operation_Labels
//

@implementation GTLRServiceControl_Operation_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Operation_UserLabels
//

@implementation GTLRServiceControl_Operation_UserLabels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_QuotaError
//

@implementation GTLRServiceControl_QuotaError
@dynamic code, descriptionProperty, subject;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_QuotaInfo
//

@implementation GTLRServiceControl_QuotaInfo
@dynamic limitExceeded, quotaConsumed, quotaMetrics;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"limitExceeded" : [NSString class],
    @"quotaMetrics" : [GTLRServiceControl_MetricValueSet class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_QuotaInfo_QuotaConsumed
//

@implementation GTLRServiceControl_QuotaInfo_QuotaConsumed

+ (Class)classForAdditionalProperties {
  return [NSNumber class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_QuotaOperation
//

@implementation GTLRServiceControl_QuotaOperation
@dynamic consumerId, labels, methodName, operationId, quotaMetrics, quotaMode;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"quotaMetrics" : [GTLRServiceControl_MetricValueSet class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_QuotaOperation_Labels
//

@implementation GTLRServiceControl_QuotaOperation_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_QuotaProperties
//

@implementation GTLRServiceControl_QuotaProperties
@dynamic quotaMode;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ReleaseQuotaRequest
//

@implementation GTLRServiceControl_ReleaseQuotaRequest
@dynamic releaseOperation, serviceConfigId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ReleaseQuotaResponse
//

@implementation GTLRServiceControl_ReleaseQuotaResponse
@dynamic operationId, quotaMetrics, releaseErrors, serviceConfigId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"quotaMetrics" : [GTLRServiceControl_MetricValueSet class],
    @"releaseErrors" : [GTLRServiceControl_QuotaError class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ReportError
//

@implementation GTLRServiceControl_ReportError
@dynamic operationId, status;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ReportInfo
//

@implementation GTLRServiceControl_ReportInfo
@dynamic operationId, quotaInfo;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ReportRequest
//

@implementation GTLRServiceControl_ReportRequest
@dynamic operations, serviceConfigId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRServiceControl_Operation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ReportResponse
//

@implementation GTLRServiceControl_ReportResponse
@dynamic reportErrors, reportInfos, serviceConfigId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"reportErrors" : [GTLRServiceControl_ReportError class],
    @"reportInfos" : [GTLRServiceControl_ReportInfo class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Request
//

@implementation GTLRServiceControl_Request
@dynamic auth, fragment, headers, host, identifier, method, path, protocol,
         query, reason, scheme, size, time;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Request_Headers
//

@implementation GTLRServiceControl_Request_Headers

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_RequestMetadata
//

@implementation GTLRServiceControl_RequestMetadata
@dynamic callerIp, callerNetwork, callerSuppliedUserAgent, requestAttributes;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Resource
//

@implementation GTLRServiceControl_Resource
@dynamic labels, name, service, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Resource_Labels
//

@implementation GTLRServiceControl_Resource_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ResourceInfo
//

@implementation GTLRServiceControl_ResourceInfo
@dynamic resourceContainer, resourceName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_ResourceLocation
//

@implementation GTLRServiceControl_ResourceLocation
@dynamic currentLocations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"currentLocations" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_StartReconciliationRequest
//

@implementation GTLRServiceControl_StartReconciliationRequest
@dynamic reconciliationOperation, serviceConfigId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_StartReconciliationResponse
//

@implementation GTLRServiceControl_StartReconciliationResponse
@dynamic operationId, quotaMetrics, reconciliationErrors, serviceConfigId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"quotaMetrics" : [GTLRServiceControl_MetricValueSet class],
    @"reconciliationErrors" : [GTLRServiceControl_QuotaError class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Status
//

@implementation GTLRServiceControl_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRServiceControl_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceControl_Status_Details_Item
//

@implementation GTLRServiceControl_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end
