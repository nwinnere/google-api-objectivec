// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Surveys API (surveys/v2)
// Description:
//   Creates and conducts surveys, lists the surveys that an authenticated user
//   owns, and retrieves survey results and information about specified surveys.

#import "GTLRSurveysQuery.h"

#import "GTLRSurveysObjects.h"

@implementation GTLRSurveysQuery

@dynamic fields;

@end

@implementation GTLRSurveysQuery_ResultsGet

@dynamic surveyUrlId;

+ (instancetype)queryWithObject:(GTLRSurveys_ResultsGetRequest *)object
                    surveyUrlId:(NSString *)surveyUrlId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"surveyUrlId" ];
  NSString *pathURITemplate = @"surveys/{surveyUrlId}/results";
  GTLRSurveysQuery_ResultsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.surveyUrlId = surveyUrlId;
  query.expectedObjectClass = [GTLRSurveys_SurveyResults class];
  query.loggingName = @"surveys.results.get";
  return query;
}

+ (instancetype)queryForMediaWithObject:(GTLRSurveys_ResultsGetRequest *)object
                            surveyUrlId:(NSString *)surveyUrlId {
  GTLRSurveysQuery_ResultsGet *query =
    [self queryWithObject:object
              surveyUrlId:surveyUrlId];
  query.downloadAsDataObjectType = @"media";
  query.loggingName = @"Download surveys.results.get";
  return query;
}

@end

@implementation GTLRSurveysQuery_SurveysDelete

@dynamic surveyUrlId;

+ (instancetype)queryWithSurveyUrlId:(NSString *)surveyUrlId {
  NSArray *pathParams = @[ @"surveyUrlId" ];
  NSString *pathURITemplate = @"surveys/{surveyUrlId}";
  GTLRSurveysQuery_SurveysDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.surveyUrlId = surveyUrlId;
  query.expectedObjectClass = [GTLRSurveys_DeleteResponse class];
  query.loggingName = @"surveys.surveys.delete";
  return query;
}

@end

@implementation GTLRSurveysQuery_SurveysGet

@dynamic surveyUrlId;

+ (instancetype)queryWithSurveyUrlId:(NSString *)surveyUrlId {
  NSArray *pathParams = @[ @"surveyUrlId" ];
  NSString *pathURITemplate = @"surveys/{surveyUrlId}";
  GTLRSurveysQuery_SurveysGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.surveyUrlId = surveyUrlId;
  query.expectedObjectClass = [GTLRSurveys_Survey class];
  query.loggingName = @"surveys.surveys.get";
  return query;
}

@end

@implementation GTLRSurveysQuery_SurveysInsert

+ (instancetype)queryWithObject:(GTLRSurveys_Survey *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"surveys";
  GTLRSurveysQuery_SurveysInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRSurveys_Survey class];
  query.loggingName = @"surveys.surveys.insert";
  return query;
}

@end

@implementation GTLRSurveysQuery_SurveysList

@dynamic maxResults, startIndex, token;

+ (instancetype)query {
  NSString *pathURITemplate = @"surveys";
  GTLRSurveysQuery_SurveysList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRSurveys_ListResponse class];
  query.loggingName = @"surveys.surveys.list";
  return query;
}

@end

@implementation GTLRSurveysQuery_SurveysStart

@dynamic resourceId;

+ (instancetype)queryWithObject:(GTLRSurveys_StartRequest *)object
                     resourceId:(NSString *)resourceId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"resourceId" ];
  NSString *pathURITemplate = @"surveys/{resourceId}/start";
  GTLRSurveysQuery_SurveysStart *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resourceId = resourceId;
  query.expectedObjectClass = [GTLRSurveys_StartResponse class];
  query.loggingName = @"surveys.surveys.start";
  return query;
}

@end

@implementation GTLRSurveysQuery_SurveysStop

@dynamic resourceId;

+ (instancetype)queryWithResourceId:(NSString *)resourceId {
  NSArray *pathParams = @[ @"resourceId" ];
  NSString *pathURITemplate = @"surveys/{resourceId}/stop";
  GTLRSurveysQuery_SurveysStop *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.resourceId = resourceId;
  query.expectedObjectClass = [GTLRSurveys_StopResponse class];
  query.loggingName = @"surveys.surveys.stop";
  return query;
}

@end

@implementation GTLRSurveysQuery_SurveysUpdate

@dynamic surveyUrlId;

+ (instancetype)queryWithObject:(GTLRSurveys_Survey *)object
                    surveyUrlId:(NSString *)surveyUrlId {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"surveyUrlId" ];
  NSString *pathURITemplate = @"surveys/{surveyUrlId}";
  GTLRSurveysQuery_SurveysUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.surveyUrlId = surveyUrlId;
  query.expectedObjectClass = [GTLRSurveys_Survey class];
  query.loggingName = @"surveys.surveys.update";
  return query;
}

@end
