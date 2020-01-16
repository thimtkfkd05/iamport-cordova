#import <Cordova/CDV.h>
#import <Cordova/CDVCommandDelegate.h>

@protocol IamportDelegate <NSObject>
@end

@interface IamportCordova : CDVPlugin {
    id <IamportDelegate> _delegate;
}

- (void)startActivity: (CDVInvokedUrlCommand*)command;
- (void)setDelegate:(id<IamportDelegate>)delegate;
- (void)onOver:(NSString*)url callbackId:(NSString*)callbackId commandDelegate:(id<CDVCommandDelegate>)commandDelegate;

@end
