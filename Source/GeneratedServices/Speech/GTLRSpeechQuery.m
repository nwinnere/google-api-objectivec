// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Speech-to-Text API (speech/v1)
// Description:
//   Converts audio to text by applying powerful neural network models.
// Documentation:
//   https://cloud.google.com/speech-to-text/docs/quickstart-protocol

#import "GTLRSpeechQuery.h"

#import "GTLRSpeechObjects.h"

@implementation GTLRSpeechQuery

@dynamic fields;

@end

@implementation GTLRSpeechQuery_OperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/operations/{+name}";
  GTLRSpeechQuery_OperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRSpeech_Operation class];
  query.loggingName = @"speech.operations.get";
  return query;
}

@end

@implementation GTLRSpeechQuery_OperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/operations";
  GTLRSpeechQuery_OperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRSpeech_ListOperationsResponse class];
  query.loggingName = @"speech.operations.list";
  return query;
}

@end

@implementation GTLRSpeechQuery_SpeechLongrunningrecognize

+ (instancetype)queryWithObject:(GTLRSpeech_LongRunningRecognizeRequest *)object {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSString *pathURITemplate = @"v1/speech:longrunningrecognize";
  GTLRSpeechQuery_SpeechLongrunningrecognize *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRSpeech_Operation class];
  query.loggingName = @"speech.speech.longrunningrecognize";
  return query;
}

@end

@implementation GTLRSpeechQuery_SpeechRecognize

+ (instancetype)queryWithObject:(GTLRSpeech_RecognizeRequest *)object {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSString *pathURITemplate = @"v1/speech:recognize";
  GTLRSpeechQuery_SpeechRecognize *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRSpeech_RecognizeResponse class];
  query.loggingName = @"speech.speech.recognize";
  return query;
}

@end
