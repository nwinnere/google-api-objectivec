// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Smart Device Management API (smartdevicemanagement/v1)
// Description:
//   Allow select enterprise partners to access, control, and manage Google and
//   Nest devices programmatically.
// Documentation:
//   https://developers.google.com/nest/device-access

#import "GTLRSmartDeviceManagementObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Device
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Device
@dynamic assignee, name, parentRelations, traits, type;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"parentRelations" : [GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ParentRelation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Device_Traits
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Device_Traits

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ExecuteDeviceCommandRequest
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ExecuteDeviceCommandRequest
@dynamic command, params;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ExecuteDeviceCommandRequest_Params
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ExecuteDeviceCommandRequest_Params

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ExecuteDeviceCommandResponse
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ExecuteDeviceCommandResponse
@dynamic results;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ExecuteDeviceCommandResponse_Results
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ExecuteDeviceCommandResponse_Results

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ListDevicesResponse
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ListDevicesResponse
@dynamic devices, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"devices" : [GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Device class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"devices";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ListRoomsResponse
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ListRoomsResponse
@dynamic nextPageToken, rooms;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rooms" : [GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Room class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"rooms";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ListStructuresResponse
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ListStructuresResponse
@dynamic nextPageToken, structures;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"structures" : [GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Structure class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"structures";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ParentRelation
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1ParentRelation
@dynamic displayName, parent;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Room
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Room
@dynamic name, traits;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Room_Traits
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Room_Traits

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Structure
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Structure
@dynamic name, parentRelations, traits;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"parentRelations" : [GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1StructureParentRelation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Structure_Traits
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1Structure_Traits

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1StructureParentRelation
//

@implementation GTLRSmartDeviceManagement_GoogleHomeEnterpriseSdmV1StructureParentRelation
@dynamic displayName, parent;
@end
