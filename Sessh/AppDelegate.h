//
//  AppDelegate.h
//  Sessh
//

#import <Cocoa/Cocoa.h>
#import "LaunchAtLoginController.h"

@interface AppDelegate : NSObject <NSApplicationDelegate, NSMenuDelegate>{
    IBOutlet NSMenu *menu;
    IBOutlet NSArrayController *arrayController;

    NSImage *regularIcon;
    NSImage *altIcon;
    
    NSStatusItem *statusItem;
    NSString *sesshConfigFile;
    
    //This is for the JSON File
    NSDate *configModified;
    NSDate *sshConfigUser;
    NSDate *sshConfigSystem;
    
    //Global settings Pref in the JSON file.
    NSString *sesshJSONPathPref; //Alternate path the JSON file
    NSString *terminalPref; //Which terminal will we be using iTerm or Terminal.app
    NSString *editorPref; //What app opens the JSON file vi, nano...
    NSString *iTermVersionPref; //Which version of iTerm nightly or stable
    NSString *openInPref; //By default are commands opened in tabs or new windows.
    NSString *themePref; //The global theme.
    
    //Sort and separator
    NSString *menuName; //Menu name after removing the sort [aaa] and separator [---] syntax.
    BOOL addSeparator; //Are we adding a separator in the menu.
    
    //Used to gather ssh config settings
    NSMutableArray* sesshHosts;
    NSMutableArray* ignoreHosts;
    NSMutableArray* ignoreKeywords;
    
    LaunchAtLoginController *launchAtLoginController;
    
}

- (void)menuWillOpen:(NSMenu *)menu;

@end
