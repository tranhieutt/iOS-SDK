//
//  MDReference.h
//  iOSMedableSDK
//
//  
//  Copyright (c) 2014 Medable. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MDObjectInstance;

/**
 * A reference type, this can be expanded or not.
 */
@interface MDReference : NSObject

/// Unique identifier.
@property (nonatomic, readonly) MDObjectId* Id;

/// Object class' name.
@property (nonatomic, readonly) NSString* object;

/// URL path of this reference.
@property (nonatomic, readonly) NSString* path;

/// Expanded object of the reference (nil when not expanded).
@property (nonatomic, readonly) MDObjectInstance* expandedObjectReference;

/**
 * Initialize a reference with a value.
 *
 * @param value Value of the reference, can be expanded or not.
 * @return The reference value instance.
 */
- (instancetype)initWithValue:(id)value NOTNULL(1);

/// Whether this reference is expanded (contains the information) or just referenced.
- (BOOL)isExpanded;

@end
