/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OAMutableURLRequest, NSMutableData, NSHTTPURLResponse, NSURLConnection;

__attribute__((visibility("hidden")))
@interface OAAsynchronousDataFetcher : XXUnknownSuperclass {
@private
	OAMutableURLRequest* request;
	NSHTTPURLResponse* response;
	NSURLConnection* connection;
	NSMutableData* responseData;
	id delegate;
	SEL didFinishSelector;
	SEL didFailSelector;
}
+(id)asynchronousFetcherWithRequest:(id)request delegate:(id)delegate didFinishSelector:(SEL)selector didFailSelector:(SEL)selector4;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(id)initWithRequest:(id)request delegate:(id)delegate didFinishSelector:(SEL)selector didFailSelector:(SEL)selector4;
@end
