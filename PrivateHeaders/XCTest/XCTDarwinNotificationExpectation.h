//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTestExpectation.h>

@class NSString, _XCTDarwinNotificationExpectationImplementation;

@interface XCTDarwinNotificationExpectation : XCTestExpectation
{
    id _internal;
}
@property(retain) _XCTDarwinNotificationExpectationImplementation *internal; // @synthesize internal=_internal;
@property(copy) CDUnknownBlockType handler;
@property(readonly, copy) NSString *notificationName;

- (void)cleanup;
- (void)fulfill;
- (id)initWithNotificationName:(id)arg1;

@end
