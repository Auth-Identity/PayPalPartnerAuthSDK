//
//  PFAuthUnivLinkHandler.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 8/8/17.
//  Copyright © 2017 Paypal. All rights reserved.
//  https://github.com/paypal/paypalnativecheckout-docs/blob/master/license.md
//

#import <Foundation/Foundation.h>

@protocol OIDExternalUserAgentSession;

@interface PFAuthUnivLinkHandler : NSObject

- (nullable instancetype)initWithAuthSession:(nonnull id<OIDExternalUserAgentSession>)currentAuthorizationFlow;
- (BOOL)continueAuthFlowWithURL:(nonnull NSURL *)URL;

@end
