//
//  main.m
//  MiARDrone
//
//  Created by Sabrina Lizbeth Vega Maldonado on 6/4/14.
//  Copyright (c) 2014 Sabrina Lizbeth Vega Maldonado. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AppDelegate.h"

/********int main(int argc, char *argv[])
{
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
    int retVal = UIApplicationMain(argc, argv, nil, nil);
    [pool release];
    return retVal;
}********/

/***** este es el original****/
int main(int argc, char * argv[])
{
   
    @autoreleasepool {
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
    
}
