/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TapjoyConnect.h"
#import "Overkill-Structs.h"
#import "NSXMLParserDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableData, NSURLConnection;

__attribute__((visibility("hidden")))
@interface TapjoyConnect : XXUnknownSuperclass <NSXMLParserDelegate> {
@private
	NSString* appID_;
	NSString* secretKey_;
	NSString* userID_;
	NSString* plugin_;
	float currencyMultiplier_;
	NSMutableData* data_;
	NSURLConnection* connection_;
	int connectAttempts_;
	BOOL isInitialConnect_;
	NSString* currentXMLElement_;
}
@property(assign, nonatomic) BOOL isInitialConnect;
@property(copy, nonatomic) NSString* plugin;
@property(copy, nonatomic) NSString* userID;
@property(copy, nonatomic) NSString* secretKey;
@property(copy, nonatomic) NSString* appID;
+(id)getUniqueIdentifier;
+(id)getMACAddress;
+(id)TJCSHA256WithString:(id)string;
+(id)TJCSHA256CommonParamsWithTimeStamp:(id)timeStamp tapPointsAmount:(int)amount guid:(id)guid;
+(id)TJCSHA256CommonParamsWithTimeStamp:(id)timeStamp;
+(float)getCurrencyMultiplier;
+(void)setCurrencyMultiplier:(float)multiplier;
+(void)setPlugin:(id)plugin;
+(id)getSecretKey;
+(id)getUserID;
+(void)setUserID:(id)anId;
+(id)getAppID;
+(id)actionComplete:(id)complete;
+(void)orientationChangedDelay;
+(void)orientationChanged:(id)changed;
+(id)requestTapjoyConnect:(id)connect secretKey:(id)key;
+(void)deviceNotificationReceived;
+(id)createQueryStringFromDict:(id)dict;
+(id)sharedTapjoyConnect;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)startParsing:(id)parsing;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)dealloc;
-(float)getCurrencyMultiplier;
-(void)setCurrencyMultiplier:(float)multiplier;
-(void)initConnectWithAppID:(id)appID withSecretKey:(id)secretKey;
-(id)isJailBrokenStr;
-(BOOL)isJailBroken;
-(id)connection:(id)connection willCacheResponse:(id)response;
-(void)setUserIDWithParam:(id)param;
-(void)connectWithParam:(id)param;
-(id)createQueryStringFromDict:(id)dict;
-(id)genericParameters;
@end

@interface TapjoyConnect (TJCViewCommons)
+(int)getReverseTransitionEffect;
+(int)getCurrentTransitionEffect;
+(float)getTransitionDelay;
+(void)animateTJCView:(id)view withTJCTransition:(int)tjctransition withDelay:(float)delay;
+(void)updateViewsWithOrientation:(int)orientation;
+(void)setUserDefinedColorWithRed:(int)red WithGreen:(int)green WithBlue:(int)blue;
+(void)setUserdefinedColorWithIntValue:(int)intValue;
+(void)setTransitionEffect:(int)effect;
@end

@interface TapjoyConnect (TJCFeaturedAppViewHandler)
+(void)setFeaturedAppDisplayCount:(int)count;
+(void)showFeaturedAppFullScreenAdWithViewController:(id)viewController;
+(id)showFeaturedAppFullScreenAdWithFrame:(CGRect)frame;
+(id)showFeaturedAppFullScreenAd;
+(void)getFeaturedAppWithCurrencyID:(id)currencyID;
+(void)getFeaturedApp;
@end

@interface TapjoyConnect (TJCOffersViewHandler)
+(void)setOffersNavBarImage:(id)image;
+(void)showOffersWithCurrencyID:(id)currencyID withViewController:(id)viewController withInternalNavBar:(BOOL)internalNavBar withCurrencySelector:(BOOL)currencySelector;
+(void)showOffersWithCurrencyID:(id)currencyID withViewController:(id)viewController withCurrencySelector:(BOOL)currencySelector;
+(id)showOffersWithCurrencyID:(id)currencyID withCurrencySelector:(BOOL)currencySelector;
+(id)showOffersWithCurrencyID:(id)currencyID withFrame:(CGRect)frame withCurrencySelector:(BOOL)currencySelector;
+(void)showOffersWithViewController:(id)viewController withInternalNavBar:(BOOL)internalNavBar;
+(void)showOffersWithViewController:(id)viewController;
+(id)showOffers;
+(id)showOffersWithFrame:(CGRect)frame;
@end

@interface TapjoyConnect (TJCUserAccountManager)
+(void)showDefaultEarnedCurrencyAlert;
+(void)awardTapPoints:(int)points;
+(void)spendTapPoints:(int)points;
+(void)getTapPoints;
@end

@interface TapjoyConnect (TJCVideoViewHandler)
+(void)shouldDisplayVideoLogo:(BOOL)logo;
+(void)setVideoCacheCount:(int)count;
+(void)showVideoAdWithViewController:(id)viewController offerID:(id)anId;
+(void)showVideoAdWithOfferID:(id)offerID;
+(id)showVideoAdWithFrame:(CGRect)frame offerID:(id)anId;
+(void)initVideoAdWithDelegate:(id)delegate;
@end

