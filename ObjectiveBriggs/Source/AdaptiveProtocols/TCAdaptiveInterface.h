//
//
//  AdaptiveInterface.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 21.08.17.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "TCAdaptiveElement.h"
#import "PKProtocolExtension.h"

@protocol TCAdaptiveInterface <TCAdaptiveElement>

@property (nonatomic, strong) NSArray<id<TCAdaptiveElement>> * adaptiveElements;

@end

// Protocol Extension

@extension(TCAdaptiveInterface)

- (void)update:(UITraitCollection*)incomingTraitCollection {
    for(id<TCAdaptiveElement> adaptiveElement in self.adaptiveElements) {
        if(![incomingTraitCollection containsTraitsInCollection:adaptiveElement.traitCollection]) {
            [adaptiveElement update:incomingTraitCollection];
        }
    }

    for(id<TCAdaptiveElement> adaptiveElement in self.adaptiveElements) {
        if([incomingTraitCollection containsTraitsInCollection:adaptiveElement.traitCollection]) {
            [adaptiveElement update:incomingTraitCollection];
        }
    }
}

@end
