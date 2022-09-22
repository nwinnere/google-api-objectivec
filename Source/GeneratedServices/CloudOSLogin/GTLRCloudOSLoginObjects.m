// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud OS Login API (oslogin/v1)
// Description:
//   You can use OS Login to manage access to your VM instances using IAM roles.
//   For more information, read [OS Login](/compute/docs/oslogin/).
// Documentation:
//   https://cloud.google.com/compute/docs/oslogin/

#import "GTLRCloudOSLoginObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudOSLogin_PosixAccount.operatingSystemType
NSString * const kGTLRCloudOSLogin_PosixAccount_OperatingSystemType_Linux = @"LINUX";
NSString * const kGTLRCloudOSLogin_PosixAccount_OperatingSystemType_OperatingSystemTypeUnspecified = @"OPERATING_SYSTEM_TYPE_UNSPECIFIED";
NSString * const kGTLRCloudOSLogin_PosixAccount_OperatingSystemType_Windows = @"WINDOWS";

// ----------------------------------------------------------------------------
//
//   GTLRCloudOSLogin_Empty
//

@implementation GTLRCloudOSLogin_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudOSLogin_ImportSshPublicKeyResponse
//

@implementation GTLRCloudOSLogin_ImportSshPublicKeyResponse
@dynamic loginProfile;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudOSLogin_LoginProfile
//

@implementation GTLRCloudOSLogin_LoginProfile
@dynamic name, posixAccounts, sshPublicKeys;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"posixAccounts" : [GTLRCloudOSLogin_PosixAccount class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudOSLogin_LoginProfile_SshPublicKeys
//

@implementation GTLRCloudOSLogin_LoginProfile_SshPublicKeys

+ (Class)classForAdditionalProperties {
  return [GTLRCloudOSLogin_SshPublicKey class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudOSLogin_PosixAccount
//

@implementation GTLRCloudOSLogin_PosixAccount
@dynamic accountId, gecos, gid, homeDirectory, operatingSystemType, primary,
         shell, systemId, uid, username;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudOSLogin_SshPublicKey
//

@implementation GTLRCloudOSLogin_SshPublicKey
@dynamic expirationTimeUsec, fingerprint, key;
@end
