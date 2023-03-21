// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Semantic Tile API (vectortile/v1)
// Description:
//   Serves vector tiles containing geospatial data.
// Documentation:
//   https://developers.google.com/maps/contact-sales/

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

@class GTLRSemanticTile_Area;
@class GTLRSemanticTile_ExtrudedArea;
@class GTLRSemanticTile_Feature;
@class GTLRSemanticTile_FirstDerivativeElevationGrid;
@class GTLRSemanticTile_Geometry;
@class GTLRSemanticTile_Line;
@class GTLRSemanticTile_ModeledVolume;
@class GTLRSemanticTile_ProviderInfo;
@class GTLRSemanticTile_Relation;
@class GTLRSemanticTile_RoadInfo;
@class GTLRSemanticTile_Row;
@class GTLRSemanticTile_SecondDerivativeElevationGrid;
@class GTLRSemanticTile_SegmentInfo;
@class GTLRSemanticTile_TileCoordinates;
@class GTLRSemanticTile_TriangleStrip;
@class GTLRSemanticTile_Vertex2DList;
@class GTLRSemanticTile_Vertex3DList;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRSemanticTile_Area.type

/**
 *  The polygon is a set of triangles with three vertex indices per triangle.
 *  The vertex indices can be found in the triangle_indices field. Indexed
 *  triangle polygons also contain information about boundary loops. These
 *  identify the loops at the boundary of the polygon and may be used in
 *  conjunction with the internal_edges field for styling. Boundary loops may
 *  represent either a hole or a disconnected component of the polygon. The
 *  following diagram shows an indexed triangle polygon with two boundary loops.
 *  (0) (4) / \\ / \\ / \\ / \\ (1)----(2) (3)----(5)
 *
 *  Value: "INDEXED_TRIANGLES"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Area_Type_IndexedTriangles;
/**
 *  The first vertex in vertex_offset is the center of a triangle fan. The other
 *  vertices are arranged around this vertex in a fan shape. The following
 *  diagram showes a triangle fan polygon with the vertices labelled with their
 *  indices in the vertex_offset list. Triangle fan polygons always have a
 *  single boundary loop. Vertices may be in either a clockwise or
 *  counterclockwise order. (1) / \\ / \\ / \\ (0)-----(2) / \\ / / \\ / / \\ /
 *  (4)-----(3)
 *
 *  Value: "TRIANGLE_FAN"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Area_Type_TriangleFan;
/**
 *  A strip of triangles, where each triangle uses the last edge of the previous
 *  triangle. Vertices may be in either a clockwise or counterclockwise order.
 *  Only polygons without the has_external_edges flag set will use triangle
 *  strips. (0) / \\ / \\ / \\ (2)-----(1) / \\ / / \\ / / \\ / (4)-----(3)
 *
 *  Value: "TRIANGLE_STRIP"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Area_Type_TriangleStrip;

// ----------------------------------------------------------------------------
// GTLRSemanticTile_Feature.type

/**
 *  Top-level divisions within a country, such as prefectures or states.
 *
 *  Value: "ADMINISTRATIVE_AREA1"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_AdministrativeArea1;
/**
 *  Major through road that's expected to carry large volumes of traffic.
 *
 *  Value: "ARTERIAL_ROAD"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_ArterialRoad;
/**
 *  A financial institution that offers services to the general public.
 *
 *  Value: "BANK"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Bank;
/**
 *  A business serving alcoholic drinks to be consumed onsite.
 *
 *  Value: "BAR"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Bar;
/**
 *  A pebbly or sandy shore along the edge of a sea or lake.
 *
 *  Value: "BEACH"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Beach;
/**
 *  A business that sells coffee, tea, and sometimes small meals.
 *
 *  Value: "CAFE"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Cafe;
/**
 *  A highway with grade-separated crossings that is accessed exclusively by
 *  ramps. These are usually called "freeways" or "motorways". The
 *  enable_detailed_highway_types request flag must be set in order for this
 *  type to be returned.
 *
 *  Value: "CONTROLLED_ACCESS_HIGHWAY"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_ControlledAccessHighway;
/**
 *  A venue for private and public events.
 *
 *  Value: "EVENT_VENUE"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_EventVenue;
/**
 *  Unknown feature type.
 *
 *  Value: "FEATURE_TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_FeatureTypeUnspecified;
/**
 *  Services which are part of the road network but are not roads.
 *
 *  Value: "FERRY"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Ferry;
/**
 *  A path that's primarily intended for use by pedestrians and/or cyclists.
 *
 *  Value: "FOOTPATH"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Footpath;
/**
 *  Area of land covered by trees.
 *
 *  Value: "FOREST"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Forest;
/**
 *  A major road including freeways and state highways.
 *
 *  Value: "HIGHWAY"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Highway;
/**
 *  Cities, towns, and other municipalities.
 *
 *  Value: "LOCALITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Locality;
/**
 *  A small city street, typically for travel in a residential neighborhood.
 *
 *  Value: "LOCAL_ROAD"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_LocalRoad;
/**
 *  A place that provides any type of lodging for travelers.
 *
 *  Value: "LODGING"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Lodging;
/**
 *  Outdoor areas such as parks and botanical gardens.
 *
 *  Value: "PARK"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Park;
/**
 *  Political entities, such as provinces and districts.
 *
 *  Value: "POLITICAL"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Political;
/**
 *  Tracks intended for use by trains.
 *
 *  Value: "RAIL"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Rail;
/**
 *  Non-water areas such as parks and forest.
 *
 *  Value: "REGION"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Region;
/**
 *  A business that prepares meals on-site for service to customers.
 *
 *  Value: "RESTAURANT"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Restaurant;
/**
 *  A way leading from one place to another intended for use by vehicles.
 *
 *  Value: "ROAD"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Road;
/**
 *  Institution where young people receive general (not vocation or
 *  professional) education.
 *
 *  Value: "SCHOOL"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_School;
/**
 *  Segments such as roads and train lines.
 *
 *  Value: "SEGMENT"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Segment;
/**
 *  A structure containing a business or businesses that sell goods.
 *
 *  Value: "SHOPPING"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Shopping;
/**
 *  Structures such as buildings and bridges.
 *
 *  Value: "STRUCTURE"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Structure;
/**
 *  Divisions within a locality like a borough or ward.
 *
 *  Value: "SUBLOCALITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Sublocality;
/**
 *  Place of interest to tourists, typically for natural or cultural value.
 *
 *  Value: "TOURIST_DESTINATION"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_TouristDestination;
/**
 *  Water features such as rivers and lakes.
 *
 *  Value: "WATER"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Feature_Type_Water;

// ----------------------------------------------------------------------------
// GTLRSemanticTile_FeatureTile.status

/**
 *  Everything worked out OK. The cache-control header determines how long this
 *  Tile response may be cached by the client. See also version_id and
 *  STATUS_OK_DATA_UNCHANGED.
 *
 *  Value: "STATUS_OK"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_FeatureTile_Status_StatusOk;
/**
 *  Indicates that the request was processed successfully and that the tile data
 *  that would have been returned are identical to the data already in the
 *  client's cache, as specified by the value of client_tile_version_id
 *  contained in GetFeatureTileRequest. In particular, the tile's features and
 *  providers will not be populated when the tile data is identical. However,
 *  the cache-control header and version_id can still change even when the tile
 *  contents itself does not, so clients should always use the most recent
 *  values returned by the API.
 *
 *  Value: "STATUS_OK_DATA_UNCHANGED"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_FeatureTile_Status_StatusOkDataUnchanged;

// ----------------------------------------------------------------------------
// GTLRSemanticTile_Relation.relationType

/**
 *  The origin feature occupies the related feature.
 *
 *  Value: "OCCUPIES"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Relation_RelationType_Occupies;
/**
 *  The origin feature is primarily occupied by the related feature.
 *
 *  Value: "PRIMARILY_OCCUPIED_BY"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Relation_RelationType_PrimarilyOccupiedBy;
/**
 *  Unspecified relation type. Should never happen.
 *
 *  Value: "RELATION_TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRSemanticTile_Relation_RelationType_RelationTypeUnspecified;

/**
 *  Represents an area. Used to represent regions such as water, parks, etc.
 */
@interface GTLRSemanticTile_Area : GTLRObject

/**
 *  True if the polygon is not entirely internal to the feature that it belongs
 *  to: that is, some of the edges are bordering another feature.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hasExternalEdges;

/**
 *  When has_external_edges is true, the polygon has some edges that border
 *  another feature. This field indicates the internal edges that do not border
 *  another feature. Each value is an index into the vertices array, and denotes
 *  the start vertex of the internal edge (the next vertex in the boundary loop
 *  is the end of the edge). If the selected vertex is the last vertex in the
 *  boundary loop, then the edge between that vertex and the starting vertex of
 *  the loop is internal. This field may be used for styling. For example,
 *  building parapets could be placed only on the external edges of a building
 *  polygon, or water could be lighter colored near the external edges of a body
 *  of water. If has_external_edges is false, all edges are internal and this
 *  field will be empty.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *internalEdges;

/**
 *  Identifies the boundary loops of the polygon. Only set for INDEXED_TRIANGLE
 *  polygons. Each value is an index into the vertices array indicating the
 *  beginning of a loop. For instance, values of [2, 5] would indicate loop_data
 *  contained 3 loops with indices 0-1, 2-4, and 5-end. This may be used in
 *  conjunction with the internal_edges field for styling polygon boundaries.
 *  Note that an edge may be on a polygon boundary but still internal to the
 *  feature. For example, a feature split across multiple tiles will have an
 *  internal polygon boundary edge along the edge of the tile.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *loopBreaks;

/**
 *  When the polygon encoding is of type INDEXED_TRIANGLES, this contains the
 *  indices of the triangle vertices in the vertex_offsets field. There are 3
 *  vertex indices per triangle.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *triangleIndices;

/**
 *  The polygon encoding type used for this area.
 *
 *  Likely values:
 *    @arg @c kGTLRSemanticTile_Area_Type_IndexedTriangles The polygon is a set
 *        of triangles with three vertex indices per triangle. The vertex
 *        indices can be found in the triangle_indices field. Indexed triangle
 *        polygons also contain information about boundary loops. These identify
 *        the loops at the boundary of the polygon and may be used in
 *        conjunction with the internal_edges field for styling. Boundary loops
 *        may represent either a hole or a disconnected component of the
 *        polygon. The following diagram shows an indexed triangle polygon with
 *        two boundary loops. (0) (4) / \\ / \\ / \\ / \\ (1)----(2) (3)----(5)
 *        (Value: "INDEXED_TRIANGLES")
 *    @arg @c kGTLRSemanticTile_Area_Type_TriangleFan The first vertex in
 *        vertex_offset is the center of a triangle fan. The other vertices are
 *        arranged around this vertex in a fan shape. The following diagram
 *        showes a triangle fan polygon with the vertices labelled with their
 *        indices in the vertex_offset list. Triangle fan polygons always have a
 *        single boundary loop. Vertices may be in either a clockwise or
 *        counterclockwise order. (1) / \\ / \\ / \\ (0)-----(2) / \\ / / \\ / /
 *        \\ / (4)-----(3) (Value: "TRIANGLE_FAN")
 *    @arg @c kGTLRSemanticTile_Area_Type_TriangleStrip A strip of triangles,
 *        where each triangle uses the last edge of the previous triangle.
 *        Vertices may be in either a clockwise or counterclockwise order. Only
 *        polygons without the has_external_edges flag set will use triangle
 *        strips. (0) / \\ / \\ / \\ (2)-----(1) / \\ / / \\ / / \\ /
 *        (4)-----(3) (Value: "TRIANGLE_STRIP")
 */
@property(nonatomic, copy, nullable) NSString *type;

/** The vertices present in the polygon defining the area. */
@property(nonatomic, strong, nullable) GTLRSemanticTile_Vertex2DList *vertexOffsets;

/**
 *  The z-ordering of this area. Areas with a lower z-order should be rendered
 *  beneath areas with a higher z-order. This z-ordering does not imply anything
 *  about the altitude of the line relative to the ground, but it can be used to
 *  prevent z-fighting during rendering on the client. This z-ordering can only
 *  be used to compare areas, and cannot be compared with the z_order field in
 *  the Line message. The z-order may be negative or zero.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *zOrder;

@end


/**
 *  Represents a height-extruded area: a 3D prism with a constant X-Y plane
 *  cross section. Used to represent extruded buildings. A single building may
 *  consist of several extruded areas. The min_z and max_z fields are scaled to
 *  the size of the tile. An extruded area with a max_z value of 4096 has the
 *  same height as the width of the tile that it is on.
 */
@interface GTLRSemanticTile_ExtrudedArea : GTLRObject

/** The area representing the footprint of the extruded area. */
@property(nonatomic, strong, nullable) GTLRSemanticTile_Area *area;

/**
 *  The z-value in local tile coordinates where the extruded area ends.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxZ;

/**
 *  The z-value in local tile coordinates where the extruded area begins. This
 *  is non-zero for extruded areas that begin off the ground. For example, a
 *  building with a skybridge may have an extruded area component with a
 *  non-zero min_z.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *minZ;

@end


/**
 *  A feature representing a single geographic entity.
 */
@interface GTLRSemanticTile_Feature : GTLRObject

/** The localized name of this feature. Currently only returned for roads. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The geometry of this feature, representing the space that it occupies in the
 *  world.
 */
@property(nonatomic, strong, nullable) GTLRSemanticTile_Geometry *geometry;

/**
 *  Place ID of this feature, suitable for use in Places API details requests.
 */
@property(nonatomic, copy, nullable) NSString *placeId;

/** Relations to other features. */
@property(nonatomic, strong, nullable) NSArray<GTLRSemanticTile_Relation *> *relations;

/** Metadata for features with the SEGMENT FeatureType. */
@property(nonatomic, strong, nullable) GTLRSemanticTile_SegmentInfo *segmentInfo;

/**
 *  The type of this feature.
 *
 *  Likely values:
 *    @arg @c kGTLRSemanticTile_Feature_Type_AdministrativeArea1 Top-level
 *        divisions within a country, such as prefectures or states. (Value:
 *        "ADMINISTRATIVE_AREA1")
 *    @arg @c kGTLRSemanticTile_Feature_Type_ArterialRoad Major through road
 *        that's expected to carry large volumes of traffic. (Value:
 *        "ARTERIAL_ROAD")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Bank A financial institution that
 *        offers services to the general public. (Value: "BANK")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Bar A business serving alcoholic
 *        drinks to be consumed onsite. (Value: "BAR")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Beach A pebbly or sandy shore along
 *        the edge of a sea or lake. (Value: "BEACH")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Cafe A business that sells coffee,
 *        tea, and sometimes small meals. (Value: "CAFE")
 *    @arg @c kGTLRSemanticTile_Feature_Type_ControlledAccessHighway A highway
 *        with grade-separated crossings that is accessed exclusively by ramps.
 *        These are usually called "freeways" or "motorways". The
 *        enable_detailed_highway_types request flag must be set in order for
 *        this type to be returned. (Value: "CONTROLLED_ACCESS_HIGHWAY")
 *    @arg @c kGTLRSemanticTile_Feature_Type_EventVenue A venue for private and
 *        public events. (Value: "EVENT_VENUE")
 *    @arg @c kGTLRSemanticTile_Feature_Type_FeatureTypeUnspecified Unknown
 *        feature type. (Value: "FEATURE_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Ferry Services which are part of
 *        the road network but are not roads. (Value: "FERRY")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Footpath A path that's primarily
 *        intended for use by pedestrians and/or cyclists. (Value: "FOOTPATH")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Forest Area of land covered by
 *        trees. (Value: "FOREST")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Highway A major road including
 *        freeways and state highways. (Value: "HIGHWAY")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Locality Cities, towns, and other
 *        municipalities. (Value: "LOCALITY")
 *    @arg @c kGTLRSemanticTile_Feature_Type_LocalRoad A small city street,
 *        typically for travel in a residential neighborhood. (Value:
 *        "LOCAL_ROAD")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Lodging A place that provides any
 *        type of lodging for travelers. (Value: "LODGING")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Park Outdoor areas such as parks
 *        and botanical gardens. (Value: "PARK")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Political Political entities, such
 *        as provinces and districts. (Value: "POLITICAL")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Rail Tracks intended for use by
 *        trains. (Value: "RAIL")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Region Non-water areas such as
 *        parks and forest. (Value: "REGION")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Restaurant A business that prepares
 *        meals on-site for service to customers. (Value: "RESTAURANT")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Road A way leading from one place
 *        to another intended for use by vehicles. (Value: "ROAD")
 *    @arg @c kGTLRSemanticTile_Feature_Type_School Institution where young
 *        people receive general (not vocation or professional) education.
 *        (Value: "SCHOOL")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Segment Segments such as roads and
 *        train lines. (Value: "SEGMENT")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Shopping A structure containing a
 *        business or businesses that sell goods. (Value: "SHOPPING")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Structure Structures such as
 *        buildings and bridges. (Value: "STRUCTURE")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Sublocality Divisions within a
 *        locality like a borough or ward. (Value: "SUBLOCALITY")
 *    @arg @c kGTLRSemanticTile_Feature_Type_TouristDestination Place of
 *        interest to tourists, typically for natural or cultural value. (Value:
 *        "TOURIST_DESTINATION")
 *    @arg @c kGTLRSemanticTile_Feature_Type_Water Water features such as rivers
 *        and lakes. (Value: "WATER")
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  A tile containing information about the map features located in the region
 *  it covers.
 */
@interface GTLRSemanticTile_FeatureTile : GTLRObject

/** The global tile coordinates that uniquely identify this tile. */
@property(nonatomic, strong, nullable) GTLRSemanticTile_TileCoordinates *coordinates;

/** Features present on this map tile. */
@property(nonatomic, strong, nullable) NSArray<GTLRSemanticTile_Feature *> *features;

/**
 *  Resource name of the tile. The tile resource name is prefixed by its
 *  collection ID `tiles/` followed by the resource ID, which encodes the tile's
 *  global x and y coordinates and zoom level as `\@,,z`. For example,
 *  `tiles/\@1,2,3z`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Data providers for the data contained in this tile. */
@property(nonatomic, strong, nullable) NSArray<GTLRSemanticTile_ProviderInfo *> *providers;

/**
 *  Tile response status code to support tile caching.
 *
 *  Likely values:
 *    @arg @c kGTLRSemanticTile_FeatureTile_Status_StatusOk Everything worked
 *        out OK. The cache-control header determines how long this Tile
 *        response may be cached by the client. See also version_id and
 *        STATUS_OK_DATA_UNCHANGED. (Value: "STATUS_OK")
 *    @arg @c kGTLRSemanticTile_FeatureTile_Status_StatusOkDataUnchanged
 *        Indicates that the request was processed successfully and that the
 *        tile data that would have been returned are identical to the data
 *        already in the client's cache, as specified by the value of
 *        client_tile_version_id contained in GetFeatureTileRequest. In
 *        particular, the tile's features and providers will not be populated
 *        when the tile data is identical. However, the cache-control header and
 *        version_id can still change even when the tile contents itself does
 *        not, so clients should always use the most recent values returned by
 *        the API. (Value: "STATUS_OK_DATA_UNCHANGED")
 */
@property(nonatomic, copy, nullable) NSString *status;

/**
 *  An opaque value, usually less than 30 characters, that contains version info
 *  about this tile and the data that was used to generate it. The client should
 *  store this value in its tile cache and pass it back to the API in the
 *  client_tile_version_id field of subsequent tile requests in order to enable
 *  the API to detect when the new tile would be the same as the one the client
 *  already has in its cache. Also see STATUS_OK_DATA_UNCHANGED.
 */
@property(nonatomic, copy, nullable) NSString *versionId;

@end


/**
 *  A packed representation of a 2D grid of uniformly spaced points containing
 *  elevation data. Each point within the grid represents the altitude in meters
 *  above average sea level at that location within the tile. Elevations
 *  provided are (generally) relative to the EGM96 geoid, however some areas
 *  will be relative to NAVD88. EGM96 and NAVD88 are off by no more than 2
 *  meters. The grid is oriented north-west to south-east, as illustrated:
 *  rows[0].a[0] rows[0].a[m] +-----------------+ | | | N | | ^ | | | | | W
 *  <-----> E | | | | | v | | S | | | +-----------------+ rows[n].a[0]
 *  rows[n].a[m] Rather than storing the altitudes directly, we store the diffs
 *  between them as integers at some requested level of precision to take
 *  advantage of integer packing. The actual altitude values a[] can be
 *  reconstructed using the scale and each row's first_altitude and
 *  altitude_diff fields.
 */
@interface GTLRSemanticTile_FirstDerivativeElevationGrid : GTLRObject

/**
 *  A multiplier applied to the altitude fields below to extract the actual
 *  altitudes in meters from the elevation grid.
 *
 *  Uses NSNumber of floatValue.
 */
@property(nonatomic, strong, nullable) NSNumber *altitudeMultiplier;

/**
 *  Rows of points containing altitude data making up the elevation grid. Each
 *  row is the same length. Rows are ordered from north to south. E.g: rows[0]
 *  is the north-most row, and rows[n] is the south-most row.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRSemanticTile_Row *> *rows;

@end


/**
 *  Represents the geometry of a feature, that is, the shape that it has on the
 *  map. The local tile coordinate system has the origin at the north-west
 *  (upper-left) corner of the tile, and is scaled to 4096 units across each
 *  edge. The height (Z) axis has the same scale factor: an extruded area with a
 *  max_z value of 4096 has the same height as the width of the tile that it is
 *  on. There is no clipping boundary, so it is possible that some coordinates
 *  will lie outside the tile boundaries.
 */
@interface GTLRSemanticTile_Geometry : GTLRObject

/** The areas present in this geometry. */
@property(nonatomic, strong, nullable) NSArray<GTLRSemanticTile_Area *> *areas;

/** The extruded areas present in this geometry. */
@property(nonatomic, strong, nullable) NSArray<GTLRSemanticTile_ExtrudedArea *> *extrudedAreas;

/** The lines present in this geometry. */
@property(nonatomic, strong, nullable) NSArray<GTLRSemanticTile_Line *> *lines;

/** The modeled volumes present in this geometry. */
@property(nonatomic, strong, nullable) NSArray<GTLRSemanticTile_ModeledVolume *> *modeledVolumes;

@end


/**
 *  Represents a 2D polyline. Used to represent segments such as roads, train
 *  tracks, etc.
 */
@interface GTLRSemanticTile_Line : GTLRObject

/** The vertices present in the polyline. */
@property(nonatomic, strong, nullable) GTLRSemanticTile_Vertex2DList *vertexOffsets;

/**
 *  The z-order of the line. Lines with a lower z-order should be rendered
 *  beneath lines with a higher z-order. This z-ordering does not imply anything
 *  about the altitude of the area relative to the ground, but it can be used to
 *  prevent z-fighting during rendering on the client. In general, larger and
 *  more important road features will have a higher z-order line associated with
 *  them. This z-ordering can only be used to compare lines, and cannot be
 *  compared with the z_order field in the Area message. The z-order may be
 *  negative or zero.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *zOrder;

@end


/**
 *  Represents a modeled volume in 3D space. Used to represent 3D buildings.
 */
@interface GTLRSemanticTile_ModeledVolume : GTLRObject

/** The triangle strips present in this mesh. */
@property(nonatomic, strong, nullable) NSArray<GTLRSemanticTile_TriangleStrip *> *strips;

/** The vertices present in the mesh defining the modeled volume. */
@property(nonatomic, strong, nullable) GTLRSemanticTile_Vertex3DList *vertexOffsets;

@end


/**
 *  Information about the data providers that should be included in the
 *  attribution string shown by the client.
 */
@interface GTLRSemanticTile_ProviderInfo : GTLRObject

/**
 *  Attribution string for this provider. This string is not localized.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

@end


/**
 *  Represents a relation to another feature in the tile. For example, a
 *  building might be occupied by a given POI. The related feature can be
 *  retrieved using the related feature index.
 */
@interface GTLRSemanticTile_Relation : GTLRObject

/**
 *  Zero-based index to look up the related feature from the list of features in
 *  the tile.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *relatedFeatureIndex;

/**
 *  Relation type between the origin feature to the related feature.
 *
 *  Likely values:
 *    @arg @c kGTLRSemanticTile_Relation_RelationType_Occupies The origin
 *        feature occupies the related feature. (Value: "OCCUPIES")
 *    @arg @c kGTLRSemanticTile_Relation_RelationType_PrimarilyOccupiedBy The
 *        origin feature is primarily occupied by the related feature. (Value:
 *        "PRIMARILY_OCCUPIED_BY")
 *    @arg @c kGTLRSemanticTile_Relation_RelationType_RelationTypeUnspecified
 *        Unspecified relation type. Should never happen. (Value:
 *        "RELATION_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *relationType;

@end


/**
 *  Extra metadata relating to roads.
 */
@interface GTLRSemanticTile_RoadInfo : GTLRObject

/**
 *  Road has signage discouraging or prohibiting use by the general public.
 *  E.g., roads with signs that say "Private", or "No trespassing."
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isPrivate;

@end


/**
 *  A row of altitude points in the elevation grid, ordered from west to east.
 */
@interface GTLRSemanticTile_Row : GTLRObject

/**
 *  The difference between each successive pair of altitudes, from west to east.
 *  The first, westmost point, is just the altitude rather than a diff. The
 *  units are specified by the altitude_multiplier parameter above; the value in
 *  meters is given by altitude_multiplier * altitude_diffs[n]. The altitude row
 *  (in metres above sea level) can be reconstructed with: a[0] =
 *  altitude_diffs[0] * altitude_multiplier when n > 0, a[n] = a[n-1] +
 *  altitude_diffs[n-1] * altitude_multiplier.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *altitudeDiffs;

@end


/**
 *  A packed representation of a 2D grid of uniformly spaced points containing
 *  elevation data. Each point within the grid represents the altitude in meters
 *  above average sea level at that location within the tile. Elevations
 *  provided are (generally) relative to the EGM96 geoid, however some areas
 *  will be relative to NAVD88. EGM96 and NAVD88 are off by no more than 2
 *  meters. The grid is oriented north-west to south-east, as illustrated:
 *  rows[0].a[0] rows[0].a[m] +-----------------+ | | | N | | ^ | | | | | W
 *  <-----> E | | | | | v | | S | | | +-----------------+ rows[n].a[0]
 *  rows[n].a[m] Rather than storing the altitudes directly, we store the diffs
 *  of the diffs between them as integers at some requested level of precision
 *  to take advantage of integer packing. Note that the data is packed in such a
 *  way that is fast to decode in Unity and that further optimizes wire size.
 */
@interface GTLRSemanticTile_SecondDerivativeElevationGrid : GTLRObject

/**
 *  A multiplier applied to the elements in the encoded data to extract the
 *  actual altitudes in meters.
 *
 *  Uses NSNumber of floatValue.
 */
@property(nonatomic, strong, nullable) NSNumber *altitudeMultiplier;

/**
 *  The number of columns included in the encoded elevation data (i.e. the
 *  horizontal resolution of the grid).
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *columnCount;

/**
 *  A stream of elements each representing a point on the tile running across
 *  each row from left to right, top to bottom. There will be precisely
 *  horizontal_resolution * vertical_resolution elements in the stream. The
 *  elements are not the heights, rather the second order derivative of the
 *  values one would expect in a stream of height data. Each element is a varint
 *  with the following encoding:
 *  ------------------------------------------------------------------------| |
 *  Head Nibble |
 *  ------------------------------------------------------------------------| |
 *  Bit 0 | Bit 1 | Bits 2-3 | | Terminator| Sign (1=neg) | Least significant 2
 *  bits of absolute error |
 *  ------------------------------------------------------------------------| |
 *  Tail Nibble #1 |
 *  ------------------------------------------------------------------------| |
 *  Bit 0 | Bit 1-3 | | Terminator| Least significant 3 bits of absolute error |
 *  ------------------------------------------------------------------------| |
 *  ... | Tail Nibble #n |
 *  ------------------------------------------------------------------------| |
 *  Bit 0 | Bit 1-3 | | Terminator| Least significant 3 bits of absolute error |
 *  ------------------------------------------------------------------------|
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *encodedData;

/**
 *  The number of rows included in the encoded elevation data (i.e. the vertical
 *  resolution of the grid).
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *rowCount;

@end


/**
 *  Extra metadata relating to segments.
 */
@interface GTLRSemanticTile_SegmentInfo : GTLRObject

/** Metadata for features with the ROAD FeatureType. */
@property(nonatomic, strong, nullable) GTLRSemanticTile_RoadInfo *roadInfo;

@end


/**
 *  A tile containing information about the terrain located in the region it
 *  covers.
 */
@interface GTLRSemanticTile_TerrainTile : GTLRObject

/** The global tile coordinates that uniquely identify this tile. */
@property(nonatomic, strong, nullable) GTLRSemanticTile_TileCoordinates *coordinates;

/** Terrain elevation data encoded as a FirstDerivativeElevationGrid. */
@property(nonatomic, strong, nullable) GTLRSemanticTile_FirstDerivativeElevationGrid *firstDerivative;

/**
 *  Resource name of the tile. The tile resource name is prefixed by its
 *  collection ID `terrain/` followed by the resource ID, which encodes the
 *  tile's global x and y coordinates and zoom level as `\@,,z`. For example,
 *  `terrain/\@1,2,3z`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Terrain elevation data encoded as a SecondDerivativeElevationGrid. . */
@property(nonatomic, strong, nullable) GTLRSemanticTile_SecondDerivativeElevationGrid *secondDerivative;

@end


/**
 *  Global tile coordinates. Global tile coordinates reference a specific tile
 *  on the map at a specific zoom level. The origin of this coordinate system is
 *  always at the northwest corner of the map, with x values increasing from
 *  west to east and y values increasing from north to south. Tiles are indexed
 *  using x, y coordinates from that origin. The zoom level containing the
 *  entire world in a tile is 0, and it increases as you zoom in. Zoom level n +
 *  1 will contain 4 times as many tiles as zoom level n. The zoom level
 *  controls the level of detail of the data that is returned. In particular,
 *  this affects the set of feature types returned, their density, and geometry
 *  simplification. The exact tile contents may change over time, but care will
 *  be taken to keep supporting the most important use cases. For example, zoom
 *  level 15 shows roads for orientation and planning in the local neighborhood
 *  and zoom level 17 shows buildings to give users on foot a sense of
 *  situational awareness.
 */
@interface GTLRSemanticTile_TileCoordinates : GTLRObject

/**
 *  Required. The x coordinate.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *x;

/**
 *  Required. The y coordinate.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *y;

/**
 *  Required. The Google Maps API zoom level.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *zoom;

@end


/**
 *  Represents a strip of triangles. Each triangle uses the last edge of the
 *  previous one. The following diagram shows an example of a triangle strip,
 *  with each vertex labeled with its index in the vertex_index array.
 *  (1)-----(3) / \\ / \\ / \\ / \\ / \\ / \\ (0)-----(2)-----(4) Vertices may
 *  be in either clockwise or counter-clockwise order.
 */
@interface GTLRSemanticTile_TriangleStrip : GTLRObject

/**
 *  Index into the vertex_offset array representing the next vertex in the
 *  triangle strip.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *vertexIndices;

@end


/**
 *  2D vertex list used for lines and areas. Each entry represents an offset
 *  from the previous one in local tile coordinates. The first entry is offset
 *  from (0, 0). For example, the list of vertices [(1,1), (2, 2), (1, 2)] would
 *  be encoded in vertex offsets as [(1, 1), (1, 1), (-1, 0)].
 */
@interface GTLRSemanticTile_Vertex2DList : GTLRObject

/**
 *  List of x-offsets in local tile coordinates.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *xOffsets;

/**
 *  List of y-offsets in local tile coordinates.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *yOffsets;

@end


/**
 *  3D vertex list used for modeled volumes. Each entry represents an offset
 *  from the previous one in local tile coordinates. The first coordinate is
 *  offset from (0, 0, 0).
 */
@interface GTLRSemanticTile_Vertex3DList : GTLRObject

/**
 *  List of x-offsets in local tile coordinates.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *xOffsets;

/**
 *  List of y-offsets in local tile coordinates.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *yOffsets;

/**
 *  List of z-offsets in local tile coordinates.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *zOffsets;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
