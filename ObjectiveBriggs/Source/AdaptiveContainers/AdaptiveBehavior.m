//
//  AdaptiveBehavior.m
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "AdaptiveBehavior.h"

@implementation AdaptiveBehavior

+ (instancetype)behaviorWithTraitCollection:(UITraitCollection*)traitCollection
                                   behavior:(Behavior)behavior
                            counterBehavior:(Behavior)counterBehavior {
    return [[self alloc] initWithTraitCollection:traitCollection
                                        behavior:behavior
                                 counterBehavior:counterBehavior];
}

- (instancetype)init {
    @throw [NSException exceptionWithName:NSInternalInconsistencyException
                                   reason:[NSString stringWithFormat:@"-init is not a valid initializer for the class %@, use designated initilizer -initWithTraitCollection:behavior:counterBehavior:", NSStringFromClass([self class])]
                                 userInfo:nil];
    return [self init];
}

- (instancetype)initWithTraitCollection:(UITraitCollection*)traitCollection
                               behavior:(Behavior)behavior
                        counterBehavior:(Behavior)counterBehavior {
    self = [super init];
    
    if (self) {
        _traitCollection = traitCollection;
        self.behavior = behavior;
        self.counterBehavior = counterBehavior;
    }
    
    return self;
}

- (void)update:(UITraitCollection*)incomingTraitCollection {
    if ([incomingTraitCollection containsTraitsInCollection:self.traitCollection]) {
        self.behavior();
    }
    else {
        self.counterBehavior();
    }
}

@end
