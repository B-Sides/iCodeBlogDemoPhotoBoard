//
//  DemoPhotoBoardAppDelegate.h
//  DemoPhotoBoard
//
//  Created by Collin Ruffenach on 10/12/10.
//  Copyright 2010 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DemoPhotoBoardViewController;

@interface DemoPhotoBoardAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    DemoPhotoBoardViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet DemoPhotoBoardViewController *viewController;

@end

