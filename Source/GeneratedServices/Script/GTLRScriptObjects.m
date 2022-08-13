// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Apps Script API (script/v1)
// Description:
//   Manages and executes Google Apps Script projects.
// Documentation:
//   https://developers.google.com/apps-script/api/

#import "GTLRScriptObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRScript_EntryPoint.entryPointType
NSString * const kGTLRScript_EntryPoint_EntryPointType_AddOn   = @"ADD_ON";
NSString * const kGTLRScript_EntryPoint_EntryPointType_EntryPointTypeUnspecified = @"ENTRY_POINT_TYPE_UNSPECIFIED";
NSString * const kGTLRScript_EntryPoint_EntryPointType_ExecutionApi = @"EXECUTION_API";
NSString * const kGTLRScript_EntryPoint_EntryPointType_WebApp  = @"WEB_APP";

// GTLRScript_File.type
NSString * const kGTLRScript_File_Type_EnumTypeUnspecified = @"ENUM_TYPE_UNSPECIFIED";
NSString * const kGTLRScript_File_Type_Html                = @"HTML";
NSString * const kGTLRScript_File_Type_Json                = @"JSON";
NSString * const kGTLRScript_File_Type_ServerJs            = @"SERVER_JS";

// GTLRScript_GoogleAppsScriptTypeAddOnEntryPoint.addOnType
NSString * const kGTLRScript_GoogleAppsScriptTypeAddOnEntryPoint_AddOnType_DataStudio = @"DATA_STUDIO";
NSString * const kGTLRScript_GoogleAppsScriptTypeAddOnEntryPoint_AddOnType_Gmail = @"GMAIL";
NSString * const kGTLRScript_GoogleAppsScriptTypeAddOnEntryPoint_AddOnType_UnknownAddonType = @"UNKNOWN_ADDON_TYPE";

// GTLRScript_GoogleAppsScriptTypeExecutionApiConfig.access
NSString * const kGTLRScript_GoogleAppsScriptTypeExecutionApiConfig_Access_Anyone = @"ANYONE";
NSString * const kGTLRScript_GoogleAppsScriptTypeExecutionApiConfig_Access_AnyoneAnonymous = @"ANYONE_ANONYMOUS";
NSString * const kGTLRScript_GoogleAppsScriptTypeExecutionApiConfig_Access_Domain = @"DOMAIN";
NSString * const kGTLRScript_GoogleAppsScriptTypeExecutionApiConfig_Access_Myself = @"MYSELF";
NSString * const kGTLRScript_GoogleAppsScriptTypeExecutionApiConfig_Access_UnknownAccess = @"UNKNOWN_ACCESS";

// GTLRScript_GoogleAppsScriptTypeProcess.processStatus
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessStatus_Canceled = @"CANCELED";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessStatus_Completed = @"COMPLETED";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessStatus_Delayed = @"DELAYED";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessStatus_Failed = @"FAILED";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessStatus_Paused = @"PAUSED";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessStatus_ProcessStatusUnspecified = @"PROCESS_STATUS_UNSPECIFIED";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessStatus_Running = @"RUNNING";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessStatus_TimedOut = @"TIMED_OUT";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessStatus_Unknown = @"UNKNOWN";

// GTLRScript_GoogleAppsScriptTypeProcess.processType
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessType_AddOn = @"ADD_ON";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessType_BatchTask = @"BATCH_TASK";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessType_Editor = @"EDITOR";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessType_ExecutionApi = @"EXECUTION_API";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessType_Menu = @"MENU";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessType_ProcessTypeUnspecified = @"PROCESS_TYPE_UNSPECIFIED";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessType_SimpleTrigger = @"SIMPLE_TRIGGER";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessType_TimeDriven = @"TIME_DRIVEN";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessType_Trigger = @"TRIGGER";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_ProcessType_Webapp = @"WEBAPP";

// GTLRScript_GoogleAppsScriptTypeProcess.userAccessLevel
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_UserAccessLevel_None = @"NONE";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_UserAccessLevel_Owner = @"OWNER";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_UserAccessLevel_Read = @"READ";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_UserAccessLevel_UserAccessLevelUnspecified = @"USER_ACCESS_LEVEL_UNSPECIFIED";
NSString * const kGTLRScript_GoogleAppsScriptTypeProcess_UserAccessLevel_Write = @"WRITE";

// GTLRScript_GoogleAppsScriptTypeWebAppConfig.access
NSString * const kGTLRScript_GoogleAppsScriptTypeWebAppConfig_Access_Anyone = @"ANYONE";
NSString * const kGTLRScript_GoogleAppsScriptTypeWebAppConfig_Access_AnyoneAnonymous = @"ANYONE_ANONYMOUS";
NSString * const kGTLRScript_GoogleAppsScriptTypeWebAppConfig_Access_Domain = @"DOMAIN";
NSString * const kGTLRScript_GoogleAppsScriptTypeWebAppConfig_Access_Myself = @"MYSELF";
NSString * const kGTLRScript_GoogleAppsScriptTypeWebAppConfig_Access_UnknownAccess = @"UNKNOWN_ACCESS";

// GTLRScript_GoogleAppsScriptTypeWebAppConfig.executeAs
NSString * const kGTLRScript_GoogleAppsScriptTypeWebAppConfig_ExecuteAs_UnknownExecuteAs = @"UNKNOWN_EXECUTE_AS";
NSString * const kGTLRScript_GoogleAppsScriptTypeWebAppConfig_ExecuteAs_UserAccessing = @"USER_ACCESSING";
NSString * const kGTLRScript_GoogleAppsScriptTypeWebAppConfig_ExecuteAs_UserDeploying = @"USER_DEPLOYING";

// ----------------------------------------------------------------------------
//
//   GTLRScript_Content
//

@implementation GTLRScript_Content
@dynamic files, scriptId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"files" : [GTLRScript_File class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_CreateProjectRequest
//

@implementation GTLRScript_CreateProjectRequest
@dynamic parentId, title;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_Deployment
//

@implementation GTLRScript_Deployment
@dynamic deploymentConfig, deploymentId, entryPoints, updateTime;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entryPoints" : [GTLRScript_EntryPoint class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_DeploymentConfig
//

@implementation GTLRScript_DeploymentConfig
@dynamic descriptionProperty, manifestFileName, scriptId, versionNumber;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_Empty
//

@implementation GTLRScript_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_EntryPoint
//

@implementation GTLRScript_EntryPoint
@dynamic addOn, entryPointType, executionApi, webApp;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_ExecutionError
//

@implementation GTLRScript_ExecutionError
@dynamic errorMessage, errorType, scriptStackTraceElements;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"scriptStackTraceElements" : [GTLRScript_StackTraceElement class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_ExecutionRequest
//

@implementation GTLRScript_ExecutionRequest
@dynamic devMode, function, parameters, sessionState;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"parameters" : [NSObject class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_ExecutionResponse
//

@implementation GTLRScript_ExecutionResponse
@dynamic result;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_File
//

@implementation GTLRScript_File
@dynamic createTime, functionSet, lastModifyUser, name, source, type,
         updateTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_GoogleAppsScriptTypeAddOnEntryPoint
//

@implementation GTLRScript_GoogleAppsScriptTypeAddOnEntryPoint
@dynamic addOnType, descriptionProperty, helpUrl, postInstallTipUrl,
         reportIssueUrl, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_GoogleAppsScriptTypeExecutionApiConfig
//

@implementation GTLRScript_GoogleAppsScriptTypeExecutionApiConfig
@dynamic access;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_GoogleAppsScriptTypeExecutionApiEntryPoint
//

@implementation GTLRScript_GoogleAppsScriptTypeExecutionApiEntryPoint
@dynamic entryPointConfig;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_GoogleAppsScriptTypeFunction
//

@implementation GTLRScript_GoogleAppsScriptTypeFunction
@dynamic name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_GoogleAppsScriptTypeFunctionSet
//

@implementation GTLRScript_GoogleAppsScriptTypeFunctionSet
@dynamic values;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"values" : [GTLRScript_GoogleAppsScriptTypeFunction class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_GoogleAppsScriptTypeProcess
//

@implementation GTLRScript_GoogleAppsScriptTypeProcess
@dynamic duration, executingUser, functionName, processStatus, processType,
         projectName, startTime, userAccessLevel;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_GoogleAppsScriptTypeUser
//

@implementation GTLRScript_GoogleAppsScriptTypeUser
@dynamic domain, email, name, photoUrl;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_GoogleAppsScriptTypeWebAppConfig
//

@implementation GTLRScript_GoogleAppsScriptTypeWebAppConfig
@dynamic access, executeAs;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_GoogleAppsScriptTypeWebAppEntryPoint
//

@implementation GTLRScript_GoogleAppsScriptTypeWebAppEntryPoint
@dynamic entryPointConfig, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_ListDeploymentsResponse
//

@implementation GTLRScript_ListDeploymentsResponse
@dynamic deployments, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"deployments" : [GTLRScript_Deployment class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"deployments";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_ListScriptProcessesResponse
//

@implementation GTLRScript_ListScriptProcessesResponse
@dynamic nextPageToken, processes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"processes" : [GTLRScript_GoogleAppsScriptTypeProcess class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"processes";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_ListUserProcessesResponse
//

@implementation GTLRScript_ListUserProcessesResponse
@dynamic nextPageToken, processes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"processes" : [GTLRScript_GoogleAppsScriptTypeProcess class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"processes";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_ListVersionsResponse
//

@implementation GTLRScript_ListVersionsResponse
@dynamic nextPageToken, versions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"versions" : [GTLRScript_Version class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"versions";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_Metrics
//

@implementation GTLRScript_Metrics
@dynamic activeUsers, failedExecutions, totalExecutions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"activeUsers" : [GTLRScript_MetricsValue class],
    @"failedExecutions" : [GTLRScript_MetricsValue class],
    @"totalExecutions" : [GTLRScript_MetricsValue class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_MetricsValue
//

@implementation GTLRScript_MetricsValue
@dynamic endTime, startTime, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_Operation
//

@implementation GTLRScript_Operation
@dynamic done, error, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_Operation_Response
//

@implementation GTLRScript_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_Project
//

@implementation GTLRScript_Project
@dynamic createTime, creator, lastModifyUser, parentId, scriptId, title,
         updateTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_StackTraceElement
//

@implementation GTLRScript_StackTraceElement
@dynamic function, lineNumber;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_Status
//

@implementation GTLRScript_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRScript_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_Status_Details_Item
//

@implementation GTLRScript_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_UpdateDeploymentRequest
//

@implementation GTLRScript_UpdateDeploymentRequest
@dynamic deploymentConfig;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_Version
//

@implementation GTLRScript_Version
@dynamic createTime, descriptionProperty, scriptId, versionNumber;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end
