// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRDTRdCongestionLevelArray;
@class MBNNRDTRdF64Array;
@class MBNNRDTRdSpeedLimitAnnotationArray;
@class MBNNRDTRdU32OptionalArray;

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * An annotation object contains additional details about each line segment along the route geometry.
 *
 * \sa https://docs.mapbox.com/api/navigation/#route-leg-object
 */
NS_SWIFT_NAME(RdAnnotation)
__attribute__((visibility ("default")))
@interface MBNNRDTRdAnnotation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * The level of congestion between each entry in the array of coordinate pairs in the route leg.
 * @sa https://docs.mapbox.com/api/navigation/directions/#route-leg-object
 */
- (nullable MBNNRDTRdCongestionLevelArray *)congestion __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * The numeric level (0-100) of congestion between each entry in the array of coordinate pairs in the route leg.
 * Null optional if congestion is unknown.
 * @sa https://docs.mapbox.com/api/navigation/directions/#route-leg-object
 */
- (nullable MBNNRDTRdU32OptionalArray *)congestionNumeric __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * The distance between each pair of coordinates in meters.
 * @sa https://docs.mapbox.com/api/navigation/directions/#route-leg-object
 */
- (nullable MBNNRDTRdF64Array *)distance __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * The duration between each pair of coordinates in the route leg in seconds.
 * @sa https://docs.mapbox.com/api/navigation/directions/#route-leg-object
 */
- (nullable MBNNRDTRdF64Array *)duration __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * The average speed used in the calculation between the two points in each pair of coordinates in meters per second.
 * @sa https://docs.mapbox.com/api/navigation/directions/#route-leg-object
 */
- (nullable MBNNRDTRdF64Array *)speed __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * The local posted speed limit between each pair of coordinates.
 * @sa https://docs.mapbox.com/api/navigation/directions/#route-leg-object
 */
- (nullable MBNNRDTRdSpeedLimitAnnotationArray *)maxspeed __attribute((ns_returns_retained));

@end
