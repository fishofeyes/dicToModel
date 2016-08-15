//
//  DicToModel.h
//  字典解析
//
//  Created by zoulin on 16/3/23.
//  Copyright © 2016年 FishOfEyes. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DicToModel : NSObject
/**
 *  在获取json数据的时候，如果模型类出现key=id的情况。那你属性命名就可以为xxxid
 *  注意：一个模型里面只允许出现一次xxxid，区分大小写
 *  @return 返回一个解析模型对象
 */
+(DicToModel *) dicToModel;
/**
 *  返回封装好的模型类数组
 *
 *  @param response 解析成功后的jsoin数据
 *  @param model    模型类，直接把所有需要的数据封装成属性
 *
 *  @return 返回封装好的模型类数组
 */
- (NSArray *) modelGetData:(id) response model:(Class) model;
@end
