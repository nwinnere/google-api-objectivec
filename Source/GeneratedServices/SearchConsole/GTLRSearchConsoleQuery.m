// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Search Console API (searchconsole/v1)
// Description:
//   The Search Console API provides access to both Search Console data
//   (verified users only) and to public information on an URL basis (anyone)
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
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
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
