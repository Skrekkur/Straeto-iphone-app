//
//  RoutHandler.h
//  Straeto
//
//  Created by Árni Jónsson on 20.4.2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <MapKit/MapKit.h>

@interface RoutHandler : NSObject
{
    NSArray *allRoutes;

    NSMutableSet *routes;
    NSMutableSet *settingsRoutes;
    
    NSMutableArray *busStops;
}

- (void)loadBusStops;
- (void)setUpFromSettings;
- (void)addRoutesByLocation:(CLLocation*)location;
- (double)distanceFromClosestStopByLocation:(CLLocation*)location;

-(NSString*)url;
-(void)debug;

@end
