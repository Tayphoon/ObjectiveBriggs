//
//  TCAdaptiveAttribute.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 21.08.17.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 @abstract `TCAdaptiveAttribute` represents a trait in a `UITraitCollection`.
 */
@protocol TCAdaptiveAttribute <NSObject>

/**
 @abstract Creates a `UITraitCollection` corresponding to the trait `self` represents
 */
- (UITraitCollection*)generateTraitCollection;

@end
