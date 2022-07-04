// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Testing API (testing/v1)
// Description:
//   Allows developers to run automated tests for their mobile applications on
//   Google infrastructure.
// Documentation:
//   https://developers.google.com/cloud-test-lab/

#import "GTLRTestingObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRTesting_AndroidInstrumentationTest.orchestratorOption
NSString * const kGTLRTesting_AndroidInstrumentationTest_OrchestratorOption_DoNotUseOrchestrator = @"DO_NOT_USE_ORCHESTRATOR";
NSString * const kGTLRTesting_AndroidInstrumentationTest_OrchestratorOption_OrchestratorOptionUnspecified = @"ORCHESTRATOR_OPTION_UNSPECIFIED";
NSString * const kGTLRTesting_AndroidInstrumentationTest_OrchestratorOption_UseOrchestrator = @"USE_ORCHESTRATOR";

// GTLRTesting_AndroidModel.form
NSString * const kGTLRTesting_AndroidModel_Form_DeviceFormUnspecified = @"DEVICE_FORM_UNSPECIFIED";
NSString * const kGTLRTesting_AndroidModel_Form_Physical       = @"PHYSICAL";
NSString * const kGTLRTesting_AndroidModel_Form_Virtual        = @"VIRTUAL";

// GTLRTesting_AndroidModel.formFactor
NSString * const kGTLRTesting_AndroidModel_FormFactor_DeviceFormFactorUnspecified = @"DEVICE_FORM_FACTOR_UNSPECIFIED";
NSString * const kGTLRTesting_AndroidModel_FormFactor_Phone    = @"PHONE";
NSString * const kGTLRTesting_AndroidModel_FormFactor_Tablet   = @"TABLET";
NSString * const kGTLRTesting_AndroidModel_FormFactor_Wearable = @"WEARABLE";

// GTLRTesting_CancelTestMatrixResponse.testState
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_Cancelled = @"CANCELLED";
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_Error = @"ERROR";
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_Finished = @"FINISHED";
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_IncompatibleArchitecture = @"INCOMPATIBLE_ARCHITECTURE";
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_IncompatibleEnvironment = @"INCOMPATIBLE_ENVIRONMENT";
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_Invalid = @"INVALID";
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_Pending = @"PENDING";
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_Running = @"RUNNING";
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_TestStateUnspecified = @"TEST_STATE_UNSPECIFIED";
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_UnsupportedEnvironment = @"UNSUPPORTED_ENVIRONMENT";
NSString * const kGTLRTesting_CancelTestMatrixResponse_TestState_Validating = @"VALIDATING";

// GTLRTesting_RoboDirective.actionType
NSString * const kGTLRTesting_RoboDirective_ActionType_ActionTypeUnspecified = @"ACTION_TYPE_UNSPECIFIED";
NSString * const kGTLRTesting_RoboDirective_ActionType_EnterText = @"ENTER_TEXT";
NSString * const kGTLRTesting_RoboDirective_ActionType_SingleClick = @"SINGLE_CLICK";

// GTLRTesting_TestExecution.state
NSString * const kGTLRTesting_TestExecution_State_Cancelled    = @"CANCELLED";
NSString * const kGTLRTesting_TestExecution_State_Error        = @"ERROR";
NSString * const kGTLRTesting_TestExecution_State_Finished     = @"FINISHED";
NSString * const kGTLRTesting_TestExecution_State_IncompatibleArchitecture = @"INCOMPATIBLE_ARCHITECTURE";
NSString * const kGTLRTesting_TestExecution_State_IncompatibleEnvironment = @"INCOMPATIBLE_ENVIRONMENT";
NSString * const kGTLRTesting_TestExecution_State_Invalid      = @"INVALID";
NSString * const kGTLRTesting_TestExecution_State_Pending      = @"PENDING";
NSString * const kGTLRTesting_TestExecution_State_Running      = @"RUNNING";
NSString * const kGTLRTesting_TestExecution_State_TestStateUnspecified = @"TEST_STATE_UNSPECIFIED";
NSString * const kGTLRTesting_TestExecution_State_UnsupportedEnvironment = @"UNSUPPORTED_ENVIRONMENT";
NSString * const kGTLRTesting_TestExecution_State_Validating   = @"VALIDATING";

// GTLRTesting_TestMatrix.invalidMatrixDetails
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_DetailsUnavailable = @"DETAILS_UNAVAILABLE";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_DeviceAdminReceiver = @"DEVICE_ADMIN_RECEIVER";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_ForbiddenPermissions = @"FORBIDDEN_PERMISSIONS";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_InstrumentationOrchestratorIncompatible = @"INSTRUMENTATION_ORCHESTRATOR_INCOMPATIBLE";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_InvalidInputApk = @"INVALID_INPUT_APK";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_InvalidMatrixDetailsUnspecified = @"INVALID_MATRIX_DETAILS_UNSPECIFIED";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_InvalidRoboDirectives = @"INVALID_ROBO_DIRECTIVES";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_MalformedApk = @"MALFORMED_APK";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_MalformedIpa = @"MALFORMED_IPA";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_MalformedTestApk = @"MALFORMED_TEST_APK";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_NoCodeApk = @"NO_CODE_APK";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_NoInstrumentation = @"NO_INSTRUMENTATION";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_NoLauncherActivity = @"NO_LAUNCHER_ACTIVITY";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_NoManifest = @"NO_MANIFEST";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_NoPackageName = @"NO_PACKAGE_NAME";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_NoSignature = @"NO_SIGNATURE";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_NoTestRunnerClass = @"NO_TEST_RUNNER_CLASS";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_ScenarioLabelMalformed = @"SCENARIO_LABEL_MALFORMED";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_ScenarioLabelNotDeclared = @"SCENARIO_LABEL_NOT_DECLARED";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_ScenarioNotDeclared = @"SCENARIO_NOT_DECLARED";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_TestLoopIntentFilterNotFound = @"TEST_LOOP_INTENT_FILTER_NOT_FOUND";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_TestOnlyApk = @"TEST_ONLY_APK";
NSString * const kGTLRTesting_TestMatrix_InvalidMatrixDetails_TestSameAsApp = @"TEST_SAME_AS_APP";

// GTLRTesting_TestMatrix.state
NSString * const kGTLRTesting_TestMatrix_State_Cancelled       = @"CANCELLED";
NSString * const kGTLRTesting_TestMatrix_State_Error           = @"ERROR";
NSString * const kGTLRTesting_TestMatrix_State_Finished        = @"FINISHED";
NSString * const kGTLRTesting_TestMatrix_State_IncompatibleArchitecture = @"INCOMPATIBLE_ARCHITECTURE";
NSString * const kGTLRTesting_TestMatrix_State_IncompatibleEnvironment = @"INCOMPATIBLE_ENVIRONMENT";
NSString * const kGTLRTesting_TestMatrix_State_Invalid         = @"INVALID";
NSString * const kGTLRTesting_TestMatrix_State_Pending         = @"PENDING";
NSString * const kGTLRTesting_TestMatrix_State_Running         = @"RUNNING";
NSString * const kGTLRTesting_TestMatrix_State_TestStateUnspecified = @"TEST_STATE_UNSPECIFIED";
NSString * const kGTLRTesting_TestMatrix_State_UnsupportedEnvironment = @"UNSUPPORTED_ENVIRONMENT";
NSString * const kGTLRTesting_TestMatrix_State_Validating      = @"VALIDATING";

// ----------------------------------------------------------------------------
//
//   GTLRTesting_Account
//

@implementation GTLRTesting_Account
@dynamic googleAuto;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_AndroidDevice
//

@implementation GTLRTesting_AndroidDevice
@dynamic androidModelId, androidVersionId, locale, orientation;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_AndroidDeviceCatalog
//

@implementation GTLRTesting_AndroidDeviceCatalog
@dynamic models, runtimeConfiguration, versions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"models" : [GTLRTesting_AndroidModel class],
    @"versions" : [GTLRTesting_AndroidVersion class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_AndroidDeviceList
//

@implementation GTLRTesting_AndroidDeviceList
@dynamic androidDevices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"androidDevices" : [GTLRTesting_AndroidDevice class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_AndroidInstrumentationTest
//

@implementation GTLRTesting_AndroidInstrumentationTest
@dynamic appApk, appPackageId, orchestratorOption, testApk, testPackageId,
         testRunnerClass, testTargets;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"testTargets" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_AndroidMatrix
//

@implementation GTLRTesting_AndroidMatrix
@dynamic androidModelIds, androidVersionIds, locales, orientations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"androidModelIds" : [NSString class],
    @"androidVersionIds" : [NSString class],
    @"locales" : [NSString class],
    @"orientations" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_AndroidModel
//

@implementation GTLRTesting_AndroidModel
@dynamic brand, codename, form, formFactor, identifier, manufacturer, name,
         screenDensity, screenX, screenY, supportedAbis, supportedVersionIds,
         tags, videoRecordingNotSupported;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"supportedAbis" : [NSString class],
    @"supportedVersionIds" : [NSString class],
    @"tags" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_AndroidRoboTest
//

@implementation GTLRTesting_AndroidRoboTest
@dynamic appApk, appInitialActivity, appPackageId, maxDepth, maxSteps,
         roboDirectives, roboScript, startingIntents;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"roboDirectives" : [GTLRTesting_RoboDirective class],
    @"startingIntents" : [GTLRTesting_RoboStartingIntent class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_AndroidRuntimeConfiguration
//

@implementation GTLRTesting_AndroidRuntimeConfiguration
@dynamic locales, orientations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locales" : [GTLRTesting_Locale class],
    @"orientations" : [GTLRTesting_Orientation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_AndroidTestLoop
//

@implementation GTLRTesting_AndroidTestLoop
@dynamic appApk, appPackageId, scenarioLabels, scenarios;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"scenarioLabels" : [NSString class],
    @"scenarios" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_AndroidVersion
//

@implementation GTLRTesting_AndroidVersion
@dynamic apiLevel, codeName, distribution, identifier, releaseDate, tags,
         versionString;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tags" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_Apk
//

@implementation GTLRTesting_Apk
@dynamic location, packageName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_ApkDetail
//

@implementation GTLRTesting_ApkDetail
@dynamic apkManifest;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_ApkManifest
//

@implementation GTLRTesting_ApkManifest
@dynamic applicationLabel, intentFilters, maxSdkVersion, minSdkVersion,
         packageName;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"intentFilters" : [GTLRTesting_IntentFilter class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_CancelTestMatrixResponse
//

@implementation GTLRTesting_CancelTestMatrixResponse
@dynamic testState;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_ClientInfo
//

@implementation GTLRTesting_ClientInfo
@dynamic clientInfoDetails, name;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"clientInfoDetails" : [GTLRTesting_ClientInfoDetail class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_ClientInfoDetail
//

@implementation GTLRTesting_ClientInfoDetail
@dynamic key, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_Date
//

@implementation GTLRTesting_Date
@dynamic day, month, year;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_DeviceFile
//

@implementation GTLRTesting_DeviceFile
@dynamic obbFile, regularFile;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_Distribution
//

@implementation GTLRTesting_Distribution
@dynamic marketShare, measurementTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_Environment
//

@implementation GTLRTesting_Environment
@dynamic androidDevice;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_EnvironmentMatrix
//

@implementation GTLRTesting_EnvironmentMatrix
@dynamic androidDeviceList, androidMatrix;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_EnvironmentVariable
//

@implementation GTLRTesting_EnvironmentVariable
@dynamic key, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_FileReference
//

@implementation GTLRTesting_FileReference
@dynamic gcsPath;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_GetApkDetailsResponse
//

@implementation GTLRTesting_GetApkDetailsResponse
@dynamic apkDetail;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_GoogleAuto
//

@implementation GTLRTesting_GoogleAuto
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_GoogleCloudStorage
//

@implementation GTLRTesting_GoogleCloudStorage
@dynamic gcsPath;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_IntentFilter
//

@implementation GTLRTesting_IntentFilter
@dynamic actionNames, categoryNames, mimeType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"actionNames" : [NSString class],
    @"categoryNames" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_LauncherActivityIntent
//

@implementation GTLRTesting_LauncherActivityIntent
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_Locale
//

@implementation GTLRTesting_Locale
@dynamic identifier, name, region, tags;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tags" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_NetworkConfiguration
//

@implementation GTLRTesting_NetworkConfiguration
@dynamic downRule, identifier, upRule;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_NetworkConfigurationCatalog
//

@implementation GTLRTesting_NetworkConfigurationCatalog
@dynamic configurations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"configurations" : [GTLRTesting_NetworkConfiguration class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_ObbFile
//

@implementation GTLRTesting_ObbFile
@dynamic obb, obbFileName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_Orientation
//

@implementation GTLRTesting_Orientation
@dynamic identifier, name, tags;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"tags" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_ProvidedSoftwareCatalog
//

@implementation GTLRTesting_ProvidedSoftwareCatalog
@dynamic orchestratorVersion;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_RegularFile
//

@implementation GTLRTesting_RegularFile
@dynamic content, devicePath;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_ResultStorage
//

@implementation GTLRTesting_ResultStorage
@dynamic googleCloudStorage, toolResultsExecution, toolResultsHistory;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_RoboDirective
//

@implementation GTLRTesting_RoboDirective
@dynamic actionType, inputText, resourceName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_RoboStartingIntent
//

@implementation GTLRTesting_RoboStartingIntent
@dynamic launcherActivity, startActivity;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_StartActivityIntent
//

@implementation GTLRTesting_StartActivityIntent
@dynamic action, categories, uri;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"categories" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_TestDetails
//

@implementation GTLRTesting_TestDetails
@dynamic errorMessage, progressMessages, videoRecordingDisabled;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"progressMessages" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_TestEnvironmentCatalog
//

@implementation GTLRTesting_TestEnvironmentCatalog
@dynamic androidDeviceCatalog, networkConfigurationCatalog, softwareCatalog;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_TestExecution
//

@implementation GTLRTesting_TestExecution
@dynamic environment, identifier, matrixId, projectId, state, testDetails,
         testSpecification, timestamp, toolResultsStep;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_TestMatrix
//

@implementation GTLRTesting_TestMatrix
@dynamic clientInfo, environmentMatrix, invalidMatrixDetails, projectId,
         resultStorage, state, testExecutions, testMatrixId, testSpecification,
         timestamp;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"testExecutions" : [GTLRTesting_TestExecution class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_TestSetup
//

@implementation GTLRTesting_TestSetup
@dynamic account, additionalApks, directoriesToPull, environmentVariables,
         filesToPush, networkProfile;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"additionalApks" : [GTLRTesting_Apk class],
    @"directoriesToPull" : [NSString class],
    @"environmentVariables" : [GTLRTesting_EnvironmentVariable class],
    @"filesToPush" : [GTLRTesting_DeviceFile class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_TestSpecification
//

@implementation GTLRTesting_TestSpecification
@dynamic androidInstrumentationTest, androidRoboTest, androidTestLoop,
         autoGoogleLogin, disablePerformanceMetrics, disableVideoRecording,
         testSetup, testTimeout;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_ToolResultsExecution
//

@implementation GTLRTesting_ToolResultsExecution
@dynamic executionId, historyId, projectId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_ToolResultsHistory
//

@implementation GTLRTesting_ToolResultsHistory
@dynamic historyId, projectId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_ToolResultsStep
//

@implementation GTLRTesting_ToolResultsStep
@dynamic executionId, historyId, projectId, stepId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTesting_TrafficRule
//

@implementation GTLRTesting_TrafficRule
@dynamic bandwidth, burst, delay, packetDuplicationRatio, packetLossRatio;
@end
