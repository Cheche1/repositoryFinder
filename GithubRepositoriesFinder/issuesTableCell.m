//
//  issuesTableCell.m
//  GithubRepositoriesFinder
//
//  Created by ids beca on 21/02/17.
//  Copyright © 2017 ids beca. All rights reserved.
//

#import "issuesTableCell.h"

@implementation issuesTableCell

@synthesize loginLabel = _loginLabel;
@synthesize titleLabel = _titleLabel;
@synthesize bodyLabel = _bodyLabel;
@synthesize createdAt = _createdAt;


- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
