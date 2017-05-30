//
//  FlowUp.h
//
//  Copyright © 2017 flowup. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIApplication;

@interface FlowUp : NSObject

- (instancetype)init NS_UNAVAILABLE;

+ (void)application:(UIApplication *)application
didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
             apiKey:(NSString *)apiKey
 isDebugModeEnabled:(BOOL)isDebugModeEnabled;

@end
