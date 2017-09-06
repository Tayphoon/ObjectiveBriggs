//
//  AdaptiveElement.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 21.08.17.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 @abstract An `AdaptiveElement` tracks its own `UITraitCollection` and can react to external `UITraitCollection`s.
 
 `AdaptiveElement` represents the receiving child in an inheritence hierarchy of parent-child relationships passing trait  information.
 */
@protocol AdaptiveElement <NSObject>

/**
 @abstract Internal `UITraitCollection`
 */
@property (nonatomic, readonly) UITraitCollection * traitCollection;

/**
 @abstract Implement to react to external `UITraitCollections`. A reaction could be:
 
 - To update `self.traitCollection` to match the outside environment
 - To compare `self.traitCollection` against `incomingTraitCollection` to enact some behavior
 - To simply perform some action using `incomingTraitCollection`

 @param incomingTraitCollection An external `UITraitCollection`.
 */
- (void)update:(UITraitCollection*)incomingTraitCollection;

@end
