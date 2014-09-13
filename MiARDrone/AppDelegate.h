//
//  AppDelegate.h
//  MiARDrone
//
//  Created by Sabrina Lizbeth Vega Maldonado on 6/4/14.
//  Copyright (c) 2014 Sabrina Lizbeth Vega Maldonado. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ARDrone.h"
#import "MenuController.h"
#import <MediaPlayer/MediaPlayer.h>
#import "Common.h"
/////#import "GDataValueConstruct.h"
//////#import "GoogleAPIManager.h"
/////#import "GDataEntryPhotoAlbum.h"

#import "ARUtils.h"

@class EAGLView;

@interface AppDelegate : NSObject <UIApplicationDelegate, ARDroneProtocolIn/*, GoogleAPIManagerDelegate*/>/****UIResponder <UIApplicationDelegate>****/
{
    UIWindow *windows;
    BOOL was_in_game;
    
    MenuController *menuControllers;
    ARDrone *drone;
    EAGLView *glView;
}

@property (nonatomic, retain) IBOutlet MenuController *menuControllers;
@property (nonatomic, retain) IBOutlet UIWindow *windows;

@end
