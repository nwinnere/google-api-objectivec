// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Container Engine API (container/v1)
// Description:
//   Builds and manages clusters that run container-based applications, powered
//   by open source Kubernetes technology.
// Documentation:
//   https://cloud.google.com/container-engine/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRContainer_AddonsConfig;
@class GTLRContainer_Cluster;
@class GTLRContainer_ClusterUpdate;
@class GTLRContainer_HorizontalPodAutoscaling;
@class GTLRContainer_HttpLoadBalancing;
@class GTLRContainer_MasterAuth;
@class GTLRContainer_NodeConfig;
@class GTLRContainer_NodeConfigMetadata;
@class GTLRContainer_NodePool;
@class GTLRContainer_Operation;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRContainer_Cluster.status

/** Value: "ERROR" */
GTLR_EXTERN NSString * const kGTLRContainer_Cluster_Status_Error;
/** Value: "PROVISIONING" */
GTLR_EXTERN NSString * const kGTLRContainer_Cluster_Status_Provisioning;
/** Value: "RECONCILING" */
GTLR_EXTERN NSString * const kGTLRContainer_Cluster_Status_Reconciling;
/** Value: "RUNNING" */
GTLR_EXTERN NSString * const kGTLRContainer_Cluster_Status_Running;
/** Value: "STATUS_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRContainer_Cluster_Status_StatusUnspecified;
/** Value: "STOPPING" */
GTLR_EXTERN NSString * const kGTLRContainer_Cluster_Status_Stopping;

// ----------------------------------------------------------------------------
// GTLRContainer_NodePool.status

/** Value: "ERROR" */
GTLR_EXTERN NSString * const kGTLRContainer_NodePool_Status_Error;
/** Value: "PROVISIONING" */
GTLR_EXTERN NSString * const kGTLRContainer_NodePool_Status_Provisioning;
/** Value: "RECONCILING" */
GTLR_EXTERN NSString * const kGTLRContainer_NodePool_Status_Reconciling;
/** Value: "RUNNING" */
GTLR_EXTERN NSString * const kGTLRContainer_NodePool_Status_Running;
/** Value: "RUNNING_WITH_ERROR" */
GTLR_EXTERN NSString * const kGTLRContainer_NodePool_Status_RunningWithError;
/** Value: "STATUS_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRContainer_NodePool_Status_StatusUnspecified;
/** Value: "STOPPING" */
GTLR_EXTERN NSString * const kGTLRContainer_NodePool_Status_Stopping;

// ----------------------------------------------------------------------------
// GTLRContainer_Operation.operationType

/** Value: "CREATE_CLUSTER" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_OperationType_CreateCluster;
/** Value: "CREATE_NODE_POOL" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_OperationType_CreateNodePool;
/** Value: "DELETE_CLUSTER" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_OperationType_DeleteCluster;
/** Value: "DELETE_NODE_POOL" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_OperationType_DeleteNodePool;
/** Value: "REPAIR_CLUSTER" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_OperationType_RepairCluster;
/** Value: "TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_OperationType_TypeUnspecified;
/** Value: "UPDATE_CLUSTER" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_OperationType_UpdateCluster;
/** Value: "UPGRADE_MASTER" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_OperationType_UpgradeMaster;
/** Value: "UPGRADE_NODES" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_OperationType_UpgradeNodes;

// ----------------------------------------------------------------------------
// GTLRContainer_Operation.status

/** Value: "DONE" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_Status_Done;
/** Value: "PENDING" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_Status_Pending;
/** Value: "RUNNING" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_Status_Running;
/** Value: "STATUS_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRContainer_Operation_Status_StatusUnspecified;

/**
 *  Configuration for the addons that can be automatically spun up in the
 *  cluster, enabling additional functionality.
 */
@interface GTLRContainer_AddonsConfig : GTLRObject

/**
 *  Configuration for the horizontal pod autoscaling feature, which increases or
 *  decreases the number of replica pods a replication controller has based on
 *  the resource usage of the existing pods.
 */
@property(nonatomic, strong, nullable) GTLRContainer_HorizontalPodAutoscaling *horizontalPodAutoscaling;

/**
 *  Configuration for the HTTP (L7) load balancing controller addon, which makes
 *  it easy to set up HTTP load balancers for services in a cluster.
 */
@property(nonatomic, strong, nullable) GTLRContainer_HttpLoadBalancing *httpLoadBalancing;

@end


/**
 *  A Google Container Engine cluster.
 */
@interface GTLRContainer_Cluster : GTLRObject

/** Configurations for the various addons available to run in the cluster. */
@property(nonatomic, strong, nullable) GTLRContainer_AddonsConfig *addonsConfig;

/**
 *  The IP address range of the container pods in this cluster, in
 *  [CIDR](http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing) notation
 *  (e.g. `10.96.0.0/14`). Leave blank to have one automatically chosen or
 *  specify a `/14` block in `10.0.0.0/8`.
 */
@property(nonatomic, copy, nullable) NSString *clusterIpv4Cidr;

/**
 *  [Output only] The time the cluster was created, in
 *  [RFC3339](https://www.ietf.org/rfc/rfc3339.txt) text format.
 */
@property(nonatomic, copy, nullable) NSString *createTime;

/** [Output only] The current software version of the master endpoint. */
@property(nonatomic, copy, nullable) NSString *currentMasterVersion;

/**
 *  [Output only] The number of nodes currently in the cluster.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *currentNodeCount;

/**
 *  [Output only] The current version of the node software components. If they
 *  are currently at multiple versions because they're in the process of being
 *  upgraded, this reflects the minimum version of all nodes.
 */
@property(nonatomic, copy, nullable) NSString *currentNodeVersion;

/**
 *  An optional description of this cluster.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  [Output only] The IP address of this cluster's master endpoint. The endpoint
 *  can be accessed from the internet at `https://username:password\@endpoint/`.
 *  See the `masterAuth` property of this resource for username and password
 *  information.
 */
@property(nonatomic, copy, nullable) NSString *endpoint;

/**
 *  [Output only] The software version of the master endpoint and kubelets used
 *  in the cluster when it was first created. The version can be upgraded over
 *  time.
 */
@property(nonatomic, copy, nullable) NSString *initialClusterVersion;

/**
 *  The number of nodes to create in this cluster. You must ensure that your
 *  Compute Engine resource quota is sufficient for this number of instances.
 *  You must also have available firewall and routes quota. For requests, this
 *  field should only be used in lieu of a "node_pool" object, since this
 *  configuration (along with the "node_config") will be used to create a
 *  "NodePool" object with an auto-generated name. Do not use this and a
 *  node_pool at the same time.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *initialNodeCount;

/**
 *  [Output only] The resource URLs of [instance
 *  groups](/compute/docs/instance-groups/) associated with this cluster.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *instanceGroupUrls;

/**
 *  The list of Google Compute Engine [locations](/compute/docs/zones#available)
 *  in which the cluster's nodes should be located.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *locations;

/**
 *  The logging service the cluster should use to write logs. Currently
 *  available options: * `logging.googleapis.com` - the Google Cloud Logging
 *  service. * `none` - no logs will be exported from the cluster. * if left as
 *  an empty string,`logging.googleapis.com` will be used.
 */
@property(nonatomic, copy, nullable) NSString *loggingService;

/** The authentication information for accessing the master endpoint. */
@property(nonatomic, strong, nullable) GTLRContainer_MasterAuth *masterAuth;

/**
 *  The monitoring service the cluster should use to write metrics. Currently
 *  available options: * `monitoring.googleapis.com` - the Google Cloud
 *  Monitoring service. * `none` - no metrics will be exported from the cluster.
 *  * if left as an empty string, `monitoring.googleapis.com` will be used.
 */
@property(nonatomic, copy, nullable) NSString *monitoringService;

/**
 *  The name of this cluster. The name must be unique within this project and
 *  zone, and can be up to 40 characters with the following restrictions: *
 *  Lowercase letters, numbers, and hyphens only. * Must start with a letter. *
 *  Must end with a number or a letter.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The name of the Google Compute Engine
 *  [network](/compute/docs/networks-and-firewalls#networks) to which the
 *  cluster is connected. If left unspecified, the `default` network will be
 *  used.
 */
@property(nonatomic, copy, nullable) NSString *network;

/**
 *  Parameters used in creating the cluster's nodes. See `nodeConfig` for the
 *  description of its properties. For requests, this field should only be used
 *  in lieu of a "node_pool" object, since this configuration (along with the
 *  "initial_node_count") will be used to create a "NodePool" object with an
 *  auto-generated name. Do not use this and a node_pool at the same time. For
 *  responses, this field will be populated with the node configuration of the
 *  first node pool. If unspecified, the defaults are used.
 */
@property(nonatomic, strong, nullable) GTLRContainer_NodeConfig *nodeConfig;

/**
 *  [Output only] The size of the address space on each node for hosting
 *  containers. This is provisioned from within the `container_ipv4_cidr` range.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *nodeIpv4CidrSize;

/**
 *  The node pools associated with this cluster. When creating a new cluster,
 *  only a single node pool should be specified. This field should not be set if
 *  "node_config" or "initial_node_count" are specified.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRContainer_NodePool *> *nodePools;

/** [Output only] Server-defined URL for the resource. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/**
 *  [Output only] The IP address range of the Kubernetes services in this
 *  cluster, in
 *  [CIDR](http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing) notation
 *  (e.g. `1.2.3.4/29`). Service addresses are typically put in the last `/16`
 *  from the container CIDR.
 */
@property(nonatomic, copy, nullable) NSString *servicesIpv4Cidr;

/**
 *  [Output only] The current status of this cluster.
 *
 *  Likely values:
 *    @arg @c kGTLRContainer_Cluster_Status_Error Value "ERROR"
 *    @arg @c kGTLRContainer_Cluster_Status_Provisioning Value "PROVISIONING"
 *    @arg @c kGTLRContainer_Cluster_Status_Reconciling Value "RECONCILING"
 *    @arg @c kGTLRContainer_Cluster_Status_Running Value "RUNNING"
 *    @arg @c kGTLRContainer_Cluster_Status_StatusUnspecified Value
 *        "STATUS_UNSPECIFIED"
 *    @arg @c kGTLRContainer_Cluster_Status_Stopping Value "STOPPING"
 */
@property(nonatomic, copy, nullable) NSString *status;

/**
 *  [Output only] Additional information about the current status of this
 *  cluster, if available.
 */
@property(nonatomic, copy, nullable) NSString *statusMessage;

/**
 *  The name of the Google Compute Engine
 *  [subnetwork](/compute/docs/subnetworks) to which the cluster is connected.
 */
@property(nonatomic, copy, nullable) NSString *subnetwork;

/**
 *  [Output only] The name of the Google Compute Engine
 *  [zone](/compute/docs/zones#available) in which the cluster resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

@end


/**
 *  ClusterUpdate describes an update to the cluster. Exactly one update can be
 *  applied to a cluster with each request, so at most one field can be
 *  provided.
 */
@interface GTLRContainer_ClusterUpdate : GTLRObject

/** Configurations for the various addons available to run in the cluster. */
@property(nonatomic, strong, nullable) GTLRContainer_AddonsConfig *desiredAddonsConfig;

/**
 *  The Kubernetes version to change the master to. The only valid value is the
 *  latest supported version. Use "-" to have the server automatically select
 *  the latest version.
 */
@property(nonatomic, copy, nullable) NSString *desiredMasterVersion;

/**
 *  The monitoring service the cluster should use to write metrics. Currently
 *  available options: * "monitoring.googleapis.com" - the Google Cloud
 *  Monitoring service * "none" - no metrics will be exported from the cluster
 */
@property(nonatomic, copy, nullable) NSString *desiredMonitoringService;

/**
 *  The node pool to be upgraded. This field is mandatory if the
 *  "desired_node_version" or "desired_image_family" is specified and there is
 *  more than one node pool on the cluster.
 */
@property(nonatomic, copy, nullable) NSString *desiredNodePoolId;

/**
 *  The Kubernetes version to change the nodes to (typically an upgrade). Use
 *  `-` to upgrade to the latest version supported by the server.
 */
@property(nonatomic, copy, nullable) NSString *desiredNodeVersion;

@end


/**
 *  CreateClusterRequest creates a cluster.
 */
@interface GTLRContainer_CreateClusterRequest : GTLRObject

/**
 *  A [cluster
 *  resource](/container-engine/reference/rest/v1/projects.zones.clusters)
 */
@property(nonatomic, strong, nullable) GTLRContainer_Cluster *cluster;

@end


/**
 *  CreateNodePoolRequest creates a node pool for a cluster.
 */
@interface GTLRContainer_CreateNodePoolRequest : GTLRObject

/** The node pool to create. */
@property(nonatomic, strong, nullable) GTLRContainer_NodePool *nodePool;

@end


/**
 *  Configuration options for the horizontal pod autoscaling feature, which
 *  increases or decreases the number of replica pods a replication controller
 *  has based on the resource usage of the existing pods.
 */
@interface GTLRContainer_HorizontalPodAutoscaling : GTLRObject

/**
 *  Whether the Horizontal Pod Autoscaling feature is enabled in the cluster.
 *  When enabled, it ensures that a Heapster pod is running in the cluster,
 *  which is also used by the Cloud Monitoring service.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *disabled;

@end


/**
 *  Configuration options for the HTTP (L7) load balancing controller addon,
 *  which makes it easy to set up HTTP load balancers for services in a cluster.
 */
@interface GTLRContainer_HttpLoadBalancing : GTLRObject

/**
 *  Whether the HTTP Load Balancing controller is enabled in the cluster. When
 *  enabled, it runs a small pod in the cluster that manages the load balancers.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *disabled;

@end


/**
 *  ListClustersResponse is the result of ListClustersRequest.
 */
@interface GTLRContainer_ListClustersResponse : GTLRObject

/**
 *  A list of clusters in the project in the specified zone, or across all ones.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRContainer_Cluster *> *clusters;

/**
 *  If any zones are listed here, the list of clusters returned may be missing
 *  those zones.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *missingZones;

@end


/**
 *  ListNodePoolsResponse is the result of ListNodePoolsRequest.
 */
@interface GTLRContainer_ListNodePoolsResponse : GTLRObject

/** A list of node pools for a cluster. */
@property(nonatomic, strong, nullable) NSArray<GTLRContainer_NodePool *> *nodePools;

@end


/**
 *  ListOperationsResponse is the result of ListOperationsRequest.
 */
@interface GTLRContainer_ListOperationsResponse : GTLRObject

/**
 *  If any zones are listed here, the list of operations returned may be missing
 *  the operations from those zones.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *missingZones;

/** A list of operations in the project in the specified zone. */
@property(nonatomic, strong, nullable) NSArray<GTLRContainer_Operation *> *operations;

@end


/**
 *  The authentication information for accessing the master endpoint.
 *  Authentication can be done using HTTP basic auth or using client
 *  certificates.
 */
@interface GTLRContainer_MasterAuth : GTLRObject

/**
 *  [Output only] Base64-encoded public certificate used by clients to
 *  authenticate to the cluster endpoint.
 */
@property(nonatomic, copy, nullable) NSString *clientCertificate;

/**
 *  [Output only] Base64-encoded private key used by clients to authenticate to
 *  the cluster endpoint.
 */
@property(nonatomic, copy, nullable) NSString *clientKey;

/**
 *  [Output only] Base64-encoded public certificate that is the root of trust
 *  for the cluster.
 */
@property(nonatomic, copy, nullable) NSString *clusterCaCertificate;

/**
 *  The password to use for HTTP basic authentication to the master endpoint.
 *  Because the master endpoint is open to the Internet, you should create a
 *  strong password.
 */
@property(nonatomic, copy, nullable) NSString *password;

/**
 *  The username to use for HTTP basic authentication to the master endpoint.
 */
@property(nonatomic, copy, nullable) NSString *username;

@end


/**
 *  Parameters that describe the nodes in a cluster.
 */
@interface GTLRContainer_NodeConfig : GTLRObject

/**
 *  Size of the disk attached to each node, specified in GB. The smallest
 *  allowed disk size is 10GB. If unspecified, the default disk size is 100GB.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *diskSizeGb;

/**
 *  The name of a Google Compute Engine [machine
 *  type](/compute/docs/machine-types) (e.g. `n1-standard-1`). If unspecified,
 *  the default machine type is `n1-standard-1`.
 */
@property(nonatomic, copy, nullable) NSString *machineType;

/**
 *  The metadata key/value pairs assigned to instances in the cluster. Keys must
 *  conform to the regexp [a-zA-Z0-9-_]+ and be less than 128 bytes in length.
 *  These are reflected as part of a URL in the metadata server. Additionally,
 *  to avoid ambiguity, keys must not conflict with any other metadata keys for
 *  the project or be one of the four reserved keys: "instance-template",
 *  "kube-env", "startup-script", and "user-data" Values are free-form strings,
 *  and only have meaning as interpreted by the image running in the instance.
 *  The only restriction placed on them is that each value's size must be less
 *  than or equal to 32 KB. The total size of all keys and values must be less
 *  than 512 KB.
 */
@property(nonatomic, strong, nullable) GTLRContainer_NodeConfigMetadata *metadata;

/**
 *  The set of Google API scopes to be made available on all of the node VMs
 *  under the "default" service account. The following scopes are recommended,
 *  but not required, and by default are not included: *
 *  `https://www.googleapis.com/auth/compute` is required for mounting
 *  persistent storage on your nodes. *
 *  `https://www.googleapis.com/auth/devstorage.read_only` is required for
 *  communicating with **gcr.io** (the [Google Container
 *  Registry](/container-registry/)). If unspecified, no scopes are added,
 *  unless Cloud Logging or Cloud Monitoring are enabled, in which case their
 *  required scopes will be added.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *oauthScopes;

@end


/**
 *  The metadata key/value pairs assigned to instances in the cluster. Keys must
 *  conform to the regexp [a-zA-Z0-9-_]+ and be less than 128 bytes in length.
 *  These are reflected as part of a URL in the metadata server. Additionally,
 *  to avoid ambiguity, keys must not conflict with any other metadata keys for
 *  the project or be one of the four reserved keys: "instance-template",
 *  "kube-env", "startup-script", and "user-data" Values are free-form strings,
 *  and only have meaning as interpreted by the image running in the instance.
 *  The only restriction placed on them is that each value's size must be less
 *  than or equal to 32 KB. The total size of all keys and values must be less
 *  than 512 KB.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRContainer_NodeConfigMetadata : GTLRObject
@end


/**
 *  NodePool contains the name and configuration for a cluster's node pool. Node
 *  pools are a set of nodes (i.e. VM's), with a common configuration and
 *  specification, under the control of the cluster master. They may have a set
 *  of Kubernetes labels applied to them, which may be used to reference them
 *  during pod scheduling. They may also be resized up or down, to accommodate
 *  the workload.
 */
@interface GTLRContainer_NodePool : GTLRObject

/** The node configuration of the pool. */
@property(nonatomic, strong, nullable) GTLRContainer_NodeConfig *config;

/**
 *  The initial node count for the pool. You must ensure that your Compute
 *  Engine resource quota is sufficient for this number of instances. You must
 *  also have available firewall and routes quota.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *initialNodeCount;

/**
 *  [Output only] The resource URLs of [instance
 *  groups](/compute/docs/instance-groups/) associated with this node pool.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *instanceGroupUrls;

/** The name of the node pool. */
@property(nonatomic, copy, nullable) NSString *name;

/** Server-defined URL for the resource. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/**
 *  The status of the nodes in this pool instance.
 *
 *  Likely values:
 *    @arg @c kGTLRContainer_NodePool_Status_Error Value "ERROR"
 *    @arg @c kGTLRContainer_NodePool_Status_Provisioning Value "PROVISIONING"
 *    @arg @c kGTLRContainer_NodePool_Status_Reconciling Value "RECONCILING"
 *    @arg @c kGTLRContainer_NodePool_Status_Running Value "RUNNING"
 *    @arg @c kGTLRContainer_NodePool_Status_RunningWithError Value
 *        "RUNNING_WITH_ERROR"
 *    @arg @c kGTLRContainer_NodePool_Status_StatusUnspecified Value
 *        "STATUS_UNSPECIFIED"
 *    @arg @c kGTLRContainer_NodePool_Status_Stopping Value "STOPPING"
 */
@property(nonatomic, copy, nullable) NSString *status;

/**
 *  [Output only] Additional information about the current status of this node
 *  pool instance, if available.
 */
@property(nonatomic, copy, nullable) NSString *statusMessage;

/** The version of the Kubernetes of this node. */
@property(nonatomic, copy, nullable) NSString *version;

@end


/**
 *  This operation resource represents operations that may have happened or are
 *  happening on the cluster. All fields are output only.
 */
@interface GTLRContainer_Operation : GTLRObject

/** Detailed operation progress, if available. */
@property(nonatomic, copy, nullable) NSString *detail;

/** The server-assigned ID for the operation. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The operation type.
 *
 *  Likely values:
 *    @arg @c kGTLRContainer_Operation_OperationType_CreateCluster Value
 *        "CREATE_CLUSTER"
 *    @arg @c kGTLRContainer_Operation_OperationType_CreateNodePool Value
 *        "CREATE_NODE_POOL"
 *    @arg @c kGTLRContainer_Operation_OperationType_DeleteCluster Value
 *        "DELETE_CLUSTER"
 *    @arg @c kGTLRContainer_Operation_OperationType_DeleteNodePool Value
 *        "DELETE_NODE_POOL"
 *    @arg @c kGTLRContainer_Operation_OperationType_RepairCluster Value
 *        "REPAIR_CLUSTER"
 *    @arg @c kGTLRContainer_Operation_OperationType_TypeUnspecified Value
 *        "TYPE_UNSPECIFIED"
 *    @arg @c kGTLRContainer_Operation_OperationType_UpdateCluster Value
 *        "UPDATE_CLUSTER"
 *    @arg @c kGTLRContainer_Operation_OperationType_UpgradeMaster Value
 *        "UPGRADE_MASTER"
 *    @arg @c kGTLRContainer_Operation_OperationType_UpgradeNodes Value
 *        "UPGRADE_NODES"
 */
@property(nonatomic, copy, nullable) NSString *operationType;

/** Server-defined URL for the resource. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/**
 *  The current status of the operation.
 *
 *  Likely values:
 *    @arg @c kGTLRContainer_Operation_Status_Done Value "DONE"
 *    @arg @c kGTLRContainer_Operation_Status_Pending Value "PENDING"
 *    @arg @c kGTLRContainer_Operation_Status_Running Value "RUNNING"
 *    @arg @c kGTLRContainer_Operation_Status_StatusUnspecified Value
 *        "STATUS_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *status;

/** If an error has occurred, a textual description of the error. */
@property(nonatomic, copy, nullable) NSString *statusMessage;

/** Server-defined URL for the target of the operation. */
@property(nonatomic, copy, nullable) NSString *targetLink;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the operation is taking place.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(nonatomic, copy, nullable) NSString *zoneProperty;

@end


/**
 *  Container Engine service configuration.
 */
@interface GTLRContainer_ServerConfig : GTLRObject

/** Version of Kubernetes the service deploys by default. */
@property(nonatomic, copy, nullable) NSString *defaultClusterVersion;

/** Default image family. */
@property(nonatomic, copy, nullable) NSString *defaultImageFamily;

/** List of valid image families. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *validImageFamilies;

/** List of valid node upgrade target versions. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *validNodeVersions;

@end


/**
 *  UpdateClusterRequest updates the settings of a cluster.
 */
@interface GTLRContainer_UpdateClusterRequest : GTLRObject

/** A description of the update. */
@property(nonatomic, strong, nullable) GTLRContainer_ClusterUpdate *update;

@end

NS_ASSUME_NONNULL_END
