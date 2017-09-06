//
//  TCAdaptiveConstraintContainer.m
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "TCAdaptiveConstraintContainer.h"

@implementation TCAdaptiveConstraintContainer

+ (instancetype)containerWithTraitCollection:(UITraitCollection*)traitCollection
                                 constraints:(NSArray<NSLayoutConstraint*>*)constraints {
    return [[self alloc] initWithTraitCollection:traitCollection constraints:constraints];
}

- (instancetype)init {
    @throw [NSException exceptionWithName:NSInternalInconsistencyException
                                   reason:[NSString stringWithFormat:@"-init is not a valid initializer for the class %@, use designated initilizer -initWithTraitCollection:constraints:", NSStringFromClass([self class])]
                                 userInfo:nil];
    return [self init];
}

- (instancetype)initWithTraitCollection:(UITraitCollection*)traitCollection
                            constraints:(NSArray<NSLayoutConstraint*>*)constraints {
    self = [super init];
    
    if (self) {
        _traitCollection = traitCollection;
        _constraints = constraints;
    }
    
    return self;
}

- (void)update:(UITraitCollection*)incomingTraitCollection {
    if ([incomingTraitCollection containsTraitsInCollection:self.traitCollection]) {
        [NSLayoutConstraint activateConstraints:self.constraints];
    }
    else {
        [NSLayoutConstraint deactivateConstraints:self.constraints];
    }
}

@end
