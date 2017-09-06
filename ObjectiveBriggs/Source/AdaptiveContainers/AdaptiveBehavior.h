//
//  AdaptiveBehavior.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "AdaptiveElement.h"

typedef void(^Behavior)(void);

@interface AdaptiveBehavior : NSObject<AdaptiveElement>

@property (nonatomic, readonly) UITraitCollection * traitCollection;
@property (nonatomic, copy) Behavior behavior;
@property (nonatomic, copy) Behavior counterBehavior;

+ (instancetype)behaviorWithTraitCollection:(UITraitCollection*)traitCollection
                            behavior:(Behavior)behavior
                     counterBehavior:(Behavior)counterBehavior;

- (instancetype)initWithTraitCollection:(UITraitCollection*)traitCollection
                               behavior:(Behavior)behavior
                        counterBehavior:(Behavior)counterBehavior NS_DESIGNATED_INITIALIZER;

@end
