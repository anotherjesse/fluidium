//  Copyright 2009 Todd Ditchendorf
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <Foundation/Foundation.h>

#pragma mark -
#pragma mark FUApplicationNotifications

extern NSString *const FUHomeURLStringDidChangeNotification;
extern NSString *const FUApplicationVersionDidChangeNotification;

@interface NSObject (FUApplicationNotifications)
- (void)homeURLStringDidChange:(NSNotification *)n;
- (void)applicationVersionDidChange:(NSNotification *)n;
@end


#pragma mark -
#pragma mark FUUINotifications

extern NSString *const FUToolbarShownDidChangeNotification;
extern NSString *const FUTabBarShownDidChangeNotification;
extern NSString *const FUTabBarHiddenForSingleTabDidChangeNotification;
extern NSString *const FUBookmarkBarShownDidChangeNotification;
extern NSString *const FUStatusBarShownDidChangeNotification;

@interface NSObject (FUUINotifications)
- (void)toolbarShownDidChange:(NSNotification *)n;
- (void)tabBarShownDidChange:(NSNotification *)n;
- (void)tabBarHiddenForSingleTabDidChange:(NSNotification *)n;
- (void)bookmarkBarShownDidChange:(NSNotification *)n;
- (void)statusBarShownDidChange:(NSNotification *)n;
@end


#pragma mark -
#pragma mark FUWindowControllerNotifications

extern NSString *const FUWindowControllerDidOpenNotification;
extern NSString *const FUWindowControllerWillCloseNotification;

extern NSString *const FUWindowControllerDidOpenTabNotification;
extern NSString *const FUWindowControllerWillCloseTabNotification;
extern NSString *const FUWindowControllerDidCloseTabNotification;
extern NSString *const FUWindowControllerDidChangeSelectedTabNotification;

extern NSString *const FUTabControllerKey;
extern NSString *const FUIndexKey;
extern NSString *const FUPriorIndexKey;

@interface NSObject (FUWindowControllerNotifications)
- (void)windowControllerDidOpen:(NSNotification *)n;
- (void)windowControllerWillClose:(NSNotification *)n;

- (void)windowControllerDidOpenTab:(NSNotification *)n;
- (void)windowControllerWillCloseTab:(NSNotification *)n;
- (void)windowControllerDidCloseTab:(NSNotification *)n;
- (void)windowControllerDidChangeSelectedTab:(NSNotification *)n;
@end


#pragma mark -
#pragma mark FUTabControllerNotifications

extern NSString *const FUTabControllerProgressDidStartNotification;
extern NSString *const FUTabControllerProgressDidChangeNotification;
extern NSString *const FUTabControllerProgressDidFinishNotification;

extern NSString *const FUTabControllerDidStartProvisionalLoadNotification;
extern NSString *const FUTabControllerDidCommitLoadNotification;
extern NSString *const FUTabControllerDidFinishLoadNotification;
extern NSString *const FUTabControllerDidFailLoadNotification;
extern NSString *const FUTabControllerDidClearWindowObjectNotification;

@interface NSObject (FUTabControllerNotifications)
- (void)tabControllerProgressDidStart:(NSNotification *)n;
- (void)tabControllerProgressDidChange:(NSNotification *)n;
- (void)tabControllerProgressDidFinish:(NSNotification *)n;

- (void)tabControllerDidCommitLoad:(NSNotification *)n;
- (void)tabControllerDidFinishLoad:(NSNotification *)n;
- (void)tabControllerDidFailLoad:(NSNotification *)n;
- (void)tabControllerDidClearWindowObject:(NSNotification *)n;
@end


#pragma mark -
#pragma mark FUWindowNotifications

extern NSString *const FUSpacesBehaviorDidChangeNotification;
extern NSString *const FUWindowLevelDidChangeNotification;
extern NSString *const FUWindowOpacityDidChangeNotification;
extern NSString *const FUWindowsHaveShadowDidChangeNotification;
    
@interface NSObject (FUWindowNotifications)
- (void)spacesBehaviorDidChange:(NSNotification *)n;
- (void)windowLevelDidChange:(NSNotification *)n;
- (void)windowOpacityDidChange:(NSNotification *)n;
- (void)windowsHaveShadowDidChange:(NSNotification *)n;
@end


#pragma mark -
#pragma mark FUWebViewNotifications

extern NSString *const FUWebPreferencesDidChangeNotification;
extern NSString *const FUUserAgentStringDidChangeNotification;
extern NSString *const FUContinuousSpellCheckingDidChangeNotification;

@interface NSObject (FUWebViewNotifications)
- (void)webPreferencesDidChange:(NSNotification *)n;
- (void)userAgentStringDidChange:(NSNotification *)n;
- (void)continuousSpellCheckingDidChange:(NSNotification *)n;
@end


#pragma mark -
#pragma mark FUBookmarkNotifications

extern NSString *const FUBookmarksDidChangeNotification;

@interface NSObject (FUBookmarkNotifications)
- (void)bookmarksDidChange:(NSNotification *)n;
@end
