//
//  EVCircularProgressView.h
//  Test
//
//  Created by Ethan Vaughan on 8/18/13.
//  Copyright (c) 2013 Ethan James Vaughan. All rights reserved.
//

#import <UIKit/UIKit.h>

/* 
 
 EVCircularProgressView is a UIControl subclass that mimics the circular progress view found in iOS 7,
 
 such as the one that is displayed when downloading an app from the App Store. The progress view
 
 initally spins around indeterminately, but then displays a determinate value when the progress property is set
 
 to a non-zero value. To be notified when the user taps the stop button, use addTarget:action:forControlEvents:
 
 with UIControlEventTouchUpInside.
 
 */

@interface EVCircularProgressView : UIControl

// A value from 0 to 1 that indicates how much progress has been made
// When progress is zero, the progress view functions as an indeterminate progress indicator (a spinner)

@property (nonatomic) float progress;

// On iOS 7, progressTintColor sets and gets the tintColor property, and therefore defaults to the value of tintColor
// On iOS 6, defaults to [UIColor blackColor]

@property (nonatomic, strong) UIColor *progressTintColor;

// Set the value of the progress property, optionally animating the change

- (void)setProgress:(float)progress animated:(BOOL)animated;

@end
