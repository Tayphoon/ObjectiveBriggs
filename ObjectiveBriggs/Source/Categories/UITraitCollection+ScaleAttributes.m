//
//  UITraitCollection+ScaleAttributes.m
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "UITraitCollection+ScaleAttributes.h"

@implementation UITraitCollection (ScaleAttributes)

+ (instancetype)traitCollectionWithScale:(TCScale)scale {
    return [self traitCollectionWithDisplayScale:scale];
}

@end
