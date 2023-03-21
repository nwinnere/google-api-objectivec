// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud OS Login API (oslogin/v1)
// Description:
//   You can use OS Login to manage access to your VM instances using IAM roles.
// Documentation:
//   https://cloud.google.com/compute/docs/oslogin/

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

@class GTLRCloudOSLogin_LoginProfile;
@class GTLRCloudOSLogin_LoginProfile_SshPublicKeys;
@class GTLRCloudOSLogin_PosixAccount;
@class GTLRCloudOSLogin_SshPublicKey;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudOSLogin_PosixAccount.operatingSystemType

/**
 *  Linux user account information.
 *
 *  Value: "LINUX"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudOSLogin_PosixAccount_OperatingSystemType_Linux;
/**
 *  The operating system type associated with the user account information is
 *  unspecified.
 *
 *  Value: "OPERATING_SYSTEM_TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudOSLogin_PosixAccount_OperatingSystemType_OperatingSystemTypeUnspecified;
/**
 *  Windows user account information.
 *
 *  Value: "WINDOWS"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudOSLogin_PosixAccount_OperatingSystemType_Windows;

/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance: service Foo { rpc
 *  Bar(google.protobuf.Empty) returns (google.protobuf.Empty); } The JSON
 *  representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudOSLogin_Empty : GTLRObject
@end


/**
 *  A response message for importing an SSH public key.
 */
@interface GTLRCloudOSLogin_ImportSshPublicKeyResponse : GTLRObject

/** Detailed information about import results. */
@property(nonatomic, copy, nullable) NSString *details;

/** The login profile information for the user. */
@property(nonatomic, strong, nullable) GTLRCloudOSLogin_LoginProfile *loginProfile;

@end


/**
 *  The user profile information used for logging in to a virtual machine on
 *  Google Compute Engine.
 */
@interface GTLRCloudOSLogin_LoginProfile : GTLRObject

/** Required. A unique user ID. */
@property(nonatomic, copy, nullable) NSString *name;

/** The list of POSIX accounts associated with the user. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudOSLogin_PosixAccount *> *posixAccounts;

/** A map from SSH public key fingerprint to the associated key object. */
@property(nonatomic, strong, nullable) GTLRCloudOSLogin_LoginProfile_SshPublicKeys *sshPublicKeys;

@end


/**
 *  A map from SSH public key fingerprint to the associated key object.
 *
 *  @note This class is documented as having more properties of
 *        GTLRCloudOSLogin_SshPublicKey. Use @c -additionalJSONKeys and @c
 *        -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudOSLogin_LoginProfile_SshPublicKeys : GTLRObject
@end


/**
 *  The POSIX account information associated with a Google account.
 */
@interface GTLRCloudOSLogin_PosixAccount : GTLRObject

/** Output only. A POSIX account identifier. */
@property(nonatomic, copy, nullable) NSString *accountId;

/** The GECOS (user information) entry for this account. */
@property(nonatomic, copy, nullable) NSString *gecos;

/**
 *  The default group ID.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *gid;

/** The path to the home directory for this account. */
@property(nonatomic, copy, nullable) NSString *homeDirectory;

/** Output only. The canonical resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The operating system type where this account applies.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudOSLogin_PosixAccount_OperatingSystemType_Linux Linux
 *        user account information. (Value: "LINUX")
 *    @arg @c kGTLRCloudOSLogin_PosixAccount_OperatingSystemType_OperatingSystemTypeUnspecified
 *        The operating system type associated with the user account information
 *        is unspecified. (Value: "OPERATING_SYSTEM_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRCloudOSLogin_PosixAccount_OperatingSystemType_Windows Windows
 *        user account information. (Value: "WINDOWS")
 */
@property(nonatomic, copy, nullable) NSString *operatingSystemType;

/**
 *  Only one POSIX account can be marked as primary.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *primary;

/** The path to the logic shell for this account. */
@property(nonatomic, copy, nullable) NSString *shell;

/**
 *  System identifier for which account the username or uid applies to. By
 *  default, the empty value is used.
 */
@property(nonatomic, copy, nullable) NSString *systemId;

/**
 *  The user ID.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *uid;

/** The username of the POSIX account. */
@property(nonatomic, copy, nullable) NSString *username;

@end


/**
 *  The SSH public key information associated with a Google account.
 */
@interface GTLRCloudOSLogin_SshPublicKey : GTLRObject

/**
 *  An expiration time in microseconds since epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *expirationTimeUsec;

/** Output only. The SHA-256 fingerprint of the SSH public key. */
@property(nonatomic, copy, nullable) NSString *fingerprint;

/** Public key text in SSH format, defined by RFC4253 section 6.6. */
@property(nonatomic, copy, nullable) NSString *key;

/** Output only. The canonical resource name. */
@property(nonatomic, copy, nullable) NSString *name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
