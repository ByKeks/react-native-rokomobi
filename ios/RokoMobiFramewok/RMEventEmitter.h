//
//  RMEventEmitter.h
//  AwesomeProject
//
//  Created by Maslov Sergey on 02.12.16.
//  Copyright © 2016 Facebook. All rights reserved.
//

#import "RCTEventEmitter.h"
#import "RCTBridge.h"

@interface RMEventEmitter : RCTEventEmitter <RCTBridgeModule>

//- (void)sendEventWithName:(NSString *)eventName body:(NSDictionary*)body;

@end
