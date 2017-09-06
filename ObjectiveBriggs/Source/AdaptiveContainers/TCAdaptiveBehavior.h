//
//  TCAdaptiveBehavior.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "TCAdaptiveElement.h"

typedef void(^TCBehavior)(void);

@interface TCAdaptiveBehavior : NSObject<TCAdaptiveElement>

@property (nonatomic, readonly) UITraitCollection * traitCollection;
@property (nonatomic, copy) TCBehavior behavior;
@property (nonatomic, copy) TCBehavior counterBehavior;

+ (instancetype)behaviorWithTraitCollection:(UITraitCollection*)traitCollection
                            behavior:(TCBehavior)behavior
                     counterBehavior:(TCBehavior)counterBehavior;

- (instancetype)initWithTraitCollection:(UITraitCollection*)traitCollection
                               behavior:(TCBehavior)behavior
                        counterBehavior:(TCBehavior)counterBehavior NS_DESIGNATED_INITIALIZER;

@end
