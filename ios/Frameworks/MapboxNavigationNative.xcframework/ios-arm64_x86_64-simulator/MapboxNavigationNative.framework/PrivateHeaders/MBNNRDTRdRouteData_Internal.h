// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRDTRdCoordinateArray;
@class MBNNRDTRdLegArray;
@class MBNNRDTRdWaypointArray;

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 *
 * THIS IS AN EXPERIMENTAL API AND SUBJECT TO CHANGE.
 *
 *  RouteData object.
 *  Immutable part of Direction response.
 */
NS_SWIFT_NAME(RdRouteData)
__attribute__((visibility ("default")))
@interface MBNNRDTRdRouteData : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/** The estimated travel time through the waypoints in seconds. */
- (double)duration;
/** The distance traveled through the waypoints in meters. */
- (double)distance;
/**
 * Name of the weight used. The default is routability, which is duration-based, with additional penalties for
 * less desirable maneuvers.
 */
- (nonnull NSString *)weightName __attribute((ns_returns_retained));
/** Weight in units described by weightName. */
- (double)weight;
/** The locale used for voice instructions. */
- (nonnull NSString *)voiceLocale __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * An array of route leg objects.
 */
- (nonnull MBNNRDTRdLegArray *)legs __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Depending on the overview query parameter, this is the complete route geometry (full), a simplified
 * geometry to the zoom level at which the route can be displayed in full (simplified), or is empty.
 */
- (nonnull MBNNRDTRdCoordinateArray *)geometry __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Waypoints from direction's routes response.
 */
- (nonnull MBNNRDTRdWaypointArray *)waypoints __attribute((ns_returns_retained));

@end
