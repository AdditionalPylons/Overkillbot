/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol TJCFetchResponseDelegate <NSObject>
-(void)fetchResponseError:(int)error errorDescription:(id)description requestTag:(int)tag;
-(void)fetchResponseSuccessWithData:(void*)data withRequestTag:(int)requestTag;
@end

