//
//  FMDB.h
//  BridgePattern
//
//  Created by zhulin on 2018/9/22.
//  Copyright © 2018年 zhulin. All rights reserved.
//

#import "DBAbstraction.h"

@interface FMDB : DBAbstraction

- (void)transform:(TransformToType)type;

@end
