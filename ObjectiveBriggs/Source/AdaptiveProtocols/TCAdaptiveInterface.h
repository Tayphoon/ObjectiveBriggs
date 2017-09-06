//
//
//  AdaptiveInterface.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 21.08.17.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import "TCAdaptiveElement.h"

@protocol TCAdaptiveInterface <TCAdaptiveElement>

@property (nonatomic, strong) NSArray<id<TCAdaptiveElement>> * adaptiveElements

@end
