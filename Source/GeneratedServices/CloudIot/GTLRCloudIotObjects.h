// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud IoT API (cloudiot/v1)
// Description:
//   Registers and manages IoT (Internet of Things) devices that connect to the
//   Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/iot

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudIot_Binding;
@class GTLRCloudIot_Device;
@class GTLRCloudIot_Device_Metadata;
@class GTLRCloudIot_DeviceConfig;
@class GTLRCloudIot_DeviceCredential;
@class GTLRCloudIot_DeviceRegistry;
@class GTLRCloudIot_DeviceState;
@class GTLRCloudIot_EventNotificationConfig;
@class GTLRCloudIot_HttpConfig;
@class GTLRCloudIot_MqttConfig;
@class GTLRCloudIot_Policy;
@class GTLRCloudIot_PublicKeyCertificate;
@class GTLRCloudIot_PublicKeyCredential;
@class GTLRCloudIot_RegistryCredential;
@class GTLRCloudIot_StateNotificationConfig;
@class GTLRCloudIot_Status;
@class GTLRCloudIot_Status_Details_Item;
@class GTLRCloudIot_X509CertificateDetails;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudIot_HttpConfig.httpEnabledState

/**
 *  Disables DeviceService (HTTP) service for the registry.
 *
 *  Value: "HTTP_DISABLED"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_HttpConfig_HttpEnabledState_HttpDisabled;
/**
 *  Enables DeviceService (HTTP) service for the registry.
 *
 *  Value: "HTTP_ENABLED"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_HttpConfig_HttpEnabledState_HttpEnabled;
/**
 *  No HTTP state specified. If not specified, DeviceService will be
 *  enabled by default.
 *
 *  Value: "HTTP_STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_HttpConfig_HttpEnabledState_HttpStateUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudIot_MqttConfig.mqttEnabledState

/**
 *  Disables a MQTT connection.
 *
 *  Value: "MQTT_DISABLED"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_MqttConfig_MqttEnabledState_MqttDisabled;
/**
 *  Enables a MQTT connection.
 *
 *  Value: "MQTT_ENABLED"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_MqttConfig_MqttEnabledState_MqttEnabled;
/**
 *  No MQTT state specified. If not specified, MQTT will be enabled by default.
 *
 *  Value: "MQTT_STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_MqttConfig_MqttEnabledState_MqttStateUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudIot_PublicKeyCertificate.format

/**
 *  The format has not been specified. This is an invalid default value and
 *  must not be used.
 *
 *  Value: "UNSPECIFIED_PUBLIC_KEY_CERTIFICATE_FORMAT"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_PublicKeyCertificate_Format_UnspecifiedPublicKeyCertificateFormat;
/**
 *  An X.509v3 certificate ([RFC5280](https://www.ietf.org/rfc/rfc5280.txt)),
 *  encoded in base64, and wrapped by `-----BEGIN CERTIFICATE-----` and
 *  `-----END CERTIFICATE-----`.
 *
 *  Value: "X509_CERTIFICATE_PEM"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_PublicKeyCertificate_Format_X509CertificatePem;

// ----------------------------------------------------------------------------
// GTLRCloudIot_PublicKeyCredential.format

/**
 *  Public key for the ECDSA algorithm using P-256 and SHA-256, encoded in
 *  base64, and wrapped by `-----BEGIN PUBLIC KEY-----` and `-----END
 *  PUBLIC KEY-----`. This can be used to verify JWT tokens with the `ES256`
 *  algorithm ([RFC7518](https://www.ietf.org/rfc/rfc7518.txt)). This curve is
 *  defined in [OpenSSL](https://www.openssl.org/) as the `prime256v1` curve.
 *
 *  Value: "ES256_PEM"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_PublicKeyCredential_Format_Es256Pem;
/**
 *  As ES256_PEM, but wrapped in an X.509v3 certificate ([RFC5280](
 *  https://www.ietf.org/rfc/rfc5280.txt)), encoded in base64, and wrapped by
 *  `-----BEGIN CERTIFICATE-----` and `-----END CERTIFICATE-----`.
 *
 *  Value: "ES256_X509_PEM"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_PublicKeyCredential_Format_Es256X509Pem;
/**
 *  An RSA public key encoded in base64, and wrapped by
 *  `-----BEGIN PUBLIC KEY-----` and `-----END PUBLIC KEY-----`. This can be
 *  used to verify `RS256` signatures in JWT tokens ([RFC7518](
 *  https://www.ietf.org/rfc/rfc7518.txt)).
 *
 *  Value: "RSA_PEM"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_PublicKeyCredential_Format_RsaPem;
/**
 *  As RSA_PEM, but wrapped in an X.509v3 certificate ([RFC5280](
 *  https://www.ietf.org/rfc/rfc5280.txt)), encoded in base64, and wrapped by
 *  `-----BEGIN CERTIFICATE-----` and `-----END CERTIFICATE-----`.
 *
 *  Value: "RSA_X509_PEM"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_PublicKeyCredential_Format_RsaX509Pem;
/**
 *  The format has not been specified. This is an invalid default value and
 *  must not be used.
 *
 *  Value: "UNSPECIFIED_PUBLIC_KEY_FORMAT"
 */
GTLR_EXTERN NSString * const kGTLRCloudIot_PublicKeyCredential_Format_UnspecifiedPublicKeyFormat;

/**
 *  Associates `members` with a `role`.
 */
@interface GTLRCloudIot_Binding : GTLRObject

/**
 *  Specifies the identities requesting access for a Cloud Platform resource.
 *  `members` can have the following values:
 *  * `allUsers`: A special identifier that represents anyone who is
 *  on the internet; with or without a Google account.
 *  * `allAuthenticatedUsers`: A special identifier that represents anyone
 *  who is authenticated with a Google account or a service account.
 *  * `user:{emailid}`: An email address that represents a specific Google
 *  account. For example, `alice\@gmail.com` .
 *  * `serviceAccount:{emailid}`: An email address that represents a service
 *  account. For example, `my-other-app\@appspot.gserviceaccount.com`.
 *  * `group:{emailid}`: An email address that represents a Google group.
 *  For example, `admins\@example.com`.
 *  * `domain:{domain}`: A Google Apps domain name that represents all the
 *  users of that domain. For example, `google.com` or `example.com`.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *members;

/**
 *  Role that is assigned to `members`.
 *  For example, `roles/viewer`, `roles/editor`, or `roles/owner`.
 *  Required
 */
@property(nonatomic, copy, nullable) NSString *role;

@end


/**
 *  The device resource.
 */
@interface GTLRCloudIot_Device : GTLRObject

/**
 *  If a device is blocked, connections or requests from this device will fail.
 *  Can be used to temporarily prevent the device from connecting if, for
 *  example, the sensor is generating bad data and needs maintenance.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *blocked;

/**
 *  The most recent device configuration, which is eventually sent from
 *  Cloud IoT Core to the device. If not present on creation, the
 *  configuration will be initialized with an empty payload and version value
 *  of `1`. To update this field after creation, use the
 *  `DeviceManager.ModifyCloudToDeviceConfig` method.
 */
@property(nonatomic, strong, nullable) GTLRCloudIot_DeviceConfig *config;

/**
 *  The credentials used to authenticate this device. To allow credential
 *  rotation without interruption, multiple device credentials can be bound to
 *  this device. No more than 3 credentials can be bound to a single device at
 *  a time. When new credentials are added to a device, they are verified
 *  against the registry credentials. For details, see the description of the
 *  `DeviceRegistry.credentials` field.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIot_DeviceCredential *> *credentials;

/**
 *  The user-defined device identifier. The device ID must be unique
 *  within a device registry.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  [Output only] The last time a cloud-to-device config version acknowledgment
 *  was received from the device. This field is only for configurations
 *  sent through MQTT.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *lastConfigAckTime;

/**
 *  [Output only] The last time a cloud-to-device config version was sent to
 *  the device.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *lastConfigSendTime;

/**
 *  [Output only] The error message of the most recent error, such as a failure
 *  to publish to Cloud Pub/Sub. 'last_error_time' is the timestamp of this
 *  field. If no errors have occurred, this field has an empty message
 *  and the status code 0 == OK. Otherwise, this field is expected to have a
 *  status code other than OK.
 */
@property(nonatomic, strong, nullable) GTLRCloudIot_Status *lastErrorStatus;

/**
 *  [Output only] The time the most recent error occurred, such as a failure to
 *  publish to Cloud Pub/Sub. This field is the timestamp of
 *  'last_error_status'.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *lastErrorTime;

/**
 *  [Output only] The last time a telemetry event was received. Timestamps are
 *  periodically collected and written to storage; they may be stale by a few
 *  minutes.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *lastEventTime;

/**
 *  [Output only] The last time an MQTT `PINGREQ` was received. This field
 *  applies only to devices connecting through MQTT. MQTT clients usually only
 *  send `PINGREQ` messages if the connection is idle, and no other messages
 *  have been sent. Timestamps are periodically collected and written to
 *  storage; they may be stale by a few minutes.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *lastHeartbeatTime;

/**
 *  [Output only] The last time a state event was received. Timestamps are
 *  periodically collected and written to storage; they may be stale by a few
 *  minutes.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *lastStateTime;

/**
 *  The metadata key-value pairs assigned to the device. This metadata is not
 *  interpreted or indexed by Cloud IoT Core. It can be used to add contextual
 *  information for the device.
 *  Keys must conform to the regular expression a-zA-Z+ and
 *  be less than 128 bytes in length.
 *  Values are free-form strings. Each value must be less than or equal to 32
 *  KB in size.
 *  The total size of all keys and values must be less than 256 KB, and the
 *  maximum number of key-value pairs is 500.
 */
@property(nonatomic, strong, nullable) GTLRCloudIot_Device_Metadata *metadata;

/**
 *  The resource path name. For example,
 *  `projects/p1/locations/us-central1/registries/registry0/devices/dev0` or
 *  `projects/p1/locations/us-central1/registries/registry0/devices/{num_id}`.
 *  When `name` is populated as a response from the service, it always ends
 *  in the device numeric ID.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  [Output only] A server-defined unique numeric ID for the device. This is a
 *  more compact way to identify devices, and it is globally unique.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numId;

/**
 *  [Output only] The state most recently received from the device. If no state
 *  has been reported, this field is not present.
 */
@property(nonatomic, strong, nullable) GTLRCloudIot_DeviceState *state;

@end


/**
 *  The metadata key-value pairs assigned to the device. This metadata is not
 *  interpreted or indexed by Cloud IoT Core. It can be used to add contextual
 *  information for the device.
 *  Keys must conform to the regular expression a-zA-Z+ and
 *  be less than 128 bytes in length.
 *  Values are free-form strings. Each value must be less than or equal to 32
 *  KB in size.
 *  The total size of all keys and values must be less than 256 KB, and the
 *  maximum number of key-value pairs is 500.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudIot_Device_Metadata : GTLRObject
@end


/**
 *  The device configuration. Eventually delivered to devices.
 */
@interface GTLRCloudIot_DeviceConfig : GTLRObject

/**
 *  The device configuration data.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *binaryData;

/**
 *  [Output only] The time at which this configuration version was updated in
 *  Cloud IoT Core. This timestamp is set by the server.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *cloudUpdateTime;

/**
 *  [Output only] The time at which Cloud IoT Core received the
 *  acknowledgment from the device, indicating that the device has received
 *  this configuration version. If this field is not present, the device has
 *  not yet acknowledged that it received this version. Note that when
 *  the config was sent to the device, many config versions may have been
 *  available in Cloud IoT Core while the device was disconnected, and on
 *  connection, only the latest version is sent to the device. Some
 *  versions may never be sent to the device, and therefore are never
 *  acknowledged. This timestamp is set by Cloud IoT Core.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *deviceAckTime;

/**
 *  [Output only] The version of this update. The version number is assigned by
 *  the server, and is always greater than 0 after device creation. The
 *  version must be 0 on the `CreateDevice` request if a `config` is
 *  specified; the response of `CreateDevice` will always have a value of 1.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *version;

@end


/**
 *  A server-stored device credential used for authentication.
 */
@interface GTLRCloudIot_DeviceCredential : GTLRObject

/**
 *  [Optional] The time at which this credential becomes invalid. This
 *  credential will be ignored for new client authentication requests after
 *  this timestamp; however, it will not be automatically deleted.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *expirationTime;

/**
 *  A public key used to verify the signature of JSON Web Tokens (JWTs).
 *  When adding a new device credential, either via device creation or via
 *  modifications, this public key credential may be required to be signed by
 *  one of the registry level certificates. More specifically, if the
 *  registry contains at least one certificate, any new device credential
 *  must be signed by one of the registry certificates. As a result,
 *  when the registry contains certificates, only X.509 certificates are
 *  accepted as device credentials. However, if the registry does
 *  not contain a certificate, self-signed certificates and public keys will
 *  be accepted. New device credentials must be different from every
 *  registry-level certificate.
 */
@property(nonatomic, strong, nullable) GTLRCloudIot_PublicKeyCredential *publicKey;

@end


/**
 *  A container for a group of devices.
 */
@interface GTLRCloudIot_DeviceRegistry : GTLRObject

/**
 *  The credentials used to verify the device credentials. No more than 10
 *  credentials can be bound to a single registry at a time. The verification
 *  process occurs at the time of device creation or update. If this field is
 *  empty, no verification is performed. Otherwise, the credentials of a newly
 *  created device or added credentials of an updated device should be signed
 *  with one of these registry credentials.
 *  Note, however, that existing devices will never be affected by
 *  modifications to this list of credentials: after a device has been
 *  successfully created in a registry, it should be able to connect even if
 *  its registry credentials are revoked, deleted, or modified.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIot_RegistryCredential *> *credentials;

/**
 *  The configuration for notification of telemetry events received from the
 *  device. All telemetry events that were successfully published by the
 *  device and acknowledged by Cloud IoT Core are guaranteed to be
 *  delivered to Cloud Pub/Sub. If multiple configurations match a message,
 *  only the first matching configuration is used. If you try to publish a
 *  device telemetry event using MQTT without specifying a Cloud Pub/Sub topic
 *  for the device's registry, the connection closes automatically. If you try
 *  to do so using an HTTP connection, an error is returned. Up to 10
 *  configurations may be provided.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIot_EventNotificationConfig *> *eventNotificationConfigs;

/** The DeviceService (HTTP) configuration for this device registry. */
@property(nonatomic, strong, nullable) GTLRCloudIot_HttpConfig *httpConfig;

/**
 *  The identifier of this device registry. For example, `myRegistry`.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** The MQTT configuration for this device registry. */
@property(nonatomic, strong, nullable) GTLRCloudIot_MqttConfig *mqttConfig;

/**
 *  The resource path name. For example,
 *  `projects/example-project/locations/us-central1/registries/my-registry`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The configuration for notification of new states received from the device.
 *  State updates are guaranteed to be stored in the state history, but
 *  notifications to Cloud Pub/Sub are not guaranteed. For example, if
 *  permissions are misconfigured or the specified topic doesn't exist, no
 *  notification will be published but the state will still be stored in Cloud
 *  IoT Core.
 */
@property(nonatomic, strong, nullable) GTLRCloudIot_StateNotificationConfig *stateNotificationConfig;

@end


/**
 *  The device state, as reported by the device.
 */
@interface GTLRCloudIot_DeviceState : GTLRObject

/**
 *  The device state data.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *binaryData;

/**
 *  [Output only] The time at which this state version was updated in Cloud
 *  IoT Core.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

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
@interface GTLRCloudIot_Empty : GTLRObject
@end


/**
 *  The configuration for forwarding telemetry events.
 */
@interface GTLRCloudIot_EventNotificationConfig : GTLRObject

/**
 *  A Cloud Pub/Sub topic name. For example,
 *  `projects/myProject/topics/deviceEvents`.
 */
@property(nonatomic, copy, nullable) NSString *pubsubTopicName;

/**
 *  If the subfolder name matches this string exactly, this configuration will
 *  be used. The string must not include the leading '/' character. If empty,
 *  all strings are matched. This field is used only for telemetry events;
 *  subfolders are not supported for state changes.
 */
@property(nonatomic, copy, nullable) NSString *subfolderMatches;

@end


/**
 *  Request message for `GetIamPolicy` method.
 */
@interface GTLRCloudIot_GetIamPolicyRequest : GTLRObject
@end


/**
 *  The configuration of the HTTP bridge for a device registry.
 */
@interface GTLRCloudIot_HttpConfig : GTLRObject

/**
 *  If enabled, allows devices to use DeviceService via the HTTP protocol.
 *  Otherwise, any requests to DeviceService will fail for this registry.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudIot_HttpConfig_HttpEnabledState_HttpDisabled Disables
 *        DeviceService (HTTP) service for the registry. (Value:
 *        "HTTP_DISABLED")
 *    @arg @c kGTLRCloudIot_HttpConfig_HttpEnabledState_HttpEnabled Enables
 *        DeviceService (HTTP) service for the registry. (Value: "HTTP_ENABLED")
 *    @arg @c kGTLRCloudIot_HttpConfig_HttpEnabledState_HttpStateUnspecified No
 *        HTTP state specified. If not specified, DeviceService will be
 *        enabled by default. (Value: "HTTP_STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *httpEnabledState;

@end


/**
 *  Response for `ListDeviceConfigVersions`.
 */
@interface GTLRCloudIot_ListDeviceConfigVersionsResponse : GTLRObject

/**
 *  The device configuration for the last few versions. Versions are listed
 *  in decreasing order, starting from the most recent one.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIot_DeviceConfig *> *deviceConfigs;

@end


/**
 *  Response for `ListDeviceRegistries`.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "deviceRegistries" property. If returned as the result of a query,
 *        it should support automatic pagination (when @c shouldFetchNextPages
 *        is enabled).
 */
@interface GTLRCloudIot_ListDeviceRegistriesResponse : GTLRCollectionObject

/**
 *  The registries that matched the query.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIot_DeviceRegistry *> *deviceRegistries;

/**
 *  If not empty, indicates that there may be more registries that match the
 *  request; this value should be passed in a new
 *  `ListDeviceRegistriesRequest`.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response for `ListDevices`.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "devices" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudIot_ListDevicesResponse : GTLRCollectionObject

/**
 *  The devices that match the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIot_Device *> *devices;

/**
 *  If not empty, indicates that there may be more devices that match the
 *  request; this value should be passed in a new `ListDevicesRequest`.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response for `ListDeviceStates`.
 */
@interface GTLRCloudIot_ListDeviceStatesResponse : GTLRObject

/**
 *  The last few device states. States are listed in descending order of server
 *  update time, starting from the most recent one.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIot_DeviceState *> *deviceStates;

@end


/**
 *  Request for `ModifyCloudToDeviceConfig`.
 */
@interface GTLRCloudIot_ModifyCloudToDeviceConfigRequest : GTLRObject

/**
 *  The configuration data for the device.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *binaryData;

/**
 *  The version number to update. If this value is zero, it will not check the
 *  version number of the server and will always update the current version;
 *  otherwise, this update will fail if the version number found on the server
 *  does not match this version number. This is used to support multiple
 *  simultaneous updates without losing data.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *versionToUpdate;

@end


/**
 *  The configuration of MQTT for a device registry.
 */
@interface GTLRCloudIot_MqttConfig : GTLRObject

/**
 *  If enabled, allows connections using the MQTT protocol. Otherwise, MQTT
 *  connections to this registry will fail.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudIot_MqttConfig_MqttEnabledState_MqttDisabled Disables a
 *        MQTT connection. (Value: "MQTT_DISABLED")
 *    @arg @c kGTLRCloudIot_MqttConfig_MqttEnabledState_MqttEnabled Enables a
 *        MQTT connection. (Value: "MQTT_ENABLED")
 *    @arg @c kGTLRCloudIot_MqttConfig_MqttEnabledState_MqttStateUnspecified No
 *        MQTT state specified. If not specified, MQTT will be enabled by
 *        default. (Value: "MQTT_STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *mqttEnabledState;

@end


/**
 *  Defines an Identity and Access Management (IAM) policy. It is used to
 *  specify access control policies for Cloud Platform resources.
 *  A `Policy` consists of a list of `bindings`. A `binding` binds a list of
 *  `members` to a `role`, where the members can be user accounts, Google
 *  groups,
 *  Google domains, and service accounts. A `role` is a named list of
 *  permissions
 *  defined by IAM.
 *  **JSON Example**
 *  {
 *  "bindings": [
 *  {
 *  "role": "roles/owner",
 *  "members": [
 *  "user:mike\@example.com",
 *  "group:admins\@example.com",
 *  "domain:google.com",
 *  "serviceAccount:my-other-app\@appspot.gserviceaccount.com"
 *  ]
 *  },
 *  {
 *  "role": "roles/viewer",
 *  "members": ["user:sean\@example.com"]
 *  }
 *  ]
 *  }
 *  **YAML Example**
 *  bindings:
 *  - members:
 *  - user:mike\@example.com
 *  - group:admins\@example.com
 *  - domain:google.com
 *  - serviceAccount:my-other-app\@appspot.gserviceaccount.com
 *  role: roles/owner
 *  - members:
 *  - user:sean\@example.com
 *  role: roles/viewer
 *  For a description of IAM and its features, see the
 *  [IAM developer's guide](https://cloud.google.com/iam/docs).
 */
@interface GTLRCloudIot_Policy : GTLRObject

/**
 *  Associates a list of `members` to a `role`.
 *  `bindings` with no members will result in an error.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIot_Binding *> *bindings;

/**
 *  `etag` is used for optimistic concurrency control as a way to help
 *  prevent simultaneous updates of a policy from overwriting each other.
 *  It is strongly suggested that systems make use of the `etag` in the
 *  read-modify-write cycle to perform policy updates in order to avoid race
 *  conditions: An `etag` is returned in the response to `getIamPolicy`, and
 *  systems are expected to put that etag in the request to `setIamPolicy` to
 *  ensure that their change will be applied to the same version of the policy.
 *  If no `etag` is provided in the call to `setIamPolicy`, then the existing
 *  policy is overwritten blindly.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Deprecated.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *version;

@end


/**
 *  A public key certificate format and data.
 */
@interface GTLRCloudIot_PublicKeyCertificate : GTLRObject

/** The certificate data. */
@property(nonatomic, copy, nullable) NSString *certificate;

/**
 *  The certificate format.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudIot_PublicKeyCertificate_Format_UnspecifiedPublicKeyCertificateFormat
 *        The format has not been specified. This is an invalid default value
 *        and
 *        must not be used. (Value: "UNSPECIFIED_PUBLIC_KEY_CERTIFICATE_FORMAT")
 *    @arg @c kGTLRCloudIot_PublicKeyCertificate_Format_X509CertificatePem An
 *        X.509v3 certificate ([RFC5280](https://www.ietf.org/rfc/rfc5280.txt)),
 *        encoded in base64, and wrapped by `-----BEGIN CERTIFICATE-----` and
 *        `-----END CERTIFICATE-----`. (Value: "X509_CERTIFICATE_PEM")
 */
@property(nonatomic, copy, nullable) NSString *format;

/**
 *  [Output only] The certificate details. Used only for X.509 certificates.
 */
@property(nonatomic, strong, nullable) GTLRCloudIot_X509CertificateDetails *x509Details;

@end


/**
 *  A public key format and data.
 */
@interface GTLRCloudIot_PublicKeyCredential : GTLRObject

/**
 *  The format of the key.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudIot_PublicKeyCredential_Format_Es256Pem Public key for
 *        the ECDSA algorithm using P-256 and SHA-256, encoded in
 *        base64, and wrapped by `-----BEGIN PUBLIC KEY-----` and `-----END
 *        PUBLIC KEY-----`. This can be used to verify JWT tokens with the
 *        `ES256`
 *        algorithm ([RFC7518](https://www.ietf.org/rfc/rfc7518.txt)). This
 *        curve is
 *        defined in [OpenSSL](https://www.openssl.org/) as the `prime256v1`
 *        curve. (Value: "ES256_PEM")
 *    @arg @c kGTLRCloudIot_PublicKeyCredential_Format_Es256X509Pem As
 *        ES256_PEM, but wrapped in an X.509v3 certificate ([RFC5280](
 *        https://www.ietf.org/rfc/rfc5280.txt)), encoded in base64, and wrapped
 *        by
 *        `-----BEGIN CERTIFICATE-----` and `-----END CERTIFICATE-----`. (Value:
 *        "ES256_X509_PEM")
 *    @arg @c kGTLRCloudIot_PublicKeyCredential_Format_RsaPem An RSA public key
 *        encoded in base64, and wrapped by
 *        `-----BEGIN PUBLIC KEY-----` and `-----END PUBLIC KEY-----`. This can
 *        be
 *        used to verify `RS256` signatures in JWT tokens ([RFC7518](
 *        https://www.ietf.org/rfc/rfc7518.txt)). (Value: "RSA_PEM")
 *    @arg @c kGTLRCloudIot_PublicKeyCredential_Format_RsaX509Pem As RSA_PEM,
 *        but wrapped in an X.509v3 certificate ([RFC5280](
 *        https://www.ietf.org/rfc/rfc5280.txt)), encoded in base64, and wrapped
 *        by
 *        `-----BEGIN CERTIFICATE-----` and `-----END CERTIFICATE-----`. (Value:
 *        "RSA_X509_PEM")
 *    @arg @c kGTLRCloudIot_PublicKeyCredential_Format_UnspecifiedPublicKeyFormat
 *        The format has not been specified. This is an invalid default value
 *        and
 *        must not be used. (Value: "UNSPECIFIED_PUBLIC_KEY_FORMAT")
 */
@property(nonatomic, copy, nullable) NSString *format;

/** The key data. */
@property(nonatomic, copy, nullable) NSString *key;

@end


/**
 *  A server-stored registry credential used to validate device credentials.
 */
@interface GTLRCloudIot_RegistryCredential : GTLRObject

/** A public key certificate used to verify the device credentials. */
@property(nonatomic, strong, nullable) GTLRCloudIot_PublicKeyCertificate *publicKeyCertificate;

@end


/**
 *  Request message for `SetIamPolicy` method.
 */
@interface GTLRCloudIot_SetIamPolicyRequest : GTLRObject

/**
 *  REQUIRED: The complete policy to be applied to the `resource`. The size of
 *  the policy is limited to a few 10s of KB. An empty policy is a
 *  valid policy but certain Cloud Platform services (such as Projects)
 *  might reject them.
 */
@property(nonatomic, strong, nullable) GTLRCloudIot_Policy *policy;

@end


/**
 *  The configuration for notification of new states received from the device.
 */
@interface GTLRCloudIot_StateNotificationConfig : GTLRObject

/**
 *  A Cloud Pub/Sub topic name. For example,
 *  `projects/myProject/topics/deviceEvents`.
 */
@property(nonatomic, copy, nullable) NSString *pubsubTopicName;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different
 *  programming environments, including REST APIs and RPC APIs. It is used by
 *  [gRPC](https://github.com/grpc). The error model is designed to be:
 *  - Simple to use and understand for most users
 *  - Flexible enough to meet unexpected needs
 *  # Overview
 *  The `Status` message contains three pieces of data: error code, error
 *  message,
 *  and error details. The error code should be an enum value of
 *  google.rpc.Code, but it may accept additional error codes if needed. The
 *  error message should be a developer-facing English message that helps
 *  developers *understand* and *resolve* the error. If a localized user-facing
 *  error message is needed, put the localized message in the error details or
 *  localize it in the client. The optional error details may contain arbitrary
 *  information about the error. There is a predefined set of error detail types
 *  in the package `google.rpc` that can be used for common error conditions.
 *  # Language mapping
 *  The `Status` message is the logical representation of the error model, but
 *  it
 *  is not necessarily the actual wire format. When the `Status` message is
 *  exposed in different client libraries and different wire protocols, it can
 *  be
 *  mapped differently. For example, it will likely be mapped to some exceptions
 *  in Java, but more likely mapped to some error codes in C.
 *  # Other uses
 *  The error model and the `Status` message can be used in a variety of
 *  environments, either with or without APIs, to provide a
 *  consistent developer experience across different environments.
 *  Example uses of this error model include:
 *  - Partial errors. If a service needs to return partial errors to the client,
 *  it may embed the `Status` in the normal response to indicate the partial
 *  errors.
 *  - Workflow errors. A typical workflow has multiple steps. Each step may
 *  have a `Status` message for error reporting.
 *  - Batch operations. If a client uses batch request and batch response, the
 *  `Status` message should be used directly inside batch response, one for
 *  each error sub-response.
 *  - Asynchronous operations. If an API call embeds asynchronous operation
 *  results in its response, the status of those operations should be
 *  represented directly using the `Status` message.
 *  - Logging. If some API errors are stored in logs, the message `Status` could
 *  be used directly after any stripping needed for security/privacy reasons.
 */
@interface GTLRCloudIot_Status : GTLRObject

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
@property(nonatomic, strong, nullable) NSArray<GTLRCloudIot_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudIot_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudIot_Status_Details_Item : GTLRObject
@end


/**
 *  Request message for `TestIamPermissions` method.
 */
@interface GTLRCloudIot_TestIamPermissionsRequest : GTLRObject

/**
 *  The set of permissions to check for the `resource`. Permissions with
 *  wildcards (such as '*' or 'storage.*') are not allowed. For more
 *  information see
 *  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  Response message for `TestIamPermissions` method.
 */
@interface GTLRCloudIot_TestIamPermissionsResponse : GTLRObject

/**
 *  A subset of `TestPermissionsRequest.permissions` that the caller is
 *  allowed.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  Details of an X.509 certificate. For informational purposes only.
 */
@interface GTLRCloudIot_X509CertificateDetails : GTLRObject

/** The time the certificate becomes invalid. */
@property(nonatomic, strong, nullable) GTLRDateTime *expiryTime;

/** The entity that signed the certificate. */
@property(nonatomic, copy, nullable) NSString *issuer;

/** The type of public key in the certificate. */
@property(nonatomic, copy, nullable) NSString *publicKeyType;

/** The algorithm used to sign the certificate. */
@property(nonatomic, copy, nullable) NSString *signatureAlgorithm;

/** The time the certificate becomes valid. */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

/** The entity the certificate and public key belong to. */
@property(nonatomic, copy, nullable) NSString *subject;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
