//
//  UITraitCollection+AdaptiveAttributes.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TCAdaptiveAttribute.h"

@interface UITraitCollection (AdaptiveAttributes)

@property (nonatomic, readonly) NSArray<id<TCAdaptiveAttribute>> * adaptiveAttributes;

+ (instancetype)traitCollectionWithAttributes:(NSArray<id<TCAdaptiveAttribute>>*)attributes;

@end
