//
//  UsersViewViewController.h
//  Mixl
//
//  Created by John Pacheco on 4/19/16.
//  Copyright © 2016 John. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UsersViewViewController : BaseViewController <UITextViewDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imgUserPic;
@property (weak, nonatomic) IBOutlet UILabel *lblUserName;
@property (weak, nonatomic) IBOutlet UILabel *lblUserAge;
@property (weak, nonatomic) IBOutlet UILabel *lblUserGender;
@property (weak, nonatomic) IBOutlet UITextView *txtUserAbout;
@property (weak, nonatomic) IBOutlet UIButton *btnAddList;

@property (strong, nonatomic) NSDictionary* userInfo;

@end
