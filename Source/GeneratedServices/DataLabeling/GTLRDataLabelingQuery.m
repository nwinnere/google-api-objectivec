// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Data Labeling API (datalabeling/v1beta1)
// Description:
//   Public API for Google Cloud AI Data Labeling Service.
// Documentation:
//   https://cloud.google.com/data-labeling/docs/

#import "GTLRDataLabelingQuery.h"

#import "GTLRDataLabelingObjects.h"

@implementation GTLRDataLabelingQuery

@dynamic fields;

@end

@implementation GTLRDataLabelingQuery_ProjectsAnnotationSpecSetsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1CreateAnnotationSpecSetRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/annotationSpecSets";
  GTLRDataLabelingQuery_ProjectsAnnotationSpecSetsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1AnnotationSpecSet class];
  query.loggingName = @"datalabeling.projects.annotationSpecSets.create";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsAnnotationSpecSetsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsAnnotationSpecSetsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.annotationSpecSets.delete";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsAnnotationSpecSetsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsAnnotationSpecSetsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1AnnotationSpecSet class];
  query.loggingName = @"datalabeling.projects.annotationSpecSets.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsAnnotationSpecSetsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/annotationSpecSets";
  GTLRDataLabelingQuery_ProjectsAnnotationSpecSetsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ListAnnotationSpecSetsResponse class];
  query.loggingName = @"datalabeling.projects.annotationSpecSets.list";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsDataItemsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsDataItemsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1DataItem class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.dataItems.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsDataItemsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/dataItems";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsDataItemsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ListDataItemsResponse class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.dataItems.list";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.delete";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsExamplesGet

@dynamic filter, name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsExamplesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1Example class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.examples.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsExamplesList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/examples";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsExamplesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ListExamplesResponse class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.examples.list";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.feedbackThreads.delete";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsFeedbackMessagesCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1FeedbackMessage *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/feedbackMessages";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsFeedbackMessagesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleLongrunningOperation class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.feedbackThreads.feedbackMessages.create";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsFeedbackMessagesDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsFeedbackMessagesDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.feedbackThreads.feedbackMessages.delete";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsFeedbackMessagesGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsFeedbackMessagesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1FeedbackMessage class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.feedbackThreads.feedbackMessages.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsFeedbackMessagesList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/feedbackMessages";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsFeedbackMessagesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ListFeedbackMessagesResponse class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.feedbackThreads.feedbackMessages.list";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1FeedbackThread class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.feedbackThreads.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/feedbackThreads";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsFeedbackThreadsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ListFeedbackThreadsResponse class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.feedbackThreads.list";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1AnnotatedDataset class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/annotatedDatasets";
  GTLRDataLabelingQuery_ProjectsDatasetsAnnotatedDatasetsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ListAnnotatedDatasetsResponse class];
  query.loggingName = @"datalabeling.projects.datasets.annotatedDatasets.list";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1CreateDatasetRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/datasets";
  GTLRDataLabelingQuery_ProjectsDatasetsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1Dataset class];
  query.loggingName = @"datalabeling.projects.datasets.create";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsDataItemsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsDataItemsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1DataItem class];
  query.loggingName = @"datalabeling.projects.datasets.dataItems.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsDataItemsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/dataItems";
  GTLRDataLabelingQuery_ProjectsDatasetsDataItemsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ListDataItemsResponse class];
  query.loggingName = @"datalabeling.projects.datasets.dataItems.list";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.datasets.delete";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsEvaluationsExampleComparisonsSearch

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1SearchExampleComparisonsRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/exampleComparisons:search";
  GTLRDataLabelingQuery_ProjectsDatasetsEvaluationsExampleComparisonsSearch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1SearchExampleComparisonsResponse class];
  query.loggingName = @"datalabeling.projects.datasets.evaluations.exampleComparisons.search";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsEvaluationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsEvaluationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1Evaluation class];
  query.loggingName = @"datalabeling.projects.datasets.evaluations.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsExportData

@dynamic name;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ExportDataRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}:exportData";
  GTLRDataLabelingQuery_ProjectsDatasetsExportData *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleLongrunningOperation class];
  query.loggingName = @"datalabeling.projects.datasets.exportData";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsDatasetsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1Dataset class];
  query.loggingName = @"datalabeling.projects.datasets.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsImageLabel

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1LabelImageRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/image:label";
  GTLRDataLabelingQuery_ProjectsDatasetsImageLabel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleLongrunningOperation class];
  query.loggingName = @"datalabeling.projects.datasets.image.label";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsImportData

@dynamic name;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ImportDataRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}:importData";
  GTLRDataLabelingQuery_ProjectsDatasetsImportData *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleLongrunningOperation class];
  query.loggingName = @"datalabeling.projects.datasets.importData";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/datasets";
  GTLRDataLabelingQuery_ProjectsDatasetsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ListDatasetsResponse class];
  query.loggingName = @"datalabeling.projects.datasets.list";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsTextLabel

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1LabelTextRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/text:label";
  GTLRDataLabelingQuery_ProjectsDatasetsTextLabel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleLongrunningOperation class];
  query.loggingName = @"datalabeling.projects.datasets.text.label";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsDatasetsVideoLabel

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1LabelVideoRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/video:label";
  GTLRDataLabelingQuery_ProjectsDatasetsVideoLabel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleLongrunningOperation class];
  query.loggingName = @"datalabeling.projects.datasets.video.label";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsEvaluationJobsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1CreateEvaluationJobRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/evaluationJobs";
  GTLRDataLabelingQuery_ProjectsEvaluationJobsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1EvaluationJob class];
  query.loggingName = @"datalabeling.projects.evaluationJobs.create";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsEvaluationJobsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsEvaluationJobsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.evaluationJobs.delete";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsEvaluationJobsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsEvaluationJobsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1EvaluationJob class];
  query.loggingName = @"datalabeling.projects.evaluationJobs.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsEvaluationJobsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/evaluationJobs";
  GTLRDataLabelingQuery_ProjectsEvaluationJobsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ListEvaluationJobsResponse class];
  query.loggingName = @"datalabeling.projects.evaluationJobs.list";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsEvaluationJobsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1EvaluationJob *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsEvaluationJobsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1EvaluationJob class];
  query.loggingName = @"datalabeling.projects.evaluationJobs.patch";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsEvaluationJobsPause

@dynamic name;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1PauseEvaluationJobRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}:pause";
  GTLRDataLabelingQuery_ProjectsEvaluationJobsPause *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.evaluationJobs.pause";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsEvaluationJobsResume

@dynamic name;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ResumeEvaluationJobRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}:resume";
  GTLRDataLabelingQuery_ProjectsEvaluationJobsResume *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.evaluationJobs.resume";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsEvaluationsSearch

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/evaluations:search";
  GTLRDataLabelingQuery_ProjectsEvaluationsSearch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1SearchEvaluationsResponse class];
  query.loggingName = @"datalabeling.projects.evaluations.search";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsInstructionsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRDataLabeling_GoogleCloudDatalabelingV1beta1CreateInstructionRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/instructions";
  GTLRDataLabelingQuery_ProjectsInstructionsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleLongrunningOperation class];
  query.loggingName = @"datalabeling.projects.instructions.create";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsInstructionsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsInstructionsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.instructions.delete";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsInstructionsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsInstructionsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1Instruction class];
  query.loggingName = @"datalabeling.projects.instructions.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsInstructionsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta1/{+parent}/instructions";
  GTLRDataLabelingQuery_ProjectsInstructionsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleCloudDatalabelingV1beta1ListInstructionsResponse class];
  query.loggingName = @"datalabeling.projects.instructions.list";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsOperationsCancel

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}:cancel";
  GTLRDataLabelingQuery_ProjectsOperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.operations.cancel";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsOperationsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsOperationsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleProtobufEmpty class];
  query.loggingName = @"datalabeling.projects.operations.delete";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}";
  GTLRDataLabelingQuery_ProjectsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleLongrunningOperation class];
  query.loggingName = @"datalabeling.projects.operations.get";
  return query;
}

@end

@implementation GTLRDataLabelingQuery_ProjectsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta1/{+name}/operations";
  GTLRDataLabelingQuery_ProjectsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRDataLabeling_GoogleLongrunningListOperationsResponse class];
  query.loggingName = @"datalabeling.projects.operations.list";
  return query;
}

@end
