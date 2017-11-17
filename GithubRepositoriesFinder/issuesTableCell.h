//
//  issuesTableCell.h
//  GithubRepositoriesFinder
//
//  Created by ids beca on 21/02/17.
//  Copyright © 2017 ids beca. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface issuesTableCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *loginLabel;
@property (nonatomic, weak) IBOutlet UILabel *titleLabel;
@property (nonatomic, weak) IBOutlet UILabel *bodyLabel;
@property (nonatomic, weak) IBOutlet UILabel *createdAt;

@end
