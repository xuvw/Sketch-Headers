//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSModelObjectCommon.h"

#import "MSCoding-Protocol.h"
#import "MSModelObject-Protocol.h"

@class NSArray, NSString;

@interface MSImmutableModelObject : MSModelObjectCommon <MSModelObject, MSCoding>
{
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (Class)mutableClass;
- (id)migrationsInList:(SEL *)arg1;
- (SEL *)migrationListForClass:(Class)arg1;
- (SEL *)allocateMigrationListForClass:(Class)arg1;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)performMigrationsWithUnarchiver:(id)arg1 migratingFrom:(long long)arg2 toVersion:(long long)arg3;
- (void)enumerateMigrations:(SEL *)arg1 fromVersion:(long long)arg2 toVersion:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)performInitWithUnarchiver:(id)arg1;
- (id)initWithUnarchiver:(id)arg1 migratingFrom:(long long)arg2 toVersion:(long long)arg3;
- (id)initWithUnarchiver:(id)arg1;
- (id)initWithUnarchiver:(id)arg1 decodeBlock:(CDUnknownBlockType)arg2;
- (id)replacementObjectForJSONEncoder:(id)arg1;
- (void)encodeAsJSON:(id)arg1;
- (void)encodeObjectIDWithCoder:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (id)initWithMutableModelObject:(id)arg1;
- (id)newMutableCounterpart;
- (BOOL)shouldDiffSubObjectsForDifferingObject:(id)arg1;
- (BOOL)differsFromObject:(id)arg1;
@property(readonly, nonatomic) NSArray *subObjectsForTreeDiff;
- (struct CGRect)overlayRectForAncestors:(id)arg1 document:(id)arg2;
- (struct CGRect)influenceRectForAncestors:(id)arg1 document:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly) Class superclass;

@end

