//
//  ObjCPluginManager.h
//  PluginManager
//
//  Created by Grayson Hansard
//  Copyright 2009 From Concentrate Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <JSCocoa/JSCocoa.h>
#import "PluginManager.h"
#import "PluginManagerProtocol.h"


@interface JavascriptPluginManager : NSObject <PluginManagerProtocol> {
	NSMutableDictionary *_plugins;
}

@property (retain) NSMutableDictionary *plugins;

-(NSString *)name;
-(NSArray *)extensions;
-(NSArray *)pluginsForProperty:(NSString *)property forValue:(id)forValue withValue:(id)value;
-(void)runPlugin:(NSDictionary *)plugin forValue:(id)forValue withValue:(id)withValue;
-(id)runScriptAtPath:(NSString *)path;

-(BOOL)canRunAsScript;

@end
