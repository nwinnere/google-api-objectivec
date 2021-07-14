// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Civic Information API (civicinfo/v2)
// Description:
//   Provides polling places, early vote locations, contest data, election
//   officials, and government representatives for U.S. residential addresses.
// Documentation:
//   https://developers.google.com/civic-information

#import "GTLRCivicInfoObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_AdministrationRegion
//

@implementation GTLRCivicInfo_AdministrationRegion
@dynamic electionAdministrationBody, identifier, localJurisdiction, name,
         sources;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"identifier" : @"id",
    @"localJurisdiction" : @"local_jurisdiction"
  };
  return map;
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
@dynamic absenteeVotingInfoUrl, addressLines, ballotInfoUrl,
         correspondenceAddress, electionInfoUrl, electionOfficials,
         electionRegistrationConfirmationUrl, electionRegistrationUrl,
         electionRulesUrl, hoursOfOperation, name, physicalAddress,
         voterServices, votingLocationFinderUrl;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"voterServices" : @"voter_services" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"addressLines" : [NSString class],
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
@dynamic ballotPlacement, candidates, district, electorateSpecifications,
         identifier, level, numberElected, numberVotingFor, office,
         primaryParty, referendumBallotResponses, referendumBrief,
         referendumConStatement, referendumEffectOfAbstain,
         referendumPassageThreshold, referendumProStatement, referendumSubtitle,
         referendumText, referendumTitle, referendumUrl, roles, sources,
         special, type;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"candidates" : [GTLRCivicInfo_Candidate class],
    @"level" : [NSString class],
    @"referendumBallotResponses" : [NSString class],
    @"roles" : [NSString class],
    @"sources" : [GTLRCivicInfo_Source class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_ContextParams
//

@implementation GTLRCivicInfo_ContextParams
@dynamic clientProfile;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_DivisionRepresentativeInfoRequest
//

@implementation GTLRCivicInfo_DivisionRepresentativeInfoRequest
@dynamic contextParams;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_DivisionSearchRequest
//

@implementation GTLRCivicInfo_DivisionSearchRequest
@dynamic contextParams;
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
//   GTLRCivicInfo_ElectionsQueryRequest
//

@implementation GTLRCivicInfo_ElectionsQueryRequest
@dynamic contextParams;
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
@dynamic identifier, kgForeignKey, name, scope;

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
@dynamic address, endDate, identifier, name, notes, pollingHours, sources,
         startDate, voterServices;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
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
//   GTLRCivicInfo_PostalAddress
//

@implementation GTLRCivicInfo_PostalAddress
@dynamic addressLines, administrativeAreaName, countryName, countryNameCode,
         dependentLocalityName, dependentThoroughfareLeadingType,
         dependentThoroughfareName, dependentThoroughfarePostDirection,
         dependentThoroughfarePreDirection, dependentThoroughfaresConnector,
         dependentThoroughfaresIndicator, dependentThoroughfaresType,
         dependentThoroughfareTrailingType, firmName, isDisputed, languageCode,
         localityName, postalCodeNumber, postalCodeNumberExtension,
         postBoxNumber, premiseName, recipientName, sortingCode,
         subAdministrativeAreaName, subPremiseName, thoroughfareLeadingType,
         thoroughfareName, thoroughfareNumber, thoroughfarePostDirection,
         thoroughfarePreDirection, thoroughfareTrailingType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"addressLines" : [NSString class]
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
//   GTLRCivicInfo_RepresentativeInfoDataDivisions
//

@implementation GTLRCivicInfo_RepresentativeInfoDataDivisions

+ (Class)classForAdditionalProperties {
  return [GTLRCivicInfo_GeographicDivision class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_RepresentativeInfoRequest
//

@implementation GTLRCivicInfo_RepresentativeInfoRequest
@dynamic contextParams;
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
//   GTLRCivicInfo_RepresentativeInfoResponseDivisions
//

@implementation GTLRCivicInfo_RepresentativeInfoResponseDivisions

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
//   GTLRCivicInfo_VoterInfoRequest
//

@implementation GTLRCivicInfo_VoterInfoRequest
@dynamic contextParams, voterInfoSegmentResult;
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


// ----------------------------------------------------------------------------
//
//   GTLRCivicInfo_VoterInfoSegmentResult
//

@implementation GTLRCivicInfo_VoterInfoSegmentResult
@dynamic generatedMillis, postalAddress, request, response;
@end
