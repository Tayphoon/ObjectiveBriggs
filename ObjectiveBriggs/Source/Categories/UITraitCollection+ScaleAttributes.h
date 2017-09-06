//
//  UITraitCollection+ScaleAttributes.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TCScale.h"

@interface UITraitCollection (ScaleAttributes)

+ (instancetype)traitCollectionWithScale:(TCScale)scale;

@end
