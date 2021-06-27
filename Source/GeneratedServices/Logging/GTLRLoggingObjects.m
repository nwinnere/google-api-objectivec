// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Stackdriver Logging API (logging/v2)
// Description:
//   Writes log entries and manages your Stackdriver Logging configuration.
// Documentation:
//   https://cloud.google.com/logging/docs/

#import "GTLRLoggingObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRLogging_LabelDescriptor.valueType
NSString * const kGTLRLogging_LabelDescriptor_ValueType_Bool   = @"BOOL";
NSString * const kGTLRLogging_LabelDescriptor_ValueType_Int64  = @"INT64";
NSString * const kGTLRLogging_LabelDescriptor_ValueType_String = @"STRING";

// GTLRLogging_LogEntry.severity
NSString * const kGTLRLogging_LogEntry_Severity_Alert     = @"ALERT";
NSString * const kGTLRLogging_LogEntry_Severity_Critical  = @"CRITICAL";
NSString * const kGTLRLogging_LogEntry_Severity_Debug     = @"DEBUG";
NSString * const kGTLRLogging_LogEntry_Severity_Default   = @"DEFAULT";
NSString * const kGTLRLogging_LogEntry_Severity_Emergency = @"EMERGENCY";
NSString * const kGTLRLogging_LogEntry_Severity_Error     = @"ERROR";
NSString * const kGTLRLogging_LogEntry_Severity_Info      = @"INFO";
NSString * const kGTLRLogging_LogEntry_Severity_Notice    = @"NOTICE";
NSString * const kGTLRLogging_LogEntry_Severity_Warning   = @"WARNING";

// GTLRLogging_LogLine.severity
NSString * const kGTLRLogging_LogLine_Severity_Alert     = @"ALERT";
NSString * const kGTLRLogging_LogLine_Severity_Critical  = @"CRITICAL";
NSString * const kGTLRLogging_LogLine_Severity_Debug     = @"DEBUG";
NSString * const kGTLRLogging_LogLine_Severity_Default   = @"DEFAULT";
NSString * const kGTLRLogging_LogLine_Severity_Emergency = @"EMERGENCY";
NSString * const kGTLRLogging_LogLine_Severity_Error     = @"ERROR";
NSString * const kGTLRLogging_LogLine_Severity_Info      = @"INFO";
NSString * const kGTLRLogging_LogLine_Severity_Notice    = @"NOTICE";
NSString * const kGTLRLogging_LogLine_Severity_Warning   = @"WARNING";

// GTLRLogging_LogMetric.version
NSString * const kGTLRLogging_LogMetric_Version_V1 = @"V1";
NSString * const kGTLRLogging_LogMetric_Version_V2 = @"V2";

// GTLRLogging_LogSink.outputVersionFormat
NSString * const kGTLRLogging_LogSink_OutputVersionFormat_V1   = @"V1";
NSString * const kGTLRLogging_LogSink_OutputVersionFormat_V2   = @"V2";
NSString * const kGTLRLogging_LogSink_OutputVersionFormat_VersionFormatUnspecified = @"VERSION_FORMAT_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRLogging_Empty
//

@implementation GTLRLogging_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_HttpRequest
//

@implementation GTLRLogging_HttpRequest
@dynamic cacheFillBytes, cacheHit, cacheLookup, cacheValidatedWithOriginServer,
         latency, referer, remoteIp, requestMethod, requestSize, requestUrl,
         responseSize, serverIp, status, userAgent;
@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_LabelDescriptor
//

@implementation GTLRLogging_LabelDescriptor
@dynamic descriptionProperty, key, valueType;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_ListLogEntriesRequest
//

@implementation GTLRLogging_ListLogEntriesRequest
@dynamic filter, orderBy, pageSize, pageToken, projectIds, resourceNames;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"projectIds" : [NSString class],
    @"resourceNames" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_ListLogEntriesResponse
//

@implementation GTLRLogging_ListLogEntriesResponse
@dynamic entries, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entries" : [GTLRLogging_LogEntry class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"entries";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_ListLogMetricsResponse
//

@implementation GTLRLogging_ListLogMetricsResponse
@dynamic metrics, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"metrics" : [GTLRLogging_LogMetric class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"metrics";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_ListMonitoredResourceDescriptorsResponse
//

@implementation GTLRLogging_ListMonitoredResourceDescriptorsResponse
@dynamic nextPageToken, resourceDescriptors;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"resourceDescriptors" : [GTLRLogging_MonitoredResourceDescriptor class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"resourceDescriptors";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_ListSinksResponse
//

@implementation GTLRLogging_ListSinksResponse
@dynamic nextPageToken, sinks;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sinks" : [GTLRLogging_LogSink class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"sinks";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_LogEntry
//

@implementation GTLRLogging_LogEntry
@dynamic httpRequest, insertId, jsonPayload, labels, logName, operation,
         protoPayload, resource, severity, textPayload, timestamp;
@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_LogEntryJsonPayload
//

@implementation GTLRLogging_LogEntryJsonPayload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_LogEntryLabels
//

@implementation GTLRLogging_LogEntryLabels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_LogEntryProtoPayload
//

@implementation GTLRLogging_LogEntryProtoPayload

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_LogEntryOperation
//

@implementation GTLRLogging_LogEntryOperation
@dynamic first, identifier, last, producer;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_LogLine
//

@implementation GTLRLogging_LogLine
@dynamic logMessage, severity, sourceLocation, time;
@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_LogMetric
//

@implementation GTLRLogging_LogMetric
@dynamic descriptionProperty, filter, name, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_LogSink
//

@implementation GTLRLogging_LogSink
@dynamic destination, endTime, filter, name, outputVersionFormat, startTime,
         writerIdentity;
@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_MonitoredResource
//

@implementation GTLRLogging_MonitoredResource
@dynamic labels, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_MonitoredResourceLabels
//

@implementation GTLRLogging_MonitoredResourceLabels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_MonitoredResourceDescriptor
//

@implementation GTLRLogging_MonitoredResourceDescriptor
@dynamic descriptionProperty, displayName, labels, name, type;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"labels" : [GTLRLogging_LabelDescriptor class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_RequestLog
//

@implementation GTLRLogging_RequestLog
@dynamic appEngineRelease, appId, cost, endTime, finished, first, host,
         httpVersion, instanceId, instanceIndex, ip, latency, line, megaCycles,
         method, moduleId, nickname, pendingTime, referrer, requestId, resource,
         responseSize, sourceReference, startTime, status, taskName,
         taskQueueName, traceId, urlMapEntry, userAgent, versionId,
         wasLoadingRequest;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"line" : [GTLRLogging_LogLine class],
    @"sourceReference" : [GTLRLogging_SourceReference class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_SourceLocation
//

@implementation GTLRLogging_SourceLocation
@dynamic file, functionName, line;
@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_SourceReference
//

@implementation GTLRLogging_SourceReference
@dynamic repository, revisionId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_WriteLogEntriesRequest
//

@implementation GTLRLogging_WriteLogEntriesRequest
@dynamic entries, labels, logName, partialSuccess, resource;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entries" : [GTLRLogging_LogEntry class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_WriteLogEntriesRequestLabels
//

@implementation GTLRLogging_WriteLogEntriesRequestLabels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRLogging_WriteLogEntriesResponse
//

@implementation GTLRLogging_WriteLogEntriesResponse
@end
