// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Search Console URL Testing Tools API (searchconsole/v1)
// Description:
//   Search Console URL Testing Tools API provides tools for running validation
//   tests against single URLs.
// Documentation:
//   https://developers.google.com/webmaster-tools/search-console-api/

#import "GTLRSearchConsoleQuery.h"

#import "GTLRSearchConsoleObjects.h"

@implementation GTLRSearchConsoleQuery

@dynamic fields;

@end

@implementation GTLRSearchConsoleQuery_UrlTestingToolsMobileFriendlyTestRun

+ (instancetype)queryWithObject:(GTLRSearchConsole_RunMobileFriendlyTestRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"v1/urlTestingTools/mobileFriendlyTest:run";
  GTLRSearchConsoleQuery_UrlTestingToolsMobileFriendlyTestRun *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRSearchConsole_RunMobileFriendlyTestResponse class];
  query.loggingName = @"searchconsole.urlTestingTools.mobileFriendlyTest.run";
  return query;
}

@end
