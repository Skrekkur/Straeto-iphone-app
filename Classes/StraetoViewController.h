//
//  StraetoViewController.h
//  Straeto
//
//  Created by Árni Jónsson on 5.1.2012.
//  Copyright 2012 ProNasty. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

#import "RoutHandler.h"

@interface StraetoViewController : UIViewController <MKMapViewDelegate>
{
	MKMapView *_mapView;
    BOOL debug;
    NSMutableArray *pinsToDelete;
    
    RoutHandler *routes;
    
    BOOL shouldUpdateView;
    
    BOOL showError;
    
    BOOL updatePosition;
    BOOL updateCloseRoutes;
    
    CLLocation *centerOfRvk;
    
    CLLocation *lastLocation;
    
    NSTimeInterval lastUpdate;
    
    IBOutlet UILabel *warningView;
}

@property (nonatomic, retain) IBOutlet MKMapView *mapView;
@property (readwrite, retain) NSMutableArray *pinsToDelete;

@property (nonatomic, retain) CLLocation *lastLocation;

//- (void)setUpRouteUrlFromSettings;

- (NSArray*)findAllPins;

- (void)busDataUpdater;
- (void)fetchBusData;
- (void)parseBusData:(NSString *)busDataString;

- (NSString*)fixJson:(NSString*)jsonString;

- (void)applicationDidBecomeActive;

//- (void)loadBusStops;

//-(void)findCloseBusRutesTo:(CLLocation*)location;

@end
