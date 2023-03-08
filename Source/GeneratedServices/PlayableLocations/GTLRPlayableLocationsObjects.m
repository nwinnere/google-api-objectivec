// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Playable Locations API (playablelocations/v3)
// Documentation:
//   https://developers.google.com/maps/contact-sales/

#import "GTLRPlayableLocationsObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRPlayableLocations_GoogleMapsPlayablelocationsV3Impression.impressionType
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3Impression_ImpressionType_ImpressionTypeUnspecified = @"IMPRESSION_TYPE_UNSPECIFIED";
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3Impression_ImpressionType_Interacted = @"INTERACTED";
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3Impression_ImpressionType_Presented = @"PRESENTED";

// GTLRPlayableLocations_GoogleMapsPlayablelocationsV3PlayerReport.reasons
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3PlayerReport_Reasons_BadLocationReasonUnspecified = @"BAD_LOCATION_REASON_UNSPECIFIED";
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3PlayerReport_Reasons_NotOpenToPublic = @"NOT_OPEN_TO_PUBLIC";
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3PlayerReport_Reasons_NotPedestrianAccessible = @"NOT_PEDESTRIAN_ACCESSIBLE";
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3PlayerReport_Reasons_Other = @"OTHER";
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3PlayerReport_Reasons_PermanentlyClosed = @"PERMANENTLY_CLOSED";
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3PlayerReport_Reasons_TemporarilyInaccessible = @"TEMPORARILY_INACCESSIBLE";

// GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleSpacingOptions.pointType
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleSpacingOptions_PointType_CenterPoint = @"CENTER_POINT";
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleSpacingOptions_PointType_PointTypeUnspecified = @"POINT_TYPE_UNSPECIFIED";
NSString * const kGTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleSpacingOptions_PointType_SnappedPoint = @"SNAPPED_POINT";

// GTLRPlayableLocations_GoogleMapsUnityClientInfo.platform
NSString * const kGTLRPlayableLocations_GoogleMapsUnityClientInfo_Platform_Android = @"ANDROID";
NSString * const kGTLRPlayableLocations_GoogleMapsUnityClientInfo_Platform_Editor = @"EDITOR";
NSString * const kGTLRPlayableLocations_GoogleMapsUnityClientInfo_Platform_Ios = @"IOS";
NSString * const kGTLRPlayableLocations_GoogleMapsUnityClientInfo_Platform_Linux = @"LINUX";
NSString * const kGTLRPlayableLocations_GoogleMapsUnityClientInfo_Platform_MacOs = @"MAC_OS";
NSString * const kGTLRPlayableLocations_GoogleMapsUnityClientInfo_Platform_PlatformUnspecified = @"PLATFORM_UNSPECIFIED";
NSString * const kGTLRPlayableLocations_GoogleMapsUnityClientInfo_Platform_WebGl = @"WEB_GL";
NSString * const kGTLRPlayableLocations_GoogleMapsUnityClientInfo_Platform_Windows = @"WINDOWS";

// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3Impression
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3Impression
@dynamic gameObjectType, impressionType, locationName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3LogImpressionsRequest
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3LogImpressionsRequest
@dynamic clientInfo, impressions, requestId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"impressions" : [GTLRPlayableLocations_GoogleMapsPlayablelocationsV3Impression class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3LogImpressionsResponse
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3LogImpressionsResponse
@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3LogPlayerReportsRequest
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3LogPlayerReportsRequest
@dynamic clientInfo, playerReports, requestId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"playerReports" : [GTLRPlayableLocations_GoogleMapsPlayablelocationsV3PlayerReport class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3LogPlayerReportsResponse
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3LogPlayerReportsResponse
@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3PlayerReport
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3PlayerReport
@dynamic languageCode, locationName, reasonDetails, reasons;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"reasons" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleAreaFilter
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleAreaFilter
@dynamic s2CellId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleCriterion
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleCriterion
@dynamic fieldsToReturn, filter, gameObjectType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleFilter
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleFilter
@dynamic includedTypes, maxLocationCount, spacing;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"includedTypes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocation
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocation
@dynamic centerPoint, name, placeId, plusCode, snappedPoint, types;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"types" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocationList
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocationList
@dynamic locations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocationsRequest
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocationsRequest
@dynamic areaFilter, criteria;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"criteria" : [GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleCriterion class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocationsResponse
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocationsResponse
@dynamic locationsPerGameObjectType, ttl;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocationsResponse_LocationsPerGameObjectType
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocationsResponse_LocationsPerGameObjectType

+ (Class)classForAdditionalProperties {
  return [GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SamplePlayableLocationList class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleSpacingOptions
//

@implementation GTLRPlayableLocations_GoogleMapsPlayablelocationsV3SampleSpacingOptions
@dynamic minSpacingMeters, pointType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleMapsUnityClientInfo
//

@implementation GTLRPlayableLocations_GoogleMapsUnityClientInfo
@dynamic apiClient, applicationId, applicationVersion, deviceModel,
         languageCode, operatingSystem, operatingSystemBuild, platform;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPlayableLocations_GoogleTypeLatLng
//

@implementation GTLRPlayableLocations_GoogleTypeLatLng
@dynamic latitude, longitude;
@end
