/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import "CLSCrashReporter.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSString;

@interface CLSCrashReporter : XXUnknownSuperclass {
@private
	BOOL _enabled;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _bundleShortVersionString;
	NSString* _crashReportDirectory;
	NSString* _sessionIdentifier;
	NSTimer* _deviceAttributeTimer;
}
@property(readonly, assign, nonatomic) clscrash_log_writer* logWriter;
+(id)sharedReporter;
+(void)initialize;
-(void)updateWriterWithCustomAttributes:(id)customAttributes;
-(void)updateWriterWithSettings:(id)settings;
-(void)updateBatteryVelocity;
-(void)updateProximity;
-(void)updateBatteryLevel;
-(void)updateOrientation;
-(void)updateApplicationState;
-(void)reportException:(id)exception;
-(BOOL)enableCrashReporterEnableReraise:(BOOL)reraise error:(id*)error;
-(BOOL)enableCrashReporterEnableReraise:(BOOL)reraise;
-(id)lastCrashMarkerPath;
-(id)loadPendingCrashReportDataAtPath:(id)path error:(id*)error;
-(id)pendingCrashReports;
-(BOOL)hasPendingCrashReport;
@end

@interface CLSCrashReporter (PrivateMethods)
-(void)updateDeviceIds;
-(void)updateDeviceAttributes;
-(id)crashReportPath;
-(id)fileName;
-(id)crashReportDirectory;
-(BOOL)populateCrashReportDirectoryAndReturnError:(id*)error;
-(void)dealloc;
-(id)initWithBundle:(id)bundle;
-(id)initWithApplicationIdentifier:(id)applicationIdentifier appVersion:(id)version bundleShortVersionString:(id)string;
@end

