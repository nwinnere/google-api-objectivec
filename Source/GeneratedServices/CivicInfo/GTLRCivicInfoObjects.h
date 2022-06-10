// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Civic Information API (civicinfo/v2)
// Description:
//   Provides polling places, early vote locations, contest data, election
//   officials, and government representatives for U.S. residential addresses.
// Documentation:
//   https://developers.google.com/civic-information

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCivicInfo_AdministrationRegion;
@class GTLRCivicInfo_AdministrativeBody;
@class GTLRCivicInfo_Candidate;
@class GTLRCivicInfo_Channel;
@class GTLRCivicInfo_Contest;
@class GTLRCivicInfo_ContextParams;
@class GTLRCivicInfo_DivisionSearchResult;
@class GTLRCivicInfo_Election;
@class GTLRCivicInfo_ElectionOfficial;
@class GTLRCivicInfo_ElectoralDistrict;
@class GTLRCivicInfo_GeographicDivision;
@class GTLRCivicInfo_Office;
@class GTLRCivicInfo_Official;
@class GTLRCivicInfo_PollingLocation;
@class GTLRCivicInfo_PostalAddress;
@class GTLRCivicInfo_RepresentativeInfoData_Divisions;
@class GTLRCivicInfo_RepresentativeInfoResponse_Divisions;
@class GTLRCivicInfo_SimpleAddressType;
@class GTLRCivicInfo_Source;
@class GTLRCivicInfo_VoterInfoRequest;
@class GTLRCivicInfo_VoterInfoResponse;
@class GTLRCivicInfo_VoterInfoSegmentResult;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Describes information about a regional election administrative area.
 */
@interface GTLRCivicInfo_AdministrationRegion : GTLRObject

/** The election administration body for this area. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_AdministrativeBody *electionAdministrationBody;

/**
 *  An ID for this object. IDs may change in future requests and should not be
 *  cached. Access to this field requires special access that can be requested
 *  from the Request more link on the Quotas page.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The city or county that provides election information for this voter. This
 *  object can have the same elements as state.
 */
@property(nonatomic, strong, nullable) GTLRCivicInfo_AdministrationRegion *localJurisdiction;

/** The name of the jurisdiction. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  A list of sources for this area. If multiple sources are listed the data has
 *  been aggregated from those sources.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Source *> *sources;

@end


/**
 *  Information about an election administrative body (e.g. County Board of
 *  Elections).
 */
@interface GTLRCivicInfo_AdministrativeBody : GTLRObject

/**
 *  A URL provided by this administrative body for information on absentee
 *  voting.
 */
@property(nonatomic, copy, nullable) NSString *absenteeVotingInfoUrl;

@property(nonatomic, strong, nullable) NSArray<NSString *> *addressLines;

/**
 *  A URL provided by this administrative body to give contest information to
 *  the voter.
 */
@property(nonatomic, copy, nullable) NSString *ballotInfoUrl;

/** The mailing address of this administrative body. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SimpleAddressType *correspondenceAddress;

/**
 *  A URL provided by this administrative body for looking up general election
 *  information.
 */
@property(nonatomic, copy, nullable) NSString *electionInfoUrl;

/** The election officials for this election administrative body. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_ElectionOfficial *> *electionOfficials;

/**
 *  A URL provided by this administrative body for confirming that the voter is
 *  registered to vote.
 */
@property(nonatomic, copy, nullable) NSString *electionRegistrationConfirmationUrl;

/**
 *  A URL provided by this administrative body for looking up how to register to
 *  vote.
 */
@property(nonatomic, copy, nullable) NSString *electionRegistrationUrl;

/**
 *  A URL provided by this administrative body describing election rules to the
 *  voter.
 */
@property(nonatomic, copy, nullable) NSString *electionRulesUrl;

/** A description of the hours of operation for this administrative body. */
@property(nonatomic, copy, nullable) NSString *hoursOfOperation;

/** The name of this election administrative body. */
@property(nonatomic, copy, nullable) NSString *name;

/** The physical address of this administrative body. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SimpleAddressType *physicalAddress;

/** A description of the services this administrative body may provide. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *voterServices;

/**
 *  A URL provided by this administrative body for looking up where to vote.
 */
@property(nonatomic, copy, nullable) NSString *votingLocationFinderUrl;

@end


/**
 *  Information about a candidate running for elected office.
 */
@interface GTLRCivicInfo_Candidate : GTLRObject

/** The URL for the candidate's campaign web site. */
@property(nonatomic, copy, nullable) NSString *candidateUrl;

/** A list of known (social) media channels for this candidate. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Channel *> *channels;

/** The email address for the candidate's campaign. */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  The candidate's name. If this is a joint ticket it will indicate the name of
 *  the candidate at the top of a ticket followed by a / and that name of
 *  candidate at the bottom of the ticket. e.g. "Mitt Romney / Paul Ryan"
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The order the candidate appears on the ballot for this contest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *orderOnBallot;

/** The full name of the party the candidate is a member of. */
@property(nonatomic, copy, nullable) NSString *party;

/** The voice phone number for the candidate's campaign office. */
@property(nonatomic, copy, nullable) NSString *phone;

/** A URL for a photo of the candidate. */
@property(nonatomic, copy, nullable) NSString *photoUrl;

@end


/**
 *  A social media or web channel for a candidate.
 */
@interface GTLRCivicInfo_Channel : GTLRObject

/**
 *  The unique public identifier for the candidate's channel.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The type of channel. The following is a list of types of channels, but is
 *  not exhaustive. More channel types may be added at a later time. One of:
 *  GooglePlus, YouTube, Facebook, Twitter
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Information about a contest that appears on a voter's ballot.
 */
@interface GTLRCivicInfo_Contest : GTLRObject

/**
 *  A number specifying the position of this contest on the voter's ballot.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *ballotPlacement;

/**
 *  The official title on the ballot for this contest, only where available.
 */
@property(nonatomic, copy, nullable) NSString *ballotTitle;

/** The candidate choices for this contest. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Candidate *> *candidates;

/** Information about the electoral district that this contest is in. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_ElectoralDistrict *district;

/**
 *  A description of any additional eligibility requirements for voting in this
 *  contest.
 */
@property(nonatomic, copy, nullable) NSString *electorateSpecifications;

/**
 *  An ID for this object. IDs may change in future requests and should not be
 *  cached. Access to this field requires special access that can be requested
 *  from the Request more link on the Quotas page.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The levels of government of the office for this contest. There may be more
 *  than one in cases where a jurisdiction effectively acts at two different
 *  levels of government; for example, the mayor of the District of Columbia
 *  acts at "locality" level, but also effectively at both
 *  "administrative-area-2" and "administrative-area-1".
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *level;

/**
 *  The number of candidates that will be elected to office in this contest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numberElected;

/**
 *  The number of candidates that a voter may vote for in this contest.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numberVotingFor;

/** The name of the office for this contest. */
@property(nonatomic, copy, nullable) NSString *office;

/** If this is a partisan election, the name of the party it is for. */
@property(nonatomic, copy, nullable) NSString *primaryParty;

/**
 *  The set of ballot responses for the referendum. A ballot response represents
 *  a line on the ballot. Common examples might include "yes" or "no" for
 *  referenda. This field is only populated for contests of type 'Referendum'.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *referendumBallotResponses;

/**
 *  Specifies a short summary of the referendum that is typically on the ballot
 *  below the title but above the text. This field is only populated for
 *  contests of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumBrief;

/**
 *  A statement in opposition to the referendum. It does not necessarily appear
 *  on the ballot. This field is only populated for contests of type
 *  'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumConStatement;

/**
 *  Specifies what effect abstaining (not voting) on the proposition will have
 *  (i.e. whether abstaining is considered a vote against it). This field is
 *  only populated for contests of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumEffectOfAbstain;

/**
 *  The threshold of votes that the referendum needs in order to pass, e.g.
 *  "two-thirds". This field is only populated for contests of type
 *  'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumPassageThreshold;

/**
 *  A statement in favor of the referendum. It does not necessarily appear on
 *  the ballot. This field is only populated for contests of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumProStatement;

/**
 *  A brief description of the referendum. This field is only populated for
 *  contests of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumSubtitle;

/**
 *  The full text of the referendum. This field is only populated for contests
 *  of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumText;

/**
 *  The title of the referendum (e.g. 'Proposition 42'). This field is only
 *  populated for contests of type 'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumTitle;

/**
 *  A link to the referendum. This field is only populated for contests of type
 *  'Referendum'.
 */
@property(nonatomic, copy, nullable) NSString *referendumUrl;

/** The roles which this office fulfills. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *roles;

/**
 *  A list of sources for this contest. If multiple sources are listed, the data
 *  has been aggregated from those sources.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Source *> *sources;

/**
 *  "Yes" or "No" depending on whether this a contest being held outside the
 *  normal election cycle.
 */
@property(nonatomic, copy, nullable) NSString *special;

/**
 *  The type of contest. Usually this will be 'General', 'Primary', or 'Run-off'
 *  for contests with candidates. For referenda this will be 'Referendum'. For
 *  Retention contests this will typically be 'Retention'.
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRCivicInfo_ContextParams
 */
@interface GTLRCivicInfo_ContextParams : GTLRObject

@property(nonatomic, copy, nullable) NSString *clientProfile;

@end


/**
 *  A request to look up representative information for a single division.
 */
@interface GTLRCivicInfo_DivisionRepresentativeInfoRequest : GTLRObject

@property(nonatomic, strong, nullable) GTLRCivicInfo_ContextParams *contextParams;

@end


/**
 *  A search request for political geographies.
 */
@interface GTLRCivicInfo_DivisionSearchRequest : GTLRObject

@property(nonatomic, strong, nullable) GTLRCivicInfo_ContextParams *contextParams;

@end


/**
 *  The result of a division search query.
 */
@interface GTLRCivicInfo_DivisionSearchResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "civicinfo#divisionSearchResponse".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_DivisionSearchResult *> *results;

@end


/**
 *  Represents a political geographic division that matches the requested query.
 */
@interface GTLRCivicInfo_DivisionSearchResult : GTLRObject

/**
 *  Other Open Civic Data identifiers that refer to the same division -- for
 *  example, those that refer to other political divisions whose boundaries are
 *  defined to be coterminous with this one. For example,
 *  ocd-division/country:us/state:wy will include an alias of
 *  ocd-division/country:us/state:wy/cd:1, since Wyoming has only one
 *  Congressional district.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *aliases;

/** The name of the division. */
@property(nonatomic, copy, nullable) NSString *name;

/** The unique Open Civic Data identifier for this division. */
@property(nonatomic, copy, nullable) NSString *ocdId;

@end


/**
 *  Information about the election that was queried.
 */
@interface GTLRCivicInfo_Election : GTLRObject

/** Day of the election in YYYY-MM-DD format. */
@property(nonatomic, copy, nullable) NSString *electionDay;

/**
 *  The unique ID of this election.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *identifier;

/** A displayable name for the election. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The political division of the election. Represented as an OCD Division ID.
 *  Voters within these political jurisdictions are covered by this election.
 *  This is typically a state such as ocd-division/country:us/state:ca or for
 *  the midterms or general election the entire US (i.e.
 *  ocd-division/country:us).
 */
@property(nonatomic, copy, nullable) NSString *ocdDivisionId;

@end


/**
 *  Information about individual election officials.
 */
@interface GTLRCivicInfo_ElectionOfficial : GTLRObject

/** The email address of the election official. */
@property(nonatomic, copy, nullable) NSString *emailAddress;

/** The fax number of the election official. */
@property(nonatomic, copy, nullable) NSString *faxNumber;

/** The full name of the election official. */
@property(nonatomic, copy, nullable) NSString *name;

/** The office phone number of the election official. */
@property(nonatomic, copy, nullable) NSString *officePhoneNumber;

/** The title of the election official. */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  GTLRCivicInfo_ElectionsQueryRequest
 */
@interface GTLRCivicInfo_ElectionsQueryRequest : GTLRObject

@property(nonatomic, strong, nullable) GTLRCivicInfo_ContextParams *contextParams;

@end


/**
 *  The list of elections available for this version of the API.
 */
@interface GTLRCivicInfo_ElectionsQueryResponse : GTLRObject

/** A list of available elections */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Election *> *elections;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "civicinfo#electionsQueryResponse".
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  Describes the geographic scope of a contest.
 */
@interface GTLRCivicInfo_ElectoralDistrict : GTLRObject

/**
 *  An identifier for this district, relative to its scope. For example, the
 *  34th State Senate district would have id "34" and a scope of stateUpper.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

@property(nonatomic, copy, nullable) NSString *kgForeignKey;

/** The name of the district. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The geographic scope of this district. If unspecified the district's
 *  geography is not known. One of: national, statewide, congressional,
 *  stateUpper, stateLower, countywide, judicial, schoolBoard, cityWide,
 *  township, countyCouncil, cityCouncil, ward, special
 */
@property(nonatomic, copy, nullable) NSString *scope;

@end


/**
 *  Describes a political geography.
 */
@interface GTLRCivicInfo_GeographicDivision : GTLRObject

/**
 *  Any other valid OCD IDs that refer to the same division.
 *  Because OCD IDs are meant to be human-readable and at least somewhat
 *  predictable, there are occasionally several identifiers for a single
 *  division. These identifiers are defined to be equivalent to one another, and
 *  one is always indicated as the primary identifier. The primary identifier
 *  will be returned in ocd_id above, and any other equivalent valid identifiers
 *  will be returned in this list.
 *  For example, if this division's OCD ID is
 *  ocd-division/country:us/district:dc, this will contain
 *  ocd-division/country:us/state:dc.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *alsoKnownAs;

/** The name of the division. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  List of indices in the offices array, one for each office elected from this
 *  division. Will only be present if includeOffices was true (or absent) in the
 *  request.
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *officeIndices;

@end


/**
 *  Information about an Office held by one or more Officials.
 */
@interface GTLRCivicInfo_Office : GTLRObject

/** The OCD ID of the division with which this office is associated. */
@property(nonatomic, copy, nullable) NSString *divisionId;

/**
 *  The levels of government of which this office is part. There may be more
 *  than one in cases where a jurisdiction effectively acts at two different
 *  levels of government; for example, the mayor of the District of Columbia
 *  acts at "locality" level, but also effectively at both
 *  "administrative-area-2" and "administrative-area-1".
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *levels;

/** The human-readable name of the office. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  List of indices in the officials array of people who presently hold this
 *  office.
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *officialIndices;

/**
 *  The roles which this office fulfills. Roles are not meant to be exhaustive,
 *  or to exactly specify the entire set of responsibilities of a given office,
 *  but are meant to be rough categories that are useful for general selection
 *  from or sorting of a list of offices.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *roles;

/**
 *  A list of sources for this office. If multiple sources are listed, the data
 *  has been aggregated from those sources.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Source *> *sources;

@end


/**
 *  Information about a person holding an elected office.
 */
@interface GTLRCivicInfo_Official : GTLRObject

/** Addresses at which to contact the official. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_SimpleAddressType *> *address;

/** A list of known (social) media channels for this official. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Channel *> *channels;

/** The direct email addresses for the official. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *emails;

/** The official's name. */
@property(nonatomic, copy, nullable) NSString *name;

/** The full name of the party the official belongs to. */
@property(nonatomic, copy, nullable) NSString *party;

/** The official's public contact phone numbers. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *phones;

/** A URL for a photo of the official. */
@property(nonatomic, copy, nullable) NSString *photoUrl;

/** The official's public website URLs. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *urls;

@end


/**
 *  A location where a voter can vote. This may be an early vote site, an
 *  election day voting location, or a drop off location for a completed ballot.
 */
@interface GTLRCivicInfo_PollingLocation : GTLRObject

/** The address of the location. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SimpleAddressType *address;

/**
 *  The last date that this early vote site or drop off location may be used.
 *  This field is not populated for polling locations.
 */
@property(nonatomic, copy, nullable) NSString *endDate;

/**
 *  An ID for this object. IDs may change in future requests and should not be
 *  cached. Access to this field requires special access that can be requested
 *  from the Request more link on the Quotas page.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  The name of the early vote site or drop off location. This field is not
 *  populated for polling locations.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Notes about this location (e.g. accessibility ramp or entrance to use). */
@property(nonatomic, copy, nullable) NSString *notes;

/** A description of when this location is open. */
@property(nonatomic, copy, nullable) NSString *pollingHours;

/**
 *  A list of sources for this location. If multiple sources are listed the data
 *  has been aggregated from those sources.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Source *> *sources;

/**
 *  The first date that this early vote site or drop off location may be used.
 *  This field is not populated for polling locations.
 */
@property(nonatomic, copy, nullable) NSString *startDate;

/**
 *  The services provided by this early vote site or drop off location. This
 *  field is not populated for polling locations.
 */
@property(nonatomic, copy, nullable) NSString *voterServices;

@end


/**
 *  GTLRCivicInfo_PostalAddress
 */
@interface GTLRCivicInfo_PostalAddress : GTLRObject

@property(nonatomic, strong, nullable) NSArray<NSString *> *addressLines;
@property(nonatomic, copy, nullable) NSString *administrativeAreaName;
@property(nonatomic, copy, nullable) NSString *countryName;
@property(nonatomic, copy, nullable) NSString *countryNameCode;
@property(nonatomic, copy, nullable) NSString *dependentLocalityName;
@property(nonatomic, copy, nullable) NSString *dependentThoroughfareName;
@property(nonatomic, copy, nullable) NSString *firmName;

/**
 *  isDisputed
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isDisputed;

@property(nonatomic, copy, nullable) NSString *languageCode;
@property(nonatomic, copy, nullable) NSString *localityName;
@property(nonatomic, copy, nullable) NSString *postalCodeNumber;
@property(nonatomic, copy, nullable) NSString *postalCodeNumberExtension;
@property(nonatomic, copy, nullable) NSString *postBoxNumber;
@property(nonatomic, copy, nullable) NSString *premiseName;
@property(nonatomic, copy, nullable) NSString *recipientName;
@property(nonatomic, copy, nullable) NSString *sortingCode;
@property(nonatomic, copy, nullable) NSString *subAdministrativeAreaName;
@property(nonatomic, copy, nullable) NSString *subPremiseName;
@property(nonatomic, copy, nullable) NSString *thoroughfareName;
@property(nonatomic, copy, nullable) NSString *thoroughfareNumber;

@end


/**
 *  GTLRCivicInfo_RepresentativeInfoData
 */
@interface GTLRCivicInfo_RepresentativeInfoData : GTLRObject

/** Political geographic divisions that contain the requested address. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_RepresentativeInfoData_Divisions *divisions;

/**
 *  Elected offices referenced by the divisions listed above. Will only be
 *  present if includeOffices was true in the request.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Office *> *offices;

/**
 *  Officials holding the offices listed above. Will only be present if
 *  includeOffices was true in the request.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Official *> *officials;

@end


/**
 *  Political geographic divisions that contain the requested address.
 *
 *  @note This class is documented as having more properties of
 *        GTLRCivicInfo_GeographicDivision. Use @c -additionalJSONKeys and @c
 *        -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRCivicInfo_RepresentativeInfoData_Divisions : GTLRObject
@end


/**
 *  A request for political geography and representative information for an
 *  address.
 */
@interface GTLRCivicInfo_RepresentativeInfoRequest : GTLRObject

@property(nonatomic, strong, nullable) GTLRCivicInfo_ContextParams *contextParams;

@end


/**
 *  The result of a representative info lookup query.
 */
@interface GTLRCivicInfo_RepresentativeInfoResponse : GTLRObject

/** Political geographic divisions that contain the requested address. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_RepresentativeInfoResponse_Divisions *divisions;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "civicinfo#representativeInfoResponse".
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The normalized version of the requested address */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SimpleAddressType *normalizedInput;

/**
 *  Elected offices referenced by the divisions listed above. Will only be
 *  present if includeOffices was true in the request.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Office *> *offices;

/**
 *  Officials holding the offices listed above. Will only be present if
 *  includeOffices was true in the request.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Official *> *officials;

@end


/**
 *  Political geographic divisions that contain the requested address.
 *
 *  @note This class is documented as having more properties of
 *        GTLRCivicInfo_GeographicDivision. Use @c -additionalJSONKeys and @c
 *        -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRCivicInfo_RepresentativeInfoResponse_Divisions : GTLRObject
@end


/**
 *  A simple representation of an address.
 */
@interface GTLRCivicInfo_SimpleAddressType : GTLRObject

/** The city or town for the address. */
@property(nonatomic, copy, nullable) NSString *city;

/** The street name and number of this address. */
@property(nonatomic, copy, nullable) NSString *line1;

/** The second line the address, if needed. */
@property(nonatomic, copy, nullable) NSString *line2;

/** The third line of the address, if needed. */
@property(nonatomic, copy, nullable) NSString *line3;

/** The name of the location. */
@property(nonatomic, copy, nullable) NSString *locationName;

/** The US two letter state abbreviation of the address. */
@property(nonatomic, copy, nullable) NSString *state;

/** The US Postal Zip Code of the address. */
@property(nonatomic, copy, nullable) NSString *zip;

@end


/**
 *  Contains information about the data source for the element containing it.
 */
@interface GTLRCivicInfo_Source : GTLRObject

/** The name of the data source. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Whether this data comes from an official government source.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *official;

@end


/**
 *  A request for information about a voter.
 */
@interface GTLRCivicInfo_VoterInfoRequest : GTLRObject

@property(nonatomic, strong, nullable) GTLRCivicInfo_ContextParams *contextParams;
@property(nonatomic, strong, nullable) GTLRCivicInfo_VoterInfoSegmentResult *voterInfoSegmentResult;

@end


/**
 *  The result of a voter info lookup query.
 */
@interface GTLRCivicInfo_VoterInfoResponse : GTLRObject

/** Contests that will appear on the voter's ballot. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Contest *> *contests;

/**
 *  Locations where a voter is eligible to drop off a completed ballot. The
 *  voter must have received and completed a ballot prior to arriving at the
 *  location. The location may not have ballots available on the premises. These
 *  locations could be open on or before election day as indicated in the
 *  pollingHours field.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_PollingLocation *> *dropOffLocations;

/**
 *  Locations where the voter is eligible to vote early, prior to election day.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_PollingLocation *> *earlyVoteSites;

/** The election that was queried. */
@property(nonatomic, strong, nullable) GTLRCivicInfo_Election *election;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "civicinfo#voterInfoResponse".
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Specifies whether voters in the precinct vote only by mailing their ballots
 *  (with the possible option of dropping off their ballots as well).
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *mailOnly;

/** The normalized version of the requested address */
@property(nonatomic, strong, nullable) GTLRCivicInfo_SimpleAddressType *normalizedInput;

/**
 *  When there are multiple elections for a voter address, the otherElections
 *  field is populated in the API response and there are two possibilities: 1.
 *  If the earliest election is not the intended election, specify the election
 *  ID of the desired election in a second API request using the electionId
 *  field. 2. If these elections occur on the same day, the API doesn?t return
 *  any polling location, contest, or election official information to ensure
 *  that an additional query is made. For user-facing applications, we recommend
 *  displaying these elections to the user to disambiguate. A second API request
 *  using the electionId field should be made for the election that is relevant
 *  to the user.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_Election *> *otherElections;

/** Locations where the voter is eligible to vote on election day. */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_PollingLocation *> *pollingLocations;

@property(nonatomic, copy, nullable) NSString *precinctId;

/**
 *  Local Election Information for the state that the voter votes in. For the
 *  US, there will only be one element in this array.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCivicInfo_AdministrationRegion *> *state;

@end


/**
 *  GTLRCivicInfo_VoterInfoSegmentResult
 */
@interface GTLRCivicInfo_VoterInfoSegmentResult : GTLRObject

/**
 *  generatedMillis
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *generatedMillis;

@property(nonatomic, strong, nullable) GTLRCivicInfo_PostalAddress *postalAddress;
@property(nonatomic, strong, nullable) GTLRCivicInfo_VoterInfoRequest *request;
@property(nonatomic, strong, nullable) GTLRCivicInfo_VoterInfoResponse *response;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
