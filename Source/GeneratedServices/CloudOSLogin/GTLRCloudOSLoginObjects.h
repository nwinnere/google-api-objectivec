// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud OS Login API (oslogin/v1alpha)
// Description:
//   Manages OS login configuration for Directory API users.
// Documentation:
//   https://cloud.google.com/compute/docs/oslogin/rest/

#if GTLR_BUILT_AS_FRAMEWORK
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

NS_ASSUME_NONNULL_BEGIN

/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudOSLogin_Empty : GTLRObject
@end


/**
 *  A response message for importing an SSH public key.
 */
@interface GTLRCloudOSLogin_ImportSshPublicKeyResponse : GTLRObject

/** The login profile information for the user. */
@property(nonatomic, strong, nullable) GTLRCloudOSLogin_LoginProfile *loginProfile;

@end


/**
 *  The Directory API profile information used for logging in to a virtual
 *  machine on Google Compute Engine.
 */
@interface GTLRCloudOSLogin_LoginProfile : GTLRObject

/** A unique user ID for identifying the user. */
@property(nonatomic, copy, nullable) NSString *name;

/** The list of POSIX accounts associated with the Directory API user. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudOSLogin_PosixAccount *> *posixAccounts;

/** A map from SSH public key fingerprint to the associated key object. */
@property(nonatomic, strong, nullable) GTLRCloudOSLogin_LoginProfile_SshPublicKeys *sshPublicKeys;

/**
 *  Indicates if the user is suspended.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *suspended;

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
 *  The POSIX account information associated with a Directory API User.
 */
@interface GTLRCloudOSLogin_PosixAccount : GTLRObject

/** The GECOS (user information) entry for this account. */
@property(nonatomic, copy, nullable) NSString *gecos;

/**
 *  The default group ID.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *gid;

/** The path to the home directory for this account. */
@property(nonatomic, copy, nullable) NSString *homeDirectory;

/**
 *  Only one POSIX account can be marked as primary.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *primary;

/** The path to the logic shell for this account. */
@property(nonatomic, copy, nullable) NSString *shell;

/**
 *  System identifier for which account the username or uid applies to.
 *  By default, the empty value is used.
 */
@property(nonatomic, copy, nullable) NSString *systemId;

/**
 *  The user ID.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *uid;

/** The username of the POSIX account. */
@property(nonatomic, copy, nullable) NSString *username;

@end


/**
 *  The SSH public key information associated with a Directory API User.
 */
@interface GTLRCloudOSLogin_SshPublicKey : GTLRObject

/**
 *  An expiration time in microseconds since epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *expirationTimeUsec;

/** [Output Only] The SHA-256 fingerprint of the SSH public key. */
@property(nonatomic, copy, nullable) NSString *fingerprint;

/**
 *  Public key text in SSH format, defined by
 *  <a href="https://www.ietf.org/rfc/rfc4253.txt" target="_blank">RFC4253</a>
 *  section 6.6.
 */
@property(nonatomic, copy, nullable) NSString *key;

@end

NS_ASSUME_NONNULL_END
