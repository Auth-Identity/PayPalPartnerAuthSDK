//
//  PFAuthenticationDelegate.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 7/31/17.
//  Copyright © 2017 Paypal. All rights reserved.
//  https://github.com/paypal/paypalnativecheckout-docs/blob/master/license.md
//

#import "PFTokenResult.h"
@class PFAuthUnivLinkHandler;
@protocol PFRiskDelegate;

@protocol PFAuthenticationDelegate

@optional

- (NSString *)getTrackingId;

- (id<PFRiskDelegate>)getRiskDelegate;

- (void)onAuthenticationStarted:(PFAuthUnivLinkHandler *)authUnivLinkHandler;

- (void)completeWithSuccess:(PFTokenResult *)result;

- (void)completeWithFailure:(NSError *)failureMessage;

@end
