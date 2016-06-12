//
//  YTChaptersItem.h
//  仿搜狗阅读
//
//  Created by Mac on 16/6/12.
//  Copyright © 2016年 YinTokey. All rights reserved.
//

#import <Foundation/Foundation.h>

//把有bkey和没bkey的都放同一个对象里，如果url为空，则是有bkey，如果不为空，则是nobkey

@interface YTChaptersItem : NSObject

@property(nonatomic,copy)NSString *free;

@property(nonatomic,copy)NSString *gl;

@property(nonatomic,copy)NSString *buy;

@property(nonatomic,copy)NSString *rmb;

@property(nonatomic,copy)NSString *name;

@property(nonatomic,copy)NSString *md5;


//nobkey 有三个属性，分别是name ,cmd ,url
@property(nonatomic,copy)NSString *url;

@property(nonatomic,copy)NSString *cmd;
@end
