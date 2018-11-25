//
//  AboutWindowController.h
//  Sessh
//
//  Created by tkjef
//  Copyright (c) 2018 tkjef
//

#import <Cocoa/Cocoa.h>

@interface AboutWindowController : NSWindowController

@property (strong) NSWindowController *aboutWindow;

@property (strong) IBOutlet NSTextField *appName;
@property (strong) IBOutlet NSTextField *appVersion;
@property (strong) IBOutlet NSTextField *appCopyright;

- (IBAction)btnHomepage:(id)sender;

@end
