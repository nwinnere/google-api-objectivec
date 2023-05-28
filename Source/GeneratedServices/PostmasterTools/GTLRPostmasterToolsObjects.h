// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Gmail Postmaster Tools API (gmailpostmastertools/v1beta1)
// Description:
//   The Postmaster Tools API is a RESTful API that provides programmatic access
//   to email traffic metrics (like spam reports, delivery errors etc) otherwise
//   available through the Gmail Postmaster Tools UI currently.
// Documentation:
//   https://developers.google.com/gmail/postmaster

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

@class GTLRPostmasterTools_DeliveryError;
@class GTLRPostmasterTools_Domain;
@class GTLRPostmasterTools_FeedbackLoop;
@class GTLRPostmasterTools_IpReputation;
@class GTLRPostmasterTools_TrafficStats;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRPostmasterTools_DeliveryError.errorClass

/**
 *  The default value which should never be used explicitly.
 *
 *  Value: "DELIVERY_ERROR_CLASS_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorClass_DeliveryErrorClassUnspecified;
/**
 *  Delivery of message has been rejected.
 *
 *  Value: "PERMANENT_ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorClass_PermanentError;
/**
 *  Temporary failure of message delivery to the recipient.
 *
 *  Value: "TEMPORARY_ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorClass_TemporaryError;

// ----------------------------------------------------------------------------
// GTLRPostmasterTools_DeliveryError.errorType

/**
 *  Traffic contains attachments not supported by Gmail.
 *
 *  Value: "BAD_ATTACHMENT"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_BadAttachment;
/**
 *  The sender domain has set up a DMARC rejection policy.
 *
 *  Value: "BAD_DMARC_POLICY"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_BadDmarcPolicy;
/**
 *  The sending IP is missing a [PTR
 *  record](https://support.google.com/domains/answer/3251147#ptr).
 *
 *  Value: "BAD_PTR_RECORD"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_BadPtrRecord;
/**
 *  The traffic is suspected to be spammy, specific to the content.
 *
 *  Value: "CONTENT_SPAMMY"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_ContentSpammy;
/**
 *  The default value which should never be used explicitly.
 *
 *  Value: "DELIVERY_ERROR_TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_DeliveryErrorTypeUnspecified;
/**
 *  The Domain is listed in one or more public [Real-time Blackhole
 *  Lists](http://en.wikipedia.org/wiki/DNSBL). Work with the RBL to get your
 *  domain delisted.
 *
 *  Value: "DOMAIN_IN_RBL"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_DomainInRbl;
/**
 *  The IP is listed in one or more public [Real-time Blackhole
 *  Lists](http://en.wikipedia.org/wiki/DNSBL). Work with the RBL to get your IP
 *  delisted.
 *
 *  Value: "IP_IN_RBL"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_IpInRbl;
/**
 *  The Domain reputation of the sending domain is very low.
 *
 *  Value: "LOW_DOMAIN_REPUTATION"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_LowDomainReputation;
/**
 *  The IP reputation of the sending IP is very low.
 *
 *  Value: "LOW_IP_REPUTATION"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_LowIpReputation;
/**
 *  The Domain or IP is sending traffic at a suspiciously high rate, due to
 *  which temporary rate limits have been imposed. The limit will be lifted when
 *  Gmail is confident enough of the nature of the traffic.
 *
 *  Value: "RATE_LIMIT_EXCEEDED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_RateLimitExceeded;
/**
 *  The traffic is suspected to be spam, by Gmail, for various reasons.
 *
 *  Value: "SUSPECTED_SPAM"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_DeliveryError_ErrorType_SuspectedSpam;

// ----------------------------------------------------------------------------
// GTLRPostmasterTools_Domain.permission

/**
 *  User doesn't have permission to access information about the domain. User
 *  did not verify ownership of domain nor was access granted by other domain
 *  owners.
 *
 *  Value: "NONE"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_Domain_Permission_None;
/**
 *  User has read access to the domain and can share access with others.
 *
 *  Value: "OWNER"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_Domain_Permission_Owner;
/**
 *  The default value and should never be used explicitly.
 *
 *  Value: "PERMISSION_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_Domain_Permission_PermissionUnspecified;
/**
 *  User has read access to the domain.
 *
 *  Value: "READER"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_Domain_Permission_Reader;

// ----------------------------------------------------------------------------
// GTLRPostmasterTools_IpReputation.reputation

/**
 *  History of sending an enormously high volume of spam. Mail coming from this
 *  entity will almost always be rejected at SMTP level or marked as spam.
 *
 *  Value: "BAD"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_IpReputation_Reputation_Bad;
/**
 *  Has a good track record of a very low spam rate, and complies with Gmail's
 *  sender guidelines. Mail will rarely be marked by the spam filter.
 *
 *  Value: "HIGH"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_IpReputation_Reputation_High;
/**
 *  Known to send a considerable volume of spam regularly, and mail from this
 *  sender will likely be marked as spam.
 *
 *  Value: "LOW"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_IpReputation_Reputation_Low;
/**
 *  Known to send good mail, but is prone to sending a low volume of spam
 *  intermittently. Most of the email from this entity will have a fair
 *  deliverability rate, except when there is a notable increase in spam levels.
 *
 *  Value: "MEDIUM"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_IpReputation_Reputation_Medium;
/**
 *  The default value which should never be used explicitly. This represents the
 *  state where no reputation information is available.
 *
 *  Value: "REPUTATION_CATEGORY_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_IpReputation_Reputation_ReputationCategoryUnspecified;

// ----------------------------------------------------------------------------
// GTLRPostmasterTools_TrafficStats.domainReputation

/**
 *  History of sending an enormously high volume of spam. Mail coming from this
 *  entity will almost always be rejected at SMTP level or marked as spam.
 *
 *  Value: "BAD"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_TrafficStats_DomainReputation_Bad;
/**
 *  Has a good track record of a very low spam rate, and complies with Gmail's
 *  sender guidelines. Mail will rarely be marked by the spam filter.
 *
 *  Value: "HIGH"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_TrafficStats_DomainReputation_High;
/**
 *  Known to send a considerable volume of spam regularly, and mail from this
 *  sender will likely be marked as spam.
 *
 *  Value: "LOW"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_TrafficStats_DomainReputation_Low;
/**
 *  Known to send good mail, but is prone to sending a low volume of spam
 *  intermittently. Most of the email from this entity will have a fair
 *  deliverability rate, except when there is a notable increase in spam levels.
 *
 *  Value: "MEDIUM"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_TrafficStats_DomainReputation_Medium;
/**
 *  The default value which should never be used explicitly. This represents the
 *  state where no reputation information is available.
 *
 *  Value: "REPUTATION_CATEGORY_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPostmasterTools_TrafficStats_DomainReputation_ReputationCategoryUnspecified;

/**
 *  Metric on a particular delivery error type.
 */
@interface GTLRPostmasterTools_DeliveryError : GTLRObject

/**
 *  The class of delivery error.
 *
 *  Likely values:
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorClass_DeliveryErrorClassUnspecified
 *        The default value which should never be used explicitly. (Value:
 *        "DELIVERY_ERROR_CLASS_UNSPECIFIED")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorClass_PermanentError
 *        Delivery of message has been rejected. (Value: "PERMANENT_ERROR")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorClass_TemporaryError
 *        Temporary failure of message delivery to the recipient. (Value:
 *        "TEMPORARY_ERROR")
 */
@property(nonatomic, copy, nullable) NSString *errorClass;

/**
 *  The ratio of messages where the error occurred vs all authenticated traffic.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *errorRatio;

/**
 *  The type of delivery error.
 *
 *  Likely values:
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_BadAttachment Traffic
 *        contains attachments not supported by Gmail. (Value: "BAD_ATTACHMENT")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_BadDmarcPolicy The
 *        sender domain has set up a DMARC rejection policy. (Value:
 *        "BAD_DMARC_POLICY")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_BadPtrRecord The
 *        sending IP is missing a [PTR
 *        record](https://support.google.com/domains/answer/3251147#ptr).
 *        (Value: "BAD_PTR_RECORD")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_ContentSpammy The
 *        traffic is suspected to be spammy, specific to the content. (Value:
 *        "CONTENT_SPAMMY")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_DeliveryErrorTypeUnspecified
 *        The default value which should never be used explicitly. (Value:
 *        "DELIVERY_ERROR_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_DomainInRbl The
 *        Domain is listed in one or more public [Real-time Blackhole
 *        Lists](http://en.wikipedia.org/wiki/DNSBL). Work with the RBL to get
 *        your domain delisted. (Value: "DOMAIN_IN_RBL")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_IpInRbl The IP is
 *        listed in one or more public [Real-time Blackhole
 *        Lists](http://en.wikipedia.org/wiki/DNSBL). Work with the RBL to get
 *        your IP delisted. (Value: "IP_IN_RBL")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_LowDomainReputation
 *        The Domain reputation of the sending domain is very low. (Value:
 *        "LOW_DOMAIN_REPUTATION")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_LowIpReputation The
 *        IP reputation of the sending IP is very low. (Value:
 *        "LOW_IP_REPUTATION")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_RateLimitExceeded The
 *        Domain or IP is sending traffic at a suspiciously high rate, due to
 *        which temporary rate limits have been imposed. The limit will be
 *        lifted when Gmail is confident enough of the nature of the traffic.
 *        (Value: "RATE_LIMIT_EXCEEDED")
 *    @arg @c kGTLRPostmasterTools_DeliveryError_ErrorType_SuspectedSpam The
 *        traffic is suspected to be spam, by Gmail, for various reasons.
 *        (Value: "SUSPECTED_SPAM")
 */
@property(nonatomic, copy, nullable) NSString *errorType;

@end


/**
 *  A registered domain resource in the Postmaster API.
 */
@interface GTLRPostmasterTools_Domain : GTLRObject

/** Timestamp when the user registered this domain. Assigned by the server. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  The resource name of the Domain. Domain names have the form
 *  `domains/{domain_name}`, where domain_name is the fully qualified domain
 *  name (i.e., mymail.mydomain.com).
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  User’s permission for this domain. Assigned by the server.
 *
 *  Likely values:
 *    @arg @c kGTLRPostmasterTools_Domain_Permission_None User doesn't have
 *        permission to access information about the domain. User did not verify
 *        ownership of domain nor was access granted by other domain owners.
 *        (Value: "NONE")
 *    @arg @c kGTLRPostmasterTools_Domain_Permission_Owner User has read access
 *        to the domain and can share access with others. (Value: "OWNER")
 *    @arg @c kGTLRPostmasterTools_Domain_Permission_PermissionUnspecified The
 *        default value and should never be used explicitly. (Value:
 *        "PERMISSION_UNSPECIFIED")
 *    @arg @c kGTLRPostmasterTools_Domain_Permission_Reader User has read access
 *        to the domain. (Value: "READER")
 */
@property(nonatomic, copy, nullable) NSString *permission;

@end


/**
 *  [Feedback loop](https://support.google.com/mail/answer/6254652) identifier
 *  information.
 */
@interface GTLRPostmasterTools_FeedbackLoop : GTLRObject

/**
 *  Feedback loop identifier that uniquely identifies individual campaigns.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The ratio of user marked spam messages with the identifier vs the total
 *  number of inboxed messages with that identifier.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *spamRatio;

@end


/**
 *  IP Reputation information for a set of IPs in a specific reputation
 *  category.
 */
@interface GTLRPostmasterTools_IpReputation : GTLRObject

/**
 *  Total number of unique IPs in this reputation category. This metric only
 *  pertains to traffic that passed [SPF](http://www.openspf.org/) or
 *  [DKIM](http://www.dkim.org/).
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *ipCount;

/**
 *  Total number of unique IPs in this reputation category. This metric only
 *  pertains to traffic that passed [SPF](http://www.openspf.org/) or
 *  [DKIM](http://www.dkim.org/). Deprecated to be complied with ApiLinter for
 *  Quantities. Use ip_count instead.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numIps;

/**
 *  The reputation category this IP reputation represents.
 *
 *  Likely values:
 *    @arg @c kGTLRPostmasterTools_IpReputation_Reputation_Bad History of
 *        sending an enormously high volume of spam. Mail coming from this
 *        entity will almost always be rejected at SMTP level or marked as spam.
 *        (Value: "BAD")
 *    @arg @c kGTLRPostmasterTools_IpReputation_Reputation_High Has a good track
 *        record of a very low spam rate, and complies with Gmail's sender
 *        guidelines. Mail will rarely be marked by the spam filter. (Value:
 *        "HIGH")
 *    @arg @c kGTLRPostmasterTools_IpReputation_Reputation_Low Known to send a
 *        considerable volume of spam regularly, and mail from this sender will
 *        likely be marked as spam. (Value: "LOW")
 *    @arg @c kGTLRPostmasterTools_IpReputation_Reputation_Medium Known to send
 *        good mail, but is prone to sending a low volume of spam
 *        intermittently. Most of the email from this entity will have a fair
 *        deliverability rate, except when there is a notable increase in spam
 *        levels. (Value: "MEDIUM")
 *    @arg @c kGTLRPostmasterTools_IpReputation_Reputation_ReputationCategoryUnspecified
 *        The default value which should never be used explicitly. This
 *        represents the state where no reputation information is available.
 *        (Value: "REPUTATION_CATEGORY_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *reputation;

/** A sample of IPs in this reputation category. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *sampleIps;

@end


/**
 *  Response message for ListDomains.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "domains" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRPostmasterTools_ListDomainsResponse : GTLRCollectionObject

/**
 *  The list of domains.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPostmasterTools_Domain *> *domains;

/**
 *  Token to retrieve the next page of results, or empty if there are no more
 *  results in the list.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response message for ListTrafficStats.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "trafficStats" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRPostmasterTools_ListTrafficStatsResponse : GTLRCollectionObject

/**
 *  Token to retrieve the next page of results, or empty if there are no more
 *  results in the list.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The list of TrafficStats.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPostmasterTools_TrafficStats *> *trafficStats;

@end


/**
 *  Email traffic statistics pertaining to a specific date.
 */
@interface GTLRPostmasterTools_TrafficStats : GTLRObject

/**
 *  Delivery errors for the domain. This metric only pertains to traffic that
 *  passed [SPF](http://www.openspf.org/) or [DKIM](http://www.dkim.org/).
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPostmasterTools_DeliveryError *> *deliveryErrors;

/**
 *  The ratio of mail that successfully authenticated with DKIM vs. all mail
 *  that attempted to authenticate with [DKIM](http://www.dkim.org/). Spoofed
 *  mail is excluded.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *dkimSuccessRatio;

/**
 *  The ratio of mail that passed [DMARC](https://dmarc.org/) alignment checks
 *  vs all mail received from the domain that successfully authenticated with
 *  either of [SPF](http://www.openspf.org/) or [DKIM](http://www.dkim.org/).
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *dmarcSuccessRatio;

/**
 *  Reputation of the domain.
 *
 *  Likely values:
 *    @arg @c kGTLRPostmasterTools_TrafficStats_DomainReputation_Bad History of
 *        sending an enormously high volume of spam. Mail coming from this
 *        entity will almost always be rejected at SMTP level or marked as spam.
 *        (Value: "BAD")
 *    @arg @c kGTLRPostmasterTools_TrafficStats_DomainReputation_High Has a good
 *        track record of a very low spam rate, and complies with Gmail's sender
 *        guidelines. Mail will rarely be marked by the spam filter. (Value:
 *        "HIGH")
 *    @arg @c kGTLRPostmasterTools_TrafficStats_DomainReputation_Low Known to
 *        send a considerable volume of spam regularly, and mail from this
 *        sender will likely be marked as spam. (Value: "LOW")
 *    @arg @c kGTLRPostmasterTools_TrafficStats_DomainReputation_Medium Known to
 *        send good mail, but is prone to sending a low volume of spam
 *        intermittently. Most of the email from this entity will have a fair
 *        deliverability rate, except when there is a notable increase in spam
 *        levels. (Value: "MEDIUM")
 *    @arg @c kGTLRPostmasterTools_TrafficStats_DomainReputation_ReputationCategoryUnspecified
 *        The default value which should never be used explicitly. This
 *        represents the state where no reputation information is available.
 *        (Value: "REPUTATION_CATEGORY_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *domainReputation;

/**
 *  The ratio of incoming mail (to Gmail), that passed secure transport (TLS) vs
 *  all mail received from that domain. This metric only pertains to traffic
 *  that passed [SPF](http://www.openspf.org/) or [DKIM](http://www.dkim.org/).
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *inboundEncryptionRatio;

/**
 *  Reputation information pertaining to the IP addresses of the email servers
 *  for the domain. There is exactly one entry for each reputation category
 *  except REPUTATION_CATEGORY_UNSPECIFIED.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPostmasterTools_IpReputation *> *ipReputations;

/**
 *  The resource name of the traffic statistics. Traffic statistic names have
 *  the form `domains/{domain}/trafficStats/{date}`, where domain_name is the
 *  fully qualified domain name (i.e., mymail.mydomain.com) of the domain this
 *  traffic statistics pertains to and date is the date in yyyymmdd format that
 *  these statistics corresponds to. For example:
 *  domains/mymail.mydomain.com/trafficStats/20160807
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The ratio of outgoing mail (from Gmail) that was accepted over secure
 *  transport (TLS).
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *outboundEncryptionRatio;

/**
 *  Spammy [Feedback loop identifiers]
 *  (https://support.google.com/mail/answer/6254652) with their individual spam
 *  rates. This metric only pertains to traffic that is authenticated by
 *  [DKIM](http://www.dkim.org/).
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPostmasterTools_FeedbackLoop *> *spammyFeedbackLoops;

/**
 *  The ratio of mail that successfully authenticated with SPF vs. all mail that
 *  attempted to authenticate with [SPF](http://www.openspf.org/). Spoofed mail
 *  is excluded.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *spfSuccessRatio;

/**
 *  The ratio of user-report spam vs. email that was sent to the inbox. This
 *  metric only pertains to emails authenticated by
 *  [DKIM](http://www.dkim.org/).
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *userReportedSpamRatio;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
