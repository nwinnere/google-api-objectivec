// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Translation API (translate/v3)
// Description:
//   Integrates text translation into your website or application.
// Documentation:
//   https://cloud.google.com/translate/docs/quickstarts

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRTranslate_BatchTranslateTextRequest_Glossaries;
@class GTLRTranslate_BatchTranslateTextRequest_Labels;
@class GTLRTranslate_BatchTranslateTextRequest_Models;
@class GTLRTranslate_DetectedLanguage;
@class GTLRTranslate_DetectLanguageRequest_Labels;
@class GTLRTranslate_GcsDestination;
@class GTLRTranslate_GcsSource;
@class GTLRTranslate_Glossary;
@class GTLRTranslate_GlossaryInputConfig;
@class GTLRTranslate_InputConfig;
@class GTLRTranslate_LanguageCodePair;
@class GTLRTranslate_LanguageCodesSet;
@class GTLRTranslate_Location;
@class GTLRTranslate_Location_Labels;
@class GTLRTranslate_Location_Metadata;
@class GTLRTranslate_Operation;
@class GTLRTranslate_Operation_Metadata;
@class GTLRTranslate_Operation_Response;
@class GTLRTranslate_OutputConfig;
@class GTLRTranslate_Status;
@class GTLRTranslate_Status_Details_Item;
@class GTLRTranslate_SupportedLanguage;
@class GTLRTranslate_TextGlossaryConfig;
@class GTLRTranslate_TextRequest_Labels;
@class GTLRTranslate_Translation;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The batch translation request.
 */
@interface GTLRTranslate_BatchTranslateTextRequest : GTLRObject

/**
 *  Optional. Glossaries to be applied for translation. It's keyed by target
 *  language code.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_BatchTranslateTextRequest_Glossaries *glossaries;

/**
 *  Required. Input configurations. The total number of files matched should be
 *  <= 100. The total content size should be <= 100M Unicode codepoints. The
 *  files must use UTF-8 encoding.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTranslate_InputConfig *> *inputConfigs;

/**
 *  Optional. The labels with user-defined metadata for the request. Label keys
 *  and values can be no longer than 63 characters (Unicode codepoints), can
 *  only contain lowercase letters, numeric characters, underscores and dashes.
 *  International characters are allowed. Label values are optional. Label keys
 *  must start with a letter. See
 *  https://cloud.google.com/translate/docs/advanced/labels for more
 *  information.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_BatchTranslateTextRequest_Labels *labels;

/**
 *  Optional. The models to use for translation. Map's key is target language
 *  code. Map's value is model name. Value can be a built-in general model, or
 *  an AutoML Translation model. The value format depends on model type: -
 *  AutoML Translation models:
 *  `projects/{project-number-or-id}/locations/{location-id}/models/{model-id}`
 *  - General (built-in) models:
 *  `projects/{project-number-or-id}/locations/{location-id}/models/general/nmt`,
 *  `projects/{project-number-or-id}/locations/{location-id}/models/general/base`
 *  If the map is empty or a specific model is not requested for a language
 *  pair, then default google model (nmt) is used.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_BatchTranslateTextRequest_Models *models;

/**
 *  Required. Output configuration. If 2 input configs match to the same file
 *  (that is, same input path), we don't generate output for duplicate inputs.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_OutputConfig *outputConfig;

/** Required. Source language code. */
@property(nonatomic, copy, nullable) NSString *sourceLanguageCode;

/** Required. Specify up to 10 language codes here. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *targetLanguageCodes;

@end


/**
 *  Optional. Glossaries to be applied for translation. It's keyed by target
 *  language code.
 *
 *  @note This class is documented as having more properties of
 *        GTLRTranslate_TextGlossaryConfig. Use @c -additionalJSONKeys and @c
 *        -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRTranslate_BatchTranslateTextRequest_Glossaries : GTLRObject
@end


/**
 *  Optional. The labels with user-defined metadata for the request. Label keys
 *  and values can be no longer than 63 characters (Unicode codepoints), can
 *  only contain lowercase letters, numeric characters, underscores and dashes.
 *  International characters are allowed. Label values are optional. Label keys
 *  must start with a letter. See
 *  https://cloud.google.com/translate/docs/advanced/labels for more
 *  information.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRTranslate_BatchTranslateTextRequest_Labels : GTLRObject
@end


/**
 *  Optional. The models to use for translation. Map's key is target language
 *  code. Map's value is model name. Value can be a built-in general model, or
 *  an AutoML Translation model. The value format depends on model type: -
 *  AutoML Translation models:
 *  `projects/{project-number-or-id}/locations/{location-id}/models/{model-id}`
 *  - General (built-in) models:
 *  `projects/{project-number-or-id}/locations/{location-id}/models/general/nmt`,
 *  `projects/{project-number-or-id}/locations/{location-id}/models/general/base`
 *  If the map is empty or a specific model is not requested for a language
 *  pair, then default google model (nmt) is used.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRTranslate_BatchTranslateTextRequest_Models : GTLRObject
@end


/**
 *  The request message for Operations.CancelOperation.
 */
@interface GTLRTranslate_CancelOperationRequest : GTLRObject
@end


/**
 *  The response message for language detection.
 */
@interface GTLRTranslate_DetectedLanguage : GTLRObject

/**
 *  The confidence of the detection result for this language.
 *
 *  Uses NSNumber of floatValue.
 */
@property(nonatomic, strong, nullable) NSNumber *confidence;

/**
 *  The BCP-47 language code of source content in the request, detected
 *  automatically.
 */
@property(nonatomic, copy, nullable) NSString *languageCode;

@end


/**
 *  The request message for language detection.
 */
@interface GTLRTranslate_DetectLanguageRequest : GTLRObject

/** The content of the input stored as a string. */
@property(nonatomic, copy, nullable) NSString *content;

/**
 *  Optional. The labels with user-defined metadata for the request. Label keys
 *  and values can be no longer than 63 characters (Unicode codepoints), can
 *  only contain lowercase letters, numeric characters, underscores and dashes.
 *  International characters are allowed. Label values are optional. Label keys
 *  must start with a letter. See
 *  https://cloud.google.com/translate/docs/advanced/labels for more
 *  information.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_DetectLanguageRequest_Labels *labels;

/**
 *  Optional. The format of the source text, for example, "text/html",
 *  "text/plain". If left blank, the MIME type defaults to "text/html".
 */
@property(nonatomic, copy, nullable) NSString *mimeType;

/**
 *  Optional. The language detection model to be used. Format:
 *  `projects/{project-number-or-id}/locations/{location-id}/models/language-detection/{model-id}`
 *  Only one language detection model is currently supported:
 *  `projects/{project-number-or-id}/locations/{location-id}/models/language-detection/default`.
 *  If not specified, the default model is used.
 */
@property(nonatomic, copy, nullable) NSString *model;

@end


/**
 *  Optional. The labels with user-defined metadata for the request. Label keys
 *  and values can be no longer than 63 characters (Unicode codepoints), can
 *  only contain lowercase letters, numeric characters, underscores and dashes.
 *  International characters are allowed. Label values are optional. Label keys
 *  must start with a letter. See
 *  https://cloud.google.com/translate/docs/advanced/labels for more
 *  information.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRTranslate_DetectLanguageRequest_Labels : GTLRObject
@end


/**
 *  The response message for language detection.
 */
@interface GTLRTranslate_DetectLanguageResponse : GTLRObject

/**
 *  The most probable language detected by the Translation API. For each
 *  request, the Translation API will always return only one result.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTranslate_DetectedLanguage *> *languages;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance: service Foo { rpc
 *  Bar(google.protobuf.Empty) returns (google.protobuf.Empty); } The JSON
 *  representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRTranslate_Empty : GTLRObject
@end


/**
 *  The Google Cloud Storage location for the output content.
 */
@interface GTLRTranslate_GcsDestination : GTLRObject

/**
 *  Required. The bucket used in 'output_uri_prefix' must exist and there must
 *  be no files under 'output_uri_prefix'. 'output_uri_prefix' must end with "/"
 *  and start with "gs://". One 'output_uri_prefix' can only be used by one
 *  batch translation job at a time. Otherwise an INVALID_ARGUMENT (400) error
 *  is returned.
 */
@property(nonatomic, copy, nullable) NSString *outputUriPrefix;

@end


/**
 *  The Google Cloud Storage location for the input content.
 */
@interface GTLRTranslate_GcsSource : GTLRObject

/** Required. Source data URI. For example, `gs://my_bucket/my_object`. */
@property(nonatomic, copy, nullable) NSString *inputUri;

@end


/**
 *  Represents a glossary built from user provided data.
 */
@interface GTLRTranslate_Glossary : GTLRObject

/** Output only. When the glossary creation was finished. */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/**
 *  Output only. The number of entries defined in the glossary.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *entryCount;

/**
 *  Required. Provides examples to build the glossary from. Total glossary must
 *  not exceed 10M Unicode codepoints.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_GlossaryInputConfig *inputConfig;

/** Used with equivalent term set glossaries. */
@property(nonatomic, strong, nullable) GTLRTranslate_LanguageCodesSet *languageCodesSet;

/** Used with unidirectional glossaries. */
@property(nonatomic, strong, nullable) GTLRTranslate_LanguageCodePair *languagePair;

/**
 *  Required. The resource name of the glossary. Glossary names have the form
 *  `projects/{project-number-or-id}/locations/{location-id}/glossaries/{glossary-id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Output only. When CreateGlossary was called. */
@property(nonatomic, strong, nullable) GTLRDateTime *submitTime;

@end


/**
 *  Input configuration for glossaries.
 */
@interface GTLRTranslate_GlossaryInputConfig : GTLRObject

/**
 *  Required. Google Cloud Storage location of glossary data. File format is
 *  determined based on the filename extension. API returns
 *  [google.rpc.Code.INVALID_ARGUMENT] for unsupported URI-s and file formats.
 *  Wildcards are not allowed. This must be a single file in one of the
 *  following formats: For unidirectional glossaries: - TSV/CSV (`.tsv`/`.csv`):
 *  2 column file, tab- or comma-separated. The first column is source text. The
 *  second column is target text. The file must not contain headers. That is,
 *  the first row is data, not column names. - TMX (`.tmx`): TMX file with
 *  parallel data defining source/target term pairs. For equivalent term sets
 *  glossaries: - CSV (`.csv`): Multi-column CSV file defining equivalent
 *  glossary terms in multiple languages. See documentation for more information
 *  - [glossaries](https://cloud.google.com/translate/docs/advanced/glossary).
 */
@property(nonatomic, strong, nullable) GTLRTranslate_GcsSource *gcsSource;

@end


/**
 *  Input configuration for BatchTranslateText request.
 */
@interface GTLRTranslate_InputConfig : GTLRObject

/**
 *  Required. Google Cloud Storage location for the source input. This can be a
 *  single file (for example, `gs://translation-test/input.tsv`) or a wildcard
 *  (for example, `gs://translation-test/ *`). If a file extension is `.tsv`, it
 *  can contain either one or two columns. The first column (optional) is the id
 *  of the text request. If the first column is missing, we use the row number
 *  (0-based) from the input file as the ID in the output file. The second
 *  column is the actual text to be translated. We recommend each row be <= 10K
 *  Unicode codepoints, otherwise an error might be returned. Note that the
 *  input tsv must be RFC 4180 compliant. You could use
 *  https://github.com/Clever/csvlint to check potential formatting errors in
 *  your tsv file. csvlint --delimiter='\\t' your_input_file.tsv The other
 *  supported file extensions are `.txt` or `.html`, which is treated as a
 *  single large chunk of text.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_GcsSource *gcsSource;

/**
 *  Optional. Can be "text/plain" or "text/html". For `.tsv`, "text/html" is
 *  used if mime_type is missing. For `.html`, this field must be "text/html" or
 *  empty. For `.txt`, this field must be "text/plain" or empty.
 */
@property(nonatomic, copy, nullable) NSString *mimeType;

@end


/**
 *  Used with unidirectional glossaries.
 */
@interface GTLRTranslate_LanguageCodePair : GTLRObject

/**
 *  Required. The BCP-47 language code of the input text, for example, "en-US".
 *  Expected to be an exact match for GlossaryTerm.language_code.
 */
@property(nonatomic, copy, nullable) NSString *sourceLanguageCode;

/**
 *  Required. The BCP-47 language code for translation output, for example,
 *  "zh-CN". Expected to be an exact match for GlossaryTerm.language_code.
 */
@property(nonatomic, copy, nullable) NSString *targetLanguageCode;

@end


/**
 *  Used with equivalent term set glossaries.
 */
@interface GTLRTranslate_LanguageCodesSet : GTLRObject

/**
 *  The BCP-47 language code(s) for terms defined in the glossary. All entries
 *  are unique. The list contains at least two entries. Expected to be an exact
 *  match for GlossaryTerm.language_code.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *languageCodes;

@end


/**
 *  Response message for ListGlossaries.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "glossaries" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRTranslate_ListGlossariesResponse : GTLRCollectionObject

/**
 *  The list of glossaries for a project.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTranslate_Glossary *> *glossaries;

/**
 *  A token to retrieve a page of results. Pass this value in the
 *  [ListGlossariesRequest.page_token] field in the subsequent call to
 *  `ListGlossaries` method to retrieve the next page of results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The response message for Locations.ListLocations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "locations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRTranslate_ListLocationsResponse : GTLRCollectionObject

/**
 *  A list of locations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTranslate_Location *> *locations;

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The response message for Operations.ListOperations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRTranslate_ListOperationsResponse : GTLRCollectionObject

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of operations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTranslate_Operation *> *operations;

@end


/**
 *  A resource that represents Google Cloud Platform location.
 */
@interface GTLRTranslate_Location : GTLRObject

/**
 *  The friendly name for this location, typically a nearby city name. For
 *  example, "Tokyo".
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 */
@property(nonatomic, strong, nullable) GTLRTranslate_Location_Labels *labels;

/** The canonical id for this location. For example: `"us-east1"`. */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_Location_Metadata *metadata;

/**
 *  Resource name for the location, which may vary between implementations. For
 *  example: `"projects/example-project/locations/us-east1"`
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRTranslate_Location_Labels : GTLRObject
@end


/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRTranslate_Location_Metadata : GTLRObject
@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRTranslate_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress. If
 *  `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRTranslate_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time. Some
 *  services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the `name`
 *  should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx` is the
 *  original method name. For example, if the original method name is
 *  `TakeSnapshot()`, the inferred response type is `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time. Some
 *  services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRTranslate_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx` is the
 *  original method name. For example, if the original method name is
 *  `TakeSnapshot()`, the inferred response type is `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRTranslate_Operation_Response : GTLRObject
@end


/**
 *  Output configuration for BatchTranslateText request.
 */
@interface GTLRTranslate_OutputConfig : GTLRObject

/**
 *  Google Cloud Storage destination for output content. For every single input
 *  file (for example, gs://a/b/c.[extension]), we generate at most 2 * n output
 *  files. (n is the # of target_language_codes in the
 *  BatchTranslateTextRequest). Output files (tsv) generated are compliant with
 *  RFC 4180 except that record delimiters are '\\n' instead of '\\r\\n'. We
 *  don't provide any way to change record delimiters. While the input files are
 *  being processed, we write/update an index file 'index.csv' under
 *  'output_uri_prefix' (for example, gs://translation-test/index.csv) The index
 *  file is generated/updated as new files are being translated. The format is:
 *  input_file,target_language_code,translations_file,errors_file,
 *  glossary_translations_file,glossary_errors_file input_file is one file we
 *  matched using gcs_source.input_uri. target_language_code is provided in the
 *  request. translations_file contains the translations. (details provided
 *  below) errors_file contains the errors during processing of the file.
 *  (details below). Both translations_file and errors_file could be empty
 *  strings if we have no content to output. glossary_translations_file and
 *  glossary_errors_file are always empty strings if the input_file is tsv. They
 *  could also be empty if we have no content to output. Once a row is present
 *  in index.csv, the input/output matching never changes. Callers should also
 *  expect all the content in input_file are processed and ready to be consumed
 *  (that is, no partial output file is written). Since index.csv will be
 *  keeping updated during the process, please make sure there is no custom
 *  retention policy applied on the output bucket that may avoid file updating.
 *  (https://cloud.google.com/storage/docs/bucket-lock?hl=en#retention-policy)
 *  The format of translations_file (for target language code 'trg') is:
 *  gs://translation_test/a_b_c_'trg'_translations.[extension] If the input file
 *  extension is tsv, the output has the following columns: Column 1: ID of the
 *  request provided in the input, if it's not provided in the input, then the
 *  input row number is used (0-based). Column 2: source sentence. Column 3:
 *  translation without applying a glossary. Empty string if there is an error.
 *  Column 4 (only present if a glossary is provided in the request):
 *  translation after applying the glossary. Empty string if there is an error
 *  applying the glossary. Could be same string as column 3 if there is no
 *  glossary applied. If input file extension is a txt or html, the translation
 *  is directly written to the output file. If glossary is requested, a separate
 *  glossary_translations_file has format of
 *  gs://translation_test/a_b_c_'trg'_glossary_translations.[extension] The
 *  format of errors file (for target language code 'trg') is:
 *  gs://translation_test/a_b_c_'trg'_errors.[extension] If the input file
 *  extension is tsv, errors_file contains the following: Column 1: ID of the
 *  request provided in the input, if it's not provided in the input, then the
 *  input row number is used (0-based). Column 2: source sentence. Column 3:
 *  Error detail for the translation. Could be empty. Column 4 (only present if
 *  a glossary is provided in the request): Error when applying the glossary. If
 *  the input file extension is txt or html, glossary_error_file will be
 *  generated that contains error details. glossary_error_file has format of
 *  gs://translation_test/a_b_c_'trg'_glossary_errors.[extension]
 */
@property(nonatomic, strong, nullable) GTLRTranslate_GcsDestination *gcsDestination;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details. You can
 *  find out more about this error model and how to work with it in the [API
 *  Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRTranslate_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTranslate_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRTranslate_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRTranslate_Status_Details_Item : GTLRObject
@end


/**
 *  A single supported language response corresponds to information related to
 *  one supported language.
 */
@interface GTLRTranslate_SupportedLanguage : GTLRObject

/**
 *  Human readable name of the language localized in the display language
 *  specified in the request.
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Supported language code, generally consisting of its ISO 639-1 identifier,
 *  for example, 'en', 'ja'. In certain cases, BCP-47 codes including language
 *  and region identifiers are returned (for example, 'zh-TW' and 'zh-CN')
 */
@property(nonatomic, copy, nullable) NSString *languageCode;

/**
 *  Can be used as source language.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *supportSource;

/**
 *  Can be used as target language.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *supportTarget;

@end


/**
 *  The response message for discovering supported languages.
 */
@interface GTLRTranslate_SupportedLanguages : GTLRObject

/**
 *  A list of supported language responses. This list contains an entry for each
 *  language the Translation API supports.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTranslate_SupportedLanguage *> *languages;

@end


/**
 *  Configures which glossary should be used for a specific target language, and
 *  defines options for applying that glossary.
 */
@interface GTLRTranslate_TextGlossaryConfig : GTLRObject

/**
 *  Required. The `glossary` to be applied for this translation. The format
 *  depends on glossary: - User provided custom glossary:
 *  `projects/{project-number-or-id}/locations/{location-id}/glossaries/{glossary-id}`
 */
@property(nonatomic, copy, nullable) NSString *glossary;

/**
 *  Optional. Indicates match is case-insensitive. Default value is false if
 *  missing.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *ignoreCase;

@end


/**
 *  The request message for synchronous translation.
 */
@interface GTLRTranslate_TextRequest : GTLRObject

/**
 *  Required. The content of the input in string format. We recommend the total
 *  content be less than 30k codepoints. The max length of this field is 1024.
 *  Use BatchTranslateText for larger text.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *contents;

/**
 *  Optional. Glossary to be applied. The glossary must be within the same
 *  region (have the same location-id) as the model, otherwise an
 *  INVALID_ARGUMENT (400) error is returned.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_TextGlossaryConfig *glossaryConfig;

/**
 *  Optional. The labels with user-defined metadata for the request. Label keys
 *  and values can be no longer than 63 characters (Unicode codepoints), can
 *  only contain lowercase letters, numeric characters, underscores and dashes.
 *  International characters are allowed. Label values are optional. Label keys
 *  must start with a letter. See
 *  https://cloud.google.com/translate/docs/advanced/labels for more
 *  information.
 */
@property(nonatomic, strong, nullable) GTLRTranslate_TextRequest_Labels *labels;

/**
 *  Optional. The format of the source text, for example, "text/html",
 *  "text/plain". If left blank, the MIME type defaults to "text/html".
 */
@property(nonatomic, copy, nullable) NSString *mimeType;

/**
 *  Optional. The `model` type requested for this translation. The format
 *  depends on model type: - AutoML Translation models:
 *  `projects/{project-number-or-id}/locations/{location-id}/models/{model-id}`
 *  - General (built-in) models:
 *  `projects/{project-number-or-id}/locations/{location-id}/models/general/nmt`,
 *  `projects/{project-number-or-id}/locations/{location-id}/models/general/base`
 *  For global (non-regionalized) requests, use `location-id` `global`. For
 *  example,
 *  `projects/{project-number-or-id}/locations/global/models/general/nmt`. If
 *  missing, the system decides which google base model to use.
 */
@property(nonatomic, copy, nullable) NSString *model;

/**
 *  Optional. The BCP-47 language code of the input text if known, for example,
 *  "en-US" or "sr-Latn". Supported language codes are listed in Language
 *  Support. If the source language isn't specified, the API attempts to
 *  identify the source language automatically and returns the source language
 *  within the response.
 */
@property(nonatomic, copy, nullable) NSString *sourceLanguageCode;

/**
 *  Required. The BCP-47 language code to use for translation of the input text,
 *  set to one of the language codes listed in Language Support.
 */
@property(nonatomic, copy, nullable) NSString *targetLanguageCode;

@end


/**
 *  Optional. The labels with user-defined metadata for the request. Label keys
 *  and values can be no longer than 63 characters (Unicode codepoints), can
 *  only contain lowercase letters, numeric characters, underscores and dashes.
 *  International characters are allowed. Label values are optional. Label keys
 *  must start with a letter. See
 *  https://cloud.google.com/translate/docs/advanced/labels for more
 *  information.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRTranslate_TextRequest_Labels : GTLRObject
@end


/**
 *  GTLRTranslate_TextResponse
 */
@interface GTLRTranslate_TextResponse : GTLRObject

/**
 *  Text translation responses if a glossary is provided in the request. This
 *  can be the same as `translations` if no terms apply. This field has the same
 *  length as `contents`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTranslate_Translation *> *glossaryTranslations;

/**
 *  Text translation responses with no glossary applied. This field has the same
 *  length as `contents`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTranslate_Translation *> *translations;

@end


/**
 *  A single translation response.
 */
@interface GTLRTranslate_Translation : GTLRObject

/**
 *  The BCP-47 language code of source text in the initial request, detected
 *  automatically, if no source language was passed within the initial request.
 *  If the source language was passed, auto-detection of the language does not
 *  occur and this field is empty.
 */
@property(nonatomic, copy, nullable) NSString *detectedLanguageCode;

/** The `glossary_config` used for this translation. */
@property(nonatomic, strong, nullable) GTLRTranslate_TextGlossaryConfig *glossaryConfig;

/**
 *  Only present when `model` is present in the request. `model` here is
 *  normalized to have project number. For example: If the `model` requested in
 *  TranslationTextRequest is
 *  `projects/{project-id}/locations/{location-id}/models/general/nmt` then
 *  `model` here would be normalized to
 *  `projects/{project-number}/locations/{location-id}/models/general/nmt`.
 */
@property(nonatomic, copy, nullable) NSString *model;

/** Text translated into the target language. */
@property(nonatomic, copy, nullable) NSString *translatedText;

@end


/**
 *  The request message for Operations.WaitOperation.
 */
@interface GTLRTranslate_WaitOperationRequest : GTLRObject

/**
 *  The maximum duration to wait before timing out. If left blank, the wait will
 *  be at most the time permitted by the underlying HTTP/RPC protocol. If RPC
 *  context deadline is also specified, the shorter one will be used.
 */
@property(nonatomic, strong, nullable) GTLRDuration *timeout;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
