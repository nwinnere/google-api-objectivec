// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Poly API (poly/v1)
// Description:
//   The Poly API provides read access to assets hosted on poly.google.com to
//   all, and upload access to poly.google.com for whitelisted accounts.
// Documentation:
//   https://developers.google.com/poly/

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

@class GTLRPolyService_Asset;
@class GTLRPolyService_AssetImportMessage;
@class GTLRPolyService_File;
@class GTLRPolyService_Format;
@class GTLRPolyService_FormatComplexity;
@class GTLRPolyService_ImageError;
@class GTLRPolyService_ObjParseError;
@class GTLRPolyService_PresentationParams;
@class GTLRPolyService_Quaternion;
@class GTLRPolyService_RemixInfo;
@class GTLRPolyService_UserAsset;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRPolyService_Asset.license

/**
 *  Unlicensed: All Rights Reserved by the author. Unlicensed assets are **not**
 *  returned by List Assets.
 *
 *  Value: "ALL_RIGHTS_RESERVED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_Asset_License_AllRightsReserved;
/**
 *  Creative Commons CC-BY 3.0. https://creativecommons.org/licenses/by/3.0/
 *
 *  Value: "CREATIVE_COMMONS_BY"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_Asset_License_CreativeCommonsBy;
/**
 *  Unknown license value.
 *
 *  Value: "UNKNOWN"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_Asset_License_Unknown;

// ----------------------------------------------------------------------------
// GTLRPolyService_Asset.visibility

/**
 *  Access to the asset and its underlying files and resources is restricted to
 *  the author. **Authentication:** You must supply an OAuth token that
 *  corresponds to the author's account.
 *
 *  Value: "PRIVATE"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_Asset_Visibility_Private;
/**
 *  Access to the asset and its underlying files and resources is available to
 *  anyone.
 *
 *  Value: "PUBLIC"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_Asset_Visibility_Public;
/**
 *  Access to the asset and its underlying files and resources is available to
 *  anyone with the asset's name. Unlisted assets are **not** returned by List
 *  Assets.
 *
 *  Value: "UNLISTED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_Asset_Visibility_Unlisted;
/**
 *  Unknown (and invalid) visibility.
 *
 *  Value: "VISIBILITY_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_Asset_Visibility_VisibilityUnspecified;

// ----------------------------------------------------------------------------
// GTLRPolyService_AssetImportMessage.code

/**
 *  Unknown error code.
 *
 *  Value: "CODE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_AssetImportMessage_Code_CodeUnspecified;
/**
 *  Default materials are used in the model. This means that one or more faces
 *  is using default materials either because no usemtl statement was specified
 *  or because the requested material was not found due to a missing material
 *  file or bad material name. This does not cover the case of missing textures.
 *
 *  Value: "DEFAULT_MATERIALS"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_AssetImportMessage_Code_DefaultMaterials;
/**
 *  When generating the preview for the import, no geometry was found.
 *
 *  Value: "EMPTY_MODEL"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_AssetImportMessage_Code_EmptyModel;
/**
 *  The importer was not able to import the model before the expiration time.
 *
 *  Value: "EXPIRED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_AssetImportMessage_Code_Expired;
/**
 *  Multiple files were encountered in addition to a ZIP archive. When uploading
 *  an archive only one file is permitted.
 *
 *  Value: "EXTRA_FILES_WITH_ARCHIVE"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_AssetImportMessage_Code_ExtraFilesWithArchive;
/**
 *  The importer encountered a fatal error and was unable to import the model.
 *
 *  Value: "FATAL_ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_AssetImportMessage_Code_FatalError;
/**
 *  The importer encountered a problem reading an image file.
 *
 *  Value: "IMAGE_ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_AssetImportMessage_Code_ImageError;
/**
 *  The import includes a file of an unsupported element type. The file path is
 *  specified.
 *
 *  Value: "INVALID_ELEMENT_TYPE"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_AssetImportMessage_Code_InvalidElementType;
/**
 *  The asset import did not include any file that we can import (i.e. an OBJ
 *  file).
 *
 *  Value: "NO_IMPORTABLE_FILE"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_AssetImportMessage_Code_NoImportableFile;
/**
 *  A problem was encountered while parsing the OBJ file. The converter makes a
 *  'best effort' attempt to continue when encountering such issues. In some
 *  cases the resulting preview model may still be acceptable. The details can
 *  be found in the parse error message.
 *
 *  Value: "OBJ_PARSE_ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_AssetImportMessage_Code_ObjParseError;

// ----------------------------------------------------------------------------
// GTLRPolyService_ImageError.code

/**
 *  Unknown error code.
 *
 *  Value: "CODE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ImageError_Code_CodeUnspecified;
/**
 *  The image size is too large.
 *
 *  Value: "IMAGE_TOO_BIG"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ImageError_Code_ImageTooBig;
/**
 *  We were unable to read the image file.
 *
 *  Value: "INVALID_IMAGE"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ImageError_Code_InvalidImage;
/**
 *  The image data does not match the expected MIME type of the image.
 *
 *  Value: "WRONG_IMAGE_TYPE"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ImageError_Code_WrongImageType;

// ----------------------------------------------------------------------------
// GTLRPolyService_ObjParseError.code

/**
 *  Unknown error code.
 *
 *  Value: "CODE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_CodeUnspecified;
/**
 *  The specified file was not found in the import.
 *
 *  Value: "FILE_NOT_FOUND"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_FileNotFound;
/**
 *  A missing file was found at a different file path.
 *
 *  Value: "FILE_SUBSTITUTION"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_FileSubstitution;
/**
 *  Vertex references are specified in an inconsistent style for a face (e.g.
 *  some vertices specify texture vertices but some don't).
 *
 *  Value: "INCONSISTENT_VERTEX_REFS"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_InconsistentVertexRefs;
/**
 *  The command is invalid.
 *
 *  Value: "INVALID_COMMAND"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_InvalidCommand;
/**
 *  The file path was invalid. Only relative paths are supported.
 *
 *  Value: "INVALID_FILE_PATH"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_InvalidFilePath;
/**
 *  A invalid number was specified.
 *
 *  Value: "INVALID_NUMBER"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_InvalidNumber;
/**
 *  The smoothing group is not valid.
 *
 *  Value: "INVALID_SMOOTHING_GROUP"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_InvalidSmoothingGroup;
/**
 *  The specified texture option is not valid.
 *
 *  Value: "INVALID_TEXTURE_OPTION"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_InvalidTextureOption;
/**
 *  The specified parameter value was not recognized.
 *
 *  Value: "INVALID_VALUE"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_InvalidValue;
/**
 *  An invalid vertex reference was specified.
 *
 *  Value: "INVALID_VERTEX_REF"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_InvalidVertexRef;
/**
 *  A line in an OBJ or MTL file exceeded the maximum line length.
 *
 *  Value: "LINE_TOO_LONG"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_LineTooLong;
/**
 *  An expected file name was not specified.
 *
 *  Value: "MISSING_FILE_NAME"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_MissingFileName;
/**
 *  A vertex reference does not specify a geometric vertex.
 *
 *  Value: "MISSING_GEOMETRIC_VERTEX"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_MissingGeometricVertex;
/**
 *  An expected token was not found.
 *
 *  Value: "MISSING_TOKEN"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_MissingToken;
/**
 *  Vertex colors were specified for only some vertices of a face.
 *
 *  Value: "MISSING_VERTEX_COLORS"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_MissingVertexColors;
/**
 *  Material parameters were specified before the first material definition.
 *
 *  Value: "NO_MATERIAL_DEFINED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_NoMaterialDefined;
/**
 *  The specified number was too large or small for its usage.
 *
 *  Value: "NUMBER_OUT_OF_RANGE"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_NumberOutOfRange;
/**
 *  The vertex specified too few dimensions for its usage.
 *
 *  Value: "TOO_FEW_DIMENSIONS"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_TooFewDimensions;
/**
 *  The face specified too few vertices.
 *
 *  Value: "TOO_FEW_VERTICES"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_TooFewVertices;
/**
 *  The vertex specified too many dimensions for its usage.
 *
 *  Value: "TOO_MANY_DIMENSIONS"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_TooManyDimensions;
/**
 *  The maximum number of problems to report was reached. Parsing continues, but
 *  further problems will be ignored.
 *
 *  Value: "TOO_MANY_PROBLEMS"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_TooManyProblems;
/**
 *  The specified material was not found in any material definition in the
 *  import.
 *
 *  Value: "UNKNOWN_MATERIAL"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_UnknownMaterial;
/**
 *  This command is a valid OBJ command but is not supported. This error is only
 *  generated for the first instance of such a command.
 *
 *  Value: "UNSUPPORTED_COMMAND"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_UnsupportedCommand;
/**
 *  This line ended with unparsed token characters.
 *
 *  Value: "UNUSED_TOKENS"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_UnusedTokens;
/**
 *  The specified vertex was not found.
 *
 *  Value: "VERTEX_NOT_FOUND"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_ObjParseError_Code_VertexNotFound;

// ----------------------------------------------------------------------------
// GTLRPolyService_PresentationParams.colorSpace

/**
 *  Colors should be converted to linear by assuming gamma = 2.0.
 *
 *  Value: "GAMMA"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_PresentationParams_ColorSpace_Gamma;
/**
 *  Linear color values. Default.
 *
 *  Value: "LINEAR"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_PresentationParams_ColorSpace_Linear;
/**
 *  Invalid color value.
 *
 *  Value: "UNKNOWN"
 */
FOUNDATION_EXTERN NSString * const kGTLRPolyService_PresentationParams_ColorSpace_Unknown;

/**
 *  Represents and describes an asset in the Poly library. An asset is a 3D
 *  model or scene created using [Tilt Brush](//www.tiltbrush.com),
 *  [Blocks](//vr.google.com/blocks/), or any 3D program that produces a file
 *  that can be upload to Poly.
 */
@interface GTLRPolyService_Asset : GTLRObject

/**
 *  The author's publicly visible name. Use this name when giving credit to the
 *  author. For more information, see [Licensing](/poly/discover/licensing).
 */
@property(nonatomic, copy, nullable) NSString *authorName;

/**
 *  For published assets, the time when the asset was published. For unpublished
 *  assets, the time when the asset was created.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  The human-readable description, set by the asset's author.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** The human-readable name, set by the asset's author. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  A list of Formats where each format describes one representation of the
 *  asset.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPolyService_Format *> *formats;

/**
 *  Whether this asset has been curated by the Poly team.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isCurated;

/**
 *  The license under which the author has made the asset available for use, if
 *  any.
 *
 *  Likely values:
 *    @arg @c kGTLRPolyService_Asset_License_AllRightsReserved Unlicensed: All
 *        Rights Reserved by the author. Unlicensed assets are **not** returned
 *        by List Assets. (Value: "ALL_RIGHTS_RESERVED")
 *    @arg @c kGTLRPolyService_Asset_License_CreativeCommonsBy Creative Commons
 *        CC-BY 3.0. https://creativecommons.org/licenses/by/3.0/ (Value:
 *        "CREATIVE_COMMONS_BY")
 *    @arg @c kGTLRPolyService_Asset_License_Unknown Unknown license value.
 *        (Value: "UNKNOWN")
 */
@property(nonatomic, copy, nullable) NSString *license;

/**
 *  Application-defined opaque metadata for this asset. This field is only
 *  returned when querying for the signed-in user's own assets, not for public
 *  assets. This string is limited to 1K chars. It is up to the creator of the
 *  asset to define the format for this string (for example, JSON).
 */
@property(nonatomic, copy, nullable) NSString *metadata;

/** The unique identifier for the asset in the form: `assets/{ASSET_ID}`. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Hints for displaying the asset. Note that these parameters are not
 *  immutable; the author of an asset may change them post-publication.
 */
@property(nonatomic, strong, nullable) GTLRPolyService_PresentationParams *presentationParams;

/** The remix info for the asset. */
@property(nonatomic, strong, nullable) GTLRPolyService_RemixInfo *remixInfo;

/** The thumbnail image for the asset. */
@property(nonatomic, strong, nullable) GTLRPolyService_File *thumbnail;

/**
 *  The time when the asset was last modified. For published assets, whose
 *  contents are immutable, the update time changes only when metadata
 *  properties, such as visibility, are updated.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

/**
 *  The visibility of the asset and who can access it.
 *
 *  Likely values:
 *    @arg @c kGTLRPolyService_Asset_Visibility_Private Access to the asset and
 *        its underlying files and resources is restricted to the author.
 *        **Authentication:** You must supply an OAuth token that corresponds to
 *        the author's account. (Value: "PRIVATE")
 *    @arg @c kGTLRPolyService_Asset_Visibility_Public Access to the asset and
 *        its underlying files and resources is available to anyone. (Value:
 *        "PUBLIC")
 *    @arg @c kGTLRPolyService_Asset_Visibility_Unlisted Access to the asset and
 *        its underlying files and resources is available to anyone with the
 *        asset's name. Unlisted assets are **not** returned by List Assets.
 *        (Value: "UNLISTED")
 *    @arg @c kGTLRPolyService_Asset_Visibility_VisibilityUnspecified Unknown
 *        (and invalid) visibility. (Value: "VISIBILITY_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *visibility;

@end


/**
 *  A message generated by the asset import process.
 */
@interface GTLRPolyService_AssetImportMessage : GTLRObject

/**
 *  The code associated with this message.
 *
 *  Likely values:
 *    @arg @c kGTLRPolyService_AssetImportMessage_Code_CodeUnspecified Unknown
 *        error code. (Value: "CODE_UNSPECIFIED")
 *    @arg @c kGTLRPolyService_AssetImportMessage_Code_DefaultMaterials Default
 *        materials are used in the model. This means that one or more faces is
 *        using default materials either because no usemtl statement was
 *        specified or because the requested material was not found due to a
 *        missing material file or bad material name. This does not cover the
 *        case of missing textures. (Value: "DEFAULT_MATERIALS")
 *    @arg @c kGTLRPolyService_AssetImportMessage_Code_EmptyModel When
 *        generating the preview for the import, no geometry was found. (Value:
 *        "EMPTY_MODEL")
 *    @arg @c kGTLRPolyService_AssetImportMessage_Code_Expired The importer was
 *        not able to import the model before the expiration time. (Value:
 *        "EXPIRED")
 *    @arg @c kGTLRPolyService_AssetImportMessage_Code_ExtraFilesWithArchive
 *        Multiple files were encountered in addition to a ZIP archive. When
 *        uploading an archive only one file is permitted. (Value:
 *        "EXTRA_FILES_WITH_ARCHIVE")
 *    @arg @c kGTLRPolyService_AssetImportMessage_Code_FatalError The importer
 *        encountered a fatal error and was unable to import the model. (Value:
 *        "FATAL_ERROR")
 *    @arg @c kGTLRPolyService_AssetImportMessage_Code_ImageError The importer
 *        encountered a problem reading an image file. (Value: "IMAGE_ERROR")
 *    @arg @c kGTLRPolyService_AssetImportMessage_Code_InvalidElementType The
 *        import includes a file of an unsupported element type. The file path
 *        is specified. (Value: "INVALID_ELEMENT_TYPE")
 *    @arg @c kGTLRPolyService_AssetImportMessage_Code_NoImportableFile The
 *        asset import did not include any file that we can import (i.e. an OBJ
 *        file). (Value: "NO_IMPORTABLE_FILE")
 *    @arg @c kGTLRPolyService_AssetImportMessage_Code_ObjParseError A problem
 *        was encountered while parsing the OBJ file. The converter makes a
 *        'best effort' attempt to continue when encountering such issues. In
 *        some cases the resulting preview model may still be acceptable. The
 *        details can be found in the parse error message. (Value:
 *        "OBJ_PARSE_ERROR")
 */
@property(nonatomic, copy, nullable) NSString *code;

/**
 *  An optional file path. Only present for those error codes that specify it.
 */
@property(nonatomic, copy, nullable) NSString *filePath;

/** An optional image error. Only present for INVALID_IMAGE_FILE. */
@property(nonatomic, strong, nullable) GTLRPolyService_ImageError *imageError;

/** An optional OBJ parse error. Only present for OBJ_PARSE_ERROR. */
@property(nonatomic, strong, nullable) GTLRPolyService_ObjParseError *objParseError;

@end


/**
 *  Represents a file in Poly, which can be a root, resource, or thumbnail file.
 */
@interface GTLRPolyService_File : GTLRObject

/**
 *  The MIME content-type, such as `image/png`. For more information, see [MIME
 *  types](//developer.mozilla.org/en-US/docs/Web/HTTP/Basics_of_HTTP/MIME_types).
 */
@property(nonatomic, copy, nullable) NSString *contentType;

/**
 *  The path of the resource file relative to the root file. For root or
 *  thumbnail files, this is just the filename.
 */
@property(nonatomic, copy, nullable) NSString *relativePath;

/** The URL where the file data can be retrieved. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  The same asset can be represented in different formats, for example, a
 *  [WaveFront .obj](//en.wikipedia.org/wiki/Wavefront_.obj_file) file with its
 *  corresponding .mtl file or a [Khronos glTF](//www.khronos.org/gltf) file
 *  with its corresponding .glb binary data. A format refers to a specific
 *  representation of an asset and contains all information needed to retrieve
 *  and describe this representation.
 */
@interface GTLRPolyService_Format : GTLRObject

/** Complexity stats about this representation of the asset. */
@property(nonatomic, strong, nullable) GTLRPolyService_FormatComplexity *formatComplexity;

/**
 *  A short string that identifies the format type of this representation.
 *  Possible values are: `FBX`, `GLTF`, `GLTF2`, `OBJ`, and `TILT`.
 */
@property(nonatomic, copy, nullable) NSString *formatType;

/**
 *  A list of dependencies of the root element. May include, but is not limited
 *  to, materials, textures, and shader programs.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPolyService_File *> *resources;

/**
 *  The root of the file hierarchy. This will always be populated. For some
 *  format_types - such as `TILT`, which are self-contained - this is all of the
 *  data. Other types - such as `OBJ` - often reference other data elements.
 *  These are contained in the resources field.
 */
@property(nonatomic, strong, nullable) GTLRPolyService_File *root;

@end


/**
 *  Information on the complexity of this Format.
 */
@interface GTLRPolyService_FormatComplexity : GTLRObject

/**
 *  A non-negative integer that represents the level of detail (LOD) of this
 *  format relative to other formats of the same asset with the same
 *  format_type. This hint allows you to sort formats from the most-detailed (0)
 *  to least-detailed (integers greater than 0).
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *lodHint;

/**
 *  The estimated number of triangles.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *triangleCount;

@end


/**
 *  A message resulting from reading an image file.
 */
@interface GTLRPolyService_ImageError : GTLRObject

/**
 *  The type of image error encountered. Optional for older image errors.
 *
 *  Likely values:
 *    @arg @c kGTLRPolyService_ImageError_Code_CodeUnspecified Unknown error
 *        code. (Value: "CODE_UNSPECIFIED")
 *    @arg @c kGTLRPolyService_ImageError_Code_ImageTooBig The image size is too
 *        large. (Value: "IMAGE_TOO_BIG")
 *    @arg @c kGTLRPolyService_ImageError_Code_InvalidImage We were unable to
 *        read the image file. (Value: "INVALID_IMAGE")
 *    @arg @c kGTLRPolyService_ImageError_Code_WrongImageType The image data
 *        does not match the expected MIME type of the image. (Value:
 *        "WRONG_IMAGE_TYPE")
 */
@property(nonatomic, copy, nullable) NSString *code;

/** The file path in the import of the image that was rejected. */
@property(nonatomic, copy, nullable) NSString *filePath;

@end


/**
 *  A response message from a request to list.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "assets" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRPolyService_ListAssetsResponse : GTLRCollectionObject

/**
 *  A list of assets that match the criteria specified in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPolyService_Asset *> *assets;

/**
 *  The continuation token for retrieving the next page. If empty, indicates
 *  that there are no more pages. To get the next page, submit the same request
 *  specifying this value as the page_token.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The total number of assets in the list, without pagination.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalSize;

@end


/**
 *  A response message from a request to list.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "assets" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRPolyService_ListLikedAssetsResponse : GTLRCollectionObject

/**
 *  A list of assets that match the criteria specified in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPolyService_Asset *> *assets;

/**
 *  The continuation token for retrieving the next page. If empty, indicates
 *  that there are no more pages. To get the next page, submit the same request
 *  specifying this value as the page_token.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The total number of assets in the list, without pagination.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalSize;

@end


/**
 *  A response message from a request to list.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "userAssets" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRPolyService_ListUserAssetsResponse : GTLRCollectionObject

/**
 *  The continuation token for retrieving the next page. If empty, indicates
 *  that there are no more pages. To get the next page, submit the same request
 *  specifying this value as the page_token.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The total number of assets in the list, without pagination.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalSize;

/**
 *  A list of UserAssets matching the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPolyService_UserAsset *> *userAssets;

@end


/**
 *  Details of an error resulting from parsing an OBJ file
 */
@interface GTLRPolyService_ObjParseError : GTLRObject

/**
 *  The type of problem found (required).
 *
 *  Likely values:
 *    @arg @c kGTLRPolyService_ObjParseError_Code_CodeUnspecified Unknown error
 *        code. (Value: "CODE_UNSPECIFIED")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_FileNotFound The specified
 *        file was not found in the import. (Value: "FILE_NOT_FOUND")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_FileSubstitution A missing
 *        file was found at a different file path. (Value: "FILE_SUBSTITUTION")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_InconsistentVertexRefs Vertex
 *        references are specified in an inconsistent style for a face (e.g.
 *        some vertices specify texture vertices but some don't). (Value:
 *        "INCONSISTENT_VERTEX_REFS")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_InvalidCommand The command is
 *        invalid. (Value: "INVALID_COMMAND")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_InvalidFilePath The file path
 *        was invalid. Only relative paths are supported. (Value:
 *        "INVALID_FILE_PATH")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_InvalidNumber A invalid number
 *        was specified. (Value: "INVALID_NUMBER")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_InvalidSmoothingGroup The
 *        smoothing group is not valid. (Value: "INVALID_SMOOTHING_GROUP")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_InvalidTextureOption The
 *        specified texture option is not valid. (Value:
 *        "INVALID_TEXTURE_OPTION")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_InvalidValue The specified
 *        parameter value was not recognized. (Value: "INVALID_VALUE")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_InvalidVertexRef An invalid
 *        vertex reference was specified. (Value: "INVALID_VERTEX_REF")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_LineTooLong A line in an OBJ
 *        or MTL file exceeded the maximum line length. (Value: "LINE_TOO_LONG")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_MissingFileName An expected
 *        file name was not specified. (Value: "MISSING_FILE_NAME")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_MissingGeometricVertex A
 *        vertex reference does not specify a geometric vertex. (Value:
 *        "MISSING_GEOMETRIC_VERTEX")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_MissingToken An expected token
 *        was not found. (Value: "MISSING_TOKEN")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_MissingVertexColors Vertex
 *        colors were specified for only some vertices of a face. (Value:
 *        "MISSING_VERTEX_COLORS")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_NoMaterialDefined Material
 *        parameters were specified before the first material definition.
 *        (Value: "NO_MATERIAL_DEFINED")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_NumberOutOfRange The specified
 *        number was too large or small for its usage. (Value:
 *        "NUMBER_OUT_OF_RANGE")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_TooFewDimensions The vertex
 *        specified too few dimensions for its usage. (Value:
 *        "TOO_FEW_DIMENSIONS")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_TooFewVertices The face
 *        specified too few vertices. (Value: "TOO_FEW_VERTICES")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_TooManyDimensions The vertex
 *        specified too many dimensions for its usage. (Value:
 *        "TOO_MANY_DIMENSIONS")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_TooManyProblems The maximum
 *        number of problems to report was reached. Parsing continues, but
 *        further problems will be ignored. (Value: "TOO_MANY_PROBLEMS")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_UnknownMaterial The specified
 *        material was not found in any material definition in the import.
 *        (Value: "UNKNOWN_MATERIAL")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_UnsupportedCommand This
 *        command is a valid OBJ command but is not supported. This error is
 *        only generated for the first instance of such a command. (Value:
 *        "UNSUPPORTED_COMMAND")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_UnusedTokens This line ended
 *        with unparsed token characters. (Value: "UNUSED_TOKENS")
 *    @arg @c kGTLRPolyService_ObjParseError_Code_VertexNotFound The specified
 *        vertex was not found. (Value: "VERTEX_NOT_FOUND")
 */
@property(nonatomic, copy, nullable) NSString *code;

/**
 *  The ending character index at which the problem was found.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *endIndex;

/** The file path in which the problem was found. */
@property(nonatomic, copy, nullable) NSString *filePath;

/**
 *  The text of the line. Note that this may be truncated if the line was very
 *  long. This may not include the error if it occurs after line truncation.
 */
@property(nonatomic, copy, nullable) NSString *line;

/**
 *  Line number at which the problem was found.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *lineNumber;

/**
 *  The starting character index at which the problem was found.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *startIndex;

@end


/**
 *  Hints for displaying the asset, based on information available when the
 *  asset was uploaded.
 */
@interface GTLRPolyService_PresentationParams : GTLRObject

/**
 *  A background color which could be used for displaying the 3D asset in a
 *  'thumbnail' or 'palette' style view. Authors have the option to set this
 *  background color when publishing or editing their asset. This is represented
 *  as a six-digit hexademical triplet specifying the RGB components of the
 *  background color, e.g. #FF0000 for Red.
 */
@property(nonatomic, copy, nullable) NSString *backgroundColor;

/**
 *  The materials' diffuse/albedo color. This does not apply to vertex colors or
 *  texture maps.
 *
 *  Likely values:
 *    @arg @c kGTLRPolyService_PresentationParams_ColorSpace_Gamma Colors should
 *        be converted to linear by assuming gamma = 2.0. (Value: "GAMMA")
 *    @arg @c kGTLRPolyService_PresentationParams_ColorSpace_Linear Linear color
 *        values. Default. (Value: "LINEAR")
 *    @arg @c kGTLRPolyService_PresentationParams_ColorSpace_Unknown Invalid
 *        color value. (Value: "UNKNOWN")
 */
@property(nonatomic, copy, nullable) NSString *colorSpace;

/**
 *  A rotation that should be applied to the object root to make it upright.
 *  More precisely, this quaternion transforms from "object space" (the space in
 *  which the object is defined) to "presentation space", a coordinate system
 *  where +Y is up, +X is right, -Z is forward. For example, if the object is
 *  the Eiffel Tower, in its local coordinate system the object might be laid
 *  out such that the base of the tower is on the YZ plane and the tip of the
 *  tower is towards positive X. In this case this quaternion would specify a
 *  rotation (of 90 degrees about the Z axis) such that in the presentation
 *  space the base of the tower is aligned with the XZ plane, and the tip of the
 *  tower lies towards +Y. This rotation is unrelated to the object's pose in
 *  the web preview, which is just a camera position setting and is *not*
 *  reflected in this rotation. Please note: this is applicable only to the
 *  gLTF.
 */
@property(nonatomic, strong, nullable) GTLRPolyService_Quaternion *orientingRotation;

@end


/**
 *  A [Quaternion](//en.wikipedia.org/wiki/Quaternion). Please note: if in the
 *  response you see "w: 1" and nothing else this is the default value of [0, 0,
 *  0, 1] where x,y, and z are 0.
 */
@interface GTLRPolyService_Quaternion : GTLRObject

/**
 *  The scalar component.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *w;

/**
 *  The x component.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *x;

/**
 *  The y component.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *y;

/**
 *  The z component.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *z;

@end


/**
 *  Info about the sources of this asset (i.e. assets that were remixed to
 *  create this asset).
 */
@interface GTLRPolyService_RemixInfo : GTLRObject

/**
 *  Resource ids for the sources of this remix, of the form: `assets/{ASSET_ID}`
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *sourceAsset;

@end


/**
 *  A response message from a request to startImport. This is returned in the
 *  response field of the Operation.
 */
@interface GTLRPolyService_StartAssetImportResponse : GTLRObject

/**
 *  The id of newly created asset. If this is empty when the operation is
 *  complete it means the import failed. Please refer to the assetImportMessages
 *  field to understand what went wrong.
 */
@property(nonatomic, copy, nullable) NSString *assetId;

/** The id of the asset import. */
@property(nonatomic, copy, nullable) NSString *assetImportId;

/**
 *  The message from the asset import. This will contain any warnings (or - in
 *  the case of failure - errors) that occurred during import.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPolyService_AssetImportMessage *> *assetImportMessages;

/** The publish URL for the asset. */
@property(nonatomic, copy, nullable) NSString *publishUrl;

@end


/**
 *  Data about the user's asset.
 */
@interface GTLRPolyService_UserAsset : GTLRObject

/** An Asset. */
@property(nonatomic, strong, nullable) GTLRPolyService_Asset *asset;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
