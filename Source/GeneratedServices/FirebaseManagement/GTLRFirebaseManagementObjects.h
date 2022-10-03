// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Management API (firebase/v1beta1)
// Description:
//   The Firebase Management API enables programmatic setup and management of
//   Firebase projects, including a project's Firebase resources and Firebase
//   apps.
// Documentation:
//   https://firebase.google.com

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirebaseManagement_AndroidApp;
@class GTLRFirebaseManagement_DefaultResources;
@class GTLRFirebaseManagement_FirebaseAppInfo;
@class GTLRFirebaseManagement_FirebaseProject;
@class GTLRFirebaseManagement_IosApp;
@class GTLRFirebaseManagement_Location;
@class GTLRFirebaseManagement_MessageSet;
@class GTLRFirebaseManagement_Operation_Metadata;
@class GTLRFirebaseManagement_Operation_Response;
@class GTLRFirebaseManagement_ProjectInfo;
@class GTLRFirebaseManagement_ShaCertificate;
@class GTLRFirebaseManagement_Status;
@class GTLRFirebaseManagement_Status_Details_Item;
@class GTLRFirebaseManagement_TypedMessage;
@class GTLRFirebaseManagement_WebApp;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRFirebaseManagement_FirebaseAppInfo.platform

/**
 *  The Firebase App is associated with Android.
 *
 *  Value: "ANDROID"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseManagement_FirebaseAppInfo_Platform_Android;
/**
 *  The Firebase App is associated with iOS.
 *
 *  Value: "IOS"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseManagement_FirebaseAppInfo_Platform_Ios;
/**
 *  Unknown state. This is only used for distinguishing unset values.
 *
 *  Value: "PLATFORM_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseManagement_FirebaseAppInfo_Platform_PlatformUnspecified;
/**
 *  The Firebase App is associated with web.
 *
 *  Value: "WEB"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseManagement_FirebaseAppInfo_Platform_Web;

// ----------------------------------------------------------------------------
// GTLRFirebaseManagement_ShaCertificate.certType

/**
 *  Certificate is a SHA-1 type certificate.
 *
 *  Value: "SHA_1"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseManagement_ShaCertificate_CertType_Sha1;
/**
 *  Certificate is a SHA-256 type certificate.
 *
 *  Value: "SHA_256"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseManagement_ShaCertificate_CertType_Sha256;
/**
 *  Unknown state. This is only used for distinguishing unset values.
 *
 *  Value: "SHA_CERTIFICATE_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseManagement_ShaCertificate_CertType_ShaCertificateTypeUnspecified;

/**
 *  All fields are required.
 */
@interface GTLRFirebaseManagement_AddFirebaseRequest : GTLRObject

/**
 *  Deprecated. Instead, to set your project's default GCP resource location,
 *  call [`FinalizeDefaultLocation`](../projects.defaultLocation/finalize)
 *  after you add Firebase services to your project.
 *  <br>
 *  <br>The ID of the project's default GCP resource location. The location
 *  must be one of the available
 *  [GCP resource
 *  locations](https://firebase.google.com/docs/projects/locations).
 */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  The region code (CLDR) that the account will use for Firebase Analytics
 *  data.
 *  <br>For example: US, GB, or DE
 *  <br>
 *  <br>In Java, use `com.google.i18n.identifiers.RegionCode`.
 */
@property(nonatomic, copy, nullable) NSString *regionCode;

/**
 *  The time zone that the account will use for Firebase Analytics data.
 *  <br>For example: America/Los_Angeles or Africa/Abidjan
 */
@property(nonatomic, copy, nullable) NSString *timeZone;

@end


/**
 *  GTLRFirebaseManagement_AdminSdkConfig
 */
@interface GTLRFirebaseManagement_AdminSdkConfig : GTLRObject

/** The default Firebase Realtime Database URL. */
@property(nonatomic, copy, nullable) NSString *databaseURL;

/**
 *  The ID of the project's default GCP resource location. The location is one
 *  of the available
 *  [GCP resource
 *  locations](https://firebase.google.com/docs/projects/locations). <br>
 *  <br>This field is omitted if the default GCP resource location has not been
 *  finalized yet. To set your project's default GCP resource location,
 *  call [`FinalizeDefaultLocation`](../projects.defaultLocation/finalize)
 *  after you add Firebase services to your project.
 */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Immutable. The globally unique, user-assigned project ID of the parent
 *  Project.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

/** The default Cloud Storage for Firebase storage bucket name. */
@property(nonatomic, copy, nullable) NSString *storageBucket;

@end


/**
 *  Details of a Firebase App for Android.
 */
@interface GTLRFirebaseManagement_AndroidApp : GTLRObject

/**
 *  Immutable. The globally unique, Firebase-assigned identifier of the App.
 *  <br>
 *  <br>This identifier should be treated as an opaque token, as the data
 *  format is not specified.
 */
@property(nonatomic, copy, nullable) NSString *appId;

/** The user-assigned display name of the App. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The fully qualified resource name of the App, in the format:
 *  <br><code>projects/<var>projectId</var>/androidApps/<var>appId</var></code>
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The canonical package name of the Android App as would appear in the
 *  Google Play Developer Console.
 */
@property(nonatomic, copy, nullable) NSString *packageName;

/**
 *  The globally unique, user-assigned ID of the parent Project for the App.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

@end


/**
 *  Configuration metadata of a single Firebase App for Android.
 */
@interface GTLRFirebaseManagement_AndroidAppConfig : GTLRObject

/**
 *  The contents of the JSON configuration file.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *configFileContents;

/**
 *  The filename that the configuration artifact is typically saved as.
 *  <br>For example: `google-services.json`
 */
@property(nonatomic, copy, nullable) NSString *configFilename;

@end


/**
 *  The default resources associated with a `FirebaseProject`.
 */
@interface GTLRFirebaseManagement_DefaultResources : GTLRObject

/**
 *  The default Firebase Hosting site name, in the format:
 *  <br><code><var>projectId</var></code>
 *  <br>Though rare, your `projectId` might already be used as the name for an
 *  existing Hosting site in another project (learn more about creating
 *  non-default,
 *  [additional sites](https://firebase.google.com/docs/hosting/multisites)).
 *  In these cases, your `projectId` is appended with a hyphen then five
 *  alphanumeric characters to create your default Hosting site name. For
 *  example, if your `projectId` is `myproject123`, your default Hosting site
 *  name might be:
 *  <br><code>myproject123-a5c16</code>
 */
@property(nonatomic, copy, nullable) NSString *hostingSite;

/**
 *  The ID of the project's default GCP resource location. The location is one
 *  of the available
 *  [GCP resource
 *  locations](https://firebase.google.com/docs/projects/locations). <br>
 *  <br>This field is omitted if the default GCP resource location has not been
 *  finalized yet. To set your project's default GCP resource location,
 *  call [`FinalizeDefaultLocation`](../projects.defaultLocation/finalize)
 *  after you add Firebase services to your project.
 */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  The default Firebase Realtime Database instance name, in the format:
 *  <br><code><var>projectId</var></code>
 *  <br>Though rare, your `projectId` might already be used as the name for an
 *  existing Realtime Database instance in another project (learn more about
 *  [database
 *  sharding](https://firebase.google.com/docs/database/usage/sharding)). In
 *  these cases, your `projectId` is appended with a hyphen then five
 *  alphanumeric characters to create your default Realtime Database instance
 *  name. For example, if your `projectId` is `myproject123`, your default
 *  database instance name might be:
 *  <br><code>myproject123-a5c16</code>
 */
@property(nonatomic, copy, nullable) NSString *realtimeDatabaseInstance;

/**
 *  The default Cloud Storage for Firebase storage bucket, in the format:
 *  <br><code><var>projectId</var>.appspot.com</code>
 */
@property(nonatomic, copy, nullable) NSString *storageBucket;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRFirebaseManagement_Empty : GTLRObject
@end


/**
 *  GTLRFirebaseManagement_FinalizeDefaultLocationRequest
 */
@interface GTLRFirebaseManagement_FinalizeDefaultLocationRequest : GTLRObject

/**
 *  The ID of the default GCP resource location for the Project. The location
 *  must be one of the available
 *  [GCP resource
 *  locations](https://firebase.google.com/docs/projects/locations).
 */
@property(nonatomic, copy, nullable) NSString *locationId;

@end


/**
 *  A high-level summary of an App.
 */
@interface GTLRFirebaseManagement_FirebaseAppInfo : GTLRObject

/**
 *  Immutable. The globally unique, Firebase-assigned identifier of the App.
 *  <br>
 *  <br>This identifier should be treated as an opaque token, as the data
 *  format is not specified.
 */
@property(nonatomic, copy, nullable) NSString *appId;

/** The user-assigned display name of the Firebase App. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The fully qualified resource name of the Firebase App, in the format:
 *  <br><code>projects/<var>projectId</var>/iosApps/<var>appId</var></code>
 *  or <br><code>projects/<var>projectId</var>/androidApps/<var>appId</var>
 *  </code>
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The platform of the Firebase App.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseManagement_FirebaseAppInfo_Platform_Android The
 *        Firebase App is associated with Android. (Value: "ANDROID")
 *    @arg @c kGTLRFirebaseManagement_FirebaseAppInfo_Platform_Ios The Firebase
 *        App is associated with iOS. (Value: "IOS")
 *    @arg @c kGTLRFirebaseManagement_FirebaseAppInfo_Platform_PlatformUnspecified
 *        Unknown state. This is only used for distinguishing unset values.
 *        (Value: "PLATFORM_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseManagement_FirebaseAppInfo_Platform_Web The Firebase
 *        App is associated with web. (Value: "WEB")
 */
@property(nonatomic, copy, nullable) NSString *platform;

@end


/**
 *  A `FirebaseProject` is the top-level Firebase entity. It is the container
 *  for
 *  Firebase Apps, Firebase Hosting sites, storage systems (Firebase Realtime
 *  Database, Cloud Firestore, Cloud Storage buckets) and other Firebase and
 *  Google Cloud Platform (GCP) resources.
 *  <br>
 *  <br>You can create a new `FirebaseProject` in the
 *  [Firebase console](https://console.firebase.google.com/),
 *  or you can add Firebase resources to an existing
 *  [GCP
 *  `Project`](https://cloud.google.com/resource-manager/reference/rest/v1/projects)
 *  by calling
 *  AddFirebase.
 *  <br>
 *  <br>A `FirebaseProject` is actually also a GCP `Project`, so a
 *  `FirebaseProject` uses underlying GCP identifiers (most importantly,
 *  `projectId`) as its own for easy interop with GCP APIs.
 */
@interface GTLRFirebaseManagement_FirebaseProject : GTLRObject

/** The user-assigned display name of the Project. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The fully qualified resource name of the Project, in the format:
 *  <br><code>projects/<var>projectId</var></code>
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Immutable. The globally unique, user-assigned ID of the Project. */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  The globally unique, Google-assigned identifier of the Project.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *projectNumber;

/** The default Firebase resources associated with the Project. */
@property(nonatomic, strong, nullable) GTLRFirebaseManagement_DefaultResources *resources;

@end


/**
 *  Details of a Firebase App for iOS.
 */
@interface GTLRFirebaseManagement_IosApp : GTLRObject

/**
 *  Immutable. The globally unique, Firebase-assigned identifier of the App.
 *  <br>
 *  <br>This identifier should be treated as an opaque token, as the data
 *  format is not specified.
 */
@property(nonatomic, copy, nullable) NSString *appId;

/**
 *  The automatically generated Apple ID assigned to the App by Apple in the
 *  iOS App Store.
 */
@property(nonatomic, copy, nullable) NSString *appStoreId;

/**
 *  The canonical bundle ID of the iOS App as it would appear in the iOS
 *  AppStore.
 */
@property(nonatomic, copy, nullable) NSString *bundleId;

/** The user-assigned display name of the App. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The fully qualified resource name of the App, in the format:
 *  <br><code>projects/<var>projectId</var>/iosApps/<var>appId</var></code>
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The globally unique, user-assigned ID of the parent Project for the App.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

@end


/**
 *  Configuration metadata of a single Firebase App for iOS.
 */
@interface GTLRFirebaseManagement_IosAppConfig : GTLRObject

/**
 *  The content of the XML configuration file.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *configFileContents;

/**
 *  The filename that the configuration artifact is typically saved as.
 *  <br>For example: `GoogleService-Info.plist`
 */
@property(nonatomic, copy, nullable) NSString *configFilename;

@end


/**
 *  GTLRFirebaseManagement_ListAndroidAppsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "apps" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseManagement_ListAndroidAppsResponse : GTLRCollectionObject

/**
 *  List of each AndroidApp that is in the parent Firebase Project.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseManagement_AndroidApp *> *apps;

/**
 *  If the result list is too large to fit in a single response, then a token
 *  is returned. If the string is empty, then this response is the last page of
 *  results.
 *  <br>
 *  <br>This token can be used in a subsequent call to `ListAndroidApps` to
 *  find the next group of Apps.
 *  <br>
 *  <br>Page tokens are short-lived and should not be persisted.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRFirebaseManagement_ListAvailableLocationsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "locations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseManagement_ListAvailableLocationsResponse : GTLRCollectionObject

/**
 *  One page of results from a call to `ListAvailableLocations`.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseManagement_Location *> *locations;

/**
 *  If the result list is too large to fit in a single response, then a token
 *  is returned. If the string is empty, then this response is the last page of
 *  results and all available locations have been listed.
 *  <br>
 *  <br>This token can be used in a subsequent call to
 *  `ListAvailableLocations` to find more locations.
 *  <br>
 *  <br>Page tokens are short-lived and should not be persisted.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRFirebaseManagement_ListAvailableProjectsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "projectInfo" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseManagement_ListAvailableProjectsResponse : GTLRCollectionObject

/**
 *  If the result list is too large to fit in a single response, then a token
 *  is returned. If the string is empty, then this response is the last page of
 *  results.
 *  <br>
 *  <br>This token can be used in a subsequent calls to `ListAvailableProjects`
 *  to find the next group of GCP `Projects`.
 *  <br>
 *  <br>Page tokens are short-lived and should not be persisted.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The list of GCP `Projects` which can have Firebase resources added to them.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseManagement_ProjectInfo *> *projectInfo;

@end


/**
 *  GTLRFirebaseManagement_ListFirebaseProjectsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "results" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseManagement_ListFirebaseProjectsResponse : GTLRCollectionObject

/**
 *  If the result list is too large to fit in a single response, then a token
 *  is returned. If the string is empty, then this response is the last page of
 *  results.
 *  <br>
 *  <br>This token can be used in a subsequent calls to `ListFirebaseProjects`
 *  to find the next group of Projects.
 *  <br>
 *  <br>Page tokens are short-lived and should not be persisted.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  One page of the list of Projects that are accessible to the caller.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseManagement_FirebaseProject *> *results;

@end


/**
 *  GTLRFirebaseManagement_ListIosAppsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "apps" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseManagement_ListIosAppsResponse : GTLRCollectionObject

/**
 *  List of each IosApp that is in the parent Firebase Project.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseManagement_IosApp *> *apps;

/**
 *  If the result list is too large to fit in a single response, then a token
 *  is returned. If the string is empty, then this response is the last page of
 *  results.
 *  <br>
 *  <br>This token can be used in a subsequent call to `ListIosApps` to find
 *  the next group of Apps.
 *  <br>
 *  <br>Page tokens are short-lived and should not be persisted.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRFirebaseManagement_ListShaCertificatesResponse
 */
@interface GTLRFirebaseManagement_ListShaCertificatesResponse : GTLRObject

/** The list of SHA certificates associated with the App. */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseManagement_ShaCertificate *> *certificates;

@end


/**
 *  GTLRFirebaseManagement_ListWebAppsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "apps" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseManagement_ListWebAppsResponse : GTLRCollectionObject

/**
 *  List of each WebApp that is in the parent Firebase Project.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseManagement_WebApp *> *apps;

/**
 *  If the result list is too large to fit in a single response, then a token
 *  is returned. If the string is empty, then this response is the last page of
 *  results.
 *  <br>
 *  <br>This token can be used in a subsequent call to `ListWebApps` to find
 *  the next group of Apps.
 *  <br>
 *  <br>Page tokens are short-lived and should not be persisted.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  A GCP resource location that can be selected for a Project.
 */
@interface GTLRFirebaseManagement_Location : GTLRObject

/**
 *  The ID of the default GCP resource location. It must be one of the
 *  available
 *  [GCP resource
 *  locations](https://firebase.google.com/docs/projects/locations).
 */
@property(nonatomic, copy, nullable) NSString *locationId;

@end


/**
 *  This is proto2's version of MessageSet.
 */
@interface GTLRFirebaseManagement_MessageSet : GTLRObject
@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRFirebaseManagement_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRFirebaseManagement_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseManagement_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseManagement_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRFirebaseManagement_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRFirebaseManagement_Operation_Response : GTLRObject
@end


/**
 *  A reference to a Google Cloud Platform (GCP) `Project`.
 */
@interface GTLRFirebaseManagement_ProjectInfo : GTLRObject

/**
 *  The user-assigned display name of the GCP `Project`, for example:
 *  <code>My App</code>
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The ID of the project's default GCP resource location. The location is one
 *  of the available
 *  [GCP resource
 *  locations](https://firebase.google.com/docs/projects/locations). <br> <br>
 *  Not all projects will have this field populated. If it is not populated, it
 *  means that the project does not yet have a default GCP resource location.
 *  To set your project's default GCP resource location, call
 *  [`FinalizeDefaultLocation`](../projects.defaultLocation/finalize) after you
 *  add Firebase services to your project.
 */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  The resource name of the GCP `Project` to which Firebase resources can be
 *  added, in the format:
 *  <br><code>projects/<var>projectId</var></code>
 */
@property(nonatomic, copy, nullable) NSString *project;

@end


/**
 *  GTLRFirebaseManagement_SearchFirebaseAppsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "apps" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseManagement_SearchFirebaseAppsResponse : GTLRCollectionObject

/**
 *  One page of results from a call to `SearchFirebaseApps`.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseManagement_FirebaseAppInfo *> *apps;

/**
 *  If the result list is too large to fit in a single response, then a token
 *  is returned.
 *  <br>
 *  <br>This token can be used in a subsequent calls to `SearchFirebaseApps`
 *  to find the next group of Apps.
 *  <br>If the string is empty, then this response is the last page of results.
 *  <br>Page tokens are short-lived and should not be persisted.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  A SHA-1 or SHA-256 certificate associated with the AndroidApp.
 */
@interface GTLRFirebaseManagement_ShaCertificate : GTLRObject

/**
 *  The SHA certificate type.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseManagement_ShaCertificate_CertType_Sha1 Certificate
 *        is a SHA-1 type certificate. (Value: "SHA_1")
 *    @arg @c kGTLRFirebaseManagement_ShaCertificate_CertType_Sha256 Certificate
 *        is a SHA-256 type certificate. (Value: "SHA_256")
 *    @arg @c kGTLRFirebaseManagement_ShaCertificate_CertType_ShaCertificateTypeUnspecified
 *        Unknown state. This is only used for distinguishing unset values.
 *        (Value: "SHA_CERTIFICATE_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *certType;

/**
 *  The fully qualified resource name of the `sha-key`, in the format:
 *  <br><code>projects/<var>projectId</var>/androidApps/<var>appId</var>/sha/<var>shaId</var></code>
 */
@property(nonatomic, copy, nullable) NSString *name;

/** The certificate hash for the App. */
@property(nonatomic, copy, nullable) NSString *shaHash;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details.
 *  You can find out more about this error model and how to work with it in the
 *  [API Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRFirebaseManagement_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseManagement_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRFirebaseManagement_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRFirebaseManagement_Status_Details_Item : GTLRObject
@end


/**
 *  Wire-format for a Status object
 */
@interface GTLRFirebaseManagement_StatusProto : GTLRObject

/**
 *  The canonical error code (see codes.proto) that most closely
 *  corresponds to this status. May be missing.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *canonicalCode;

/**
 *  Numeric code drawn from the space specified below. Often, this is the
 *  canonical error space, and code is drawn from google3/util/task/codes.proto
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/** Detail message */
@property(nonatomic, copy, nullable) NSString *message;

/** message_set associates an arbitrary proto message with the status. */
@property(nonatomic, strong, nullable) GTLRFirebaseManagement_MessageSet *messageSet;

/**
 *  DEPRECATED.
 *  This field was deprecated in 2011 with cl/20297133. Java support
 *  for the field was moved to a proto1 backward compatibility class
 *  in April 2017 with cl/142615857 and cl/154123203. There was
 *  never support for this field in Go; if set Go will ignore it.
 *  C++ stopped setting StatusProto::payload in October 2015 with cl/106347055,
 *  and stopped reading the field in October 2017 with cl/173324114.
 *  In general, newly written code should use only "message_set". If you need
 *  to maintain backward compatibility with code written before 3/25/2011, do
 *  the following:
 *  - During the transition period, either (1) set both "payload" and
 *  "message_set", or (2) write the consumer of StatusProto so that it can
 *  forge a MessageSet object from "payload" if "message_set" is missing.
 *  The C++ util::Status implementation does (2).
 *  - Once all the consumers are converted to accept "message_set", then
 *  remove the use of "payload" on the producer side.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseManagement_TypedMessage *payload;

/**
 *  The following are usually only present when code != 0
 *  Space to which this status belongs
 */
@property(nonatomic, copy, nullable) NSString *space;

@end


/**
 *  Message that groups a protocol type_id (as defined by MessageSet),
 *  with an encoded message of that type. Its use is similar to
 *  MessageSet, except it represents a single (type, encoded message)
 *  instead of a set.
 *  To fill for known protocol type:
 *  MyProtocolMsg proto;
 *  TypedMessage typed_msg;
 *  typed_msg.set_type_id(MyProtocolMsg::MESSAGE_TYPE_ID);
 *  proto.AppendToCord(typed_msg.mutable_message());
 *  To fill for unknown protocol type:
 *  ProtocolMessage proto;
 *  TypedMessage typed_msg;
 *  typed_msg.set_type_id(proto.GetMapper()->type_id());
 *  proto.AppendToCord(typed_msg.mutable_message());
 */
@interface GTLRFirebaseManagement_TypedMessage : GTLRObject

/**
 *  Message bytes.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *message;

/**
 *  Identifier for the type.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *typeId;

@end


/**
 *  Details of a Firebase App for the web.
 */
@interface GTLRFirebaseManagement_WebApp : GTLRObject

/**
 *  Immutable. The globally unique, Firebase-assigned identifier of the App.
 *  <br>
 *  <br>This identifier should be treated as an opaque token, as the data
 *  format is not specified.
 */
@property(nonatomic, copy, nullable) NSString *appId;

/** The fully qualified URLs where the App is hosted. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *appUrls;

/** The user-assigned display name of the App. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The fully qualified resource name of the App, for example:
 *  <br><code>projects/<var>projectId</var>/webApps/<var>appId</var></code>
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The globally unique, user-assigned ID of the parent Project for the App.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

@end


/**
 *  Configuration metadata of a single Firebase App for the web.
 */
@interface GTLRFirebaseManagement_WebAppConfig : GTLRObject

/** The API key associated with the web App. */
@property(nonatomic, copy, nullable) NSString *apiKey;

/**
 *  Immutable. The globally unique, Firebase-assigned identifier of the App.
 */
@property(nonatomic, copy, nullable) NSString *appId;

/**
 *  The domain Firebase Auth configures for OAuth redirects, in the format:
 *  <br><code><var>projectId</var>.firebaseapp.com</code>
 */
@property(nonatomic, copy, nullable) NSString *authDomain;

/** The default Firebase Realtime Database URL. */
@property(nonatomic, copy, nullable) NSString *databaseURL;

/**
 *  The ID of the project's default GCP resource location. The location is one
 *  of the available
 *  [GCP resource
 *  locations](https://firebase.google.com/docs/projects/locations). <br>
 *  <br>This field is omitted if the default GCP resource location has not been
 *  finalized yet. To set your project's default GCP resource location,
 *  call [`FinalizeDefaultLocation`](../projects.defaultLocation/finalize)
 *  after you add Firebase services to your project.
 */
@property(nonatomic, copy, nullable) NSString *locationId;

/** The sender ID for use with Firebase Cloud Messaging. */
@property(nonatomic, copy, nullable) NSString *messagingSenderId;

/**
 *  Immutable. The globally unique, user-assigned project ID of the parent
 *  Project for the App.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

/** The default Cloud Storage for Firebase storage bucket name. */
@property(nonatomic, copy, nullable) NSString *storageBucket;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
