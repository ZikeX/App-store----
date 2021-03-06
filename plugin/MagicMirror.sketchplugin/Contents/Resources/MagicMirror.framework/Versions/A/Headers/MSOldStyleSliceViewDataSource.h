//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MSSliceLayer, NSMutableArray, NSString, NSTableView;

@interface MSOldStyleSliceViewDataSource : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    MSSliceLayer *_slice;
    NSTableView *_sliceTableView;
    NSMutableArray *_possiblyIncludedLayers;
}


- (void)calculatePossiblyIncludedLayers:(id)arg1;
- (id)includedLayersForSlice:(id)arg1;
- (id)layerAtIndex:(long long)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(retain, nonatomic) NSMutableArray *possiblyIncludedLayers; // @synthesize possiblyIncludedLayers=_possiblyIncludedLayers;
- (id)prefixForLayer:(id)arg1;
- (void)prepare;
@property(retain, nonatomic) MSSliceLayer *slice; // @synthesize slice=_slice;
@property(retain, nonatomic) NSTableView *sliceTableView; // @synthesize sliceTableView=_sliceTableView;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

