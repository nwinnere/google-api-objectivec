// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Apps Script Execution API (script/v1)
// Description:
//   Executes functions in Google Apps Script projects.
// Documentation:
//   https://developers.google.com/apps-script/execution/rest/v1/scripts/run

#import "GTLRScriptQuery.h"

#import "GTLRScriptObjects.h"

@implementation GTLRScriptQuery

@dynamic fields;

@end

@implementation GTLRScriptQuery_ScriptsRun

@dynamic scriptId;

+ (instancetype)queryWithObject:(GTLRScript_ExecutionRequest *)object
                       scriptId:(NSString *)scriptId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"scriptId" ];
  NSString *pathURITemplate = @"v1/scripts/{scriptId}:run";
  GTLRScriptQuery_ScriptsRun *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.scriptId = scriptId;
  query.expectedObjectClass = [GTLRScript_Operation class];
  query.loggingName = @"script.scripts.run";
  return query;
}

@end
