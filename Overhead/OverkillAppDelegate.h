/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIApplicationDelegate.h"
#import "UIWebViewDelegate.h"
#import "SKRequestDelegate.h"
#import "SKProductsRequestDelegate.h"
#import "SKPaymentTransactionObserver.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "GKAchievementViewControllerDelegate.h"
#import "GKLeaderboardViewControllerDelegate.h"
#import "ADBannerViewDelegate.h"
#import "ChartBoostDelegate.h"
#import "UITextFieldDelegate.h"
#import "Overkill-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, Reachability, MyControllerView, SingletonSoundManager, UIWindow, UIScrollView, UIActivityIndicatorView, UITextField, UINavigationController, UIViewController, EAGLView, ADBannerView, NSMutableData, UIWebView, UINavigationBar;

__attribute__((visibility("hidden")))
@interface OverkillAppDelegate : XXUnknownSuperclass <UIApplicationDelegate, UIWebViewDelegate, SKRequestDelegate, SKProductsRequestDelegate, SKPaymentTransactionObserver, MFMailComposeViewControllerDelegate, GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate, ADBannerViewDelegate, ChartBoostDelegate, UITextFieldDelegate> {
@private
	UIWindow* window;
	EAGLView* glView;
	UIScrollView* awardScroll;
	UIActivityIndicatorView* spinner;
	MyControllerView* mailController;
	UITextField* _textField;
	CGAffineTransform transformFlip;
	UINavigationController* navigationController;
	int goIntoState;
	BOOL _GCavailable;
	BOOL _userLoggedIn;
	BOOL adLoaded;
	BOOL adsEnabled;
	BOOL isConnected;
	BOOL showingFullAd;
	UIViewController* vc;
	ADBannerView* adView;
	Reachability* internetReach;
	BOOL _iPod4;
	BOOL _iPad;
	BOOL _iPadNew;
	NSMutableData* receivedData;
	int codePromotion;
	int _earnedMedals;
	SingletonSoundManager* soundManager;
	int buyingPack;
	BOOL featuredAppDisplayed;
	BOOL displayFeaturedAd;
	BOOL faad;
	UIWebView* _forum;
	UINavigationBar* navBar;
	UIWebView* _trailer;
	UILabel* label;
	int showAdType;
	float rotationInput;
	int mmvcCounter;
	bool TJWEBFreeom;
	bool customBadgeCreated;
	float screenWidth;
	float screenHeight;
	int badgeNumber;
	int newsId;
	bool newsShowed;
	int timeIntervalSince1970;
	BOOL canConnectAllServices;
}
@property(readonly, assign, nonatomic) int timeIntervalSince1970;
@property(assign, nonatomic) int codePromotion;
@property(assign, nonatomic) UITextField* _textField;
@property(assign, nonatomic) int buyingPack;
@property(readonly, assign, nonatomic) BOOL _iPod4;
@property(readonly, assign, nonatomic) BOOL _iPad;
@property(assign, nonatomic) BOOL adsEnabled;
@property(assign, nonatomic) BOOL isConnected;
@property(assign, nonatomic) BOOL _GCavailable;
@property(assign, nonatomic) int goIntoState;
@property(retain, nonatomic) EAGLView* glView;
@property(retain, nonatomic) UIWindow* window;
-(void)dealloc;
-(bool)getNewsShowed;
-(void)showNews:(bool)news;
-(void)showNewsAndGetOM:(bool)om;
-(int)getBadgeNumber;
-(void)connectToNews;
-(void)newsViewOpened;
-(void)newsViewClosed;
-(void)detectDevice;
-(id)platform;
-(void)tjcViewClosed:(id)closed;
-(void)tjcPointEarned:(id)earned;
-(void)tjcConnectFail:(id)fail;
-(void)tjcConnectSuccess:(id)success;
-(void)setAnimationFrameInterval:(int)interval;
-(void)addCustomScrollView:(id)view;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationWillTerminate:(id)application;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationWillResignActive:(id)application;
-(void)webViewDidFinishLoad:(id)webView;
-(id)findButtonInView:(id)view;
-(void)playTrailer;
-(void)shkViewWasDissmised;
-(void)shareOnTwitter;
-(id)myHash:(id)hash;
-(void)paymentQueue:(id)queue updatedTransactions:(id)transactions;
-(void)failedTransaction:(id)transaction;
-(void)restoreTransaction:(id)transaction;
-(void)completeTransaction:(id)transaction;
-(void)finishTransaction:(id)transaction wasSuccessful:(BOOL)successful;
-(void)provideContent:(id)content;
-(void)recordTransaction:(id)transaction;
-(void)productsRequest:(id)request didReceiveResponse:(id)response;
-(void)request:(id)request didFailWithError:(id)error;
-(void)requestDidFinish:(id)request;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)displayComposerSheet:(id)sheet;
-(void)destroyTextField;
-(void)textFieldEndEditing;
-(void)clearTextField;
-(id)textFieldValue;
-(void)createTextField:(CGRect)field;
-(void)removeWebView;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)showForum;
-(void)alert:(id)alert text:(id)text;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)getOnlineData;
-(void)submitReferralCode:(id)code bonus:(int)bonus referral:(int)referral;
-(void)updateLabel:(id)label;
-(void)showTJOffers;
-(void)achievementViewControllerDidFinish:(id)achievementViewController;
-(void)leaderboardViewControllerDidFinish:(id)leaderboardViewController;
-(void)dismissModalViewControllerWithAnimation:(BOOL)animation;
-(void)dismissModalViewController;
-(void)presentModalView:(id)view animated:(BOOL)animated;
-(void)presentModalView:(id)view;
-(void)refreshMedals;
-(void)codeSubmitFail;
-(void)codeSubmitSuccess;
-(void)getFeaturedApp:(id)app;
-(BOOL)showPontiflex;
-(void)initializePontiflex;
-(void)hideAd;
-(void)showAd:(CGRect)ad;
-(void)didFailToLoadInterstitial;
-(void)didClickInterstitial:(id)interstitial;
-(void)didCloseInterstitial:(id)interstitial;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)bannerViewActionDidFinish:(id)bannerViewAction;
-(BOOL)bannerViewActionShouldBegin:(id)bannerViewAction willLeaveApplication:(BOOL)application;
-(void)bannerViewDidLoadAd:(id)bannerView;
-(void)moveBannerOnScreen;
-(void)moveBannerOffScreen;
-(void)bannerView:(id)view didFailToReceiveAdWithError:(id)error;
-(void)hideSpinner;
-(void)showSpinner:(CGPoint)spinner;
-(void)authenticationChanged;
-(void)registerForAuthenticationNotification;
-(void)authenticateLocalPlayer;
-(BOOL)isGameCenterAvailable;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)FAADNetworkViewRemoved;
-(void)presentFAADNetwork;
-(void)connectAllServices;
-(void)handleNetworkChange:(id)change;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
@end

