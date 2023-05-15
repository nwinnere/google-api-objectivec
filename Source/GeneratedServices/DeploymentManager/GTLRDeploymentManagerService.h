// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Deployment Manager V2 API (deploymentmanager/v2)
// Description:
//   The Google Cloud Deployment Manager v2 API provides services for
//   configuring, deploying, and viewing Google Cloud services and APIs via
//   templates which specify deployments of Cloud resources.
// Documentation:
//   https://cloud.google.com/deployment-manager

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDeploymentManagerCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud Platform services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDeploymentManagerCloudPlatformReadOnly;
/**
 *  Authorization scope: View and manage your Google Cloud Platform management
 *  resources and deployment status information
 *
 *  Value "https://www.googleapis.com/auth/ndev.cloudman"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDeploymentManagerNdevCloudman;
/**
 *  Authorization scope: View your Google Cloud Platform management resources
 *  and deployment status information
 *
 *  Value "https://www.googleapis.com/auth/ndev.cloudman.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDeploymentManagerNdevCloudmanReadonly;

// ----------------------------------------------------------------------------
//   GTLRDeploymentManagerService
//

/**
 *  Service for executing Cloud Deployment Manager V2 API queries.
 *
 *  The Google Cloud Deployment Manager v2 API provides services for
 *  configuring, deploying, and viewing Google Cloud services and APIs via
 *  templates which specify deployments of Cloud resources.
 */
@interface GTLRDeploymentManagerService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRDeploymentManagerQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
