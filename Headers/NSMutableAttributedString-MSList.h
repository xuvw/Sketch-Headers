//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (MSList)
- (id)paragraphStyle;
- (id)stringByStrippingMarkers:(id)arg1 oldList:(id)arg2 index:(long long)arg3;
- (id)stringByStrippingNewlinesSpacesAndTabs:(id)arg1;
- (id)stripListMarkers:(id)arg1 oldList:(id)arg2 lineIndex:(long long)arg3;
- (id)strippedLinesFromTextStorage:(id)arg1 oldList:(id)arg2;
- (id)combineLines:(id)arg1 intoList:(id)arg2;
- (id)normalTabStops;
- (id)listTabStops;
- (void)updateListFrom:(id)arg1 toList:(id)arg2;
- (void)updateListStyle:(id)arg1;
@end

