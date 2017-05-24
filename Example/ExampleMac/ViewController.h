//
//  ViewController.h
//  ExampleMac
//
//  Created by Ethan Vaughan on 5/24/17.
//  Copyright © 2017 Ethan James Vaughan. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "EVCircularProgressView.h"

@interface ViewController : NSViewController

@property (nonatomic, weak) IBOutlet EVCircularProgressView *progressView;
@property (nonatomic, strong) NSTimer *updateTimer;

@end

