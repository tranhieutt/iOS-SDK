//
//  MDEnvironment.h
//  iOSMedableSDK
//
//  Copyright (c) 2014 Medable. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * A Medable Environment holds basic information about your SDK's configuration to operate with the backend API.
 */
@interface MDEnvironment : NSObject

/// Singleton Instance
+ (MDEnvironment*)environment;

/// Base URL of the API
- (NSString*)APIbaseURL;

/// The API URL includes the organization and API version as part of it's path.
- (NSString*)APIURL;

/// Private API key or Medable Client Key.
- (NSString*)appAPIKey;

/**
 * Name of the Organization.
 *
 * @see MDOrg
 */
- (NSString*)orgName;

@end
