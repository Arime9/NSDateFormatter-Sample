//
//  NSTimeZone+TACAdditions.h
//  NSDateFormatter-Sample
//
//  Created by masato_arai on 2016/11/28.
//  Copyright © 2016年 Tea and Coffee. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NSString * TACTimeZoneAbbreviation NS_EXTENSIBLE_STRING_ENUM;

static TACTimeZoneAbbreviation const TACTimeZoneAbbreviationGMT   = @"GMT";
static TACTimeZoneAbbreviation const TACTimeZoneAbbreviationJST   = @"JST";

@interface NSTimeZone (TACAdditions)

@end
