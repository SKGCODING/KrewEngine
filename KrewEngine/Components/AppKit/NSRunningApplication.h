//
//  NSRunningApplication.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 01/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef NSRunningApplication_h
#define NSRunningApplication_h

#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <AppKit/NSWorkspace.h>

/* The following flags are for activateWithOptions:. */
NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, NSApplicationActivationOptions) {
    /* By default, activation brings only the main and key windows forward.  If you specify NSApplicationActivateAllWindows, all of the application's windows are brought forward. */
    NSApplicationActivateAllWindows = 1 << 0,
    
    /* By default, activation deactivates the calling app (assuming it was active), and then the new app is activated only if there is no currently active application.  This prevents the new app from stealing focus from the user, if the app is slow to activate and the user has switched to a different app in the interim.  However, if you specify NSApplicationActivateIgnoringOtherApps, the application is activated regardless of the currently active app, potentially stealing focus from the user.
     
     You ALMOST NEVER want to pass this flag, because stealing key focus produces a very bad user experience. */
    NSApplicationActivateIgnoringOtherApps = 1 << 1
};


/* The following activation policies control whether and how an application may be activated.  They are determined by the Info.plist. */
typedef NS_ENUM(NSInteger, NSApplicationActivationPolicy) {
    /* The application is an ordinary app that appears in the Dock and may have a user interface.  This is the default for bundled apps, unless overridden in the Info.plist. */
    NSApplicationActivationPolicyRegular,
    
    /* The application does not appear in the Dock and does not have a menu bar, but it may be activated programmatically or by clicking on one of its windows.  This corresponds to LSUIElement=1 in the Info.plist. */
    NSApplicationActivationPolicyAccessory,
    
    /* The application does not appear in the Dock and may not create windows or be activated.  This corresponds to LSBackgroundOnly=1 in the Info.plist.  This is also the default for unbundled executables that do not have Info.plists. */
    NSApplicationActivationPolicyProhibited
};


@class NSLock, NSDate, NSImage, NSURL;

NS_CLASS_AVAILABLE(10_6, NA)
@interface NSRunningApplication : NSObject {
@private
    id _superReserved __unused;
    void *_asn;
    void **_helpers;
    id _obsInfo;
    NSLock *_lock;
    NSString *_bundleID;
    NSString *_localizedName;
    NSURL *_bundleURL;
    NSURL *_executableURL;
    NSDate *_launchDate;
    NSImage *_icon;
    int _pid;
    unsigned int _lastSeed;
    unsigned int _activeSeed;
    unsigned int _staleSeed;
    unsigned long long _obsMask;
    struct {
        unsigned fetchedDynamic:1;
        unsigned deadToUs:1;
        unsigned terminated:1;
        unsigned finishedLaunching:1;
        unsigned hidden:1;
        unsigned active:1;
        unsigned ownsMenuBar:1;
        unsigned arch:3;
        unsigned activationPolicy:3;
        unsigned reserved1:19;
    } _aflags;
    id _appReserved __unused;
}

/* Indicates that the process is an exited application.  This is observable through KVO. */
@property (readonly, getter=isTerminated) BOOL terminated;

/* Indicates that the process is finished launching, which corresponds to the NSApplicationDidFinishLaunching internal notification.  This is observable through KVO.  Some applications do not post this notification and so are never reported as finished launching. */
@property (readonly, getter=isFinishedLaunching) BOOL finishedLaunching;

/* Indicates whether the application is currently hidden.  This is observable through KVO. */
@property (readonly, getter=isHidden) BOOL hidden;

/* Indicates whether the application is currently frontmost.  This is observable through KVO. */
@property (readonly, getter=isActive) BOOL active;

/* Indicates whether the application currently owns the menu bar.  This is observable through KVO. */
@property (readonly) BOOL ownsMenuBar NS_AVAILABLE_MAC(10_7);

/* Indicates the activation policy of the application.   This is observable through KVO (the type is usually fixed, but may be changed through a call to -[NSApplication setActivationPolicy:]).  */
@property (readonly) NSApplicationActivationPolicy activationPolicy;

/* Indicates the name of the application.  This is dependent on the current localization of the referenced app, and is suitable for presentation to the user. */
@property (nullable, readonly, copy) NSString *localizedName;

/* Indicates the CFBundleIdentifier of the application, or nil if the application does not have an Info.plist. */
@property (nullable, readonly, copy) NSString *bundleIdentifier;

/* Indicates the URL to the application's bundle, or nil if the application does not have a bundle. */
@property (nullable, readonly, copy) NSURL *bundleURL;

/* Indicates the URL to the application's executable. */
@property (nullable, readonly, copy) NSURL *executableURL;

/* Indicates the process identifier (pid) of the application.  Do not rely on this for comparing processes.  Use isEqual: instead.  Not all applications have a pid.  Applications without a pid return -1 from this method. This is observable through KVO (an application's pid may change if it is automatically terminated). */
@property (readonly) pid_t processIdentifier;

/* Indicates the date when the application was launched.  This property is not available for all applications.  Specifically, it is not available for applications that were launched without going through LaunchServices.   */
@property (nullable, readonly, copy) NSDate *launchDate;

/* Returns the icon of the application. */
@property (nullable, readonly, strong) NSImage *icon;

/* Indicates the executing processor architecture for the application, as an NSBundleExecutableArchitecture from NSBundle.h. */
@property (readonly) NSInteger executableArchitecture;

/* Attempts to hide or unhide the receiver.  These methods return true if the request to hide or unhide was successfully sent, false if not (for example, if the application has quit, or is of a type that cannot be unhidden). */
- (BOOL)hide;
- (BOOL)unhide;

/* Attempts to activate the receiver.  This method return true if the request to activate was successfully sent, false if not (for example, if the application has quit, or is of a type that cannot be activated). */
- (BOOL)activateWithOptions:(NSApplicationActivationOptions)options;

/* Attempts to quit the receiver normally.  This method returns true if the request was successfully sent, false if not (for example, if the application is no longer running).  This method may return before the receiver exits; you should observe the terminated property or listen for the notification to detect when the app has exited. */
- (BOOL)terminate;

/* Attempts to force the receiver to quit.  This method returns true if the request was successfully sent, false if not (for example, if the application is no longer running).  This method may return before the receiver exits; you should observe the terminated property or listen for the notification to detect when the app has exited. */
- (BOOL)forceTerminate;

/* Returns an array of currently running applications with the given bundle identifier, or an empty array if no apps match. */
+ (NSArray<NSRunningApplication *> *)runningApplicationsWithBundleIdentifier:(NSString *)bundleIdentifier;

/* Returns the running application with the given process identifier, or nil if no application has that pid.  Applications that do not have PIDs cannot be returned from this method. */
+ (nullable instancetype)runningApplicationWithProcessIdentifier:(pid_t)pid;

/* Returns an NSRunningApplication representing this application. */
@property (class, readonly, strong) __kindof NSRunningApplication *currentApplication;

/*
 *  Cause any applications that are invisibly still running (see NSProcessInfo.h automatic termination methods and docs) to terminate as if triggered by system memory pressure
 *  This is intended for installer apps and the like to make sure that nothing is unexpectedly relying on the files they're replacing
 */
+ (void) terminateAutomaticallyTerminableApplications;

@end

@interface NSWorkspace (NSWorkspaceRunningApplications)

/* Returns an array of NSRunningApplications representing currently running applications.  The order of the array is unspecified, but it is stable, meaning that the relative order of particular applications will not change across multiple calls to runningApplications.
 
 Similar to NSRunningApplication's properties, this property will only change when the main run loop is run in a common mode.  Instead of polling, use key-value observing to be notified of changes to this array property.
 
 This property is thread safe, in that it may be called from background threads and the result is returned atomically.  This property is observable through KVO.
 */
@property (readonly, copy) NSArray<NSRunningApplication *> *runningApplications NS_AVAILABLE_MAC(10_6);

@end

NS_ASSUME_NONNULL_END

#endif /* NSRunningApplication_h */
