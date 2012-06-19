/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Overkill-Structs.h"
#import "UIWebViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIWebView, UILabel, NSString, NSURL, UIImageView, UIButton, UIView, NSMutableDictionary, UIActivityIndicatorView;
@protocol FBDialogDelegate;

__attribute__((visibility("hidden")))
@interface FBDialog : XXUnknownSuperclass <UIWebViewDelegate> {
@private
	id<FBDialogDelegate> _delegate;
	NSMutableDictionary* _params;
	NSString* _serverURL;
	NSURL* _loadingURL;
	UIWebView* _webView;
	UIActivityIndicatorView* _spinner;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UIButton* _closeButton;
	int _orientation;
	BOOL _showingKeyboard;
	UIView* _modalBackgroundView;
}
@property(copy, nonatomic) NSString* title;
@property(retain, nonatomic) NSMutableDictionary* params;
@property(assign, nonatomic) id<FBDialogDelegate> delegate;
-(void)dialogDidCancel:(id)dialog;
-(void)dialogDidSucceed:(id)dialog;
-(void)dialogWillDisappear;
-(void)dialogWillAppear;
-(void)dismissWithError:(id)error animated:(BOOL)animated;
-(void)dismissWithSuccess:(BOOL)success animated:(BOOL)animated;
-(void)show;
-(void)loadURL:(id)url get:(id)get;
-(void)load;
-(id)initWithURL:(id)url params:(id)params delegate:(id)delegate;
-(id)getStringFromUrl:(id)url needle:(id)needle;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(void)deviceOrientationDidChange:(void*)deviceOrientation;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(void)dismiss:(BOOL)dismiss;
-(void)postDismissCleanup;
-(void)removeObservers;
-(void)addObservers;
-(id)generateURL:(id)url params:(id)params;
-(void)bounce2AnimationStopped;
-(void)bounce1AnimationStopped;
-(void)updateWebOrientation;
-(void)sizeToFitOrientation:(BOOL)fitOrientation;
-(CGAffineTransform)transformForOrientation;
-(BOOL)shouldRotateToOrientation:(int)orientation;
-(void)strokeLines:(CGRect)lines stroke:(const float*)stroke;
-(void)drawRect:(CGRect)rect fill:(const float*)fill radius:(float)radius;
-(void)addRoundedRectToPath:(CGContextRef)path rect:(CGRect)rect radius:(float)radius;
@end
