//
//  SimpleMapViewAppDelegate.h
//  SimpleMapView
//
//  Created by Mayur Birari.

//

#import <UIKit/UIKit.h>

@interface SimpleMapViewAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

