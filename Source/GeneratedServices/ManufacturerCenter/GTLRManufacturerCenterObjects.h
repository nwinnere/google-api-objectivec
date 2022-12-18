// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Manufacturer Center API (manufacturers/v1)
// Description:
//   Public API for managing Manufacturer Center related data.
// Documentation:
//   https://developers.google.com/manufacturers/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRManufacturerCenter_Attributes;
@class GTLRManufacturerCenter_Capacity;
@class GTLRManufacturerCenter_Count;
@class GTLRManufacturerCenter_DestinationStatus;
@class GTLRManufacturerCenter_FeatureDescription;
@class GTLRManufacturerCenter_Image;
@class GTLRManufacturerCenter_Issue;
@class GTLRManufacturerCenter_Price;
@class GTLRManufacturerCenter_Product;
@class GTLRManufacturerCenter_ProductDetail;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRManufacturerCenter_DestinationStatus.status

/**
 *  The product is used for this destination.
 *
 *  Value: "ACTIVE"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_DestinationStatus_Status_Active;
/**
 *  The product is disapproved. Please look at the issues.
 *
 *  Value: "DISAPPROVED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_DestinationStatus_Status_Disapproved;
/**
 *  The decision is still pending.
 *
 *  Value: "PENDING"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_DestinationStatus_Status_Pending;
/**
 *  Unspecified status, never used.
 *
 *  Value: "UNKNOWN"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_DestinationStatus_Status_Unknown;

// ----------------------------------------------------------------------------
// GTLRManufacturerCenter_Image.status

/**
 *  There was an error while crawling the image.
 *
 *  Value: "CRAWL_ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_CrawlError;
/**
 *  The image was manually overridden and will not be crawled.
 *
 *  Value: "CRAWL_SKIPPED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_CrawlSkipped;
/**
 *  The image cannot be decoded.
 *
 *  Value: "DECODING_ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_DecodingError;
/**
 *  The image crawl was postponed to avoid overloading the host.
 *
 *  Value: "HOSTLOADED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_Hostloaded;
/**
 *  The image URL returned a "404 Not Found" error.
 *
 *  Value: "HTTP_404"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_Http404;
/**
 *  The image was processed and it meets the requirements.
 *
 *  Value: "OK"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_Ok;
/**
 *  The image crawl is still pending.
 *
 *  Value: "PENDING_CRAWL"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_PendingCrawl;
/**
 *  The image was uploaded and is being processed.
 *
 *  Value: "PENDING_PROCESSING"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_PendingProcessing;
/**
 *  The image cannot be processed.
 *
 *  Value: "PROCESSING_ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_ProcessingError;
/**
 *  The image URL is protected by robots.txt file and cannot be crawled.
 *
 *  Value: "ROBOTED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_Roboted;
/**
 *  The image status is unspecified. Should not be used.
 *
 *  Value: "STATUS_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_StatusUnspecified;
/**
 *  The image is too big.
 *
 *  Value: "TOO_BIG"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_TooBig;
/**
 *  The image URL is protected by X-Robots-Tag and cannot be crawled.
 *
 *  Value: "XROBOTED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Status_Xroboted;

// ----------------------------------------------------------------------------
// GTLRManufacturerCenter_Image.type

/**
 *  The image was crawled from a provided URL.
 *
 *  Value: "CRAWLED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Type_Crawled;
/**
 *  Type is unspecified. Should not be used.
 *
 *  Value: "TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Type_TypeUnspecified;
/**
 *  The image was uploaded.
 *
 *  Value: "UPLOADED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Image_Type_Uploaded;

// ----------------------------------------------------------------------------
// GTLRManufacturerCenter_Issue.resolution

/**
 *  The issue will be resolved automatically (for example image crawl or
 *  Google review). No action is required now. Resolution might lead to
 *  another issue (for example if crawl fails).
 *
 *  Value: "PENDING_PROCESSING"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Resolution_PendingProcessing;
/**
 *  Unspecified resolution, never used.
 *
 *  Value: "RESOLUTION_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Resolution_ResolutionUnspecified;
/**
 *  The user who provided the data must act in order to resolve the issue
 *  (for example by correcting some data).
 *
 *  Value: "USER_ACTION"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Resolution_UserAction;

// ----------------------------------------------------------------------------
// GTLRManufacturerCenter_Issue.severity

/**
 *  Error severity. The issue prevents the usage of the whole item.
 *
 *  Value: "ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Severity_Error;
/**
 *  Info severity. The issue is one that doesn't require immediate attention.
 *  It is, for example, used to communicate which attributes are still
 *  pending review.
 *
 *  Value: "INFO"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Severity_Info;
/**
 *  Unspecified severity, never used.
 *
 *  Value: "SEVERITY_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Severity_SeverityUnspecified;
/**
 *  Warning severity. The issue is either one that prevents the usage of the
 *  attribute that triggered it or one that will soon prevent the usage of
 *  the whole item.
 *
 *  Value: "WARNING"
 */
FOUNDATION_EXTERN NSString * const kGTLRManufacturerCenter_Issue_Severity_Warning;

/**
 *  Attributes of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116.
 */
@interface GTLRManufacturerCenter_Attributes : GTLRObject

/**
 *  The additional images of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#addlimage.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRManufacturerCenter_Image *> *additionalImageLink;

/**
 *  The target age group of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#agegroup.
 */
@property(nonatomic, copy, nullable) NSString *ageGroup;

/**
 *  The brand name of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#brand.
 */
@property(nonatomic, copy, nullable) NSString *brand;

/**
 *  The capacity of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#capacity.
 */
@property(nonatomic, strong, nullable) GTLRManufacturerCenter_Capacity *capacity;

/**
 *  The color of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#color.
 */
@property(nonatomic, copy, nullable) NSString *color;

/**
 *  The count of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#count.
 */
@property(nonatomic, strong, nullable) GTLRManufacturerCenter_Count *count;

/**
 *  The description of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#description.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The disclosure date of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#disclosure.
 */
@property(nonatomic, copy, nullable) NSString *disclosureDate;

/** A list of excluded destinations. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *excludedDestination;

/**
 *  The rich format description of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#featuredesc.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRManufacturerCenter_FeatureDescription *> *featureDescription;

/**
 *  The flavor of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#flavor.
 */
@property(nonatomic, copy, nullable) NSString *flavor;

/**
 *  The format of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#format.
 */
@property(nonatomic, copy, nullable) NSString *format;

/**
 *  The target gender of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#gender.
 */
@property(nonatomic, copy, nullable) NSString *gender;

/**
 *  The Global Trade Item Number (GTIN) of the product. For more information,
 *  see https://support.google.com/manufacturers/answer/6124116#gtin.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *gtin;

/**
 *  The image of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#image.
 */
@property(nonatomic, strong, nullable) GTLRManufacturerCenter_Image *imageLink;

/** A list of included destinations. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *includedDestination;

/**
 *  The item group id of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#itemgroupid.
 */
@property(nonatomic, copy, nullable) NSString *itemGroupId;

/**
 *  The material of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#material.
 */
@property(nonatomic, copy, nullable) NSString *material;

/**
 *  The Manufacturer Part Number (MPN) of the product. For more information,
 *  see https://support.google.com/manufacturers/answer/6124116#mpn.
 */
@property(nonatomic, copy, nullable) NSString *mpn;

/**
 *  The pattern of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#pattern.
 */
@property(nonatomic, copy, nullable) NSString *pattern;

/**
 *  The details of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#productdetail.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRManufacturerCenter_ProductDetail *> *productDetail;

/**
 *  The name of the group of products related to the product. For more
 *  information, see
 *  https://support.google.com/manufacturers/answer/6124116#productline.
 */
@property(nonatomic, copy, nullable) NSString *productLine;

/**
 *  The canonical name of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#productname.
 */
@property(nonatomic, copy, nullable) NSString *productName;

/**
 *  The URL of the detail page of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#productpage.
 */
@property(nonatomic, copy, nullable) NSString *productPageUrl;

/**
 *  The type or category of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#producttype.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *productType;

/**
 *  The release date of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#release.
 */
@property(nonatomic, copy, nullable) NSString *releaseDate;

/**
 *  Rich product content. For more information, see
 *  https://support.google.com/manufacturers/answer/9389865
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *richProductContent;

/**
 *  The scent of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#scent.
 */
@property(nonatomic, copy, nullable) NSString *scent;

/**
 *  The size of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#size.
 */
@property(nonatomic, copy, nullable) NSString *size;

/**
 *  The size system of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#sizesystem.
 */
@property(nonatomic, copy, nullable) NSString *sizeSystem;

/**
 *  The size type of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#sizetype.
 */
@property(nonatomic, copy, nullable) NSString *sizeType;

/**
 *  The suggested retail price (MSRP) of the product. For more information,
 *  see https://support.google.com/manufacturers/answer/6124116#price.
 */
@property(nonatomic, strong, nullable) GTLRManufacturerCenter_Price *suggestedRetailPrice;

/**
 *  The target client id. Should only be used in the accounts of the data
 *  partners.
 */
@property(nonatomic, copy, nullable) NSString *targetClientId;

/**
 *  The theme of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#theme.
 */
@property(nonatomic, copy, nullable) NSString *theme;

/**
 *  The title of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#title.
 */
@property(nonatomic, copy, nullable) NSString *title;

/**
 *  The videos of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#video.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *videoLink;

@end


/**
 *  The capacity of a product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#capacity.
 */
@interface GTLRManufacturerCenter_Capacity : GTLRObject

/** The unit of the capacity, i.e., MB, GB, or TB. */
@property(nonatomic, copy, nullable) NSString *unit;

/**
 *  The numeric value of the capacity.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *value;

@end


/**
 *  The number of products in a single package. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#count.
 */
@interface GTLRManufacturerCenter_Count : GTLRObject

/** The unit in which these products are counted. */
@property(nonatomic, copy, nullable) NSString *unit;

/**
 *  The numeric value of the number of products in a package.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *value;

@end


/**
 *  The destination status.
 */
@interface GTLRManufacturerCenter_DestinationStatus : GTLRObject

/** The name of the destination. */
@property(nonatomic, copy, nullable) NSString *destination;

/**
 *  The status of the destination.
 *
 *  Likely values:
 *    @arg @c kGTLRManufacturerCenter_DestinationStatus_Status_Active The
 *        product is used for this destination. (Value: "ACTIVE")
 *    @arg @c kGTLRManufacturerCenter_DestinationStatus_Status_Disapproved The
 *        product is disapproved. Please look at the issues. (Value:
 *        "DISAPPROVED")
 *    @arg @c kGTLRManufacturerCenter_DestinationStatus_Status_Pending The
 *        decision is still pending. (Value: "PENDING")
 *    @arg @c kGTLRManufacturerCenter_DestinationStatus_Status_Unknown
 *        Unspecified status, never used. (Value: "UNKNOWN")
 */
@property(nonatomic, copy, nullable) NSString *status;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRManufacturerCenter_Empty : GTLRObject
@end


/**
 *  A feature description of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#featuredesc.
 */
@interface GTLRManufacturerCenter_FeatureDescription : GTLRObject

/** A short description of the feature. */
@property(nonatomic, copy, nullable) NSString *headline;

/** An optional image describing the feature. */
@property(nonatomic, strong, nullable) GTLRManufacturerCenter_Image *image;

/** A detailed description of the feature. */
@property(nonatomic, copy, nullable) NSString *text;

@end


/**
 *  An image.
 */
@interface GTLRManufacturerCenter_Image : GTLRObject

/**
 *  The URL of the image. For crawled images, this is the provided URL. For
 *  uploaded images, this is a serving URL from Google if the image has been
 *  processed successfully.
 */
@property(nonatomic, copy, nullable) NSString *imageUrl;

/**
 *  The status of the image.
 *  \@OutputOnly
 *
 *  Likely values:
 *    @arg @c kGTLRManufacturerCenter_Image_Status_CrawlError There was an error
 *        while crawling the image. (Value: "CRAWL_ERROR")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_CrawlSkipped The image was
 *        manually overridden and will not be crawled. (Value: "CRAWL_SKIPPED")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_DecodingError The image
 *        cannot be decoded. (Value: "DECODING_ERROR")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_Hostloaded The image crawl
 *        was postponed to avoid overloading the host. (Value: "HOSTLOADED")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_Http404 The image URL
 *        returned a "404 Not Found" error. (Value: "HTTP_404")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_Ok The image was processed
 *        and it meets the requirements. (Value: "OK")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_PendingCrawl The image crawl
 *        is still pending. (Value: "PENDING_CRAWL")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_PendingProcessing The image
 *        was uploaded and is being processed. (Value: "PENDING_PROCESSING")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_ProcessingError The image
 *        cannot be processed. (Value: "PROCESSING_ERROR")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_Roboted The image URL is
 *        protected by robots.txt file and cannot be crawled. (Value: "ROBOTED")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_StatusUnspecified The image
 *        status is unspecified. Should not be used. (Value:
 *        "STATUS_UNSPECIFIED")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_TooBig The image is too big.
 *        (Value: "TOO_BIG")
 *    @arg @c kGTLRManufacturerCenter_Image_Status_Xroboted The image URL is
 *        protected by X-Robots-Tag and cannot be crawled. (Value: "XROBOTED")
 */
@property(nonatomic, copy, nullable) NSString *status;

/**
 *  The type of the image, i.e., crawled or uploaded.
 *  \@OutputOnly
 *
 *  Likely values:
 *    @arg @c kGTLRManufacturerCenter_Image_Type_Crawled The image was crawled
 *        from a provided URL. (Value: "CRAWLED")
 *    @arg @c kGTLRManufacturerCenter_Image_Type_TypeUnspecified Type is
 *        unspecified. Should not be used. (Value: "TYPE_UNSPECIFIED")
 *    @arg @c kGTLRManufacturerCenter_Image_Type_Uploaded The image was
 *        uploaded. (Value: "UPLOADED")
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Product issue.
 */
@interface GTLRManufacturerCenter_Issue : GTLRObject

/**
 *  If present, the attribute that triggered the issue. For more information
 *  about attributes, see
 *  https://support.google.com/manufacturers/answer/6124116.
 */
@property(nonatomic, copy, nullable) NSString *attribute;

/**
 *  Longer description of the issue focused on how to resolve it.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** The destination this issue applies to. */
@property(nonatomic, copy, nullable) NSString *destination;

/**
 *  What needs to happen to resolve the issue.
 *
 *  Likely values:
 *    @arg @c kGTLRManufacturerCenter_Issue_Resolution_PendingProcessing The
 *        issue will be resolved automatically (for example image crawl or
 *        Google review). No action is required now. Resolution might lead to
 *        another issue (for example if crawl fails). (Value:
 *        "PENDING_PROCESSING")
 *    @arg @c kGTLRManufacturerCenter_Issue_Resolution_ResolutionUnspecified
 *        Unspecified resolution, never used. (Value: "RESOLUTION_UNSPECIFIED")
 *    @arg @c kGTLRManufacturerCenter_Issue_Resolution_UserAction The user who
 *        provided the data must act in order to resolve the issue
 *        (for example by correcting some data). (Value: "USER_ACTION")
 */
@property(nonatomic, copy, nullable) NSString *resolution;

/**
 *  The severity of the issue.
 *
 *  Likely values:
 *    @arg @c kGTLRManufacturerCenter_Issue_Severity_Error Error severity. The
 *        issue prevents the usage of the whole item. (Value: "ERROR")
 *    @arg @c kGTLRManufacturerCenter_Issue_Severity_Info Info severity. The
 *        issue is one that doesn't require immediate attention.
 *        It is, for example, used to communicate which attributes are still
 *        pending review. (Value: "INFO")
 *    @arg @c kGTLRManufacturerCenter_Issue_Severity_SeverityUnspecified
 *        Unspecified severity, never used. (Value: "SEVERITY_UNSPECIFIED")
 *    @arg @c kGTLRManufacturerCenter_Issue_Severity_Warning Warning severity.
 *        The issue is either one that prevents the usage of the
 *        attribute that triggered it or one that will soon prevent the usage of
 *        the whole item. (Value: "WARNING")
 */
@property(nonatomic, copy, nullable) NSString *severity;

/** The timestamp when this issue appeared. */
@property(nonatomic, strong, nullable) GTLRDateTime *timestamp;

/** Short title describing the nature of the issue. */
@property(nonatomic, copy, nullable) NSString *title;

/**
 *  The server-generated type of the issue, for example,
 *  “INCORRECT_TEXT_FORMATTING”, “IMAGE_NOT_SERVEABLE”, etc.
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRManufacturerCenter_ListProductsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "products" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRManufacturerCenter_ListProductsResponse : GTLRCollectionObject

/** The token for the retrieval of the next page of product statuses. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of the products.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRManufacturerCenter_Product *> *products;

@end


/**
 *  A price.
 */
@interface GTLRManufacturerCenter_Price : GTLRObject

/** The numeric value of the price. */
@property(nonatomic, copy, nullable) NSString *amount;

/** The currency in which the price is denoted. */
@property(nonatomic, copy, nullable) NSString *currency;

@end


/**
 *  Product data.
 */
@interface GTLRManufacturerCenter_Product : GTLRObject

/**
 *  Attributes of the product uploaded to the Manufacturer Center. Manually
 *  edited attributes are taken into account.
 */
@property(nonatomic, strong, nullable) GTLRManufacturerCenter_Attributes *attributes;

/**
 *  The content language of the product as a two-letter ISO 639-1 language code
 *  (for example, en).
 */
@property(nonatomic, copy, nullable) NSString *contentLanguage;

/** The status of the destinations. */
@property(nonatomic, strong, nullable) NSArray<GTLRManufacturerCenter_DestinationStatus *> *destinationStatuses;

/** A server-generated list of issues associated with the product. */
@property(nonatomic, strong, nullable) NSArray<GTLRManufacturerCenter_Issue *> *issues;

/**
 *  Name in the format `{target_country}:{content_language}:{product_id}`.
 *  `target_country` - The target country of the product as a CLDR territory
 *  code (for example, US).
 *  `content_language` - The content language of the product as a two-letter
 *  ISO 639-1 language code (for example, en).
 *  `product_id` - The ID of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#id.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Parent ID in the format `accounts/{account_id}`.
 *  `account_id` - The ID of the Manufacturer Center account.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  The ID of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#id.
 */
@property(nonatomic, copy, nullable) NSString *productId;

/**
 *  The target country of the product as a CLDR territory code (for example,
 *  US).
 */
@property(nonatomic, copy, nullable) NSString *targetCountry;

@end


/**
 *  A product detail of the product. For more information, see
 *  https://support.google.com/manufacturers/answer/6124116#productdetail.
 */
@interface GTLRManufacturerCenter_ProductDetail : GTLRObject

/** The name of the attribute. */
@property(nonatomic, copy, nullable) NSString *attributeName;

/** The value of the attribute. */
@property(nonatomic, copy, nullable) NSString *attributeValue;

/**
 *  A short section name that can be reused between multiple product details.
 */
@property(nonatomic, copy, nullable) NSString *sectionName;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
