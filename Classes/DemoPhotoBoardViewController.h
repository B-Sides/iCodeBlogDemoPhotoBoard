//
//  DemoPhotoBoardViewController.h
//  DemoPhotoBoard
//
//  Created by Collin Ruffenach on 10/12/10.
//  Copyright 2010 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>

@interface DemoPhotoBoardViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate> {

	CGFloat lastScale;
	CGFloat lastRotation;
	
	CGFloat firstX;
	CGFloat firstY;	
}

-(IBAction)addPhoto:(id)sender;

@end

