// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Indexing API (indexing/v3)
// Description:
//   The Indexing API allows developers to share the life cycle of a Web
//   Document with Google.
// Documentation:
//   https://developers.google.com/search/apis/indexing-api/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRIndexing_UrlNotification;
@class GTLRIndexing_UrlNotificationMetadata;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRIndexing_UrlNotification.type

/**
 *  The given URL (Web document) has been deleted.
 *
 *  Value: "URL_DELETED"
 */
GTLR_EXTERN NSString * const kGTLRIndexing_UrlNotification_Type_UrlDeleted;
/**
 *  Unspecified.
 *
 *  Value: "URL_NOTIFICATION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRIndexing_UrlNotification_Type_UrlNotificationTypeUnspecified;
/**
 *  The given URL (Web document) has been updated.
 *
 *  Value: "URL_UPDATED"
 */
GTLR_EXTERN NSString * const kGTLRIndexing_UrlNotification_Type_UrlUpdated;

/**
 *  Output for PublishUrlNotification
 */
@interface GTLRIndexing_PublishUrlNotificationResponse : GTLRObject

/** Description of the notification events received for this URL. */
@property(nonatomic, strong, nullable) GTLRIndexing_UrlNotificationMetadata *urlNotificationMetadata;

@end


/**
 *  `UrlNotification` is the resource used in all Indexing API calls.
 *  It describes one event in the life cycle of a Web Document.
 */
@interface GTLRIndexing_UrlNotification : GTLRObject

/**
 *  Creation timestamp for this notification.
 *  Users should _not_ specify it, the field is ignored at the request time.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *notifyTime;

/**
 *  The URL life cycle event that Google is being notified about.
 *
 *  Likely values:
 *    @arg @c kGTLRIndexing_UrlNotification_Type_UrlDeleted The given URL (Web
 *        document) has been deleted. (Value: "URL_DELETED")
 *    @arg @c kGTLRIndexing_UrlNotification_Type_UrlNotificationTypeUnspecified
 *        Unspecified. (Value: "URL_NOTIFICATION_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRIndexing_UrlNotification_Type_UrlUpdated The given URL (Web
 *        document) has been updated. (Value: "URL_UPDATED")
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  The object of this notification. The URL must be owned by the publisher
 *  of this notification and, in case of `URL_UPDATED` notifications, it _must_
 *  be crawlable by Google.
 */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  Summary of the most recent Indexing API notifications successfully received,
 *  for a given URL.
 */
@interface GTLRIndexing_UrlNotificationMetadata : GTLRObject

/** Latest notification received with type `URL_REMOVED`. */
@property(nonatomic, strong, nullable) GTLRIndexing_UrlNotification *latestRemove;

/** Latest notification received with type `URL_UPDATED`. */
@property(nonatomic, strong, nullable) GTLRIndexing_UrlNotification *latestUpdate;

/** URL to which this metadata refers. */
@property(nonatomic, copy, nullable) NSString *url;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
