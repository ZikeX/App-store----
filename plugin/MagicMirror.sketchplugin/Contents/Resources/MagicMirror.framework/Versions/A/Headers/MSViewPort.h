//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSViewPort : NSObject
{
    double _zoomValue;
    struct CGPoint _scrollOrigin;
}

+ (double)cappedZoom:(double)arg1;
+ (id)viewPortWithScrollOrigin:(struct CGPoint)arg1 zoom:(double)arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;

@end

