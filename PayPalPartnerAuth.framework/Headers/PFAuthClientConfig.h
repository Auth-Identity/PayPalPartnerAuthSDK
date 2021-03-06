//
//  PFAuthClientConfig.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 7/31/17.
//  Copyright © 2017 Paypal. All rights reserved.
//  https://github.com/paypal/paypalnativecheckout-docs/blob/master/license.md
//

#import <Foundation/Foundation.h>
@class PFAuthClientConfigBuilder;

@interface PFAuthClientConfig : NSObject

@property(nonnull, nonatomic, readonly) NSString *clientId;
@property(nonnull, nonatomic, readonly) NSString *redirectURL;
@property(nonnull, nonatomic, readonly) NSURL *tokenURL;
@property(nonnull, nonatomic, readonly) NSURL *authorizationURL;
@property(nonnull, nonatomic, readonly) NSArray<NSString *> *scopes;
@property(nullable, nonatomic, readonly) NSDictionary *authorizationParam;

- (nullable instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithBuilder:(nonnull PFAuthClientConfigBuilder *)builder;

@end
