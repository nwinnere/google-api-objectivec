// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud DNS API (dns/v1)
// Documentation:
//   http://developers.google.com/cloud-dns

#import "GTLRDns.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeDnsCloudPlatform         = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLRAuthScopeDnsCloudPlatformReadOnly = @"https://www.googleapis.com/auth/cloud-platform.read-only";
NSString * const kGTLRAuthScopeDnsNdevClouddnsReadonly  = @"https://www.googleapis.com/auth/ndev.clouddns.readonly";
NSString * const kGTLRAuthScopeDnsNdevClouddnsReadwrite = @"https://www.googleapis.com/auth/ndev.clouddns.readwrite";

// ----------------------------------------------------------------------------
//   GTLRDnsService
//

@implementation GTLRDnsService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://dns.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

+ (NSDictionary<NSString *, Class> *)kindStringToClassMap {
  return @{
    @"dns#change" : [GTLRDns_Change class],
    @"dns#changesListResponse" : [GTLRDns_ChangesListResponse class],
    @"dns#dnsKey" : [GTLRDns_DnsKey class],
    @"dns#dnsKeysListResponse" : [GTLRDns_DnsKeysListResponse class],
    @"dns#dnsKeySpec" : [GTLRDns_DnsKeySpec class],
    @"dns#managedZone" : [GTLRDns_ManagedZone class],
    @"dns#managedZoneDnsSecConfig" : [GTLRDns_ManagedZoneDnsSecConfig class],
    @"dns#managedZoneForwardingConfig" : [GTLRDns_ManagedZoneForwardingConfig class],
    @"dns#managedZoneForwardingConfigNameServerTarget" : [GTLRDns_ManagedZoneForwardingConfigNameServerTarget class],
    @"dns#managedZoneOperationsListResponse" : [GTLRDns_ManagedZoneOperationsListResponse class],
    @"dns#managedZonePeeringConfig" : [GTLRDns_ManagedZonePeeringConfig class],
    @"dns#managedZonePeeringConfigTargetNetwork" : [GTLRDns_ManagedZonePeeringConfigTargetNetwork class],
    @"dns#managedZonePrivateVisibilityConfig" : [GTLRDns_ManagedZonePrivateVisibilityConfig class],
    @"dns#managedZonePrivateVisibilityConfigNetwork" : [GTLRDns_ManagedZonePrivateVisibilityConfigNetwork class],
    @"dns#managedZoneReverseLookupConfig" : [GTLRDns_ManagedZoneReverseLookupConfig class],
    @"dns#managedZonesListResponse" : [GTLRDns_ManagedZonesListResponse class],
    @"dns#operation" : [GTLRDns_Operation class],
    @"dns#policiesListResponse" : [GTLRDns_PoliciesListResponse class],
    @"dns#policy" : [GTLRDns_Policy class],
    @"dns#policyAlternativeNameServerConfig" : [GTLRDns_PolicyAlternativeNameServerConfig class],
    @"dns#policyAlternativeNameServerConfigTargetNameServer" : [GTLRDns_PolicyAlternativeNameServerConfigTargetNameServer class],
    @"dns#policyNetwork" : [GTLRDns_PolicyNetwork class],
    @"dns#project" : [GTLRDns_Project class],
    @"dns#quota" : [GTLRDns_Quota class],
    @"dns#resourceRecordSet" : [GTLRDns_ResourceRecordSet class],
    @"dns#resourceRecordSetsListResponse" : [GTLRDns_ResourceRecordSetsListResponse class],
  };
}

@end
