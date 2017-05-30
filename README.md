# FlowUp iOS SDK

iOS SDK to collect performance metrics easily using [FlowUp](http://flowup.io)

## Usage

* Include the SDK in your `Podfile`:

```ruby
pod 'FlowUpIOSSDK', '~> 0.0.1'
```

* Initialize FlowUp from your `AppDelegate` implementation, right from the `application:didFinishLaunchingWithOptions:` method:

##### _Objective-C_

```objectivec
// YourAppDelegate.h
#import "FlowUp.h"

// YourAppDelegate.m
@implementation YourAppDelegate
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [FlowUp application:application
didFinishLaunchingWithOptions:launchOptions
                 apiKey:@"YOUR API KEY";
     isDebugModeEnabled:YES];
     return YES;
}
@end
```

##### _Swift_
```swift
import FlowUp

class YourAppDelegate: UIResponder, UIApplicationDelegate {
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        FlowUp.application(application,
                           didFinishLaunchingWithOptions: launchOptions,
                           apiKey: "YOUR API KEY",
                           isDebugModeEnabled: true)
        return true
    }
}
```

**Remember to always disable the debug mode when building for release.**

* Go to https://flowup.io/ and wait for your data to appear in less than a minute.

## Reporting

Did you find an issue? Create a ticket and we will take care as soon as possible.
