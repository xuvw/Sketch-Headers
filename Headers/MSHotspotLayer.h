//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_MSHotspotLayer.h"

#import "MSLayerPreviewability-Protocol.h"

@interface MSHotspotLayer : _MSHotspotLayer <MSLayerPreviewability>
{
}

+ (id)hotspotLayerFromLayer:(id)arg1;
- (void)resetFlow;
- (BOOL)canRotate;
- (BOOL)canBeTransformed;
- (void)setFlow:(id)arg1;
- (void)performInitEmptyObject;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)shouldDrawSelectionStroke;
- (BOOL)canChangeBooleanOperation;
- (id)interfaceImageIdentifier;
- (id)cacheOwner;
- (id)unselectedPreviewTemplateImage;
- (id)selectedPreviewTemplateImage;
- (BOOL)isExportableViaDragAndDrop;
- (BOOL)isActive;
- (unsigned long long)filterTypeMask;
- (void)applyOverride:(id)arg1 document:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long badgeType;

@end

