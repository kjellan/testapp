//
//  TestAppAppDelegate.h
//  testapp3
//
//  Created by Kjell-Vegard Anfinsen on 10/3/12.
//  Copyright (c) 2012 Kjell-Vegard Anfinsen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestAppViewController;

@interface TestAppAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) TestAppViewController *viewController;

@end
