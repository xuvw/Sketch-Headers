//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MSTextLayout : NSObject
{
    NSArray *_baselineOffsets;
    NSArray *_lineFragmentRectangles;
    double _firstLineCapOffset;
    struct CGRect _lineFragmentBounds;
}

+ (id)textLayoutForLayoutManager:(id)arg1;
@property(readonly, nonatomic) double firstLineCapOffset; // @synthesize firstLineCapOffset=_firstLineCapOffset;
@property(readonly, nonatomic) struct CGRect lineFragmentBounds; // @synthesize lineFragmentBounds=_lineFragmentBounds;
@property(readonly, copy, nonatomic) NSArray *lineFragmentRectangles; // @synthesize lineFragmentRectangles=_lineFragmentRectangles;
@property(readonly, copy, nonatomic) NSArray *baselineOffsets; // @synthesize baselineOffsets=_baselineOffsets;
- (void).cxx_destruct;
@property(readonly, nonatomic) double lastBaselineOffset;
@property(readonly, nonatomic) double firstBaselineOffset;
- (id)initWithBaselineOffsets:(id)arg1 firstLineCapOffset:(double)arg2 lineFragments:(id)arg3 lineFragmentBounds:(struct CGRect)arg4;

@end

