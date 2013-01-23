//
//  ModelController.h
//  Welcome to Richmond
//
//  Created by Gavin Smith on 23/01/13.
//  Copyright (c) 2013 Independent Media Group. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
