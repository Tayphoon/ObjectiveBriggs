//
//  UITraitCollection+SizeClassAttributes.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 07/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TCSizeClass.h"

@interface UITraitCollection (SizeClassAttributes)

+ (instancetype)traitCollectionWithScale:(TCSizeClass)sizeClass;

@end
