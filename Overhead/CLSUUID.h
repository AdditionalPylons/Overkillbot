/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface CLSUUID : XXUnknownSuperclass {
	NSData* _data;
}
@property(readonly, assign) NSData* data;
+(id)generate;
-(BOOL)_populateMACAddress:(char*)address;
-(BOOL)_populatePID:(char*)pid;
-(BOOL)_populateSequenceNumber:(char*)number;
-(BOOL)_populateTime:(char*)time;
-(id)description;
-(id)stringValue;
-(void)dealloc;
-(id)init;
@end

