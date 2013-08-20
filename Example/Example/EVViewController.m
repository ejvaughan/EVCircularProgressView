//
//  EVViewController.m
//  Example
//
//  Created by Ethan Vaughan on 8/20/13.
//  Copyright (c) 2013 Ethan James Vaughan. All rights reserved.
//

#import "EVViewController.h"

@interface EVViewController ()

@end

@implementation EVViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    [self performSelector:@selector(beginUpdatingProgressView) withObject:nil afterDelay:2];
}

- (void)beginUpdatingProgressView
{
    self.updateTimer = [NSTimer scheduledTimerWithTimeInterval:0.02 target:self selector:@selector(updateProgress:) userInfo:nil repeats:YES];
}

- (void)updateProgress:(NSTimer *)timer
{
    if (self.progressView.progress == 1) {
        [timer invalidate];
    } else {
        [self.progressView setProgress:self.progressView.progress + 0.01  animated:YES];
    }
}

- (IBAction)stopButtonPressed:(id)sender
{
    [self.updateTimer invalidate];
}

- (IBAction)repeatButtonPressed:(id)sender
{
    [self.updateTimer invalidate];
    
    self.progressView.progress = 0;
    
    [self performSelector:@selector(beginUpdatingProgressView) withObject:nil afterDelay:2];
}

@end
