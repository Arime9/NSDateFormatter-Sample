//
//  NSDateFormatter+TACAdditions.m
//  NSDateFormatter-Sample
//
//  Created by masato_arai on 2016/11/28.
//  Copyright © 2016年 Tea and Coffee. All rights reserved.
//

#import "NSDateFormatter+TACAdditions.h"

@implementation NSDateFormatter (TACAdditions)

- (instancetype)initWithDateFormat:(TACDateFormat)dateFormat {
    self = [self init];
    if (self) {
        self.dateFormat = dateFormat;
        self.locale = [NSLocale localeWithLocaleIdentifier:TACLocaleIdentifierEnUsPosix];
        self.calendar = [NSCalendar calendarWithIdentifier:NSCalendarIdentifierGregorian];
    }
    return self;
}

- (instancetype)initWithDateFormat:(TACDateFormat)dateFormat withLocaleIdentifier:(TACLocaleIdentifier)localeIdent {
    self = [self init];
    if (self) {
        self.dateFormat = dateFormat;
        self.locale = [NSLocale localeWithLocaleIdentifier:localeIdent];
        self.calendar = [NSCalendar calendarWithIdentifier:NSCalendarIdentifierGregorian];
    }
    return self;
}

- (instancetype)initWithDateFormat:(TACDateFormat)dateFormat withLocaleIdentifier:(TACLocaleIdentifier)localeIdent withTimeZoneAbbreviation:(TACTimeZoneAbbreviation)abbreviation {
    self = [self init];
    if (self) {
        self.dateFormat = dateFormat;
        self.locale = [NSLocale localeWithLocaleIdentifier:localeIdent];
        self.timeZone = [NSTimeZone timeZoneWithAbbreviation:abbreviation];
        self.calendar = [NSCalendar calendarWithIdentifier:NSCalendarIdentifierGregorian];
    }
    return self;
}

@end
