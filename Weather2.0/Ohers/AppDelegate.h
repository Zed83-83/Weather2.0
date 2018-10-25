//
//  AppDelegate.h
//  Weather2.0
//
//  Created by Zed Zezhenko on 10/24/18.
//  Copyright © 2018 Zed Zezhenko. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

