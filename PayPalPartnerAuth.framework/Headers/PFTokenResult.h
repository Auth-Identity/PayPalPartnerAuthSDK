//
//  PFTokenResult.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 8/3/17.
//  Copyright © 2017 Paypal. All rights reserved.
//  https://github.com/paypal/paypalnativecheckout-docs/blob/master/license.md
//

#import <Foundation/Foundation.h>
@class PFOIDAuthState;

@interface PFTokenResult : NSObject

@property (nullable, nonatomic, readonly, copy) NSString *accessToken;
@property (nullable, nonatomic, readonly, copy) NSString *refreshToken;

- (nullable instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithAuthState:(nonnull PFOIDAuthState *)authState;


@end
