// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Identity Toolkit API (identitytoolkit/v3)
// Description:
//   Help the third party sites to implement federated login.
// Documentation:
//   https://developers.google.com/identity-toolkit/v3/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRIdentityToolkit_EmailTemplate;
@class GTLRIdentityToolkit_IdpConfig;
@class GTLRIdentityToolkit_SetAccountInfoResponseProviderUserInfoItem;
@class GTLRIdentityToolkit_UploadAccountResponseErrorItem;
@class GTLRIdentityToolkit_UserInfo;
@class GTLRIdentityToolkit_UserInfoProviderUserInfoItem;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Response of creating the IDP authentication URL.
 */
@interface GTLRIdentityToolkit_CreateAuthUriResponse : GTLRObject

/** all providers the user has once used to do federated login */
@property(nonatomic, strong, nullable) NSArray<NSString *> *allProviders;

/** The URI used by the IDP to authenticate the user. */
@property(nonatomic, copy, nullable) NSString *authUri;

/**
 *  True if captcha is required.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *captchaRequired;

/**
 *  True if the authUri is for user's existing provider.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *forExistingProvider;

/** The fixed string identitytoolkit#CreateAuthUriResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

/** The provider ID of the auth URI. */
@property(nonatomic, copy, nullable) NSString *providerId;

/**
 *  Whether the user is registered if the identifier is an email.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *registered;

/**
 *  Session ID which should be passed in the following verifyAssertion request.
 */
@property(nonatomic, copy, nullable) NSString *sessionId;

@end


/**
 *  Respone of deleting account.
 */
@interface GTLRIdentityToolkit_DeleteAccountResponse : GTLRObject

/** The fixed string "identitytoolkit#DeleteAccountResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  Respone of downloading accounts in batch.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "users" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRIdentityToolkit_DownloadAccountResponse : GTLRCollectionObject

/** The fixed string "identitytoolkit#DownloadAccountResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The next page token. To be used in a subsequent request to return the next
 *  page of results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The user accounts data.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRIdentityToolkit_UserInfo *> *users;

@end


/**
 *  Template for an email template.
 */
@interface GTLRIdentityToolkit_EmailTemplate : GTLRObject

/** Email body. */
@property(nonatomic, copy, nullable) NSString *body;

/** Email body format. */
@property(nonatomic, copy, nullable) NSString *format;

/** From address of the email. */
@property(nonatomic, copy, nullable) NSString *from;

/** From display name. */
@property(nonatomic, copy, nullable) NSString *fromDisplayName;

/** Reply-to address. */
@property(nonatomic, copy, nullable) NSString *replyTo;

/** Subject of the email. */
@property(nonatomic, copy, nullable) NSString *subject;

@end


/**
 *  Response of getting account information.
 */
@interface GTLRIdentityToolkit_GetAccountInfoResponse : GTLRObject

/** The fixed string "identitytoolkit#GetAccountInfoResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

/** The info of the users. */
@property(nonatomic, strong, nullable) NSArray<GTLRIdentityToolkit_UserInfo *> *users;

@end


/**
 *  Response of getting a code for user confirmation (reset password, change
 *  email etc.).
 */
@interface GTLRIdentityToolkit_GetOobConfirmationCodeResponse : GTLRObject

/** The email address that the email is sent to. */
@property(nonatomic, copy, nullable) NSString *email;

/** The fixed string "identitytoolkit#GetOobConfirmationCodeResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

/** The code to be send to the user. */
@property(nonatomic, copy, nullable) NSString *oobCode;

@end


/**
 *  Response of getting recaptcha param.
 */
@interface GTLRIdentityToolkit_GetRecaptchaParamResponse : GTLRObject

/** The fixed string "identitytoolkit#GetRecaptchaParamResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

/** Site key registered at recaptcha. */
@property(nonatomic, copy, nullable) NSString *recaptchaSiteKey;

/**
 *  The stoken field for the recaptcha widget, used to request captcha
 *  challenge.
 */
@property(nonatomic, copy, nullable) NSString *recaptchaStoken;

@end


/**
 *  Template for a single idp configuration.
 */
@interface GTLRIdentityToolkit_IdpConfig : GTLRObject

/** OAuth2 client ID. */
@property(nonatomic, copy, nullable) NSString *clientId;

/**
 *  Whether this IDP is enabled.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *enabled;

/**
 *  Percent of users who will be prompted/redirected federated login for this
 *  IDP.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *experimentPercent;

/** OAuth2 provider. */
@property(nonatomic, copy, nullable) NSString *provider;

/** OAuth2 client secret. */
@property(nonatomic, copy, nullable) NSString *secret;

/** Whitelisted client IDs for audience check. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *whitelistedAudiences;

@end


/**
 *  Request of getting a code for user confirmation (reset password, change
 *  email etc.)
 */
@interface GTLRIdentityToolkit_Relyingparty : GTLRObject

/** The recaptcha response from the user. */
@property(nonatomic, copy, nullable) NSString *captchaResp;

/** The recaptcha challenge presented to the user. */
@property(nonatomic, copy, nullable) NSString *challenge;

/** The email of the user. */
@property(nonatomic, copy, nullable) NSString *email;

/** The user's Gitkit login token for email change. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** The fixed string "identitytoolkit#relyingparty". */
@property(nonatomic, copy, nullable) NSString *kind;

/** The new email if the code is for email change. */
@property(nonatomic, copy, nullable) NSString *newEmail NS_RETURNS_NOT_RETAINED;

/** The request type. */
@property(nonatomic, copy, nullable) NSString *requestType;

/** The IP address of the user. */
@property(nonatomic, copy, nullable) NSString *userIp;

@end


/**
 *  Request to get the IDP authentication URL.
 */
@interface GTLRIdentityToolkit_RelyingpartyCreateAuthUriRequest : GTLRObject

/**
 *  The app ID of the mobile app, base64(CERT_SHA1):PACKAGE_NAME for Android,
 *  BUNDLE_ID for iOS.
 */
@property(nonatomic, copy, nullable) NSString *appId;

/** The relying party OAuth client ID. */
@property(nonatomic, copy, nullable) NSString *clientId;

/**
 *  The opaque value used by the client to maintain context info between the
 *  authentication request and the IDP callback.
 */
@property(nonatomic, copy, nullable) NSString *context;

/**
 *  The URI to which the IDP redirects the user after the federated login flow.
 */
@property(nonatomic, copy, nullable) NSString *continueUri;

/**
 *  The hosted domain to restrict sign-in to accounts at that domain for Google
 *  Apps hosted accounts.
 */
@property(nonatomic, copy, nullable) NSString *hostedDomain;

/**
 *  The email or federated ID of the user.
 *
 *  identifierProperty property maps to 'identifier' in the JSON ('identifier'
 *  is reserved for remapping 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifierProperty;

/** The developer's consumer key for OpenId OAuth Extension */
@property(nonatomic, copy, nullable) NSString *oauthConsumerKey;

/**
 *  Additional oauth scopes, beyond the basid user profile, that the user would
 *  be prompted to grant
 */
@property(nonatomic, copy, nullable) NSString *oauthScope;

/**
 *  Optional realm for OpenID protocol. The sub string "scheme://domain:port" of
 *  the param "continueUri" is used if this is not set.
 */
@property(nonatomic, copy, nullable) NSString *openidRealm;

/** The native app package for OTA installation. */
@property(nonatomic, copy, nullable) NSString *otaApp;

/**
 *  The IdP ID. For white listed IdPs it's a short domain name e.g. google.com,
 *  aol.com, live.net and yahoo.com. For other OpenID IdPs it's the OP
 *  identifier.
 */
@property(nonatomic, copy, nullable) NSString *providerId;

@end


/**
 *  Request to delete account.
 */
@interface GTLRIdentityToolkit_RelyingpartyDeleteAccountRequest : GTLRObject

/**
 *  GCP project number of the requesting delegated app. Currently only intended
 *  for Firebase V1 migration.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *delegatedProjectNumber;

/** The GITKit token or STS id token of the authenticated user. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** The local ID of the user. */
@property(nonatomic, copy, nullable) NSString *localId;

@end


/**
 *  Request to download user account in batch.
 */
@interface GTLRIdentityToolkit_RelyingpartyDownloadAccountRequest : GTLRObject

/**
 *  GCP project number of the requesting delegated app. Currently only intended
 *  for Firebase V1 migration.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *delegatedProjectNumber;

/**
 *  The max number of results to return in the response.
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxResults;

/**
 *  The token for the next page. This should be taken from the previous
 *  response.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Request to get the account information.
 */
@interface GTLRIdentityToolkit_RelyingpartyGetAccountInfoRequest : GTLRObject

/**
 *  GCP project number of the requesting delegated app. Currently only intended
 *  for Firebase V1 migration.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *delegatedProjectNumber;

/** The list of emails of the users to inquiry. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *email;

/** The GITKit token of the authenticated user. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** The list of local ID's of the users to inquiry. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *localId;

@end


/**
 *  Response of getting the project configuration.
 */
@interface GTLRIdentityToolkit_RelyingpartyGetProjectConfigResponse : GTLRObject

/**
 *  Whether to allow password user sign in or sign up.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *allowPasswordUser;

/** Browser API key, needed when making http request to Apiary. */
@property(nonatomic, copy, nullable) NSString *apiKey;

/** Authorized domains. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *authorizedDomains;

/** Change email template. */
@property(nonatomic, strong, nullable) GTLRIdentityToolkit_EmailTemplate *changeEmailTemplate;

/**
 *  Whether anonymous user is enabled.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *enableAnonymousUser;

/** OAuth2 provider configuration. */
@property(nonatomic, strong, nullable) NSArray<GTLRIdentityToolkit_IdpConfig *> *idpConfig;

/** Legacy reset password email template. */
@property(nonatomic, strong, nullable) GTLRIdentityToolkit_EmailTemplate *legacyResetPasswordTemplate;

/** Project ID of the relying party. */
@property(nonatomic, copy, nullable) NSString *projectId;

/** Reset password email template. */
@property(nonatomic, strong, nullable) GTLRIdentityToolkit_EmailTemplate *resetPasswordTemplate;

/**
 *  Whether to use email sending provided by Firebear.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *useEmailSending;

/** Verify email template. */
@property(nonatomic, strong, nullable) GTLRIdentityToolkit_EmailTemplate *verifyEmailTemplate;

@end


/**
 *  Respone of getting public keys.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRIdentityToolkit_RelyingpartyGetPublicKeysResponse : GTLRObject
@end


/**
 *  Request to reset the password.
 */
@interface GTLRIdentityToolkit_RelyingpartyResetPasswordRequest : GTLRObject

/** The email address of the user. */
@property(nonatomic, copy, nullable) NSString *email;

/** The new password inputted by the user. */
@property(nonatomic, copy, nullable) NSString *newPassword NS_RETURNS_NOT_RETAINED;

/** The old password inputted by the user. */
@property(nonatomic, copy, nullable) NSString *oldPassword;

/** The confirmation code. */
@property(nonatomic, copy, nullable) NSString *oobCode;

@end


/**
 *  Request to set the account information.
 */
@interface GTLRIdentityToolkit_RelyingpartySetAccountInfoRequest : GTLRObject

/** The captcha challenge. */
@property(nonatomic, copy, nullable) NSString *captchaChallenge;

/** Response to the captcha. */
@property(nonatomic, copy, nullable) NSString *captchaResponse;

/**
 *  The timestamp when the account is created.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *createdAt;

/**
 *  GCP project number of the requesting delegated app. Currently only intended
 *  for Firebase V1 migration.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *delegatedProjectNumber;

/** The attributes users request to delete. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *deleteAttribute;

/** The IDPs the user request to delete. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *deleteProvider;

/**
 *  Whether to disable the user.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *disableUser;

/** The name of the user. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** The email of the user. */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  Mark the email as verified or not.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *emailVerified;

/** The GITKit token of the authenticated user. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** Instance id token of the app. */
@property(nonatomic, copy, nullable) NSString *instanceId;

/**
 *  Last login timestamp.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *lastLoginAt;

/** The local ID of the user. */
@property(nonatomic, copy, nullable) NSString *localId;

/** The out-of-band code of the change email request. */
@property(nonatomic, copy, nullable) NSString *oobCode;

/** The new password of the user. */
@property(nonatomic, copy, nullable) NSString *password;

/** The photo url of the user. */
@property(nonatomic, copy, nullable) NSString *photoUrl;

/** The associated IDPs of the user. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *provider;

/**
 *  Whether return sts id token and refresh token instead of gitkit token.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *returnSecureToken;

/**
 *  Mark the user to upgrade to federated login.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *upgradeToFederatedLogin;

/**
 *  Timestamp in seconds for valid login token.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *validSince;

@end


/**
 *  Request to set the project configuration.
 */
@interface GTLRIdentityToolkit_RelyingpartySetProjectConfigRequest : GTLRObject

/**
 *  Whether to allow password user sign in or sign up.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *allowPasswordUser;

/** Browser API key, needed when making http request to Apiary. */
@property(nonatomic, copy, nullable) NSString *apiKey;

/** Authorized domains for widget redirect. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *authorizedDomains;

/** Change email template. */
@property(nonatomic, strong, nullable) GTLRIdentityToolkit_EmailTemplate *changeEmailTemplate;

/**
 *  GCP project number of the requesting delegated app. Currently only intended
 *  for Firebase V1 migration.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *delegatedProjectNumber;

/**
 *  Whether to enable anonymous user.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *enableAnonymousUser;

/** Oauth2 provider configuration. */
@property(nonatomic, strong, nullable) NSArray<GTLRIdentityToolkit_IdpConfig *> *idpConfig;

/** Legacy reset password email template. */
@property(nonatomic, strong, nullable) GTLRIdentityToolkit_EmailTemplate *legacyResetPasswordTemplate;

/** Reset password email template. */
@property(nonatomic, strong, nullable) GTLRIdentityToolkit_EmailTemplate *resetPasswordTemplate;

/**
 *  Whether to use email sending provided by Firebear.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *useEmailSending;

/** Verify email template. */
@property(nonatomic, strong, nullable) GTLRIdentityToolkit_EmailTemplate *verifyEmailTemplate;

@end


/**
 *  Response of setting the project configuration.
 */
@interface GTLRIdentityToolkit_RelyingpartySetProjectConfigResponse : GTLRObject

/** Project ID of the relying party. */
@property(nonatomic, copy, nullable) NSString *projectId;

@end


/**
 *  Request to sign out user.
 */
@interface GTLRIdentityToolkit_RelyingpartySignOutUserRequest : GTLRObject

/** Instance id token of the app. */
@property(nonatomic, copy, nullable) NSString *instanceId;

/** The local ID of the user. */
@property(nonatomic, copy, nullable) NSString *localId;

@end


/**
 *  Response of signing out user.
 */
@interface GTLRIdentityToolkit_RelyingpartySignOutUserResponse : GTLRObject

/** The local ID of the user. */
@property(nonatomic, copy, nullable) NSString *localId;

@end


/**
 *  Request to signup new user, create anonymous user or anonymous user reauth.
 */
@interface GTLRIdentityToolkit_RelyingpartySignupNewUserRequest : GTLRObject

/** The captcha challenge. */
@property(nonatomic, copy, nullable) NSString *captchaChallenge;

/** Response to the captcha. */
@property(nonatomic, copy, nullable) NSString *captchaResponse;

/** The name of the user. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** The email of the user. */
@property(nonatomic, copy, nullable) NSString *email;

/** The GITKit token of the authenticated user. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** Instance id token of the app. */
@property(nonatomic, copy, nullable) NSString *instanceId;

/** The new password of the user. */
@property(nonatomic, copy, nullable) NSString *password;

@end


/**
 *  Request to upload user account in batch.
 */
@interface GTLRIdentityToolkit_RelyingpartyUploadAccountRequest : GTLRObject

/**
 *  GCP project number of the requesting delegated app. Currently only intended
 *  for Firebase V1 migration.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *delegatedProjectNumber;

/** The password hash algorithm. */
@property(nonatomic, copy, nullable) NSString *hashAlgorithm;

/**
 *  Memory cost for hash calculation. Used by scrypt similar algorithms.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *memoryCost;

/**
 *  Rounds for hash calculation. Used by scrypt and similar algorithms.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *rounds;

/**
 *  The salt separator.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *saltSeparator;

/**
 *  The key for to hash the password.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *signerKey;

/** The account info to be stored. */
@property(nonatomic, strong, nullable) NSArray<GTLRIdentityToolkit_UserInfo *> *users;

@end


/**
 *  Request to verify the IDP assertion.
 */
@interface GTLRIdentityToolkit_RelyingpartyVerifyAssertionRequest : GTLRObject

/**
 *  GCP project number of the requesting delegated app. Currently only intended
 *  for Firebase V1 migration.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *delegatedProjectNumber;

/** The GITKit token of the authenticated user. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** Instance id token of the app. */
@property(nonatomic, copy, nullable) NSString *instanceId;

/**
 *  The GITKit token for the non-trusted IDP pending to be confirmed by the
 *  user.
 */
@property(nonatomic, copy, nullable) NSString *pendingIdToken;

/** The post body if the request is a HTTP POST. */
@property(nonatomic, copy, nullable) NSString *postBody;

/**
 *  The URI to which the IDP redirects the user back. It may contain federated
 *  login result params added by the IDP.
 */
@property(nonatomic, copy, nullable) NSString *requestUri;

/**
 *  Whether to return refresh tokens.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *returnRefreshToken;

/**
 *  Whether return sts id token and refresh token instead of gitkit token.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *returnSecureToken;

/**
 *  Session ID, which should match the one in previous createAuthUri request.
 */
@property(nonatomic, copy, nullable) NSString *sessionId;

@end


/**
 *  Request to verify a custom token
 */
@interface GTLRIdentityToolkit_RelyingpartyVerifyCustomTokenRequest : GTLRObject

/**
 *  GCP project number of the requesting delegated app. Currently only intended
 *  for Firebase V1 migration.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *delegatedProjectNumber;

/** Instance id token of the app. */
@property(nonatomic, copy, nullable) NSString *instanceId;

/**
 *  Whether return sts id token and refresh token instead of gitkit token.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *returnSecureToken;

/** The custom token to verify */
@property(nonatomic, copy, nullable) NSString *token;

@end


/**
 *  Request to verify the password.
 */
@interface GTLRIdentityToolkit_RelyingpartyVerifyPasswordRequest : GTLRObject

/** The captcha challenge. */
@property(nonatomic, copy, nullable) NSString *captchaChallenge;

/** Response to the captcha. */
@property(nonatomic, copy, nullable) NSString *captchaResponse;

/**
 *  GCP project number of the requesting delegated app. Currently only intended
 *  for Firebase V1 migration.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *delegatedProjectNumber;

/** The email of the user. */
@property(nonatomic, copy, nullable) NSString *email;

/** The GITKit token of the authenticated user. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** Instance id token of the app. */
@property(nonatomic, copy, nullable) NSString *instanceId;

/** The password inputed by the user. */
@property(nonatomic, copy, nullable) NSString *password;

/**
 *  The GITKit token for the non-trusted IDP, which is to be confirmed by the
 *  user.
 */
@property(nonatomic, copy, nullable) NSString *pendingIdToken;

/**
 *  Whether return sts id token and refresh token instead of gitkit token.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *returnSecureToken;

@end


/**
 *  Response of resetting the password.
 */
@interface GTLRIdentityToolkit_ResetPasswordResponse : GTLRObject

/** The user's email. */
@property(nonatomic, copy, nullable) NSString *email;

/** The fixed string "identitytoolkit#ResetPasswordResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  Respone of setting the account information.
 */
@interface GTLRIdentityToolkit_SetAccountInfoResponse : GTLRObject

/** The name of the user. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** The email of the user. */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  If idToken is STS id token, then this field will be expiration time of STS
 *  id token in seconds.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *expiresIn;

/** The Gitkit id token to login the newly sign up user. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** The fixed string "identitytoolkit#SetAccountInfoResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

/** The local ID of the user. */
@property(nonatomic, copy, nullable) NSString *localId;

/** The new email the user attempts to change to. */
@property(nonatomic, copy, nullable) NSString *newEmail NS_RETURNS_NOT_RETAINED;

/**
 *  The user's hashed password.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *passwordHash;

/** The photo url of the user. */
@property(nonatomic, copy, nullable) NSString *photoUrl;

/** The user's profiles at the associated IdPs. */
@property(nonatomic, strong, nullable) NSArray<GTLRIdentityToolkit_SetAccountInfoResponseProviderUserInfoItem *> *providerUserInfo;

/** If idToken is STS id token, then this field will be refresh token. */
@property(nonatomic, copy, nullable) NSString *refreshToken;

@end


/**
 *  GTLRIdentityToolkit_SetAccountInfoResponseProviderUserInfoItem
 */
@interface GTLRIdentityToolkit_SetAccountInfoResponseProviderUserInfoItem : GTLRObject

/** The user's display name at the IDP. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** User's identifier at IDP. */
@property(nonatomic, copy, nullable) NSString *federatedId;

/** The user's photo url at the IDP. */
@property(nonatomic, copy, nullable) NSString *photoUrl;

/**
 *  The IdP ID. For whitelisted IdPs it's a short domain name, e.g., google.com,
 *  aol.com, live.net and yahoo.com. For other OpenID IdPs it's the OP
 *  identifier.
 */
@property(nonatomic, copy, nullable) NSString *providerId;

@end


/**
 *  Response of signing up new user, creating anonymous user or anonymous user
 *  reauth.
 */
@interface GTLRIdentityToolkit_SignupNewUserResponse : GTLRObject

/** The name of the user. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** The email of the user. */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  If idToken is STS id token, then this field will be expiration time of STS
 *  id token in seconds.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *expiresIn;

/** The Gitkit id token to login the newly sign up user. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** The fixed string "identitytoolkit#SignupNewUserResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

/** The RP local ID of the user. */
@property(nonatomic, copy, nullable) NSString *localId;

/** If idToken is STS id token, then this field will be refresh token. */
@property(nonatomic, copy, nullable) NSString *refreshToken;

@end


/**
 *  Respone of uploading accounts in batch.
 */
@interface GTLRIdentityToolkit_UploadAccountResponse : GTLRObject

/** The error encountered while processing the account info. */
@property(nonatomic, strong, nullable) NSArray<GTLRIdentityToolkit_UploadAccountResponseErrorItem *> *error;

/** The fixed string "identitytoolkit#UploadAccountResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRIdentityToolkit_UploadAccountResponseErrorItem
 */
@interface GTLRIdentityToolkit_UploadAccountResponseErrorItem : GTLRObject

/**
 *  The index of the malformed account, starting from 0.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *index;

/** Detailed error message for the account info. */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  Template for an individual account info.
 */
@interface GTLRIdentityToolkit_UserInfo : GTLRObject

/**
 *  User creation timestamp.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *createdAt;

/**
 *  Whether the user is disabled.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *disabled;

/** The name of the user. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** The email of the user. */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  Whether the email has been verified.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *emailVerified;

/**
 *  last login timestamp.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *lastLoginAt;

/** The local ID of the user. */
@property(nonatomic, copy, nullable) NSString *localId;

/**
 *  The user's hashed password.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *passwordHash;

/**
 *  The timestamp when the password was last updated.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *passwordUpdatedAt;

/** The URL of the user profile photo. */
@property(nonatomic, copy, nullable) NSString *photoUrl;

/** The IDP of the user. */
@property(nonatomic, strong, nullable) NSArray<GTLRIdentityToolkit_UserInfoProviderUserInfoItem *> *providerUserInfo;

/**
 *  The user's password salt.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *salt;

/**
 *  Timestamp in seconds for valid login token.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *validSince;

/**
 *  Version of the user's password.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *version;

@end


/**
 *  GTLRIdentityToolkit_UserInfoProviderUserInfoItem
 */
@interface GTLRIdentityToolkit_UserInfoProviderUserInfoItem : GTLRObject

/** The user's display name at the IDP. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** User's email at IDP. */
@property(nonatomic, copy, nullable) NSString *email;

/** User's identifier at IDP. */
@property(nonatomic, copy, nullable) NSString *federatedId;

/** The user's photo url at the IDP. */
@property(nonatomic, copy, nullable) NSString *photoUrl;

/**
 *  The IdP ID. For white listed IdPs it's a short domain name, e.g.,
 *  google.com, aol.com, live.net and yahoo.com. For other OpenID IdPs it's the
 *  OP identifier.
 */
@property(nonatomic, copy, nullable) NSString *providerId;

/** User's raw identifier directly returned from IDP. */
@property(nonatomic, copy, nullable) NSString *rawId;

@end


/**
 *  Response of verifying the IDP assertion.
 */
@interface GTLRIdentityToolkit_VerifyAssertionResponse : GTLRObject

/** The action code. */
@property(nonatomic, copy, nullable) NSString *action;

/** URL for OTA app installation. */
@property(nonatomic, copy, nullable) NSString *appInstallationUrl;

/** The custom scheme used by mobile app. */
@property(nonatomic, copy, nullable) NSString *appScheme;

/**
 *  The opaque value used by the client to maintain context info between the
 *  authentication request and the IDP callback.
 */
@property(nonatomic, copy, nullable) NSString *context;

/** The birth date of the IdP account. */
@property(nonatomic, copy, nullable) NSString *dateOfBirth;

/** The display name of the user. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The email returned by the IdP. NOTE: The federated login user may not own
 *  the email.
 */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  It's true if the email is recycled.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *emailRecycled;

/**
 *  The value is true if the IDP is also the email provider. It means the user
 *  owns the email.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *emailVerified;

/**
 *  If idToken is STS id token, then this field will be expiration time of STS
 *  id token in seconds.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *expiresIn;

/** The unique ID identifies the IdP account. */
@property(nonatomic, copy, nullable) NSString *federatedId;

/** The first name of the user. */
@property(nonatomic, copy, nullable) NSString *firstName;

/** The full name of the user. */
@property(nonatomic, copy, nullable) NSString *fullName;

/** The ID token. */
@property(nonatomic, copy, nullable) NSString *idToken;

/**
 *  It's the identifier param in the createAuthUri request if the identifier is
 *  an email. It can be used to check whether the user input email is different
 *  from the asserted email.
 */
@property(nonatomic, copy, nullable) NSString *inputEmail;

/** The fixed string "identitytoolkit#VerifyAssertionResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

/** The language preference of the user. */
@property(nonatomic, copy, nullable) NSString *language;

/** The last name of the user. */
@property(nonatomic, copy, nullable) NSString *lastName;

/**
 *  The RP local ID if it's already been mapped to the IdP account identified by
 *  the federated ID.
 */
@property(nonatomic, copy, nullable) NSString *localId;

/**
 *  Whether the assertion is from a non-trusted IDP and need account linking
 *  confirmation.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *needConfirmation;

/**
 *  Whether need client to supply email to complete the federated login flow.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *needEmail;

/** The nick name of the user. */
@property(nonatomic, copy, nullable) NSString *nickName;

/** The OAuth2 access token. */
@property(nonatomic, copy, nullable) NSString *oauthAccessToken;

/** The OAuth2 authorization code. */
@property(nonatomic, copy, nullable) NSString *oauthAuthorizationCode;

/**
 *  The lifetime in seconds of the OAuth2 access token.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *oauthExpireIn;

/** The OIDC id token. */
@property(nonatomic, copy, nullable) NSString *oauthIdToken;

/** The user approved request token for the OpenID OAuth extension. */
@property(nonatomic, copy, nullable) NSString *oauthRequestToken;

/** The scope for the OpenID OAuth extension. */
@property(nonatomic, copy, nullable) NSString *oauthScope;

/** The OAuth1 access token secret. */
@property(nonatomic, copy, nullable) NSString *oauthTokenSecret;

/**
 *  The original email stored in the mapping storage. It's returned when the
 *  federated ID is associated to a different email.
 */
@property(nonatomic, copy, nullable) NSString *originalEmail;

/** The URI of the public accessible profiel picture. */
@property(nonatomic, copy, nullable) NSString *photoUrl;

/**
 *  The IdP ID. For white listed IdPs it's a short domain name e.g. google.com,
 *  aol.com, live.net and yahoo.com. If the "providerId" param is set to OpenID
 *  OP identifer other than the whilte listed IdPs the OP identifier is
 *  returned. If the "identifier" param is federated ID in the createAuthUri
 *  request. The domain part of the federated ID is returned.
 */
@property(nonatomic, copy, nullable) NSString *providerId;

/** If idToken is STS id token, then this field will be refresh token. */
@property(nonatomic, copy, nullable) NSString *refreshToken;

/** The screen_name of a Twitter user. */
@property(nonatomic, copy, nullable) NSString *screenName;

/** The timezone of the user. */
@property(nonatomic, copy, nullable) NSString *timeZone;

/**
 *  When action is 'map', contains the idps which can be used for confirmation.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *verifiedProvider;

@end


/**
 *  Response from verifying a custom token
 */
@interface GTLRIdentityToolkit_VerifyCustomTokenResponse : GTLRObject

/**
 *  If idToken is STS id token, then this field will be expiration time of STS
 *  id token in seconds.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *expiresIn;

/** The GITKit token for authenticated user. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** The fixed string "identitytoolkit#VerifyCustomTokenResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

/** If idToken is STS id token, then this field will be refresh token. */
@property(nonatomic, copy, nullable) NSString *refreshToken;

@end


/**
 *  Request of verifying the password.
 */
@interface GTLRIdentityToolkit_VerifyPasswordResponse : GTLRObject

/** The name of the user. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The email returned by the IdP. NOTE: The federated login user may not own
 *  the email.
 */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  If idToken is STS id token, then this field will be expiration time of STS
 *  id token in seconds.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *expiresIn;

/** The GITKit token for authenticated user. */
@property(nonatomic, copy, nullable) NSString *idToken;

/** The fixed string "identitytoolkit#VerifyPasswordResponse". */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The RP local ID if it's already been mapped to the IdP account identified by
 *  the federated ID.
 */
@property(nonatomic, copy, nullable) NSString *localId;

/** The OAuth2 access token. */
@property(nonatomic, copy, nullable) NSString *oauthAccessToken;

/** The OAuth2 authorization code. */
@property(nonatomic, copy, nullable) NSString *oauthAuthorizationCode;

/**
 *  The lifetime in seconds of the OAuth2 access token.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *oauthExpireIn;

/** The URI of the user's photo at IdP */
@property(nonatomic, copy, nullable) NSString *photoUrl;

/** If idToken is STS id token, then this field will be refresh token. */
@property(nonatomic, copy, nullable) NSString *refreshToken;

/**
 *  Whether the email is registered.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *registered;

@end

NS_ASSUME_NONNULL_END
