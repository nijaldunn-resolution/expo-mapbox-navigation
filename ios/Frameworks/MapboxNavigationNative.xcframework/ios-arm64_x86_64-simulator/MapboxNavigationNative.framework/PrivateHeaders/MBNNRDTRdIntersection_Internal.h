// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class MBNNRDTRdLane;
typedef NS_ENUM(NSInteger, MBNNRDTRdRoadClass);

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Object representing an intersection along the step
 *
 */
NS_SWIFT_NAME(RdIntersection)
__attribute__((visibility ("default")))
@interface MBNNRDTRdIntersection : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithGeometryIndex:(nullable NSNumber *)geometryIndex
                                     location:(CLLocationCoordinate2D)location
                                        lanes:(nullable NSArray<MBNNRDTRdLane *> *)lanes
                                     bearings:(nullable NSArray<NSNumber *> *)bearings
                                        entry:(nullable NSArray<NSNumber *> *)entry
                              railwayCrossing:(BOOL)railwayCrossing
                                      inIndex:(nullable NSNumber *)inIndex
                                     outIndex:(nullable NSNumber *)outIndex
                                      classes:(nullable NSArray<NSNumber *> *)classes;

/**
 * The zero-based index into the geometry, relative to the start of the leg it's on. This value can be used to apply
 * the duration annotation that corresponds with the intersection. Only available on the driving, driving-traffic, and walking profile.
 */
@property (nonatomic, readonly, nullable) NSNumber *geometryIndex;

/** Coordinate describing the location of the turn */
@property (nonatomic, readonly) CLLocationCoordinate2D location;

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * An array of Lane objects that represent the available turn lanes at the intersection.
 */
@property (nonatomic, readonly, nullable, copy) NSArray<MBNNRDTRdLane *> *lanes;

/**
 * A list of bearing values that are available at the intersection.
 * The bearings describe all available roads at the intersection.
 */
@property (nonatomic, readonly, nullable, copy) NSArray<NSNumber *> *bearings;

/**
 * A list of entry flags, corresponding with the entries in bearings. If the flag is true,
 * indicates that the respective road could be entered on a valid route. If false, the turn onto
 * the respective road would violate a restriction.
 */
@property (nonatomic, readonly, nullable, copy) NSArray<NSNumber *> *entry;

/** Indicates whether there is a railway crossing at the intersection. */
@property (nonatomic, readonly) BOOL railwayCrossing;

/** The index in the bearings and entry arrays. Used to calculate the bearing before the turn. */
@property (nonatomic, readonly, nullable) NSNumber *inIndex;

/** The index in the bearings and entry arrays. Used to extract the bearing after the turn. */
@property (nonatomic, readonly, nullable) NSNumber *outIndex;

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Classes of the roads exiting the intersection.
 */
@property (nonatomic, readonly, nullable, copy) NSArray<NSNumber *> *classes;


@end
