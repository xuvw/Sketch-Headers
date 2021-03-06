//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface BCPopoverContentView : NSView
{
    NSColor *_backgroundColor;
    unsigned long long _arrowEdge;
    double _arrowPosition;
}

@property(nonatomic) double arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(nonatomic) unsigned long long arrowEdge; // @synthesize arrowEdge=_arrowEdge;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)backgroundPath;
- (struct CGRect)availableContentRect;
- (BOOL)canBecomeKeyView;
- (void)cancelOperation:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)keyDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

