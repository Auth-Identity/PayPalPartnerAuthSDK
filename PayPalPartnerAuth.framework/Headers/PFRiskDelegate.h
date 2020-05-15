//
//  PFRiskDelegate.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 6/10/19.
//  Copyright © 2019 Paypal. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString *APNSToken;

@protocol PFRiskDelegate

/**
 * returns risk payload
 */
-(NSString *)getRiskPayload;

@end

NS_ASSUME_NONNULL_END
