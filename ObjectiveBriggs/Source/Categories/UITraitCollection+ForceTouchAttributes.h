//
//  UITraitCollection+ForceTouchAttributes.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 07/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TCForceTouch.h"

@interface UITraitCollection (ForceTouchAttributes)

+ (instancetype)traitCollectionWithForceTouch:(TCForceTouch)forceTouch;

@end
