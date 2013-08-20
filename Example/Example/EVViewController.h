//
//  EVViewController.h
//  Example
//
//  Created by Ethan Vaughan on 8/20/13.
//  Copyright (c) 2013 Ethan James Vaughan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EVCircularProgressView.h"

@interface EVViewController : UIViewController

@property (nonatomic, strong) IBOutlet EVCircularProgressView *progressView;
@property (nonatomic, strong) NSTimer *updateTimer;

- (IBAction)repeatButtonPressed:(id)sender;
- (IBAction)stopButtonPressed:(id)sender;

@end
