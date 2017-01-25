#ifndef RN_GoogleSigning_h
#define RN_GoogleSigning_h

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

#if __has_include(<React/RCTConvert.h>)
#import <React/RCTConvert.h>
#else
#import "RCTConvert.h"
#endif

#import <GoogleSignIn/GoogleSignIn.h>

@interface RNGoogleSignin : NSObject<RCTBridgeModule, GIDSignInDelegate, GIDSignInUIDelegate>

+ (BOOL)application:(UIApplication *)application openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

@end

@implementation RCTConvert(GIDSignInButtonStyle)

RCT_ENUM_CONVERTER(GIDSignInButtonStyle, (@{
                                            @"standard": @(kGIDSignInButtonStyleStandard),
                                            @"wide": @(kGIDSignInButtonStyleWide),
                                            @"icon": @(kGIDSignInButtonStyleIconOnly),
                                            }), kGIDSignInButtonStyleStandard, integerValue)


@end

@implementation RCTConvert(GIDSignInButtonColorScheme)

RCT_ENUM_CONVERTER(GIDSignInButtonColorScheme, (@{
                                                  @"dark": @(kGIDSignInButtonColorSchemeDark),
                                                  @"light": @(kGIDSignInButtonColorSchemeLight),
                                                  }), kGIDSignInButtonColorSchemeDark, integerValue)

@end



#endif
