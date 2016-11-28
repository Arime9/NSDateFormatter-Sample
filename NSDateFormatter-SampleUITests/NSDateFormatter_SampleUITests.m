//
//  NSDateFormatter_SampleUITests.m
//  NSDateFormatter-SampleUITests
//
//  Created by masato_arai on 2016/11/28.
//  Copyright © 2016年 Tea and Coffee. All rights reserved.
//

#import <XCTest/XCTest.h>

@interface NSDateFormatter_SampleUITests : XCTestCase

@end

@implementation NSDateFormatter_SampleUITests

- (void)setUp {
    [super setUp];
    
    self.continueAfterFailure = NO;
    
    [[[XCUIApplication alloc] init] launch];
}

- (void)tearDown {
    [super tearDown];
}

@end
