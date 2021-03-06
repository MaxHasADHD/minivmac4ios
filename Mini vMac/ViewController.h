//
//  ViewController.h
//  Mini vMac
//
//  Created by Jesús A. Álvarez on 27/04/2016.
//  Copyright © 2016 namedfork. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ScreenView.h"
#import "KBKeyboardView.h"

@interface ViewController : UIViewController <KBKeyboardViewDelegate>

@property (weak, nonatomic) IBOutlet ScreenView *screenView;
@property (nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible;

@end

