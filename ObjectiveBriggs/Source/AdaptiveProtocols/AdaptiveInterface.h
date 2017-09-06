//
//
//  AdaptiveInterface.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 21.08.17.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "AdaptiveElement.h"

@protocol AdaptiveInterface <AdaptiveElement>

@property (nonatomic, strong) NSArray<id<AdaptiveElement>> * adaptiveElements

@end
