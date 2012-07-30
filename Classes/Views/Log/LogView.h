// LimeChat is copyrighted free software by Satoshi Nakagawa <psychs AT limechat DOT net>.
// You can redistribute it and/or modify it under the terms of the GPL version 2 (see the file GPL.txt).

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>


@interface LogView : WebView
{
    __weak id keyDelegate;
    __weak id resizeDelegate;
}

@property (nonatomic, weak) id keyDelegate;
@property (nonatomic, weak) id resizeDelegate;

- (NSString*)contentString;

- (void)clearSelection;
- (BOOL)hasSelection;
- (NSString*)selection;

@end


@interface NSObject (LogViewDelegate)
- (void)logViewKeyDown:(NSEvent*)e;
- (void)logViewWillResize;
- (void)logViewDidResize;
@end
