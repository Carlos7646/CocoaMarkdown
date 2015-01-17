//
//  CMHTMLStrikethroughTransformer.h
//  CocoaMarkdown
//
//  Created by Indragie on 1/16/15.
//  Copyright (c) 2015 Indragie Karunaratne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CMHTMLElementTransformer.h"

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#define CMColor UIColor
#else
#import <Cocoa/Cocoa.h>
#define CMColor NSColor
#endif

/**
 Transforms HTML strikethrough elements (<s>) into attributed strings.
 */
@interface CMHTMLStrikethroughTransformer : NSObject <CMHTMLElementTransformer>

/**
 *  Initializes the receiver with the default attributes
 *  (single line style and black color).
 *
 *  @return An initialized instance of the receiver.
 */
- (instancetype)init;

/**
 *  Initializes the receiver with a custom style and color.
 *
 *  @param style Strikethrough style.
 *  @param color Strikethrough color.
 *
 *  @return An initialized instance of the receiver.
 */
- (instancetype)initWithStrikethroughStyle:(NSUnderlineStyle)style color:(CMColor *)color;

@end
