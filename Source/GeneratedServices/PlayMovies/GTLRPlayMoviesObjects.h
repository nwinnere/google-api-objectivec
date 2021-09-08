// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Movies Partner API (playmoviespartner/v1)
// Description:
//   Gets the delivery status of titles for Google Play Movies Partners.
// Documentation:
//   https://developers.google.com/playmoviespartner/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRPlayMovies_Avail;
@class GTLRPlayMovies_Order;
@class GTLRPlayMovies_StoreInfo;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRPlayMovies_Avail.formatProfile

/** Value: "FORMAT_PROFILE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_FormatProfile_FormatProfileUnspecified;
/** Value: "HD" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_FormatProfile_Hd;
/** Value: "SD" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_FormatProfile_Sd;
/** Value: "UHD" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_FormatProfile_Uhd;

// ----------------------------------------------------------------------------
// GTLRPlayMovies_Avail.licenseType

/** Value: "EST" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_LicenseType_Est;
/** Value: "LICENSE_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_LicenseType_LicenseTypeUnspecified;
/** Value: "POEST" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_LicenseType_Poest;
/** Value: "SVOD" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_LicenseType_Svod;
/** Value: "VOD" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_LicenseType_Vod;

// ----------------------------------------------------------------------------
// GTLRPlayMovies_Avail.workType

/** Value: "BUNDLE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_WorkType_Bundle;
/** Value: "EPISODE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_WorkType_Episode;
/** Value: "MOVIE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_WorkType_Movie;
/** Value: "SEASON" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_WorkType_Season;
/** Value: "TITLE_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Avail_WorkType_TitleTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRPlayMovies_Order.normalizedPriority

/** Value: "HIGH_PRIORITY" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_NormalizedPriority_HighPriority;
/** Value: "LOW_PRIORITY" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_NormalizedPriority_LowPriority;
/** Value: "NORMALIZED_PRIORITY_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_NormalizedPriority_NormalizedPriorityUnspecified;

// ----------------------------------------------------------------------------
// GTLRPlayMovies_Order.status

/** Value: "STATUS_APPROVED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Status_StatusApproved;
/** Value: "STATUS_FAILED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Status_StatusFailed;
/** Value: "STATUS_NOT_AVAILABLE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Status_StatusNotAvailable;
/** Value: "STATUS_PROCESSING" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Status_StatusProcessing;
/** Value: "STATUS_UNFULFILLED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Status_StatusUnfulfilled;
/** Value: "STATUS_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Status_StatusUnspecified;

// ----------------------------------------------------------------------------
// GTLRPlayMovies_Order.statusDetail

/** Value: "ORDER_STATUS_AWAITING_REDELIVERY" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_StatusDetail_OrderStatusAwaitingRedelivery;
/** Value: "ORDER_STATUS_FILE_PROCESSING" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_StatusDetail_OrderStatusFileProcessing;
/** Value: "ORDER_STATUS_INTERNAL_FIX" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_StatusDetail_OrderStatusInternalFix;
/** Value: "ORDER_STATUS_NOT_AVAILABLE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_StatusDetail_OrderStatusNotAvailable;
/** Value: "ORDER_STATUS_OPEN_ORDER" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_StatusDetail_OrderStatusOpenOrder;
/** Value: "ORDER_STATUS_QC_APPROVED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_StatusDetail_OrderStatusQcApproved;
/** Value: "ORDER_STATUS_QC_REJECTION" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_StatusDetail_OrderStatusQcRejection;
/** Value: "ORDER_STATUS_READY_FOR_QC" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_StatusDetail_OrderStatusReadyForQc;
/** Value: "ORDER_STATUS_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_StatusDetail_OrderStatusUnspecified;

// ----------------------------------------------------------------------------
// GTLRPlayMovies_Order.type

/** Value: "BUNDLE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Type_Bundle;
/** Value: "EPISODE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Type_Episode;
/** Value: "MOVIE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Type_Movie;
/** Value: "SEASON" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Type_Season;
/** Value: "TITLE_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_Order_Type_TitleTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRPlayMovies_StoreInfo.type

/** Value: "BUNDLE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_StoreInfo_Type_Bundle;
/** Value: "EPISODE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_StoreInfo_Type_Episode;
/** Value: "MOVIE" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_StoreInfo_Type_Movie;
/** Value: "SEASON" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_StoreInfo_Type_Season;
/** Value: "TITLE_TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRPlayMovies_StoreInfo_Type_TitleTypeUnspecified;

/**
 *  An Avail describes the Availability Window of a specific Edit in a given
 *  country, which means the period Google is allowed to sell or rent the Edit.
 *  Avails are exposed in EMA format Version 1.6b (available at
 *  http://www.movielabs.com/md/avails/) Studios can see the Avails for the
 *  Titles they own. Post-production houses cannot see any Avails.
 */
@interface GTLRPlayMovies_Avail : GTLRObject

/**
 *  Other identifier referring to the Edit, as defined by partner. Example:
 *  "GOOGLER_2006"
 */
@property(nonatomic, copy, nullable) NSString *altId;

/**
 *  ID internally generated by Google to uniquely identify an Avail. Not part of
 *  EMA Specs.
 */
@property(nonatomic, copy, nullable) NSString *availId;

/**
 *  Communicating an exempt category as defined by FCC regulations. It is not
 *  required for non-US Avails. Example: "1"
 */
@property(nonatomic, copy, nullable) NSString *captionExemption;

/**
 *  Communicating if caption file will be delivered.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *captionIncluded;

/**
 *  Title Identifier. This should be the Title Level EIDR. Example:
 *  "10.5240/1489-49A2-3956-4B2D-FE16-5".
 */
@property(nonatomic, copy, nullable) NSString *contentId;

/**
 *  The name of the studio that owns the Edit referred in the Avail. This is the
 *  equivalent of `studio_name` in other resources, but it follows the EMA
 *  nomenclature. Example: "Google Films".
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Manifestation Identifier. This should be the Manifestation Level EIDR.
 *  Example: "10.2340/1489-49A2-3956-4B2D-FE16-7"
 */
@property(nonatomic, copy, nullable) NSString *encodeId;

/**
 *  End of term in YYYY-MM-DD format in the timezone of the country of the
 *  Avail. "Open" if no end date is available. Example: "2019-02-17"
 */
@property(nonatomic, copy, nullable) NSString *end;

/**
 *  Other identifier referring to the episode, as defined by partner. Only
 *  available on TV avails. Example: "rs_googlers_s1_3".
 */
@property(nonatomic, copy, nullable) NSString *episodeAltId;

/**
 *  The number assigned to the episode within a season. Only available on TV
 *  Avails. Example: "3".
 */
@property(nonatomic, copy, nullable) NSString *episodeNumber;

/**
 *  OPTIONAL.TV Only. Title used by involved parties to refer to this episode.
 *  Only available on TV Avails. Example: "Coding at Google".
 */
@property(nonatomic, copy, nullable) NSString *episodeTitleInternalAlias;

/**
 *  Indicates the format profile covered by the transaction.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMovies_Avail_FormatProfile_FormatProfileUnspecified Value
 *        "FORMAT_PROFILE_UNSPECIFIED"
 *    @arg @c kGTLRPlayMovies_Avail_FormatProfile_Hd Value "HD"
 *    @arg @c kGTLRPlayMovies_Avail_FormatProfile_Sd Value "SD"
 *    @arg @c kGTLRPlayMovies_Avail_FormatProfile_Uhd Value "UHD"
 */
@property(nonatomic, copy, nullable) NSString *formatProfile;

/**
 *  Type of transaction.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMovies_Avail_LicenseType_Est Value "EST"
 *    @arg @c kGTLRPlayMovies_Avail_LicenseType_LicenseTypeUnspecified Value
 *        "LICENSE_TYPE_UNSPECIFIED"
 *    @arg @c kGTLRPlayMovies_Avail_LicenseType_Poest Value "POEST"
 *    @arg @c kGTLRPlayMovies_Avail_LicenseType_Svod Value "SVOD"
 *    @arg @c kGTLRPlayMovies_Avail_LicenseType_Vod Value "VOD"
 */
@property(nonatomic, copy, nullable) NSString *licenseType;

/**
 *  Name of the post-production houses that manage the Avail. Not part of EMA
 *  Specs.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *pphNames;

/**
 *  Type of pricing that should be applied to this Avail based on how the
 *  partner classify them. Example: "Tier", "WSP", "SRP", or "Category".
 */
@property(nonatomic, copy, nullable) NSString *priceType;

/** Value to be applied to the pricing type. Example: "4" or "2.99" */
@property(nonatomic, copy, nullable) NSString *priceValue;

/**
 *  Edit Identifier. This should be the Edit Level EIDR. Example:
 *  "10.2340/1489-49A2-3956-4B2D-FE16-6"
 */
@property(nonatomic, copy, nullable) NSString *productId;

/**
 *  Value representing the rating reason. Rating reasons should be formatted as
 *  per [EMA ratings spec](http://www.movielabs.com/md/ratings/) and
 *  comma-separated for inclusion of multiple reasons. Example: "L, S, V"
 */
@property(nonatomic, copy, nullable) NSString *ratingReason;

/**
 *  Rating system applied to the version of title within territory of Avail.
 *  Rating systems should be formatted as per [EMA ratings
 *  spec](http://www.movielabs.com/md/ratings/) Example: "MPAA"
 */
@property(nonatomic, copy, nullable) NSString *ratingSystem;

/**
 *  Value representing the rating. Ratings should be formatted as per
 *  http://www.movielabs.com/md/ratings/ Example: "PG"
 */
@property(nonatomic, copy, nullable) NSString *ratingValue;

/**
 *  Release date of the Title in earliest released territory. Typically it is
 *  just the year, but it is free-form as per EMA spec. Examples: "1979", "Oct
 *  2014"
 */
@property(nonatomic, copy, nullable) NSString *releaseDate;

/**
 *  Other identifier referring to the season, as defined by partner. Only
 *  available on TV avails. Example: "rs_googlers_s1".
 */
@property(nonatomic, copy, nullable) NSString *seasonAltId;

/**
 *  The number assigned to the season within a series. Only available on TV
 *  Avails. Example: "1".
 */
@property(nonatomic, copy, nullable) NSString *seasonNumber;

/**
 *  Title used by involved parties to refer to this season. Only available on TV
 *  Avails. Example: "Googlers, The".
 */
@property(nonatomic, copy, nullable) NSString *seasonTitleInternalAlias;

/**
 *  Other identifier referring to the series, as defined by partner. Only
 *  available on TV avails. Example: "rs_googlers".
 */
@property(nonatomic, copy, nullable) NSString *seriesAltId;

/**
 *  Title used by involved parties to refer to this series. Only available on TV
 *  Avails. Example: "Googlers, The".
 */
@property(nonatomic, copy, nullable) NSString *seriesTitleInternalAlias;

/**
 *  Start of term in YYYY-MM-DD format in the timezone of the country of the
 *  Avail. Example: "2013-05-14".
 */
@property(nonatomic, copy, nullable) NSString *start;

/**
 *  Spoken language of the intended audience. Language shall be encoded in
 *  accordance with RFC 5646. Example: "fr".
 */
@property(nonatomic, copy, nullable) NSString *storeLanguage;

/**
 *  First date an Edit could be publically announced as becoming available at a
 *  specific future date in territory of Avail. *Not* the Avail start date or
 *  pre-order start date. Format is YYYY-MM-DD. Only available for pre-orders.
 *  Example: "2012-12-10"
 */
@property(nonatomic, copy, nullable) NSString *suppressionLiftDate;

/**
 *  ISO 3166-1 alpha-2 country code for the country or territory of this Avail.
 *  For Avails, we use Territory in lieu of Country to comply with EMA
 *  specifications. But please note that Territory and Country identify the same
 *  thing. Example: "US".
 */
@property(nonatomic, copy, nullable) NSString *territory;

/**
 *  Title used by involved parties to refer to this content. Example: "Googlers,
 *  The". Only available on Movie Avails.
 */
@property(nonatomic, copy, nullable) NSString *titleInternalAlias;

/**
 *  Google-generated ID identifying the video linked to this Avail, once
 *  delivered. Not part of EMA Specs. Example: 'gtry456_xc'
 */
@property(nonatomic, copy, nullable) NSString *videoId;

/**
 *  Work type as enumerated in EMA.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMovies_Avail_WorkType_Bundle Value "BUNDLE"
 *    @arg @c kGTLRPlayMovies_Avail_WorkType_Episode Value "EPISODE"
 *    @arg @c kGTLRPlayMovies_Avail_WorkType_Movie Value "MOVIE"
 *    @arg @c kGTLRPlayMovies_Avail_WorkType_Season Value "SEASON"
 *    @arg @c kGTLRPlayMovies_Avail_WorkType_TitleTypeUnspecified Value
 *        "TITLE_TYPE_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *workType;

@end


/**
 *  Response to the 'ListAvails' method.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "avails" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRPlayMovies_ListAvailsResponse : GTLRCollectionObject

/**
 *  List of Avails that match the request criteria.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPlayMovies_Avail *> *avails;

/** See _List methods rules_ for info about this field. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  See _List methods rules_ for more information about this field.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalSize;

@end


/**
 *  Response to the 'ListOrders' method.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "orders" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRPlayMovies_ListOrdersResponse : GTLRCollectionObject

/** See _List methods rules_ for info about this field. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of Orders that match the request criteria.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPlayMovies_Order *> *orders;

/**
 *  See _List methods rules_ for more information about this field.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalSize;

@end


/**
 *  Response to the 'ListStoreInfos' method.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "storeInfos" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRPlayMovies_ListStoreInfosResponse : GTLRCollectionObject

/** See 'List methods rules' for info about this field. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of StoreInfos that match the request criteria.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPlayMovies_StoreInfo *> *storeInfos;

/**
 *  See _List methods rules_ for more information about this field.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalSize;

@end


/**
 *  An Order tracks the fulfillment of an Edit when delivered using the legacy,
 *  non-component-based delivery. Each Order is uniquely identified by an
 *  `order_id`, which is generated by Google. Externally, Orders can also be
 *  identified by partners using its `custom_id` (when provided).
 */
@interface GTLRPlayMovies_Order : GTLRObject

/** Timestamp when the Order was approved. */
@property(nonatomic, copy, nullable) NSString *approvedTime;

/**
 *  YouTube Channel ID that should be used to fulfill the Order. Example:
 *  "UCRG64darCZhb".
 */
@property(nonatomic, copy, nullable) NSString *channelId;

/**
 *  YouTube Channel Name that should be used to fulfill the Order. Example:
 *  "Google_channel".
 */
@property(nonatomic, copy, nullable) NSString *channelName;

/**
 *  Countries where the Order is available, using the "ISO 3166-1 alpha-2"
 *  format (example: "US").
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *countries;

/**
 *  ID that can be used to externally identify an Order. This ID is provided by
 *  partners when submitting the Avails. Example: 'GOOGLER_2006'
 */
@property(nonatomic, copy, nullable) NSString *customId;

/**
 *  Timestamp of the earliest start date of the Avails linked to this Order.
 */
@property(nonatomic, copy, nullable) NSString *earliestAvailStartTime;

/**
 *  Default Episode name, usually in the language of the country of origin. Only
 *  available for TV Edits Example: "Googlers, The - Pilot".
 */
@property(nonatomic, copy, nullable) NSString *episodeName;

/** Legacy Order priority, as defined by Google. Example: 'P0' */
@property(nonatomic, copy, nullable) NSString *legacyPriority;

/**
 *  Default Edit name, usually in the language of the country of origin.
 *  Example: "Googlers, The".
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  A simpler representation of the priority.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMovies_Order_NormalizedPriority_HighPriority Value
 *        "HIGH_PRIORITY"
 *    @arg @c kGTLRPlayMovies_Order_NormalizedPriority_LowPriority Value
 *        "LOW_PRIORITY"
 *    @arg @c kGTLRPlayMovies_Order_NormalizedPriority_NormalizedPriorityUnspecified
 *        Value "NORMALIZED_PRIORITY_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *normalizedPriority;

/** Timestamp when the Order was created. */
@property(nonatomic, copy, nullable) NSString *orderedTime;

/**
 *  ID internally generated by Google to uniquely identify an Order. Example:
 *  'abcde12_x'
 */
@property(nonatomic, copy, nullable) NSString *orderId;

/** Name of the post-production house that manages the Edit ordered. */
@property(nonatomic, copy, nullable) NSString *pphName;

/**
 *  Order priority, as defined by Google. The higher the value, the higher the
 *  priority. Example: 90
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *priority;

/** Timestamp when the Order was fulfilled. */
@property(nonatomic, copy, nullable) NSString *receivedTime;

/**
 *  Field explaining why an Order has been rejected. Example: "Trailer audio is
 *  2ch mono, please re-deliver in stereo".
 */
@property(nonatomic, copy, nullable) NSString *rejectionNote;

/**
 *  Default Season name, usually in the language of the country of origin. Only
 *  available for TV Edits Example: "Googlers, The - A Brave New World".
 */
@property(nonatomic, copy, nullable) NSString *seasonName;

/**
 *  Default Show name, usually in the language of the country of origin. Only
 *  available for TV Edits Example: "Googlers, The".
 */
@property(nonatomic, copy, nullable) NSString *showName;

/**
 *  High-level status of the order.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMovies_Order_Status_StatusApproved Value
 *        "STATUS_APPROVED"
 *    @arg @c kGTLRPlayMovies_Order_Status_StatusFailed Value "STATUS_FAILED"
 *    @arg @c kGTLRPlayMovies_Order_Status_StatusNotAvailable Value
 *        "STATUS_NOT_AVAILABLE"
 *    @arg @c kGTLRPlayMovies_Order_Status_StatusProcessing Value
 *        "STATUS_PROCESSING"
 *    @arg @c kGTLRPlayMovies_Order_Status_StatusUnfulfilled Value
 *        "STATUS_UNFULFILLED"
 *    @arg @c kGTLRPlayMovies_Order_Status_StatusUnspecified Value
 *        "STATUS_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *status;

/**
 *  Detailed status of the order
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMovies_Order_StatusDetail_OrderStatusAwaitingRedelivery
 *        Value "ORDER_STATUS_AWAITING_REDELIVERY"
 *    @arg @c kGTLRPlayMovies_Order_StatusDetail_OrderStatusFileProcessing Value
 *        "ORDER_STATUS_FILE_PROCESSING"
 *    @arg @c kGTLRPlayMovies_Order_StatusDetail_OrderStatusInternalFix Value
 *        "ORDER_STATUS_INTERNAL_FIX"
 *    @arg @c kGTLRPlayMovies_Order_StatusDetail_OrderStatusNotAvailable Value
 *        "ORDER_STATUS_NOT_AVAILABLE"
 *    @arg @c kGTLRPlayMovies_Order_StatusDetail_OrderStatusOpenOrder Value
 *        "ORDER_STATUS_OPEN_ORDER"
 *    @arg @c kGTLRPlayMovies_Order_StatusDetail_OrderStatusQcApproved Value
 *        "ORDER_STATUS_QC_APPROVED"
 *    @arg @c kGTLRPlayMovies_Order_StatusDetail_OrderStatusQcRejection Value
 *        "ORDER_STATUS_QC_REJECTION"
 *    @arg @c kGTLRPlayMovies_Order_StatusDetail_OrderStatusReadyForQc Value
 *        "ORDER_STATUS_READY_FOR_QC"
 *    @arg @c kGTLRPlayMovies_Order_StatusDetail_OrderStatusUnspecified Value
 *        "ORDER_STATUS_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *statusDetail;

/** Name of the studio that owns the Edit ordered. */
@property(nonatomic, copy, nullable) NSString *studioName;

/**
 *  Type of the Edit linked to the Order.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMovies_Order_Type_Bundle Value "BUNDLE"
 *    @arg @c kGTLRPlayMovies_Order_Type_Episode Value "EPISODE"
 *    @arg @c kGTLRPlayMovies_Order_Type_Movie Value "MOVIE"
 *    @arg @c kGTLRPlayMovies_Order_Type_Season Value "SEASON"
 *    @arg @c kGTLRPlayMovies_Order_Type_TitleTypeUnspecified Value
 *        "TITLE_TYPE_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  Google-generated ID identifying the video linked to this Order, once
 *  delivered. Example: 'gtry456_xc'.
 */
@property(nonatomic, copy, nullable) NSString *videoId;

@end


/**
 *  Information about a playable sequence (video) associated with an Edit and
 *  available at the Google Play Store. Internally, each StoreInfo is uniquely
 *  identified by a `video_id` and `country`. Externally, Title-level EIDR or
 *  Edit-level EIDR, if provided, can also be used to identify a specific title
 *  or edit in a country.
 */
@interface GTLRPlayMovies_StoreInfo : GTLRObject

/** Audio tracks available for this Edit. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *audioTracks;

/**
 *  Country where Edit is available in ISO 3166-1 alpha-2 country code. Example:
 *  "US".
 */
@property(nonatomic, copy, nullable) NSString *country;

/** Edit-level EIDR ID. Example: "10.5240/1489-49A2-3956-4B2D-FE16-6". */
@property(nonatomic, copy, nullable) NSString *editLevelEidr;

/**
 *  The number assigned to the episode within a season. Only available on TV
 *  Edits. Example: "1".
 */
@property(nonatomic, copy, nullable) NSString *episodeNumber;

/**
 *  Whether the Edit has a 5.1 channel audio track.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hasAudio51;

/**
 *  Whether the Edit has a EST offer.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hasEstOffer;

/**
 *  Whether the Edit has a HD offer.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hasHdOffer;

/**
 *  Whether the Edit has info cards.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hasInfoCards;

/**
 *  Whether the Edit has a SD offer.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hasSdOffer;

/**
 *  Whether the Edit has a VOD offer.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hasVodOffer;

/** Timestamp when the Edit went live on the Store. */
@property(nonatomic, copy, nullable) NSString *liveTime;

/**
 *  Knowledge Graph ID associated to this Edit, if available. This ID links the
 *  Edit to its knowledge entity, externally accessible at http://freebase.com.
 *  In the absense of Title EIDR or Edit EIDR, this ID helps link together
 *  multiple Edits across countries. Example: '/m/0ffx29'
 */
@property(nonatomic, copy, nullable) NSString *mid;

/**
 *  Default Edit name, usually in the language of the country of origin.
 *  Example: "Googlers, The".
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Name of the post-production houses that manage the Edit. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *pphNames;

/**
 *  Google-generated ID identifying the season linked to the Edit. Only
 *  available for TV Edits. Example: 'ster23ex'
 */
@property(nonatomic, copy, nullable) NSString *seasonId;

/**
 *  Default Season name, usually in the language of the country of origin. Only
 *  available for TV Edits Example: "Googlers, The - A Brave New World".
 */
@property(nonatomic, copy, nullable) NSString *seasonName;

/**
 *  The number assigned to the season within a show. Only available on TV Edits.
 *  Example: "1".
 */
@property(nonatomic, copy, nullable) NSString *seasonNumber;

/**
 *  Google-generated ID identifying the show linked to the Edit. Only available
 *  for TV Edits. Example: 'et2hsue_x'
 */
@property(nonatomic, copy, nullable) NSString *showId;

/**
 *  Default Show name, usually in the language of the country of origin. Only
 *  available for TV Edits Example: "Googlers, The".
 */
@property(nonatomic, copy, nullable) NSString *showName;

/** Name of the studio that owns the Edit ordered. */
@property(nonatomic, copy, nullable) NSString *studioName;

/** Subtitles available for this Edit. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *subtitles;

/** Title-level EIDR ID. Example: "10.5240/1489-49A2-3956-4B2D-FE16-5". */
@property(nonatomic, copy, nullable) NSString *titleLevelEidr;

/**
 *  Google-generated ID identifying the trailer linked to the Edit. Example:
 *  'bhd_4e_cx'
 */
@property(nonatomic, copy, nullable) NSString *trailerId;

/**
 *  Edit type, like Movie, Episode or Season.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayMovies_StoreInfo_Type_Bundle Value "BUNDLE"
 *    @arg @c kGTLRPlayMovies_StoreInfo_Type_Episode Value "EPISODE"
 *    @arg @c kGTLRPlayMovies_StoreInfo_Type_Movie Value "MOVIE"
 *    @arg @c kGTLRPlayMovies_StoreInfo_Type_Season Value "SEASON"
 *    @arg @c kGTLRPlayMovies_StoreInfo_Type_TitleTypeUnspecified Value
 *        "TITLE_TYPE_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  Google-generated ID identifying the video linked to the Edit. Example:
 *  'gtry456_xc'
 */
@property(nonatomic, copy, nullable) NSString *videoId;

@end

NS_ASSUME_NONNULL_END
