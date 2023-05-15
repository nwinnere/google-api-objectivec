// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Recommender API (recommender/v1)
// Documentation:
//   https://cloud.google.com/recommender/docs/

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

@class GTLRRecommender_GoogleCloudRecommenderV1CostProjection;
@class GTLRRecommender_GoogleCloudRecommenderV1Impact;
@class GTLRRecommender_GoogleCloudRecommenderV1Insight;
@class GTLRRecommender_GoogleCloudRecommenderV1Insight_Content;
@class GTLRRecommender_GoogleCloudRecommenderV1InsightRecommendationReference;
@class GTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo;
@class GTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_StateMetadata;
@class GTLRRecommender_GoogleCloudRecommenderV1MarkInsightAcceptedRequest_StateMetadata;
@class GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationClaimedRequest_StateMetadata;
@class GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationFailedRequest_StateMetadata;
@class GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationSucceededRequest_StateMetadata;
@class GTLRRecommender_GoogleCloudRecommenderV1Operation;
@class GTLRRecommender_GoogleCloudRecommenderV1Operation_PathFilters;
@class GTLRRecommender_GoogleCloudRecommenderV1Operation_PathValueMatchers;
@class GTLRRecommender_GoogleCloudRecommenderV1OperationGroup;
@class GTLRRecommender_GoogleCloudRecommenderV1Recommendation;
@class GTLRRecommender_GoogleCloudRecommenderV1RecommendationContent;
@class GTLRRecommender_GoogleCloudRecommenderV1RecommendationInsightReference;
@class GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo;
@class GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_StateMetadata;
@class GTLRRecommender_GoogleCloudRecommenderV1ValueMatcher;
@class GTLRRecommender_GoogleTypeMoney;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRRecommender_GoogleCloudRecommenderV1Impact.category

/**
 *  Default unspecified category. Don't use directly.
 *
 *  Value: "CATEGORY_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_CategoryUnspecified;
/**
 *  Indicates a potential increase or decrease in cost.
 *
 *  Value: "COST"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Cost;
/**
 *  Indicates a potential increase or decrease in manageability.
 *
 *  Value: "MANAGEABILITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Manageability;
/**
 *  Indicates a potential increase or decrease in performance.
 *
 *  Value: "PERFORMANCE"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Performance;
/**
 *  Indicates a potential increase or decrease in security.
 *
 *  Value: "SECURITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Security;

// ----------------------------------------------------------------------------
// GTLRRecommender_GoogleCloudRecommenderV1Insight.category

/**
 *  Unspecified category.
 *
 *  Value: "CATEGORY_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Insight_Category_CategoryUnspecified;
/**
 *  The insight is related to cost.
 *
 *  Value: "COST"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Insight_Category_Cost;
/**
 *  This insight is related to manageability.
 *
 *  Value: "MANAGEABILITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Insight_Category_Manageability;
/**
 *  The insight is related to performance.
 *
 *  Value: "PERFORMANCE"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Insight_Category_Performance;
/**
 *  The insight is related to security.
 *
 *  Value: "SECURITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1Insight_Category_Security;

// ----------------------------------------------------------------------------
// GTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo.state

/**
 *  Some action has been taken based on this insight. Insights become accepted
 *  when a recommendation derived from the insight has been marked CLAIMED,
 *  SUCCEEDED, or FAILED. ACTIVE insights can also be marked ACCEPTED
 *  explicitly. Content for ACCEPTED insights is immutable. ACCEPTED insights
 *  can only be marked ACCEPTED (which may update state metadata).
 *
 *  Value: "ACCEPTED"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_State_Accepted;
/**
 *  Insight is active. Content for ACTIVE insights can be updated by Google.
 *  ACTIVE insights can be marked DISMISSED OR ACCEPTED.
 *
 *  Value: "ACTIVE"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_State_Active;
/**
 *  Insight is dismissed. Content for DISMISSED insights can be updated by
 *  Google. DISMISSED insights can be marked as ACTIVE.
 *
 *  Value: "DISMISSED"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_State_Dismissed;
/**
 *  Unspecified state.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_State_StateUnspecified;

// ----------------------------------------------------------------------------
// GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo.state

/**
 *  Recommendation is active and can be applied. Recommendations content can be
 *  updated by Google. ACTIVE recommendations can be marked as CLAIMED,
 *  SUCCEEDED, or FAILED.
 *
 *  Value: "ACTIVE"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Active;
/**
 *  Recommendation is in claimed state. Recommendations content is immutable and
 *  cannot be updated by Google. CLAIMED recommendations can be marked as
 *  CLAIMED, SUCCEEDED, or FAILED.
 *
 *  Value: "CLAIMED"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Claimed;
/**
 *  Recommendation is in dismissed state. Recommendation content can be updated
 *  by Google. DISMISSED recommendations can be marked as ACTIVE.
 *
 *  Value: "DISMISSED"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Dismissed;
/**
 *  Recommendation is in failed state. Recommendations content is immutable and
 *  cannot be updated by Google. FAILED recommendations can be marked as
 *  SUCCEEDED, or FAILED.
 *
 *  Value: "FAILED"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Failed;
/**
 *  Default state. Don't use directly.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_StateUnspecified;
/**
 *  Recommendation is in succeeded state. Recommendations content is immutable
 *  and cannot be updated by Google. SUCCEEDED recommendations can be marked as
 *  SUCCEEDED, or FAILED.
 *
 *  Value: "SUCCEEDED"
 */
FOUNDATION_EXTERN NSString * const kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Succeeded;

/**
 *  Contains metadata about how much money a recommendation can save or incur.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1CostProjection : GTLRObject

/**
 *  An approximate projection on amount saved or amount incurred. Negative cost
 *  units indicate cost savings and positive cost units indicate increase. See
 *  google.type.Money documentation for positive/negative units.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleTypeMoney *cost;

/** Duration for which this cost applies. */
@property(nonatomic, strong, nullable) GTLRDuration *duration;

@end


/**
 *  Contains the impact a recommendation can have for a given category.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1Impact : GTLRObject

/**
 *  Category that is being targeted.
 *
 *  Likely values:
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_CategoryUnspecified
 *        Default unspecified category. Don't use directly. (Value:
 *        "CATEGORY_UNSPECIFIED")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Cost
 *        Indicates a potential increase or decrease in cost. (Value: "COST")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Manageability
 *        Indicates a potential increase or decrease in manageability. (Value:
 *        "MANAGEABILITY")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Performance
 *        Indicates a potential increase or decrease in performance. (Value:
 *        "PERFORMANCE")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1Impact_Category_Security
 *        Indicates a potential increase or decrease in security. (Value:
 *        "SECURITY")
 */
@property(nonatomic, copy, nullable) NSString *category;

/** Use with CategoryType.COST */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1CostProjection *costProjection;

@end


/**
 *  An insight along with the information used to derive the insight. The
 *  insight may have associated recomendations as well.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1Insight : GTLRObject

/** Recommendations derived from this insight. */
@property(nonatomic, strong, nullable) NSArray<GTLRRecommender_GoogleCloudRecommenderV1InsightRecommendationReference *> *associatedRecommendations;

/**
 *  Category being targeted by the insight.
 *
 *  Likely values:
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1Insight_Category_CategoryUnspecified
 *        Unspecified category. (Value: "CATEGORY_UNSPECIFIED")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1Insight_Category_Cost The
 *        insight is related to cost. (Value: "COST")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1Insight_Category_Manageability
 *        This insight is related to manageability. (Value: "MANAGEABILITY")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1Insight_Category_Performance
 *        The insight is related to performance. (Value: "PERFORMANCE")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1Insight_Category_Security
 *        The insight is related to security. (Value: "SECURITY")
 */
@property(nonatomic, copy, nullable) NSString *category;

/**
 *  A struct of custom fields to explain the insight. Example:
 *  "grantedPermissionsCount": "1000"
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1Insight_Content *content;

/**
 *  Free-form human readable summary in English. The maximum length is 500
 *  characters.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Fingerprint of the Insight. Provides optimistic locking when updating
 *  states.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Insight subtype. Insight content schema will be stable for a given subtype.
 */
@property(nonatomic, copy, nullable) NSString *insightSubtype;

/** Timestamp of the latest data used to generate the insight. */
@property(nonatomic, strong, nullable) GTLRDateTime *lastRefreshTime;

/** Name of the insight. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Observation period that led to the insight. The source data used to generate
 *  the insight ends at last_refresh_time and begins at (last_refresh_time -
 *  observation_period).
 */
@property(nonatomic, strong, nullable) GTLRDuration *observationPeriod;

/** Information state and metadata. */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo *stateInfo;

/** Fully qualified resource names that this insight is targeting. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *targetResources;

@end


/**
 *  A struct of custom fields to explain the insight. Example:
 *  "grantedPermissionsCount": "1000"
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1Insight_Content : GTLRObject
@end


/**
 *  Reference to an associated recommendation.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1InsightRecommendationReference : GTLRObject

/**
 *  Recommendation resource name, e.g.
 *  projects/[PROJECT_NUMBER]/locations/[LOCATION]/recommenders/[RECOMMENDER_ID]/recommendations/[RECOMMENDATION_ID]
 */
@property(nonatomic, copy, nullable) NSString *recommendation;

@end


/**
 *  Information related to insight state.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo : GTLRObject

/**
 *  Insight state.
 *
 *  Likely values:
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_State_Accepted
 *        Some action has been taken based on this insight. Insights become
 *        accepted when a recommendation derived from the insight has been
 *        marked CLAIMED, SUCCEEDED, or FAILED. ACTIVE insights can also be
 *        marked ACCEPTED explicitly. Content for ACCEPTED insights is
 *        immutable. ACCEPTED insights can only be marked ACCEPTED (which may
 *        update state metadata). (Value: "ACCEPTED")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_State_Active
 *        Insight is active. Content for ACTIVE insights can be updated by
 *        Google. ACTIVE insights can be marked DISMISSED OR ACCEPTED. (Value:
 *        "ACTIVE")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_State_Dismissed
 *        Insight is dismissed. Content for DISMISSED insights can be updated by
 *        Google. DISMISSED insights can be marked as ACTIVE. (Value:
 *        "DISMISSED")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_State_StateUnspecified
 *        Unspecified state. (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

/**
 *  A map of metadata for the state, provided by user or automations systems.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_StateMetadata *stateMetadata;

@end


/**
 *  A map of metadata for the state, provided by user or automations systems.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1InsightStateInfo_StateMetadata : GTLRObject
@end


/**
 *  Response to the `ListInsights` method.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "insights" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1ListInsightsResponse : GTLRCollectionObject

/**
 *  The set of insights for the `parent` resource.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRRecommender_GoogleCloudRecommenderV1Insight *> *insights;

/**
 *  A token that can be used to request the next page of results. This field is
 *  empty if there are no additional results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response to the `ListRecommendations` method.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "recommendations" property. If returned as the result of a query,
 *        it should support automatic pagination (when @c shouldFetchNextPages
 *        is enabled).
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1ListRecommendationsResponse : GTLRCollectionObject

/**
 *  A token that can be used to request the next page of results. This field is
 *  empty if there are no additional results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The set of recommendations for the `parent` resource.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRRecommender_GoogleCloudRecommenderV1Recommendation *> *recommendations;

@end


/**
 *  Request for the `MarkInsightAccepted` method.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1MarkInsightAcceptedRequest : GTLRObject

/** Required. Fingerprint of the Insight. Provides optimistic locking. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Optional. State properties user wish to include with this state. Full
 *  replace of the current state_metadata.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1MarkInsightAcceptedRequest_StateMetadata *stateMetadata;

@end


/**
 *  Optional. State properties user wish to include with this state. Full
 *  replace of the current state_metadata.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1MarkInsightAcceptedRequest_StateMetadata : GTLRObject
@end


/**
 *  Request for the `MarkRecommendationClaimed` Method.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationClaimedRequest : GTLRObject

/**
 *  Required. Fingerprint of the Recommendation. Provides optimistic locking.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  State properties to include with this state. Overwrites any existing
 *  `state_metadata`. Keys must match the regex /^a-z0-9{0,62}$/. Values must
 *  match the regex /^[a-zA-Z0-9_./-]{0,255}$/.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationClaimedRequest_StateMetadata *stateMetadata;

@end


/**
 *  State properties to include with this state. Overwrites any existing
 *  `state_metadata`. Keys must match the regex /^a-z0-9{0,62}$/. Values must
 *  match the regex /^[a-zA-Z0-9_./-]{0,255}$/.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationClaimedRequest_StateMetadata : GTLRObject
@end


/**
 *  Request for the `MarkRecommendationFailed` Method.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationFailedRequest : GTLRObject

/**
 *  Required. Fingerprint of the Recommendation. Provides optimistic locking.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  State properties to include with this state. Overwrites any existing
 *  `state_metadata`. Keys must match the regex /^a-z0-9{0,62}$/. Values must
 *  match the regex /^[a-zA-Z0-9_./-]{0,255}$/.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationFailedRequest_StateMetadata *stateMetadata;

@end


/**
 *  State properties to include with this state. Overwrites any existing
 *  `state_metadata`. Keys must match the regex /^a-z0-9{0,62}$/. Values must
 *  match the regex /^[a-zA-Z0-9_./-]{0,255}$/.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationFailedRequest_StateMetadata : GTLRObject
@end


/**
 *  Request for the `MarkRecommendationSucceeded` Method.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationSucceededRequest : GTLRObject

/**
 *  Required. Fingerprint of the Recommendation. Provides optimistic locking.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  State properties to include with this state. Overwrites any existing
 *  `state_metadata`. Keys must match the regex /^a-z0-9{0,62}$/. Values must
 *  match the regex /^[a-zA-Z0-9_./-]{0,255}$/.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationSucceededRequest_StateMetadata *stateMetadata;

@end


/**
 *  State properties to include with this state. Overwrites any existing
 *  `state_metadata`. Keys must match the regex /^a-z0-9{0,62}$/. Values must
 *  match the regex /^[a-zA-Z0-9_./-]{0,255}$/.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1MarkRecommendationSucceededRequest_StateMetadata : GTLRObject
@end


/**
 *  Contains an operation for a resource loosely based on the JSON-PATCH format
 *  with support for: * Custom filters for describing partial array patch. *
 *  Extended path values for describing nested arrays. * Custom fields for
 *  describing the resource for which the operation is being described. * Allows
 *  extension to custom operations not natively supported by RFC6902. See
 *  https://tools.ietf.org/html/rfc6902 for details on the original RFC.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1Operation : GTLRObject

/**
 *  Type of this operation. Contains one of 'and', 'remove', 'replace', 'move',
 *  'copy', 'test' and custom operations. This field is case-insensitive and
 *  always populated.
 */
@property(nonatomic, copy, nullable) NSString *action;

/**
 *  Path to the target field being operated on. If the operation is at the
 *  resource level, then path should be "/". This field is always populated.
 */
@property(nonatomic, copy, nullable) NSString *path;

/**
 *  Set of filters to apply if `path` refers to array elements or nested array
 *  elements in order to narrow down to a single unique element that is being
 *  tested/modified. This is intended to be an exact match per filter. To
 *  perform advanced matching, use path_value_matchers. * Example: { "/versions/
 *  * /name" : "it-123" "/versions/ * /targetSize/percent": 20 } * Example: {
 *  "/bindings/ * /role": "roles/admin" "/bindings/ * /condition" : null } *
 *  Example: { "/bindings/ * /role": "roles/admin" "/bindings/ * /members/ *" :
 *  ["x\@google.com", "y\@google.com"] } When both path_filters and
 *  path_value_matchers are set, an implicit AND must be performed.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1Operation_PathFilters *pathFilters;

/**
 *  Similar to path_filters, this contains set of filters to apply if `path`
 *  field referes to array elements. This is meant to support value matching
 *  beyond exact match. To perform exact match, use path_filters. When both
 *  path_filters and path_value_matchers are set, an implicit AND must be
 *  performed.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1Operation_PathValueMatchers *pathValueMatchers;

/**
 *  Contains the fully qualified resource name. This field is always populated.
 *  ex: //cloudresourcemanager.googleapis.com/projects/foo.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Type of GCP resource being modified/tested. This field is always populated.
 *  Example: cloudresourcemanager.googleapis.com/Project,
 *  compute.googleapis.com/Instance
 */
@property(nonatomic, copy, nullable) NSString *resourceType;

/**
 *  Can be set with action 'copy' or 'move' to indicate the source field within
 *  resource or source_resource, ignored if provided for other operation types.
 */
@property(nonatomic, copy, nullable) NSString *sourcePath;

/**
 *  Can be set with action 'copy' to copy resource configuration across
 *  different resources of the same type. Example: A resource clone can be done
 *  via action = 'copy', path = "/", from = "/", source_resource = and
 *  resource_name = . This field is empty for all other values of `action`.
 */
@property(nonatomic, copy, nullable) NSString *sourceResource;

/**
 *  Value for the `path` field. Will be set for actions:'add'/'replace'. Maybe
 *  set for action: 'test'. Either this or `value_matcher` will be set for
 *  'test' operation. An exact match must be performed.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id value;

/**
 *  Can be set for action 'test' for advanced matching for the value of 'path'
 *  field. Either this or `value` will be set for 'test' operation.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1ValueMatcher *valueMatcher;

@end


/**
 *  Set of filters to apply if `path` refers to array elements or nested array
 *  elements in order to narrow down to a single unique element that is being
 *  tested/modified. This is intended to be an exact match per filter. To
 *  perform advanced matching, use path_value_matchers. * Example: { "/versions/
 *  * /name" : "it-123" "/versions/ * /targetSize/percent": 20 } * Example: {
 *  "/bindings/ * /role": "roles/admin" "/bindings/ * /condition" : null } *
 *  Example: { "/bindings/ * /role": "roles/admin" "/bindings/ * /members/ *" :
 *  ["x\@google.com", "y\@google.com"] } When both path_filters and
 *  path_value_matchers are set, an implicit AND must be performed.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1Operation_PathFilters : GTLRObject
@end


/**
 *  Similar to path_filters, this contains set of filters to apply if `path`
 *  field referes to array elements. This is meant to support value matching
 *  beyond exact match. To perform exact match, use path_filters. When both
 *  path_filters and path_value_matchers are set, an implicit AND must be
 *  performed.
 *
 *  @note This class is documented as having more properties of
 *        GTLRRecommender_GoogleCloudRecommenderV1ValueMatcher. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1Operation_PathValueMatchers : GTLRObject
@end


/**
 *  Group of operations that need to be performed atomically.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1OperationGroup : GTLRObject

/**
 *  List of operations across one or more resources that belong to this group.
 *  Loosely based on RFC6902 and should be performed in the order they appear.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRRecommender_GoogleCloudRecommenderV1Operation *> *operations;

@end


/**
 *  A recommendation along with a suggested action. E.g., a rightsizing
 *  recommendation for an underutilized VM, IAM role recommendations, etc
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1Recommendation : GTLRObject

/**
 *  Optional set of additional impact that this recommendation may have when
 *  trying to optimize for the primary category. These may be positive or
 *  negative.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRRecommender_GoogleCloudRecommenderV1Impact *> *additionalImpact;

/** Insights that led to this recommendation. */
@property(nonatomic, strong, nullable) NSArray<GTLRRecommender_GoogleCloudRecommenderV1RecommendationInsightReference *> *associatedInsights;

/**
 *  Content of the recommendation describing recommended changes to resources.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1RecommendationContent *content;

/**
 *  Free-form human readable summary in English. The maximum length is 500
 *  characters.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Fingerprint of the Recommendation. Provides optimistic locking when updating
 *  states.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Last time this recommendation was refreshed by the system that created it in
 *  the first place.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *lastRefreshTime;

/** Name of recommendation. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The primary impact that this recommendation can have while trying to
 *  optimize for one category.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1Impact *primaryImpact;

/**
 *  Contains an identifier for a subtype of recommendations produced for the
 *  same recommender. Subtype is a function of content and impact, meaning a new
 *  subtype might be added when significant changes to `content` or
 *  `primary_impact.category` are introduced. See the Recommenders section to
 *  see a list of subtypes for a given Recommender. Examples: For recommender =
 *  "google.iam.policy.Recommender", recommender_subtype can be one of
 *  "REMOVE_ROLE"/"REPLACE_ROLE"
 */
@property(nonatomic, copy, nullable) NSString *recommenderSubtype;

/** Information for state. Contains state and metadata. */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo *stateInfo;

@end


/**
 *  Contains what resources are changing and how they are changing.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1RecommendationContent : GTLRObject

/**
 *  Operations to one or more Google Cloud resources grouped in such a way that,
 *  all operations within one group are expected to be performed atomically and
 *  in an order.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRRecommender_GoogleCloudRecommenderV1OperationGroup *> *operationGroups;

@end


/**
 *  Reference to an associated insight.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1RecommendationInsightReference : GTLRObject

/**
 *  Insight resource name, e.g.
 *  projects/[PROJECT_NUMBER]/locations/[LOCATION]/insightTypes/[INSIGHT_TYPE_ID]/insights/[INSIGHT_ID]
 */
@property(nonatomic, copy, nullable) NSString *insight;

@end


/**
 *  Information for state. Contains state and metadata.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo : GTLRObject

/**
 *  The state of the recommendation, Eg ACTIVE, SUCCEEDED, FAILED.
 *
 *  Likely values:
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Active
 *        Recommendation is active and can be applied. Recommendations content
 *        can be updated by Google. ACTIVE recommendations can be marked as
 *        CLAIMED, SUCCEEDED, or FAILED. (Value: "ACTIVE")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Claimed
 *        Recommendation is in claimed state. Recommendations content is
 *        immutable and cannot be updated by Google. CLAIMED recommendations can
 *        be marked as CLAIMED, SUCCEEDED, or FAILED. (Value: "CLAIMED")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Dismissed
 *        Recommendation is in dismissed state. Recommendation content can be
 *        updated by Google. DISMISSED recommendations can be marked as ACTIVE.
 *        (Value: "DISMISSED")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Failed
 *        Recommendation is in failed state. Recommendations content is
 *        immutable and cannot be updated by Google. FAILED recommendations can
 *        be marked as SUCCEEDED, or FAILED. (Value: "FAILED")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_StateUnspecified
 *        Default state. Don't use directly. (Value: "STATE_UNSPECIFIED")
 *    @arg @c kGTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_State_Succeeded
 *        Recommendation is in succeeded state. Recommendations content is
 *        immutable and cannot be updated by Google. SUCCEEDED recommendations
 *        can be marked as SUCCEEDED, or FAILED. (Value: "SUCCEEDED")
 */
@property(nonatomic, copy, nullable) NSString *state;

/**
 *  A map of metadata for the state, provided by user or automations systems.
 */
@property(nonatomic, strong, nullable) GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_StateMetadata *stateMetadata;

@end


/**
 *  A map of metadata for the state, provided by user or automations systems.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1RecommendationStateInfo_StateMetadata : GTLRObject
@end


/**
 *  Contains various matching options for values for a GCP resource field.
 */
@interface GTLRRecommender_GoogleCloudRecommenderV1ValueMatcher : GTLRObject

/**
 *  To be used for full regex matching. The regular expression is using the
 *  Google RE2 syntax (https://github.com/google/re2/wiki/Syntax), so to be used
 *  with RE2::FullMatch
 */
@property(nonatomic, copy, nullable) NSString *matchesPattern;

@end


/**
 *  Represents an amount of money with its currency type.
 */
@interface GTLRRecommender_GoogleTypeMoney : GTLRObject

/** The three-letter currency code defined in ISO 4217. */
@property(nonatomic, copy, nullable) NSString *currencyCode;

/**
 *  Number of nano (10^-9) units of the amount. The value must be between
 *  -999,999,999 and +999,999,999 inclusive. If `units` is positive, `nanos`
 *  must be positive or zero. If `units` is zero, `nanos` can be positive, zero,
 *  or negative. If `units` is negative, `nanos` must be negative or zero. For
 *  example $-1.75 is represented as `units`=-1 and `nanos`=-750,000,000.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *nanos;

/**
 *  The whole units of the amount. For example if `currencyCode` is `"USD"`,
 *  then 1 unit is one US dollar.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *units;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
