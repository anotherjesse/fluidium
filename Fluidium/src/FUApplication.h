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

#import <Cocoa/Cocoa.h>
#import <OmniAppkit/OAApplication.h>

@interface FUApplication : OAApplication {
    BOOL isFluidSSB;
    NSString *appName;
    NSString *versionString;
    NSString *appSupportDirPath;
    NSString *ssbSupportDirPath;
    NSString *userscriptDirPath;
    NSString *userscriptFilePath;
    NSString *userstyleDirPath;
    NSString *userstyleFilePath;
    NSString *bookmarksFilePath;
    NSString *downloadArchiveFilePath;
    NSString *plugInPrivateDirPath;
    NSString *plugInDirPath;
    NSString *plugInSupportDirPath;
}

+ (FUApplication *)instance;

- (IBAction)showDownloadsWindow:(id)sender;
- (IBAction)showBookmarksWindow:(id)sender;
- (IBAction)showUserscriptsWindow:(id)sender;
- (IBAction)showUserstylesWindow:(id)sender;

- (IBAction)globalShortcutActivated:(id)sender;

// font panel support
- (IBAction)changeFont:(id)sender;

- (void)showPreferencePaneForIdentifier:(NSString *)s;

- (NSString *)defaultUserAgentString;
- (NSArray *)allUserAgentStrings;

- (BOOL)isFullScreen;

@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *versionString;
@property (nonatomic, copy) NSString *appSupportDirPath;
@property (nonatomic, copy) NSString *ssbSupportDirPath;
@property (nonatomic, copy) NSString *userscriptDirPath;
@property (nonatomic, copy) NSString *userscriptFilePath;
@property (nonatomic, copy) NSString *userstyleDirPath;
@property (nonatomic, copy) NSString *userstyleFilePath;
@property (nonatomic, copy) NSString *bookmarksFilePath;
@property (nonatomic, copy) NSString *downloadArchiveFilePath;
@property (nonatomic, copy) NSString *plugInPrivateDirPath;
@property (nonatomic, copy) NSString *plugInDirPath;
@property (nonatomic, copy) NSString *plugInSupportDirPath;
@end
