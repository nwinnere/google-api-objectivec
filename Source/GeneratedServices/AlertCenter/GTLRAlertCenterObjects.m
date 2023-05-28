// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   G Suite Alert Center API (alertcenter/v1beta1)
// Description:
//   Manages alerts on issues affecting your domain.
// Documentation:
//   https://developers.google.com/admin-sdk/alertcenter/

#import "GTLRAlertCenterObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRAlertCenter_AlertFeedback.type
NSString * const kGTLRAlertCenter_AlertFeedback_Type_AlertFeedbackTypeUnspecified = @"ALERT_FEEDBACK_TYPE_UNSPECIFIED";
NSString * const kGTLRAlertCenter_AlertFeedback_Type_NotUseful = @"NOT_USEFUL";
NSString * const kGTLRAlertCenter_AlertFeedback_Type_SomewhatUseful = @"SOMEWHAT_USEFUL";
NSString * const kGTLRAlertCenter_AlertFeedback_Type_VeryUseful = @"VERY_USEFUL";

// GTLRAlertCenter_CloudPubsubTopic.payloadFormat
NSString * const kGTLRAlertCenter_CloudPubsubTopic_PayloadFormat_Json = @"JSON";
NSString * const kGTLRAlertCenter_CloudPubsubTopic_PayloadFormat_PayloadFormatUnspecified = @"PAYLOAD_FORMAT_UNSPECIFIED";

// GTLRAlertCenter_MailPhishing.systemActionType
NSString * const kGTLRAlertCenter_MailPhishing_SystemActionType_NoOperation = @"NO_OPERATION";
NSString * const kGTLRAlertCenter_MailPhishing_SystemActionType_RemovedFromInbox = @"REMOVED_FROM_INBOX";
NSString * const kGTLRAlertCenter_MailPhishing_SystemActionType_SystemActionTypeUnspecified = @"SYSTEM_ACTION_TYPE_UNSPECIFIED";

// GTLRAlertCenter_RuleViolationInfo.dataSource
NSString * const kGTLRAlertCenter_RuleViolationInfo_DataSource_DataSourceUnspecified = @"DATA_SOURCE_UNSPECIFIED";
NSString * const kGTLRAlertCenter_RuleViolationInfo_DataSource_Drive = @"DRIVE";

// GTLRAlertCenter_RuleViolationInfo.suppressedActionTypes
NSString * const kGTLRAlertCenter_RuleViolationInfo_SuppressedActionTypes_ActionTypeUnspecified = @"ACTION_TYPE_UNSPECIFIED";
NSString * const kGTLRAlertCenter_RuleViolationInfo_SuppressedActionTypes_Alert = @"ALERT";
NSString * const kGTLRAlertCenter_RuleViolationInfo_SuppressedActionTypes_DriveBlockExternalSharing = @"DRIVE_BLOCK_EXTERNAL_SHARING";
NSString * const kGTLRAlertCenter_RuleViolationInfo_SuppressedActionTypes_DriveWarnOnExternalSharing = @"DRIVE_WARN_ON_EXTERNAL_SHARING";
NSString * const kGTLRAlertCenter_RuleViolationInfo_SuppressedActionTypes_RuleActivate = @"RULE_ACTIVATE";
NSString * const kGTLRAlertCenter_RuleViolationInfo_SuppressedActionTypes_RuleDeactivate = @"RULE_DEACTIVATE";

// GTLRAlertCenter_RuleViolationInfo.trigger
NSString * const kGTLRAlertCenter_RuleViolationInfo_Trigger_DriveShare = @"DRIVE_SHARE";
NSString * const kGTLRAlertCenter_RuleViolationInfo_Trigger_TriggerUnspecified = @"TRIGGER_UNSPECIFIED";

// GTLRAlertCenter_RuleViolationInfo.triggeredActionTypes
NSString * const kGTLRAlertCenter_RuleViolationInfo_TriggeredActionTypes_ActionTypeUnspecified = @"ACTION_TYPE_UNSPECIFIED";
NSString * const kGTLRAlertCenter_RuleViolationInfo_TriggeredActionTypes_Alert = @"ALERT";
NSString * const kGTLRAlertCenter_RuleViolationInfo_TriggeredActionTypes_DriveBlockExternalSharing = @"DRIVE_BLOCK_EXTERNAL_SHARING";
NSString * const kGTLRAlertCenter_RuleViolationInfo_TriggeredActionTypes_DriveWarnOnExternalSharing = @"DRIVE_WARN_ON_EXTERNAL_SHARING";
NSString * const kGTLRAlertCenter_RuleViolationInfo_TriggeredActionTypes_RuleActivate = @"RULE_ACTIVATE";
NSString * const kGTLRAlertCenter_RuleViolationInfo_TriggeredActionTypes_RuleDeactivate = @"RULE_DEACTIVATE";

// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_AccountWarning
//

@implementation GTLRAlertCenter_AccountWarning
@dynamic email, loginDetails;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_ActivityRule
//

@implementation GTLRAlertCenter_ActivityRule
@dynamic actionNames, createTime, descriptionProperty, displayName, name, query,
         supersededAlerts, supersedingAlert, threshold, triggerSource,
         updateTime, windowSize;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"actionNames" : [NSString class],
    @"supersededAlerts" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_Alert
//

@implementation GTLRAlertCenter_Alert
@dynamic alertId, createTime, customerId, data, deleted, endTime, ETag,
         metadata, securityInvestigationToolLink, source, startTime, type,
         updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_Alert_Data
//

@implementation GTLRAlertCenter_Alert_Data

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_AlertFeedback
//

@implementation GTLRAlertCenter_AlertFeedback
@dynamic alertId, createTime, customerId, email, feedbackId, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_AlertMetadata
//

@implementation GTLRAlertCenter_AlertMetadata
@dynamic alertId, assignee, customerId, ETag, severity, status, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_AppMakerSqlSetupNotification
//

@implementation GTLRAlertCenter_AppMakerSqlSetupNotification
@dynamic requestInfo;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"requestInfo" : [GTLRAlertCenter_RequestInfo class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_Attachment
//

@implementation GTLRAlertCenter_Attachment
@dynamic csv;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_BadWhitelist
//

@implementation GTLRAlertCenter_BadWhitelist
@dynamic domainId, maliciousEntity, messages, sourceIp;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"messages" : [GTLRAlertCenter_GmailMessageInfo class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_BatchDeleteAlertsRequest
//

@implementation GTLRAlertCenter_BatchDeleteAlertsRequest
@dynamic alertId, customerId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"alertId" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_BatchDeleteAlertsResponse
//

@implementation GTLRAlertCenter_BatchDeleteAlertsResponse
@dynamic failedAlertStatus, successAlertIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"successAlertIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_BatchDeleteAlertsResponse_FailedAlertStatus
//

@implementation GTLRAlertCenter_BatchDeleteAlertsResponse_FailedAlertStatus

+ (Class)classForAdditionalProperties {
  return [GTLRAlertCenter_Status class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_BatchUndeleteAlertsRequest
//

@implementation GTLRAlertCenter_BatchUndeleteAlertsRequest
@dynamic alertId, customerId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"alertId" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_BatchUndeleteAlertsResponse
//

@implementation GTLRAlertCenter_BatchUndeleteAlertsResponse
@dynamic failedAlertStatus, successAlertIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"successAlertIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_BatchUndeleteAlertsResponse_FailedAlertStatus
//

@implementation GTLRAlertCenter_BatchUndeleteAlertsResponse_FailedAlertStatus

+ (Class)classForAdditionalProperties {
  return [GTLRAlertCenter_Status class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_CloudPubsubTopic
//

@implementation GTLRAlertCenter_CloudPubsubTopic
@dynamic payloadFormat, topicName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_Csv
//

@implementation GTLRAlertCenter_Csv
@dynamic dataRows, headers;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dataRows" : [GTLRAlertCenter_CsvRow class],
    @"headers" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_CsvRow
//

@implementation GTLRAlertCenter_CsvRow
@dynamic entries;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entries" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_DeviceCompromised
//

@implementation GTLRAlertCenter_DeviceCompromised
@dynamic email, events;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"events" : [GTLRAlertCenter_DeviceCompromisedSecurityDetail class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_DeviceCompromisedSecurityDetail
//

@implementation GTLRAlertCenter_DeviceCompromisedSecurityDetail
@dynamic deviceCompromisedState, deviceId, deviceModel, deviceType, iosVendorId,
         resourceId, serialNumber;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_DlpRuleViolation
//

@implementation GTLRAlertCenter_DlpRuleViolation
@dynamic ruleViolationInfo;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_DomainId
//

@implementation GTLRAlertCenter_DomainId
@dynamic customerPrimaryDomain;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_DomainWideTakeoutInitiated
//

@implementation GTLRAlertCenter_DomainWideTakeoutInitiated
@dynamic email, takeoutRequestId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_Empty
//

@implementation GTLRAlertCenter_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_GmailMessageInfo
//

@implementation GTLRAlertCenter_GmailMessageInfo
@dynamic attachmentsSha256Hash, date, md5HashMessageBody, md5HashSubject,
         messageBodySnippet, messageId, recipient, subjectText;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"attachmentsSha256Hash" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_GoogleOperations
//

@implementation GTLRAlertCenter_GoogleOperations
@dynamic affectedUserEmails, attachmentData, descriptionProperty, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"affectedUserEmails" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_ListAlertFeedbackResponse
//

@implementation GTLRAlertCenter_ListAlertFeedbackResponse
@dynamic feedback;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"feedback" : [GTLRAlertCenter_AlertFeedback class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_ListAlertsResponse
//

@implementation GTLRAlertCenter_ListAlertsResponse
@dynamic alerts, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"alerts" : [GTLRAlertCenter_Alert class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"alerts";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_LoginDetails
//

@implementation GTLRAlertCenter_LoginDetails
@dynamic ipAddress, loginTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_MailPhishing
//

@implementation GTLRAlertCenter_MailPhishing
@dynamic domainId, isInternal, maliciousEntity, messages, systemActionType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"messages" : [GTLRAlertCenter_GmailMessageInfo class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_MaliciousEntity
//

@implementation GTLRAlertCenter_MaliciousEntity
@dynamic displayName, entity, fromHeader;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_MatchInfo
//

@implementation GTLRAlertCenter_MatchInfo
@dynamic predefinedDetector, userDefinedDetector;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_Notification
//

@implementation GTLRAlertCenter_Notification
@dynamic cloudPubsubTopic;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_PhishingSpike
//

@implementation GTLRAlertCenter_PhishingSpike
@dynamic domainId, isInternal, maliciousEntity, messages;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"messages" : [GTLRAlertCenter_GmailMessageInfo class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_PredefinedDetectorInfo
//

@implementation GTLRAlertCenter_PredefinedDetectorInfo
@dynamic detectorName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_RequestInfo
//

@implementation GTLRAlertCenter_RequestInfo
@dynamic appDeveloperEmail, appKey, numberOfRequests;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"appDeveloperEmail" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_ResourceInfo
//

@implementation GTLRAlertCenter_ResourceInfo
@dynamic documentId, resourceTitle;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_RuleInfo
//

@implementation GTLRAlertCenter_RuleInfo
@dynamic displayName, resourceName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_RuleViolationInfo
//

@implementation GTLRAlertCenter_RuleViolationInfo
@dynamic dataSource, matchInfo, recipients, resourceInfo, ruleInfo,
         suppressedActionTypes, trigger, triggeredActionTypes,
         triggeringUserEmail;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"matchInfo" : [GTLRAlertCenter_MatchInfo class],
    @"recipients" : [NSString class],
    @"suppressedActionTypes" : [NSString class],
    @"triggeredActionTypes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_Settings
//

@implementation GTLRAlertCenter_Settings
@dynamic notifications;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"notifications" : [GTLRAlertCenter_Notification class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_StateSponsoredAttack
//

@implementation GTLRAlertCenter_StateSponsoredAttack
@dynamic email;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_Status
//

@implementation GTLRAlertCenter_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRAlertCenter_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_Status_Details_Item
//

@implementation GTLRAlertCenter_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_SuspiciousActivity
//

@implementation GTLRAlertCenter_SuspiciousActivity
@dynamic email, events;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"events" : [GTLRAlertCenter_SuspiciousActivitySecurityDetail class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_SuspiciousActivitySecurityDetail
//

@implementation GTLRAlertCenter_SuspiciousActivitySecurityDetail
@dynamic deviceId, deviceModel, deviceProperty, deviceType, iosVendorId,
         newValue, oldValue, resourceId, serialNumber;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_UndeleteAlertRequest
//

@implementation GTLRAlertCenter_UndeleteAlertRequest
@dynamic customerId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_User
//

@implementation GTLRAlertCenter_User
@dynamic displayName, emailAddress;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAlertCenter_UserDefinedDetectorInfo
//

@implementation GTLRAlertCenter_UserDefinedDetectorInfo
@dynamic displayName, resourceName;
@end
