//
//  ViewController.m
//  ExampleMac
//
//  Created by Ethan Vaughan on 5/24/17.
//  Copyright © 2017 Ethan James Vaughan. All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.progressView.enabled = YES;
    self.progressView.target = self;
    self.progressView.action = @selector(progressViewPressed:);

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

- (IBAction)repeatButtonPressed:(NSButton *)sender
{
    [self.updateTimer invalidate];
    
    self.progressView.progress = 0;
    
    [self performSelector:@selector(beginUpdatingProgressView) withObject:nil afterDelay:2];
}

- (IBAction)progressViewPressed:(EVCircularProgressView *)sender
{
    sender.progress = 0;
}

@end
