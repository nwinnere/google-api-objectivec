// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Civic Information API (civicinfo/v2)
// Description:
//   Provides polling places, early vote locations, contest data, election
//   officials, and government representatives for U.S. residential addresses.
// Documentation:
//   https://developers.google.com/civic-information/

#import "GTLRCivicInfoObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCivicInfo_Contest.level
NSString * const kGTLRCivicInfo_Contest_Level_AdministrativeArea1 = @"administrativeArea1";
NSString * const kGTLRCivicInfo_Contest_Level_AdministrativeArea2 = @"administrativeArea2";
NSString * const kGTLRCivicInfo_Contest_Level_Country          = @"country";
NSString * const kGTLRCivicInfo_Contest_Level_International    = @"international";
NSString * const kGTLRCivicInfo_Contest_Level_Locality         = @"locality";
NSString * const kGTLRCivicInfo_Contest_Level_Regional         = @"regional";
NSString * const kGTLRCivicInfo_Contest_Level_Special          = @"special";
NSString * const kGTLRCivicInfo_Contest_Level_SubLocality1     = @"subLocality1";
NSString * const kGTLRCivicInfo_Contest_Level_SubLocality2     = @"subLocality2";

// GTLRCivicInfo_Contest.roles
NSString * const kGTLRCivicInfo_Contest_Roles_DeputyHeadOfGovernment = @"deputyHeadOfGovernment";
NSString * const kGTLRCivicInfo_Contest_Roles_ExecutiveCouncil = @"executiveCouncil";
NSString * const kGTLRCivicInfo_Contest_Roles_GovernmentOfficer = @"governmentOfficer";
NSString * const kGTLRCivicInfo_Contest_Roles_HeadOfGovernment = @"headOfGovernment";
NSString * const kGTLRCivicInfo_Contest_Roles_HeadOfState      = @"headOfState";
NSString * const kGTLRCivicInfo_Contest_Roles_HighestCourtJudge = @"highestCourtJudge";
NSString * const kGTLRCivicInfo_Contest_Roles_Judge            = @"judge";
NSString * const kGTLRCivicInfo_Contest_Roles_LegislatorLowerBody = @"legislatorLowerBody";
NSString * const kGTLRCivicInfo_Contest_Roles_LegislatorUpperBody = @"legislatorUpperBody";
NSString * const kGTLRCivicInfo_Contest_Roles_SchoolBoard      = @"schoolBoard";
NSString * const kGTLRCivicInfo_Contest_Roles_SpecialPurposeOfficer = @"specialPurposeOfficer";

// GTLRCivicInfo_ElectoralDistrict.scope
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_CityCouncil = @"cityCouncil";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_Citywide = @"citywide";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_Congressional = @"congressional";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_CountyCouncil = @"countyCouncil";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_Countywide = @"countywide";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_Judicial = @"judicial";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_National = @"national";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_SchoolBoard = @"schoolBoard";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_Special = @"special";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_StateLower = @"stateLower";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_StateUpper = @"stateUpper";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_Statewide = @"statewide";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_Township = @"township";
NSString * const kGTLRCivicInfo_ElectoralDistrict_Scope_Ward   = @"ward";

// GTLRCivicInfo_Office.levels
NSString * const kGTLRCivicInfo_Office_Levels_AdministrativeArea1 = @"administrativeArea1";
NSString * const kGTLRCivicInfo_Office_Levels_AdministrativeArea2 = @"administrativeArea2";
NSString * const kGTLRCivicInfo_Office_Levels_Country          = @"country";
NSString * const kGTLRCivicInfo_Office_Levels_International    = @"international";
NSString * const kGTLRCivicInfo_Office_Levels_Locality         = @"locality";
NSString * const kGTLRCivicInfo_Office_Levels_Regional         = @"regional";
NSString * const kGTLRCivicInfo_Office_Levels_Special          = @"special";
NSString * const kGTLRCivicInfo_Office_Levels_SubLocality1     = @"subLocality1";
NSString * const kGTLRCivicInfo_Office_Levels_SubLocality2     = @"subLocality2";

// GTLRCivicInfo_Office.roles
NSString * const kGTLRCivicInfo_Office_Roles_DeputyHeadOfGovernment = @"deputyHeadOfGovernment";
NSString * const kGTLRCivicInfo_Office_Roles_ExecutiveCouncil  = @"executiveCouncil";
NSString * const kGTLRCivicInfo_Office_Roles_GovernmentOfficer = @"governmentOfficer";
NSString * const kGTLRCivicInfo_Office_Roles_HeadOfGovernment  = @"headOfGovernment";
NSString * const kGTLRCivicInfo_Office_Roles_HeadOfState       = @"headOfState";
NSString * const kGTLRCivicInfo_Office_Roles_HighestCourtJudge = @"highestCourtJudge";
NSString * const kGTLRCivicInfo_Office_Roles_Judge             = @"judge";
NSString * const kGTLRCivicInfo_Office_Roles_LegislatorLowerBody = @"legislatorLowerBody";
NSString * const kGTLRCivicInfo_Office_Roles_LegislatorUpperBody = @"legislatorUpperBody";
NSString * const kGTLRCivicInfo_Office_Roles_SchoolBoard       = @"schoolBoard";
NSString * const kGTLRCivicInfo_Office_Roles_SpecialPurposeOfficer = @"specialPurposeOfficer";

// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_AdministrationRegion
//

@implementation GTLRCivicInfo_AdministrationRegion
@dynamic electionAdministrationBody, localJurisdiction, name, sources;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"localJurisdiction" : @"local_jurisdiction" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sources" : [GTLRCivicInfo_Source class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_AdministrativeBody
//

@implementation GTLRCivicInfo_AdministrativeBody
@dynamic absenteeVotingInfoUrl, ballotInfoUrl, correspondenceAddress,
         electionInfoUrl, electionNoticeText, electionNoticeUrl,
         electionOfficials, electionRegistrationConfirmationUrl,
         electionRegistrationUrl, electionRulesUrl, hoursOfOperation, name,
         physicalAddress, voterServices, votingLocationFinderUrl;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"voterServices" : @"voter_services" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"electionOfficials" : [GTLRCivicInfo_ElectionOfficial class],
    @"voter_services" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_Candidate
//

@implementation GTLRCivicInfo_Candidate
@dynamic candidateUrl, channels, email, name, orderOnBallot, party, phone,
         photoUrl;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"channels" : [GTLRCivicInfo_Channel class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_Channel
//

@implementation GTLRCivicInfo_Channel
@dynamic identifier, type;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_Contest
//

@implementation GTLRCivicInfo_Contest
@dynamic ballotPlacement, ballotTitle, candidates, district,
         electorateSpecifications, level, numberElected, numberVotingFor,
         office, primaryParties, primaryParty, referendumBallotResponses,
         referendumBrief, referendumConStatement, referendumEffectOfAbstain,
         referendumPassageThreshold, referendumProStatement, referendumSubtitle,
         referendumText, referendumTitle, referendumUrl, roles, sources,
         special, type;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"candidates" : [GTLRCivicInfo_Candidate class],
    @"level" : [NSString class],
    @"primaryParties" : [NSString class],
    @"referendumBallotResponses" : [NSString class],
    @"roles" : [NSString class],
    @"sources" : [GTLRCivicInfo_Source class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_DivisionSearchResponse
//

@implementation GTLRCivicInfo_DivisionSearchResponse
@dynamic kind, results;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"results" : [GTLRCivicInfo_DivisionSearchResult class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_DivisionSearchResult
//

@implementation GTLRCivicInfo_DivisionSearchResult
@dynamic aliases, name, ocdId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"aliases" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_Election
//

@implementation GTLRCivicInfo_Election
@dynamic electionDay, identifier, name, ocdDivisionId;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_ElectionOfficial
//

@implementation GTLRCivicInfo_ElectionOfficial
@dynamic emailAddress, faxNumber, name, officePhoneNumber, title;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_ElectionsQueryResponse
//

@implementation GTLRCivicInfo_ElectionsQueryResponse
@dynamic elections, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"elections" : [GTLRCivicInfo_Election class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_ElectoralDistrict
//

@implementation GTLRCivicInfo_ElectoralDistrict
@dynamic identifier, name, scope;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_GeographicDivision
//

@implementation GTLRCivicInfo_GeographicDivision
@dynamic alsoKnownAs, name, officeIndices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"alsoKnownAs" : [NSString class],
    @"officeIndices" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_Office
//

@implementation GTLRCivicInfo_Office
@dynamic divisionId, levels, name, officialIndices, roles, sources;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"levels" : [NSString class],
    @"officialIndices" : [NSNumber class],
    @"roles" : [NSString class],
    @"sources" : [GTLRCivicInfo_Source class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_Official
//

@implementation GTLRCivicInfo_Official
@dynamic address, channels, emails, name, party, phones, photoUrl, urls;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"address" : [GTLRCivicInfo_SimpleAddressType class],
    @"channels" : [GTLRCivicInfo_Channel class],
    @"emails" : [NSString class],
    @"phones" : [NSString class],
    @"urls" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_PollingLocation
//

@implementation GTLRCivicInfo_PollingLocation
@dynamic address, endDate, latitude, longitude, name, notes, pollingHours,
         sources, startDate, voterServices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sources" : [GTLRCivicInfo_Source class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_RepresentativeInfoData
//

@implementation GTLRCivicInfo_RepresentativeInfoData
@dynamic divisions, offices, officials;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"offices" : [GTLRCivicInfo_Office class],
    @"officials" : [GTLRCivicInfo_Official class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_RepresentativeInfoData_Divisions
//

@implementation GTLRCivicInfo_RepresentativeInfoData_Divisions

+ (Class)classForAdditionalProperties {
  return [GTLRCivicInfo_GeographicDivision class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_RepresentativeInfoResponse
//

@implementation GTLRCivicInfo_RepresentativeInfoResponse
@dynamic divisions, kind, normalizedInput, offices, officials;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"offices" : [GTLRCivicInfo_Office class],
    @"officials" : [GTLRCivicInfo_Official class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_RepresentativeInfoResponse_Divisions
//

@implementation GTLRCivicInfo_RepresentativeInfoResponse_Divisions

+ (Class)classForAdditionalProperties {
  return [GTLRCivicInfo_GeographicDivision class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_SimpleAddressType
//

@implementation GTLRCivicInfo_SimpleAddressType
@dynamic city, line1, line2, line3, locationName, state, zip;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_Source
//

@implementation GTLRCivicInfo_Source
@dynamic name, official;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_VoterInfoResponse
//

@implementation GTLRCivicInfo_VoterInfoResponse
@dynamic contests, dropOffLocations, earlyVoteSites, election, kind, mailOnly,
         normalizedInput, otherElections, pollingLocations, precinctId, state;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"contests" : [GTLRCivicInfo_Contest class],
    @"dropOffLocations" : [GTLRCivicInfo_PollingLocation class],
    @"earlyVoteSites" : [GTLRCivicInfo_PollingLocation class],
    @"otherElections" : [GTLRCivicInfo_Election class],
    @"pollingLocations" : [GTLRCivicInfo_PollingLocation class],
    @"state" : [GTLRCivicInfo_AdministrationRegion class]
  };
  return map;
}

@end
