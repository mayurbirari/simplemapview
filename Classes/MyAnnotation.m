//
//  MyAnnotation.m
//  SimpleMapView
//
//  Created by Mayur Birari .

//

#import "MyAnnotation.h"


@implementation MyAnnotation

@synthesize title;
@synthesize subtitle;
@synthesize coordinate;

- (void)dealloc 
{
	[super dealloc];
	self.title = nil;
	self.subtitle = nil;
}
@end