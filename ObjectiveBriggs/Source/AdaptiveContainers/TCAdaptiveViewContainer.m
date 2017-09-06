//
//  TCAdaptiveViewContainer.m
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "TCAdaptiveViewContainer.h"

@implementation TCAdaptiveViewContainer

+ (instancetype)containerWithTraitCollection:(UITraitCollection*)traitCollection
                                  parentView:(UIView*)parentView
                                   childView:(UIView*)childView {
    return [[self alloc] initWithTraitCollection:traitCollection parentView:parentView childView:childView];
}

- (instancetype)init {
    @throw [NSException exceptionWithName:NSInternalInconsistencyException
                                   reason:[NSString stringWithFormat:@"-init is not a valid initializer for the class %@, use designated initilizer -initWithTraitCollection:parentView:childView:", NSStringFromClass([self class])]
                                 userInfo:nil];
    return [self init];
}

- (instancetype)initWithTraitCollection:(UITraitCollection*)traitCollection
                             parentView:(UIView*)parentView
                              childView:(UIView*)childView {
    self = [super init];
    
    if (self) {
        _traitCollection = traitCollection;
        _parentView = parentView;
        _childView = childView;
    }
    
    return self;
}

- (void)update:(UITraitCollection*)incomingTraitCollection {
    if ([incomingTraitCollection containsTraitsInCollection:self.traitCollection]) {
        if (self.childView.superview != self.parentView) {
            [self.parentView addSubview:self.childView];
        }
    }
    else {
        if (self.childView.superview) {
            [self.childView removeFromSuperview];
        }
    }
}

@end
