//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelBase.h"

@interface _MSImmutableColor : MSImmutableModelBase
{
    double _alpha;
    double _blue;
    double _green;
    double _red;
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double blue; // @synthesize blue=_blue;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@property(nonatomic) double green; // @synthesize green=_green;
- (BOOL)hasDefaultValues;
- (id)initWithMutableModelObject:(id)arg1;
@property(nonatomic) double red; // @synthesize red=_red;

@end

