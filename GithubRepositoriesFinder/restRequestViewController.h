//
//  restRequestViewController.h
//  GithubRepositoriesFinder
//
//  Created by ids beca on 15/02/17.
//  Copyright © 2017 ids beca. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface restRequestViewController : UIViewController <UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate>
- (IBAction)fetchGreeting;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UITextField *languajeRepoText;
@end
