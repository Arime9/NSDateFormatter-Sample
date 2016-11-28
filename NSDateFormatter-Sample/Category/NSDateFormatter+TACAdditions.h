//
//  NSDateFormatter+TACAdditions.h
//  NSDateFormatter-Sample
//
//  Created by masato_arai on 2016/11/28.
//  Copyright © 2016年 Tea and Coffee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSLocale+TACAdditions.h"
#import "NSTimeZone+TACAdditions.h"

typedef NSString * TACDateFormat NS_EXTENSIBLE_STRING_ENUM;

// Slash date. Colon time.
static TACDateFormat const TACDateFormatMd            = @"M/d";
static TACDateFormat const TACDateFormat_short        = @"HH:mm";
static TACDateFormat const TACDateFormatMMddShort     = @"MM/dd HH:mm";

// Hyphen date. Colon time.
static TACDateFormat const TACDateFormatLong_         = @"yyyy-MM-dd";
static TACDateFormat const TACDateFormatLongMedium    = @"yyyy-MM-dd HH:mm:ss";
static TACDateFormat const TACDateFormatLongLong      = @"yyyy-MM-dd HH:mm:ss ZZZ";

// Japanese
static TACDateFormat const TACDateFormatJaLong_       = @"yyyy年 MM月 dd日";
static TACDateFormat const TACDateFormatJaFull_       = @"yyyy年 MM月 dd日（EEE）";

@interface NSDateFormatter (TACAdditions)

- (instancetype)initWithDateFormat:(TACDateFormat)dateFormat;
- (instancetype)initWithDateFormat:(TACDateFormat)dateFormat withLocaleIdentifier:(TACLocaleIdentifier)localeIdent;
- (instancetype)initWithDateFormat:(TACDateFormat)dateFormat withLocaleIdentifier:(TACLocaleIdentifier)localeIdent withTimeZoneAbbreviation:(TACTimeZoneAbbreviation)abbreviation;

@end
