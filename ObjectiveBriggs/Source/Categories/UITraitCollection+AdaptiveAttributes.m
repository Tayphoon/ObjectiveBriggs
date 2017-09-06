//
//  UITraitCollection+AdaptiveAttributes.m
//  ObjectiveBriggs
//
//  Created by Tayphoon on 06/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "UITraitCollection+AdaptiveAttributes.h"
#import "TCIdiomAttirbute.h"

@implementation UITraitCollection (AdaptiveAttributes)

+ (instancetype)traitCollectionWithAttributes:(NSArray<id<TCAdaptiveAttribute>>*)attributes {
    NSMutableArray * traitCollections = [NSMutableArray array];
    
    for (id<TCAdaptiveAttribute> attribute in attributes) {
        [traitCollections addObject:[attribute generateTraitCollection]];
    }
    
    return [self traitCollectionWithTraitsFromCollections:traitCollections];
}

- (BOOL)containsTraitsInAttribute:(id<TCAdaptiveAttribute>)attribute {
    return [self containsTraitsInCollection:[attribute generateTraitCollection]];
}

- (NSArray<id<TCAdaptiveAttribute>>*)adaptiveAttributes {
    NSMutableArray * adaptiveAttributes = [NSMutableArray array];
    
    [adaptiveAttributes addObject:[TCIdiomAttirbute attirbuteWithIdiom:(TCIdiom)self.userInterfaceIdiom]];
        
    return [adaptiveAttributes copy];
}

@end
