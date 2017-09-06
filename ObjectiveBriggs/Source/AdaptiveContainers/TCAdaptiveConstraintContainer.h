//
//  TCAdaptiveConstraintContainer.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "TCAdaptiveElement.h"

@interface TCAdaptiveConstraintContainer : NSObject<TCAdaptiveElement>

@property (nonatomic, readonly) UITraitCollection * traitCollection;
@property (nonatomic, readonly) NSArray<NSLayoutConstraint*> * constraints;

+ (instancetype)containerWithTraitCollection:(UITraitCollection*)traitCollection
                                 constraints:(NSArray<NSLayoutConstraint*>*)constraints;

- (instancetype)initWithTraitCollection:(UITraitCollection*)traitCollection
                               constraints:(NSArray<NSLayoutConstraint*>*)constraints NS_DESIGNATED_INITIALIZER;

@end
