// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRDTRdCoordinateArray;
@class MBNNRDTRdIntersection;
@class MBNNRDTRdManeuver;
@class MBNNRDTRdRoadShield;
@class MBNNRDTRdVoiceInstruction;
typedef NS_ENUM(NSInteger, MBNNRDTRdDrivingSide);

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Route step description.
 */
NS_SWIFT_NAME(RdStep)
__attribute__((visibility ("default")))
@interface MBNNRDTRdStep : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Maneuver details for this step.
 */
- (nonnull MBNNRDTRdManeuver *)maneuver __attribute((ns_returns_retained));
/** The distance traveled in meters from the maneuver to the next route step. */
- (double)distance;
/** The estimated time traveled in seconds from the maneuver to the next route step. */
- (double)duration;
/** The name of the road or path that forms part of the route step. */
- (nonnull NSString *)name __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * The full route geometry from this route step to the next route step.
 */
- (nonnull MBNNRDTRdCoordinateArray *)geometry __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * The legal driving side at the location for this step. Either "left" or "right".
 */
- (MBNNRDTRdDrivingSide)drivingSide;
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * An array of objects representing all the intersections along the step.
 */
- (nonnull NSArray<MBNNRDTRdIntersection *> *)intersections __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Voice instructions that should be announced along the step.
 */
- (nullable NSArray<MBNNRDTRdVoiceInstruction *> *)voiceInstructions __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Describes a road shield information for the after maneuver road
 */
- (nullable MBNNRDTRdRoadShield *)roadShield __attribute((ns_returns_retained));

@end
