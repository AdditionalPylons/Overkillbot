/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ChartBoostDelegate <NSObject>
@optional
-(void)didClickMoreApps:(id)apps;
-(void)didCloseMoreApps:(id)apps;
-(void)didDismissMoreApps:(id)apps;
-(void)didFailToLoadMoreApps;
-(BOOL)shouldDisplayMoreApps:(id)apps;
-(BOOL)shouldDisplayLoadingViewForMoreApps;
-(void)didClickInterstitial:(id)interstitial;
-(void)didCloseInterstitial:(id)interstitial;
-(void)didDismissInterstitial:(id)interstitial;
-(void)didFailToLoadInterstitial;
-(BOOL)shouldDisplayInterstitial:(id)interstitial;
-(BOOL)shouldRequestInterstitial;
@end

