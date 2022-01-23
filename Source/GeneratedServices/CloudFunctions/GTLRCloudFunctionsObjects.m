// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Functions API (cloudfunctions/v1)
// Description:
//   API for managing lightweight user-provided functions executed in response
//   to events.
// Documentation:
//   https://cloud.google.com/functions

#import "GTLRCloudFunctionsObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudFunctions_OperationMetadataV1Beta2.type
NSString * const kGTLRCloudFunctions_OperationMetadataV1Beta2_Type_CreateFunction = @"CREATE_FUNCTION";
NSString * const kGTLRCloudFunctions_OperationMetadataV1Beta2_Type_DeleteFunction = @"DELETE_FUNCTION";
NSString * const kGTLRCloudFunctions_OperationMetadataV1Beta2_Type_OperationUnspecified = @"OPERATION_UNSPECIFIED";
NSString * const kGTLRCloudFunctions_OperationMetadataV1Beta2_Type_UpdateFunction = @"UPDATE_FUNCTION";

// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_ListLocationsResponse
//

@implementation GTLRCloudFunctions_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRCloudFunctions_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_ListOperationsResponse
//

@implementation GTLRCloudFunctions_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRCloudFunctions_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_Location
//

@implementation GTLRCloudFunctions_Location
@dynamic labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_Location_Labels
//

@implementation GTLRCloudFunctions_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_Location_Metadata
//

@implementation GTLRCloudFunctions_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_Operation
//

@implementation GTLRCloudFunctions_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_Operation_Metadata
//

@implementation GTLRCloudFunctions_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_Operation_Response
//

@implementation GTLRCloudFunctions_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_OperationMetadataV1Beta2
//

@implementation GTLRCloudFunctions_OperationMetadataV1Beta2
@dynamic request, target, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_OperationMetadataV1Beta2_Request
//

@implementation GTLRCloudFunctions_OperationMetadataV1Beta2_Request

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_Status
//

@implementation GTLRCloudFunctions_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCloudFunctions_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudFunctions_Status_Details_Item
//

@implementation GTLRCloudFunctions_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end
