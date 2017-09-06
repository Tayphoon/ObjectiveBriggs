//
//  UITraitCollection+SizeClassAttributes.m
//  ObjectiveBriggs
//
//  Created by Tayphoon on 07/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "UITraitCollection+SizeClassAttributes.h"

@implementation UITraitCollection (SizeClassAttributes)

+ (instancetype)traitCollectionWithScale:(TCSizeClass)sizeClass {
    switch (sizeClass) {
        case TCSizeClassHorizontalCompact:
            return [self traitCollectionWithHorizontalSizeClass:UIUserInterfaceSizeClassCompact];
        case TCSizeClassHorizontalRegular:
            return [self traitCollectionWithHorizontalSizeClass:UIUserInterfaceSizeClassRegular];
        case TCSizeClassVerticalCompact:
            return [self traitCollectionWithVerticalSizeClass:UIUserInterfaceSizeClassCompact];
        case TCSizeClassVerticalRegular:
            return [self traitCollectionWithVerticalSizeClass:UIUserInterfaceSizeClassRegular];
    }
}

@end
