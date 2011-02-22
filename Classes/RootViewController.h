//
//  RootViewController.h
//  SimpleMapView
//
//  Created by Mayur Birari.

//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "UserProfileVC.h"

@interface RootViewController : UIViewController<MKMapViewDelegate> {
	
	IBOutlet MKMapView* mapView;
	IBOutlet UserProfileVC* userProfileVC; 
	
}
@property(nonatomic,retain)	IBOutlet MKMapView* mapView;
@property(nonatomic,retain) IBOutlet UserProfileVC* userProfileVC; 
@end
