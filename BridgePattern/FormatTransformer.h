//
//  FormatTransformer.h
//  BridgePattern
//
//  Created by zhulin on 2018/9/22.
//  Copyright © 2018年 zhulin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DBAbstraction.h"

@interface FormatTransformer : NSObject

@property (nonatomic, strong)DBAbstraction *DB;
- (void)setupFormat:(TransformToType)type;

@end
