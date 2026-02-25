// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRDTRdAnnotation;
@class MBNNRDTRdLegClosureArray;

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Mutable part of Route leg information. But this object is immutable.
 */
NS_SWIFT_NAME(RdLegAnnotation)
__attribute__((visibility ("default")))
@interface MBNNRDTRdLegAnnotation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Annotation of the route.
 */
- (nonnull MBNNRDTRdAnnotation *)annotation __attribute((ns_returns_retained));
/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 * Live-traffic closures along the route.
 */
- (nonnull MBNNRDTRdLegClosureArray *)closures __attribute((ns_returns_retained));

@end
