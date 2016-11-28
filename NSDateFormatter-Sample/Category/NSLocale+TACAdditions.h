//
//  NSLocale+TACAdditions.h
//  NSDateFormatter-Sample
//
//  Created by masato_arai on 2016/11/28.
//  Copyright © 2016年 Tea and Coffee. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NSString * TACLocaleIdentifier NS_EXTENSIBLE_STRING_ENUM;

static TACLocaleIdentifier const TACLocaleIdentifierEnUsPosix   = @"en_US_POSIX";
static TACLocaleIdentifier const TACLocaleIdentifierjaJp        = @"ja_JP";

@interface NSLocale (TACAdditions)

@end
