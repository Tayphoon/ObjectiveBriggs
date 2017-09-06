//
//  UITraitCollection+ForceTouchAttributes.m
//  ObjectiveBriggs
//
//  Created by Tayphoon on 07/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "UITraitCollection+ForceTouchAttributes.h"

@implementation UITraitCollection (ForceTouchAttributes)

+ (instancetype)traitCollectionWithForceTouch:(TCForceTouch)forceTouch {
    return [self traitCollectionWithForceTouchCapability:(UIForceTouchCapability)forceTouch];
}

@end
