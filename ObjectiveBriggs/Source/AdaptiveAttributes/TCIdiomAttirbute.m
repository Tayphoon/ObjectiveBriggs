//
//  TCIdiomAttirbute.m
//  ObjectiveBriggs
//
//  Created by Tayphoon on 07/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "TCIdiomAttirbute.h"

@implementation TCIdiomAttirbute

+ (instancetype)attirbuteWithIdiom:(TCIdiom)idiom {
    return [[self alloc] initWithIdiom:idiom];
}

- (instancetype)initWithIdiom:(TCIdiom)idiom {
    self = [super init];
    
    if (self) {
        _idiom = idiom;
    }
    
    return self;
}

- (UITraitCollection*)generateTraitCollection {
    return [UITraitCollection traitCollectionWithUserInterfaceIdiom:(UIUserInterfaceIdiom)self.idiom];
}

@end
