//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_MSImmutableArtboardGroup.h"

#import "MSArtboardGroup-Protocol.h"
#import "MSColorUser-Protocol.h"
#import "MSImmutableRootLayer-Protocol.h"
#import "MSLayerWithBackgroundColor-Protocol.h"
#import "MSWebExportableRootLayer-Protocol.h"

@class MSArtboardPreset, MSImmutableColor, MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid, NSString;

@interface MSImmutableArtboardGroup : _MSImmutableArtboardGroup <MSWebExportableRootLayer, MSColorUser, MSLayerWithBackgroundColor, MSArtboardGroup, MSImmutableRootLayer>
{
    struct CGSize _unscaledNameSize;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
@property(readonly, nonatomic) struct CGSize unscaledNameSize; // @synthesize unscaledNameSize=_unscaledNameSize;
@property(readonly, nonatomic) MSArtboardPreset *preset;
- (id)immutableBackgroundColor;
- (struct CGRect)contentBoundsForDocument:(id)arg1;
- (struct CGPoint)rulerBase;
- (struct CGRect)absoluteInfluenceRectForAncestorGroups:(id)arg1 document:(id)arg2;
- (BOOL)influenceRectClipsToBounds;
- (void)objectDidInit;
- (void)performInitWithUnarchiver:(id)arg1;
@property(readonly, nonatomic) BOOL containsFixedLayers;
- (struct CGRect)rectInFixedViewportWithRect:(struct CGRect)arg1 fromFixingLayer:(id)arg2;
- (unsigned long long)webExportLayerBehaviorWithRect:(struct CGRect)arg1 fromLayer:(id)arg2;
@property(readonly, nonatomic) BOOL webExporterShouldIncludeBackgroundColor;
@property(readonly, nonatomic) MSImmutableColor *webExporterBackgoundColor;
- (void)updateColorCounter:(id)arg1;
- (BOOL)canBreakMaskChain;
- (void)migratePropertiesFromV100OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV79OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV57OrEarlierWithUnarchiver:(id)arg1;
- (void)trackColors:(id)arg1;
- (void)prepareDrawingInContext:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (BOOL)shouldDrawBackgroundInContext:(id)arg1;
- (void)addChildrenToElement:(id)arg1 exporter:(id)arg2;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (id)svgStyle:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) MSImmutableSimpleGrid *grid;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) MSImmutableRulerData *horizontalRulerData;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isFlowHome;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, copy, nonatomic) MSImmutableLayoutGrid *layout;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) MSImmutableRulerData *verticalRulerData;

@end

