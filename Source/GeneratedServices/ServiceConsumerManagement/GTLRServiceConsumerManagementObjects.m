// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Service Consumer Management API (serviceconsumermanagement/v1)
// Description:
//   Manages the service consumers of a Service Infrastructure service.
// Documentation:
//   https://cloud.google.com/service-consumer-management/docs/overview

#import "GTLRServiceConsumerManagementObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRServiceConsumerManagement_Api.syntax
NSString * const kGTLRServiceConsumerManagement_Api_Syntax_SyntaxProto2 = @"SYNTAX_PROTO2";
NSString * const kGTLRServiceConsumerManagement_Api_Syntax_SyntaxProto3 = @"SYNTAX_PROTO3";

// GTLRServiceConsumerManagement_Enum.syntax
NSString * const kGTLRServiceConsumerManagement_Enum_Syntax_SyntaxProto2 = @"SYNTAX_PROTO2";
NSString * const kGTLRServiceConsumerManagement_Enum_Syntax_SyntaxProto3 = @"SYNTAX_PROTO3";

// GTLRServiceConsumerManagement_Field.cardinality
NSString * const kGTLRServiceConsumerManagement_Field_Cardinality_CardinalityOptional = @"CARDINALITY_OPTIONAL";
NSString * const kGTLRServiceConsumerManagement_Field_Cardinality_CardinalityRepeated = @"CARDINALITY_REPEATED";
NSString * const kGTLRServiceConsumerManagement_Field_Cardinality_CardinalityRequired = @"CARDINALITY_REQUIRED";
NSString * const kGTLRServiceConsumerManagement_Field_Cardinality_CardinalityUnknown = @"CARDINALITY_UNKNOWN";

// GTLRServiceConsumerManagement_Field.kind
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeBool = @"TYPE_BOOL";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeBytes = @"TYPE_BYTES";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeDouble = @"TYPE_DOUBLE";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeEnum = @"TYPE_ENUM";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeFixed32 = @"TYPE_FIXED32";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeFixed64 = @"TYPE_FIXED64";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeFloat = @"TYPE_FLOAT";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeGroup = @"TYPE_GROUP";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeInt32 = @"TYPE_INT32";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeInt64 = @"TYPE_INT64";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeMessage = @"TYPE_MESSAGE";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeSfixed32 = @"TYPE_SFIXED32";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeSfixed64 = @"TYPE_SFIXED64";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeSint32 = @"TYPE_SINT32";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeSint64 = @"TYPE_SINT64";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeString = @"TYPE_STRING";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeUint32 = @"TYPE_UINT32";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeUint64 = @"TYPE_UINT64";
NSString * const kGTLRServiceConsumerManagement_Field_Kind_TypeUnknown = @"TYPE_UNKNOWN";

// GTLRServiceConsumerManagement_LabelDescriptor.valueType
NSString * const kGTLRServiceConsumerManagement_LabelDescriptor_ValueType_Bool = @"BOOL";
NSString * const kGTLRServiceConsumerManagement_LabelDescriptor_ValueType_Int64 = @"INT64";
NSString * const kGTLRServiceConsumerManagement_LabelDescriptor_ValueType_String = @"STRING";

// GTLRServiceConsumerManagement_Method.syntax
NSString * const kGTLRServiceConsumerManagement_Method_Syntax_SyntaxProto2 = @"SYNTAX_PROTO2";
NSString * const kGTLRServiceConsumerManagement_Method_Syntax_SyntaxProto3 = @"SYNTAX_PROTO3";

// GTLRServiceConsumerManagement_MetricDescriptor.metricKind
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_MetricKind_Cumulative = @"CUMULATIVE";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_MetricKind_Delta = @"DELTA";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_MetricKind_Gauge = @"GAUGE";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_MetricKind_MetricKindUnspecified = @"METRIC_KIND_UNSPECIFIED";

// GTLRServiceConsumerManagement_MetricDescriptor.valueType
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_ValueType_Bool = @"BOOL";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_ValueType_Distribution = @"DISTRIBUTION";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_ValueType_Double = @"DOUBLE";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_ValueType_Int64 = @"INT64";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_ValueType_Money = @"MONEY";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_ValueType_String = @"STRING";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptor_ValueType_ValueTypeUnspecified = @"VALUE_TYPE_UNSPECIFIED";

// GTLRServiceConsumerManagement_MetricDescriptorMetadata.launchStage
NSString * const kGTLRServiceConsumerManagement_MetricDescriptorMetadata_LaunchStage_Alpha = @"ALPHA";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptorMetadata_LaunchStage_Beta = @"BETA";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptorMetadata_LaunchStage_Deprecated = @"DEPRECATED";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptorMetadata_LaunchStage_EarlyAccess = @"EARLY_ACCESS";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptorMetadata_LaunchStage_Ga = @"GA";
NSString * const kGTLRServiceConsumerManagement_MetricDescriptorMetadata_LaunchStage_LaunchStageUnspecified = @"LAUNCH_STAGE_UNSPECIFIED";

// GTLRServiceConsumerManagement_TenantResource.status
NSString * const kGTLRServiceConsumerManagement_TenantResource_Status_Active = @"ACTIVE";
NSString * const kGTLRServiceConsumerManagement_TenantResource_Status_Failed = @"FAILED";
NSString * const kGTLRServiceConsumerManagement_TenantResource_Status_PendingCreate = @"PENDING_CREATE";
NSString * const kGTLRServiceConsumerManagement_TenantResource_Status_PendingDelete = @"PENDING_DELETE";
NSString * const kGTLRServiceConsumerManagement_TenantResource_Status_StatusUnspecified = @"STATUS_UNSPECIFIED";

// GTLRServiceConsumerManagement_Type.syntax
NSString * const kGTLRServiceConsumerManagement_Type_Syntax_SyntaxProto2 = @"SYNTAX_PROTO2";
NSString * const kGTLRServiceConsumerManagement_Type_Syntax_SyntaxProto3 = @"SYNTAX_PROTO3";

// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_AddTenantProjectRequest
//

@implementation GTLRServiceConsumerManagement_AddTenantProjectRequest
@dynamic projectConfig, tag;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Api
//

@implementation GTLRServiceConsumerManagement_Api
@dynamic methods, mixins, name, options, sourceContext, syntax, version;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"methods" : [GTLRServiceConsumerManagement_Method class],
    @"mixins" : [GTLRServiceConsumerManagement_Mixin class],
    @"options" : [GTLRServiceConsumerManagement_Option class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Authentication
//

@implementation GTLRServiceConsumerManagement_Authentication
@dynamic providers, rules;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"providers" : [GTLRServiceConsumerManagement_AuthProvider class],
    @"rules" : [GTLRServiceConsumerManagement_AuthenticationRule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_AuthenticationRule
//

@implementation GTLRServiceConsumerManagement_AuthenticationRule
@dynamic allowWithoutCredential, oauth, requirements, selector;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"requirements" : [GTLRServiceConsumerManagement_AuthRequirement class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_AuthorizationConfig
//

@implementation GTLRServiceConsumerManagement_AuthorizationConfig
@dynamic provider;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_AuthProvider
//

@implementation GTLRServiceConsumerManagement_AuthProvider
@dynamic audiences, authorizationUrl, identifier, issuer, jwksUri;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_AuthRequirement
//

@implementation GTLRServiceConsumerManagement_AuthRequirement
@dynamic audiences, providerId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Backend
//

@implementation GTLRServiceConsumerManagement_Backend
@dynamic rules;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rules" : [GTLRServiceConsumerManagement_BackendRule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_BackendRule
//

@implementation GTLRServiceConsumerManagement_BackendRule
@dynamic address, deadline, minDeadline, operationDeadline, selector;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Billing
//

@implementation GTLRServiceConsumerManagement_Billing
@dynamic consumerDestinations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"consumerDestinations" : [GTLRServiceConsumerManagement_BillingDestination class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_BillingConfig
//

@implementation GTLRServiceConsumerManagement_BillingConfig
@dynamic billingAccount;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_BillingDestination
//

@implementation GTLRServiceConsumerManagement_BillingDestination
@dynamic metrics, monitoredResource;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"metrics" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_CancelOperationRequest
//

@implementation GTLRServiceConsumerManagement_CancelOperationRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Context
//

@implementation GTLRServiceConsumerManagement_Context
@dynamic rules;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rules" : [GTLRServiceConsumerManagement_ContextRule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_ContextRule
//

@implementation GTLRServiceConsumerManagement_ContextRule
@dynamic allowedRequestExtensions, allowedResponseExtensions, provided,
         requested, selector;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedRequestExtensions" : [NSString class],
    @"allowedResponseExtensions" : [NSString class],
    @"provided" : [NSString class],
    @"requested" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Control
//

@implementation GTLRServiceConsumerManagement_Control
@dynamic environment;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_CreateTenancyUnitRequest
//

@implementation GTLRServiceConsumerManagement_CreateTenancyUnitRequest
@dynamic tenancyUnitId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_CustomError
//

@implementation GTLRServiceConsumerManagement_CustomError
@dynamic rules, types;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rules" : [GTLRServiceConsumerManagement_CustomErrorRule class],
    @"types" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_CustomErrorRule
//

@implementation GTLRServiceConsumerManagement_CustomErrorRule
@dynamic isErrorType, selector;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_CustomHttpPattern
//

@implementation GTLRServiceConsumerManagement_CustomHttpPattern
@dynamic kind, path;

+ (BOOL)isKindValidForClassRegistry {
  // This class has a "kind" property that doesn't appear to be usable to
  // determine what type of object was encoded in the JSON.
  return NO;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Documentation
//

@implementation GTLRServiceConsumerManagement_Documentation
@dynamic documentationRootUrl, overview, pages, rules, summary;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"pages" : [GTLRServiceConsumerManagement_Page class],
    @"rules" : [GTLRServiceConsumerManagement_DocumentationRule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_DocumentationRule
//

@implementation GTLRServiceConsumerManagement_DocumentationRule
@dynamic deprecationDescription, descriptionProperty, selector;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Empty
//

@implementation GTLRServiceConsumerManagement_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Endpoint
//

@implementation GTLRServiceConsumerManagement_Endpoint
@dynamic aliases, allowCors, features, name, target;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"aliases" : [NSString class],
    @"features" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Enum
//

@implementation GTLRServiceConsumerManagement_Enum
@dynamic enumvalue, name, options, sourceContext, syntax;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"enumvalue" : [GTLRServiceConsumerManagement_EnumValue class],
    @"options" : [GTLRServiceConsumerManagement_Option class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_EnumValue
//

@implementation GTLRServiceConsumerManagement_EnumValue
@dynamic name, number, options;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"options" : [GTLRServiceConsumerManagement_Option class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Experimental
//

@implementation GTLRServiceConsumerManagement_Experimental
@dynamic authorization;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Field
//

@implementation GTLRServiceConsumerManagement_Field
@dynamic cardinality, defaultValue, jsonName, kind, name, number, oneofIndex,
         options, packed, typeUrl;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"options" : [GTLRServiceConsumerManagement_Option class]
  };
  return map;
}

+ (BOOL)isKindValidForClassRegistry {
  // This class has a "kind" property that doesn't appear to be usable to
  // determine what type of object was encoded in the JSON.
  return NO;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Http
//

@implementation GTLRServiceConsumerManagement_Http
@dynamic fullyDecodeReservedExpansion, rules;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rules" : [GTLRServiceConsumerManagement_HttpRule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_HttpRule
//

@implementation GTLRServiceConsumerManagement_HttpRule
@dynamic additionalBindings, body, custom, deleteProperty, get, patch, post,
         put, responseBody, selector;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"deleteProperty" : @"delete" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"additionalBindings" : [GTLRServiceConsumerManagement_HttpRule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_LabelDescriptor
//

@implementation GTLRServiceConsumerManagement_LabelDescriptor
@dynamic descriptionProperty, key, valueType;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_ListOperationsResponse
//

@implementation GTLRServiceConsumerManagement_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRServiceConsumerManagement_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_ListTenancyUnitsResponse
//

@implementation GTLRServiceConsumerManagement_ListTenancyUnitsResponse
@dynamic nextPageToken, tenancyUnits;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tenancyUnits" : [GTLRServiceConsumerManagement_TenancyUnit class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"tenancyUnits";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_LogDescriptor
//

@implementation GTLRServiceConsumerManagement_LogDescriptor
@dynamic descriptionProperty, displayName, labels, name;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"labels" : [GTLRServiceConsumerManagement_LabelDescriptor class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Logging
//

@implementation GTLRServiceConsumerManagement_Logging
@dynamic consumerDestinations, producerDestinations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"consumerDestinations" : [GTLRServiceConsumerManagement_LoggingDestination class],
    @"producerDestinations" : [GTLRServiceConsumerManagement_LoggingDestination class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_LoggingDestination
//

@implementation GTLRServiceConsumerManagement_LoggingDestination
@dynamic logs, monitoredResource;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"logs" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Method
//

@implementation GTLRServiceConsumerManagement_Method
@dynamic name, options, requestStreaming, requestTypeUrl, responseStreaming,
         responseTypeUrl, syntax;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"options" : [GTLRServiceConsumerManagement_Option class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_MetricDescriptor
//

@implementation GTLRServiceConsumerManagement_MetricDescriptor
@dynamic descriptionProperty, displayName, labels, metadata, metricKind, name,
         type, unit, valueType;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"labels" : [GTLRServiceConsumerManagement_LabelDescriptor class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_MetricDescriptorMetadata
//

@implementation GTLRServiceConsumerManagement_MetricDescriptorMetadata
@dynamic ingestDelay, launchStage, samplePeriod;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_MetricRule
//

@implementation GTLRServiceConsumerManagement_MetricRule
@dynamic metricCosts, selector;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_MetricRule_MetricCosts
//

@implementation GTLRServiceConsumerManagement_MetricRule_MetricCosts

+ (Class)classForAdditionalProperties {
  return [NSNumber class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Mixin
//

@implementation GTLRServiceConsumerManagement_Mixin
@dynamic name, root;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_MonitoredResourceDescriptor
//

@implementation GTLRServiceConsumerManagement_MonitoredResourceDescriptor
@dynamic descriptionProperty, displayName, labels, name, type;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"labels" : [GTLRServiceConsumerManagement_LabelDescriptor class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Monitoring
//

@implementation GTLRServiceConsumerManagement_Monitoring
@dynamic consumerDestinations, producerDestinations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"consumerDestinations" : [GTLRServiceConsumerManagement_MonitoringDestination class],
    @"producerDestinations" : [GTLRServiceConsumerManagement_MonitoringDestination class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_MonitoringDestination
//

@implementation GTLRServiceConsumerManagement_MonitoringDestination
@dynamic metrics, monitoredResource;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"metrics" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_OAuthRequirements
//

@implementation GTLRServiceConsumerManagement_OAuthRequirements
@dynamic canonicalScopes;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Operation
//

@implementation GTLRServiceConsumerManagement_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Operation_Metadata
//

@implementation GTLRServiceConsumerManagement_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Operation_Response
//

@implementation GTLRServiceConsumerManagement_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Option
//

@implementation GTLRServiceConsumerManagement_Option
@dynamic name, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Option_Value
//

@implementation GTLRServiceConsumerManagement_Option_Value

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Page
//

@implementation GTLRServiceConsumerManagement_Page
@dynamic content, name, subpages;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"subpages" : [GTLRServiceConsumerManagement_Page class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_PolicyBinding
//

@implementation GTLRServiceConsumerManagement_PolicyBinding
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
//   GTLRServiceConsumerManagement_Quota
//

@implementation GTLRServiceConsumerManagement_Quota
@dynamic limits, metricRules;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"limits" : [GTLRServiceConsumerManagement_QuotaLimit class],
    @"metricRules" : [GTLRServiceConsumerManagement_MetricRule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_QuotaLimit
//

@implementation GTLRServiceConsumerManagement_QuotaLimit
@dynamic defaultLimit, descriptionProperty, displayName, duration, freeTier,
         maxLimit, metric, name, unit, values;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_QuotaLimit_Values
//

@implementation GTLRServiceConsumerManagement_QuotaLimit_Values

+ (Class)classForAdditionalProperties {
  return [NSNumber class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_RemoveTenantProjectRequest
//

@implementation GTLRServiceConsumerManagement_RemoveTenantProjectRequest
@dynamic tag;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_SearchTenancyUnitsResponse
//

@implementation GTLRServiceConsumerManagement_SearchTenancyUnitsResponse
@dynamic nextPageToken, tenancyUnits;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tenancyUnits" : [GTLRServiceConsumerManagement_TenancyUnit class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"tenancyUnits";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Service
//

@implementation GTLRServiceConsumerManagement_Service
@dynamic apis, authentication, backend, billing, configVersion, context,
         control, customError, documentation, endpoints, enums, experimental,
         http, identifier, logging, logs, metrics, monitoredResources,
         monitoring, name, producerProjectId, quota, sourceInfo,
         systemParameters, systemTypes, title, types, usage;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"apis" : [GTLRServiceConsumerManagement_Api class],
    @"endpoints" : [GTLRServiceConsumerManagement_Endpoint class],
    @"enums" : [GTLRServiceConsumerManagement_Enum class],
    @"logs" : [GTLRServiceConsumerManagement_LogDescriptor class],
    @"metrics" : [GTLRServiceConsumerManagement_MetricDescriptor class],
    @"monitoredResources" : [GTLRServiceConsumerManagement_MonitoredResourceDescriptor class],
    @"systemTypes" : [GTLRServiceConsumerManagement_Type class],
    @"types" : [GTLRServiceConsumerManagement_Type class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_ServiceAccountConfig
//

@implementation GTLRServiceConsumerManagement_ServiceAccountConfig
@dynamic accountId, tenantProjectRoles;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tenantProjectRoles" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_SourceContext
//

@implementation GTLRServiceConsumerManagement_SourceContext
@dynamic fileName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_SourceInfo
//

@implementation GTLRServiceConsumerManagement_SourceInfo
@dynamic sourceFiles;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sourceFiles" : [GTLRServiceConsumerManagement_SourceInfo_SourceFiles_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_SourceInfo_SourceFiles_Item
//

@implementation GTLRServiceConsumerManagement_SourceInfo_SourceFiles_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Status
//

@implementation GTLRServiceConsumerManagement_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRServiceConsumerManagement_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Status_Details_Item
//

@implementation GTLRServiceConsumerManagement_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_SystemParameter
//

@implementation GTLRServiceConsumerManagement_SystemParameter
@dynamic httpHeader, name, urlQueryParameter;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_SystemParameterRule
//

@implementation GTLRServiceConsumerManagement_SystemParameterRule
@dynamic parameters, selector;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"parameters" : [GTLRServiceConsumerManagement_SystemParameter class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_SystemParameters
//

@implementation GTLRServiceConsumerManagement_SystemParameters
@dynamic rules;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rules" : [GTLRServiceConsumerManagement_SystemParameterRule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_TenancyUnit
//

@implementation GTLRServiceConsumerManagement_TenancyUnit
@dynamic consumer, createTime, name, service, tenantResources;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tenantResources" : [GTLRServiceConsumerManagement_TenantResource class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_TenantProjectConfig
//

@implementation GTLRServiceConsumerManagement_TenantProjectConfig
@dynamic billingConfig, folder, labels, serviceAccountConfig, services,
         tenantProjectPolicy;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"services" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_TenantProjectConfig_Labels
//

@implementation GTLRServiceConsumerManagement_TenantProjectConfig_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_TenantProjectPolicy
//

@implementation GTLRServiceConsumerManagement_TenantProjectPolicy
@dynamic policyBindings;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"policyBindings" : [GTLRServiceConsumerManagement_PolicyBinding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_TenantResource
//

@implementation GTLRServiceConsumerManagement_TenantResource
@dynamic resource, status, tag;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Type
//

@implementation GTLRServiceConsumerManagement_Type
@dynamic fields, name, oneofs, options, sourceContext, syntax;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"fields" : [GTLRServiceConsumerManagement_Field class],
    @"oneofs" : [NSString class],
    @"options" : [GTLRServiceConsumerManagement_Option class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_Usage
//

@implementation GTLRServiceConsumerManagement_Usage
@dynamic producerNotificationChannel, requirements, rules;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"requirements" : [NSString class],
    @"rules" : [GTLRServiceConsumerManagement_UsageRule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceConsumerManagement_UsageRule
//

@implementation GTLRServiceConsumerManagement_UsageRule
@dynamic allowUnregisteredCalls, selector, skipServiceControl;
@end
