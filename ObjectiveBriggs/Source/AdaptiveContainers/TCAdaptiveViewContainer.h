//
//  TCAdaptiveViewContainer.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "TCAdaptiveElement.h"

@interface TCAdaptiveViewContainer : NSObject<TCAdaptiveElement>

@property (nonatomic, readonly) UITraitCollection * traitCollection;
@property (nonatomic, readonly) UIView * parentView;
@property (nonatomic, readonly) UIView * childView;

+ (instancetype)containerWithTraitCollection:(UITraitCollection*)traitCollection
                                  parentView:(UIView*)parentView
                                   childView:(UIView*)childView;

- (instancetype)initWithTraitCollection:(UITraitCollection*)traitCollection
                             parentView:(UIView*)parentView
                              childView:(UIView*)childView NS_DESIGNATED_INITIALIZER;

@end
