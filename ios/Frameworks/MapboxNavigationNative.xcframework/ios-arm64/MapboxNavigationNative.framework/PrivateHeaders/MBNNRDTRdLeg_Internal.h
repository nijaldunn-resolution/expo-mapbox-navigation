// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRDTRdStepArray;

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Immutable part of Route leg information.
 */
NS_SWIFT_NAME(RdLeg)
__attribute__((visibility ("default")))
@interface MBNNRDTRdLeg : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/** The distance traveled through the waypoints in meters. */
- (double)distance;
/** The estimated travel time through the waypoints in seconds. */
- (double)duration;
/** Summary of the route. */
- (nonnull NSString *)summary __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Route steps.
 */
- (nonnull MBNNRDTRdStepArray *)steps __attribute((ns_returns_retained));

@end
