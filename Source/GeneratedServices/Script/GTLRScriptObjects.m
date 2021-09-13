// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Apps Script Execution API (script/v1)
// Description:
//   Executes Google Apps Script projects.
// Documentation:
//   https://developers.google.com/apps-script/execution/rest/v1/scripts/run

#import "GTLRScriptObjects.h"

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
//   GTLRScript_Operation
//

@implementation GTLRScript_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRScript_Operation_Metadata
//

@implementation GTLRScript_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

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
