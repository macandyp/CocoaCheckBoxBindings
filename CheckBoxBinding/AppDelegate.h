//
//  AppDelegate.h
//  CheckBoxBinding
//
//  Created by Pereira, Andrew on 11/11/13.
//  Copyright (c) 2013 USAA. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (nonatomic, assign) BOOL checkBoxChecked;
@end
