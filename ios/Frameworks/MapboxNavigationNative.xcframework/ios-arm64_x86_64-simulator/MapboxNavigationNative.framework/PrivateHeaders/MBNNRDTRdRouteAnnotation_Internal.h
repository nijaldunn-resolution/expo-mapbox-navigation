// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBNNRDTRdLegAnnotation;

/**
 * WARNING: This API is not intended for public usage. It can be deleted or changed without any notice.
 *
 * THIS IS AN EXPERIMENTAL API AND SUBJECT TO CHANGE.
 *
 */
NS_SWIFT_NAME(RdRouteAnnotation)
__attribute__((visibility ("default")))
@interface MBNNRDTRdRouteAnnotation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull NSArray<MBNNRDTRdLegAnnotation *> *)legAnnotations __attribute((ns_returns_retained));

@end
