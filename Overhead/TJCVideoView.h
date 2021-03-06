/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "Overkill-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TJCLoadingView, UIView, TJCVideoLayer;
@protocol TJCVideoAdDelegate;

__attribute__((visibility("hidden")))
@interface TJCVideoView : XXUnknownSuperclass <UIAlertViewDelegate> {
@private
	id<TJCVideoAdDelegate> adDelegate_;
	BOOL isVideoReady_;
	TJCLoadingView* loadingView_;
	BOOL isAlertShowing_;
	BOOL shouldShowStatusBar_;
	UIView* mainView_;
	TJCVideoLayer* mainVideoLayer_;
	TJCVideoLayer* iPhoneLayer_;
	TJCVideoLayer* iPadLayer_;
}
@property(assign) BOOL isVideoReady;
@property(retain, nonatomic) UIView* mainView;
-(void)dealloc;
-(void)shouldDisplayLogo:(BOOL)logo;
-(void)giveBackNotification;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)cancelVideo:(id)video;
-(void)videoActionFromAppResume;
-(void)closeVideoView;
-(void)backToVideo;
-(void)customButtonAction2;
-(void)customButtonAction1;
-(BOOL)videoAdCurrentlyPlaying;
-(void)stopActiveVideo;
-(void)playActiveVideo;
-(void)playVideoWithOfferID:(id)offerID;
-(void)loadStateChanged:(id)changed;
-(void)bufferVideoWithPath:(id)path shouldStream:(BOOL)stream;
-(id)initWithDelegate:(id)delegate;
-(void)refreshViewWithInterfaceOrientation:(int)interfaceOrientation;
-(void)updateVideoBounds;
-(void)refreshViewWithFrame:(CGRect)frame;
-(void)refreshViewWithViewController:(id)viewController;
@end

