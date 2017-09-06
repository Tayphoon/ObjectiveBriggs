//
//  TCIdiomAttirbute.h
//  ObjectiveBriggs
//
//  Created by Tayphoon on 07/09/2017.
//  Copyright © 2017 Tayphoon. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TCIdiom.h"
#import "TCAdaptiveAttribute.h"

@interface TCIdiomAttirbute : NSObject<TCAdaptiveAttribute>

@property (nonatomic, readonly) TCIdiom idiom;

+ (instancetype)attirbuteWithIdiom:(TCIdiom)idiom;

@end
