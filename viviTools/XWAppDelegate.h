//
//  XWAppDelegate.h
//  viviTools
//
//  Created by qway on 15/5/13.
//  Copyright (c) 2015年 XW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XWAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
