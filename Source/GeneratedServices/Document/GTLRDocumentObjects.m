// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Document AI API (documentai/v1beta2)
// Description:
//   Service to parse structured information from unstructured or
//   semi-structured documents using state-of-the-art Google AI such as natural
//   language, computer vision, translation, and AutoML.
// Documentation:
//   https://cloud.google.com/document-ai/docs/

#import "GTLRDocumentObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLayout.orientation
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLayout_Orientation_OrientationUnspecified = @"ORIENTATION_UNSPECIFIED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLayout_Orientation_PageDown = @"PAGE_DOWN";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLayout_Orientation_PageLeft = @"PAGE_LEFT";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLayout_Orientation_PageRight = @"PAGE_RIGHT";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLayout_Orientation_PageUp = @"PAGE_UP";

// GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTokenDetectedBreak.type
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTokenDetectedBreak_Type_Hyphen = @"HYPHEN";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTokenDetectedBreak_Type_Space = @"SPACE";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTokenDetectedBreak_Type_TypeUnspecified = @"TYPE_UNSPECIFIED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTokenDetectedBreak_Type_WideSpace = @"WIDE_SPACE";

// GTLRDocument_GoogleCloudDocumentaiV1beta1OperationMetadata.state
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1OperationMetadata_State_Accepted = @"ACCEPTED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1OperationMetadata_State_Cancelled = @"CANCELLED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1OperationMetadata_State_Failed = @"FAILED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1OperationMetadata_State_Running = @"RUNNING";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1OperationMetadata_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1OperationMetadata_State_Succeeded = @"SUCCEEDED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta1OperationMetadata_State_Waiting = @"WAITING";

// GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLayout.orientation
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLayout_Orientation_OrientationUnspecified = @"ORIENTATION_UNSPECIFIED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLayout_Orientation_PageDown = @"PAGE_DOWN";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLayout_Orientation_PageLeft = @"PAGE_LEFT";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLayout_Orientation_PageRight = @"PAGE_RIGHT";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLayout_Orientation_PageUp = @"PAGE_UP";

// GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTokenDetectedBreak.type
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTokenDetectedBreak_Type_Hyphen = @"HYPHEN";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTokenDetectedBreak_Type_Space = @"SPACE";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTokenDetectedBreak_Type_TypeUnspecified = @"TYPE_UNSPECIFIED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTokenDetectedBreak_Type_WideSpace = @"WIDE_SPACE";

// GTLRDocument_GoogleCloudDocumentaiV1beta2OperationMetadata.state
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2OperationMetadata_State_Accepted = @"ACCEPTED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2OperationMetadata_State_Cancelled = @"CANCELLED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2OperationMetadata_State_Failed = @"FAILED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2OperationMetadata_State_Running = @"RUNNING";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2OperationMetadata_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2OperationMetadata_State_Succeeded = @"SUCCEEDED";
NSString * const kGTLRDocument_GoogleCloudDocumentaiV1beta2OperationMetadata_State_Waiting = @"WAITING";

// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1BatchProcessDocumentsResponse
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1BatchProcessDocumentsResponse
@dynamic responses;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"responses" : [GTLRDocument_GoogleCloudDocumentaiV1beta1ProcessDocumentResponse class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1BoundingPoly
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1BoundingPoly
@dynamic normalizedVertices, vertices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"normalizedVertices" : [GTLRDocument_GoogleCloudDocumentaiV1beta1NormalizedVertex class],
    @"vertices" : [GTLRDocument_GoogleCloudDocumentaiV1beta1Vertex class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1Document
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1Document
@dynamic content, entities, entityRelations, error, mimeType, pages, shardInfo,
         text, textStyles, translations, uri;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entities" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentEntity class],
    @"entityRelations" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentEntityRelation class],
    @"pages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPage class],
    @"textStyles" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentStyle class],
    @"translations" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentTranslation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentEntity
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentEntity
@dynamic confidence, mentionId, mentionText, textAnchor, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentEntityRelation
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentEntityRelation
@dynamic objectId, relation, subjectId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPage
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPage
@dynamic blocks, detectedLanguages, dimension, formFields, layout, lines,
         pageNumber, paragraphs, tables, tokens, visualElements;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"blocks" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageBlock class],
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage class],
    @"formFields" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageFormField class],
    @"lines" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLine class],
    @"paragraphs" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageParagraph class],
    @"tables" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTable class],
    @"tokens" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageToken class],
    @"visualElements" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageVisualElement class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageBlock
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageBlock
@dynamic detectedLanguages, layout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage
@dynamic confidence, languageCode;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDimension
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDimension
@dynamic height, unit, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageFormField
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageFormField
@dynamic fieldName, fieldValue, nameDetectedLanguages, valueDetectedLanguages;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"nameDetectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage class],
    @"valueDetectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLayout
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLayout
@dynamic boundingPoly, confidence, orientation, textAnchor;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLine
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageLine
@dynamic detectedLanguages, layout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageParagraph
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageParagraph
@dynamic detectedLanguages, layout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTable
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTable
@dynamic bodyRows, detectedLanguages, headerRows, layout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bodyRows" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTableTableRow class],
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage class],
    @"headerRows" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTableTableRow class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTableTableCell
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTableTableCell
@dynamic colSpan, detectedLanguages, layout, rowSpan;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTableTableRow
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTableTableRow
@dynamic cells;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"cells" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTableTableCell class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageToken
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageToken
@dynamic detectedBreak, detectedLanguages, layout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTokenDetectedBreak
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageTokenDetectedBreak
@dynamic type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageVisualElement
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageVisualElement
@dynamic detectedLanguages, layout, type;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentShardInfo
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentShardInfo
@dynamic shardCount, shardIndex, textOffset;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentStyle
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentStyle
@dynamic backgroundColor, color, fontSize, fontWeight, textAnchor,
         textDecoration, textStyle;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentStyleFontSize
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentStyleFontSize
@dynamic size, unit;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentTextAnchor
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentTextAnchor
@dynamic textSegments;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"textSegments" : [GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentTextAnchorTextSegment class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentTextAnchorTextSegment
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentTextAnchorTextSegment
@dynamic endIndex, startIndex;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentTranslation
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1DocumentTranslation
@dynamic languageCode, textAnchor, translatedText;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1GcsDestination
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1GcsDestination
@dynamic uri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1GcsSource
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1GcsSource
@dynamic uri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1InputConfig
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1InputConfig
@dynamic gcsSource, mimeType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1NormalizedVertex
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1NormalizedVertex
@dynamic x, y;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1OperationMetadata
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1OperationMetadata
@dynamic createTime, state, stateMessage, updateTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1OutputConfig
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1OutputConfig
@dynamic gcsDestination, pagesPerShard;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1ProcessDocumentResponse
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1ProcessDocumentResponse
@dynamic inputConfig, outputConfig;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta1Vertex
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta1Vertex
@dynamic x, y;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2AutoMlParams
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2AutoMlParams
@dynamic model;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2BatchProcessDocumentsRequest
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2BatchProcessDocumentsRequest
@dynamic requests;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"requests" : [GTLRDocument_GoogleCloudDocumentaiV1beta2ProcessDocumentRequest class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2BatchProcessDocumentsResponse
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2BatchProcessDocumentsResponse
@dynamic responses;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"responses" : [GTLRDocument_GoogleCloudDocumentaiV1beta2ProcessDocumentResponse class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2BoundingPoly
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2BoundingPoly
@dynamic normalizedVertices, vertices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"normalizedVertices" : [GTLRDocument_GoogleCloudDocumentaiV1beta2NormalizedVertex class],
    @"vertices" : [GTLRDocument_GoogleCloudDocumentaiV1beta2Vertex class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2Document
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2Document
@dynamic content, entities, entityRelations, error, labels, mimeType, pages,
         shardInfo, text, textStyles, translations, uri;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"entities" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentEntity class],
    @"entityRelations" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentEntityRelation class],
    @"labels" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentLabel class],
    @"pages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPage class],
    @"textStyles" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentStyle class],
    @"translations" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentTranslation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentEntity
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentEntity
@dynamic confidence, mentionId, mentionText, textAnchor, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentEntityRelation
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentEntityRelation
@dynamic objectId, relation, subjectId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentLabel
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentLabel
@dynamic automlModel, confidence, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPage
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPage
@dynamic blocks, detectedLanguages, dimension, formFields, layout, lines,
         pageNumber, paragraphs, tables, tokens, visualElements;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"blocks" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageBlock class],
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage class],
    @"formFields" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageFormField class],
    @"lines" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLine class],
    @"paragraphs" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageParagraph class],
    @"tables" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTable class],
    @"tokens" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageToken class],
    @"visualElements" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageVisualElement class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageBlock
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageBlock
@dynamic detectedLanguages, layout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage
@dynamic confidence, languageCode;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDimension
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDimension
@dynamic height, unit, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageFormField
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageFormField
@dynamic fieldName, fieldValue, nameDetectedLanguages, valueDetectedLanguages,
         valueType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"nameDetectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage class],
    @"valueDetectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLayout
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLayout
@dynamic boundingPoly, confidence, orientation, textAnchor;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLine
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageLine
@dynamic detectedLanguages, layout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageParagraph
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageParagraph
@dynamic detectedLanguages, layout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTable
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTable
@dynamic bodyRows, detectedLanguages, headerRows, layout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bodyRows" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTableTableRow class],
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage class],
    @"headerRows" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTableTableRow class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTableTableCell
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTableTableCell
@dynamic colSpan, detectedLanguages, layout, rowSpan;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTableTableRow
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTableTableRow
@dynamic cells;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"cells" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTableTableCell class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageToken
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageToken
@dynamic detectedBreak, detectedLanguages, layout;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTokenDetectedBreak
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageTokenDetectedBreak
@dynamic type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageVisualElement
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageVisualElement
@dynamic detectedLanguages, layout, type;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detectedLanguages" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentPageDetectedLanguage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentShardInfo
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentShardInfo
@dynamic shardCount, shardIndex, textOffset;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentStyle
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentStyle
@dynamic backgroundColor, color, fontSize, fontWeight, textAnchor,
         textDecoration, textStyle;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentStyleFontSize
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentStyleFontSize
@dynamic size, unit;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentTextAnchor
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentTextAnchor
@dynamic textSegments;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"textSegments" : [GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentTextAnchorTextSegment class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentTextAnchorTextSegment
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentTextAnchorTextSegment
@dynamic endIndex, startIndex;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentTranslation
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2DocumentTranslation
@dynamic languageCode, textAnchor, translatedText;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2EntityExtractionParams
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2EntityExtractionParams
@dynamic enabled, modelVersion;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2FormExtractionParams
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2FormExtractionParams
@dynamic enabled, keyValuePairHints, modelVersion;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"keyValuePairHints" : [GTLRDocument_GoogleCloudDocumentaiV1beta2KeyValuePairHint class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2GcsDestination
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2GcsDestination
@dynamic uri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2GcsSource
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2GcsSource
@dynamic uri;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2InputConfig
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2InputConfig
@dynamic contents, gcsSource, mimeType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2KeyValuePairHint
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2KeyValuePairHint
@dynamic key, valueTypes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"valueTypes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2NormalizedVertex
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2NormalizedVertex
@dynamic x, y;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2OcrParams
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2OcrParams
@dynamic languageHints;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"languageHints" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2OperationMetadata
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2OperationMetadata
@dynamic createTime, state, stateMessage, updateTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2OutputConfig
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2OutputConfig
@dynamic gcsDestination, pagesPerShard;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2ProcessDocumentRequest
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2ProcessDocumentRequest
@dynamic automlParams, documentType, entityExtractionParams,
         formExtractionParams, inputConfig, ocrParams, outputConfig, parent,
         tableExtractionParams;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2ProcessDocumentResponse
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2ProcessDocumentResponse
@dynamic inputConfig, outputConfig;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2TableBoundHint
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2TableBoundHint
@dynamic boundingBox, pageNumber;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2TableExtractionParams
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2TableExtractionParams
@dynamic enabled, headerHints, modelVersion, tableBoundHints;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"headerHints" : [NSString class],
    @"tableBoundHints" : [GTLRDocument_GoogleCloudDocumentaiV1beta2TableBoundHint class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleCloudDocumentaiV1beta2Vertex
//

@implementation GTLRDocument_GoogleCloudDocumentaiV1beta2Vertex
@dynamic x, y;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleLongrunningOperation
//

@implementation GTLRDocument_GoogleLongrunningOperation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleLongrunningOperation_Metadata
//

@implementation GTLRDocument_GoogleLongrunningOperation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleLongrunningOperation_Response
//

@implementation GTLRDocument_GoogleLongrunningOperation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleRpcStatus
//

@implementation GTLRDocument_GoogleRpcStatus
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRDocument_GoogleRpcStatus_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleRpcStatus_Details_Item
//

@implementation GTLRDocument_GoogleRpcStatus_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRDocument_GoogleTypeColor
//

@implementation GTLRDocument_GoogleTypeColor
@dynamic alpha, blue, green, red;
@end
