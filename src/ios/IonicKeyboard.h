#import <Cordova/CDVPlugin.h>

@interface IonicKeyboard : CDVPlugin <UIScrollViewDelegate> {
    @protected
    id _keyboardShowObserver, _keyboardHideObserver;
    @protected
    id _shrinkViewKeyboardWillChangeFrameObserver;
}

@property (readwrite, assign) BOOL hideKeyboardAccessoryBar;
@property (readwrite, assign) BOOL disableScroll;
//@property (readwrite, assign) BOOL styleDark;

@end

