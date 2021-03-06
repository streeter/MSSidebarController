//
//  MSSidebarController.h
//  MSSidebarController
//
//  Created by Nacho Soto on 3/11/14.
//  Copyright (c) 2014 MindSnacks. All rights reserved.
//

#import "MSSidebarAnimations.h"

@interface MSSidebarController : UIViewController

/**
 * Designated initializer.
 */
- (instancetype)initWithMenuViewController:(UIViewController *)menuVC
                      activeViewController:(UIViewController *)activeVC
                           animatorFactory:(id<MSSidebarControllerAnimatorFactory>)animatorFactory;

- (void)showMenu;
- (void)restoreLastViewController;
- (void)showViewController:(UIViewController *)vc;

- (UIViewController *)menuViewController;
- (UIViewController *)currentViewController;

@end
