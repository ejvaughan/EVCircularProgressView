//
//  EVCircularProgressView.h
//  Test
//
//  Created by Ethan Vaughan on 8/18/13.
//  Copyright (c) 2013 Ethan James Vaughan. All rights reserved.
//

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>

#define SuperClass UIControl
#define Color UIColor

#else
#import <AppKit/AppKit.h>

#define SuperClass NSButton
#define Color NSColor

#endif

NS_ASSUME_NONNULL_BEGIN

/**
 EVCircularProgressView is a UIControl (iOS) or NSControl (macOS) subclass that mimics the circular progress view found in iOS 7, such as the one that is displayed when downloading an app from the App Store.
 
 The progress view initally spins around indeterminately, but then displays a determinate value when the progress property is set to a non-zero value.
*/
@interface EVCircularProgressView : SuperClass

/**
 A value from 0 to 1 that indicates how much progress has been made
 When progress is zero, the progress view functions as an indeterminate progress indicator (a spinner)
*/
@property (nonatomic) float progress;

/** 
 On iOS 7, progressTintColor sets and gets the tintColor property, and therefore defaults to the value of tintColor
 On iOS 6 and macOS, defaults to [UIColor blackColor]
*/
@property (nonatomic, strong) Color *progressTintColor;

/** Set the value of the progress property, optionally animating the change */
- (void)setProgress:(float)progress animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
