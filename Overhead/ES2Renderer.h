/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ESRenderer.h"

@class EAGLContext;

__attribute__((visibility("hidden")))
@interface ES2Renderer : XXUnknownSuperclass <ESRenderer> {
@private
	EAGLContext* context;
	int backingWidth;
	int backingHeight;
	unsigned defaultFramebuffer;
	unsigned colorRenderbuffer;
	unsigned program;
}
-(void)dealloc;
-(BOOL)resizeFromLayer:(id)layer;
-(BOOL)loadShaders;
-(BOOL)validateProgram:(unsigned)program;
-(BOOL)linkProgram:(unsigned)program;
-(BOOL)compileShader:(unsigned*)shader type:(unsigned)type file:(id)file;
-(void)render;
-(id)init;
@end

