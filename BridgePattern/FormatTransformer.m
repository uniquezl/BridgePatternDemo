//
//  FormatTransformer.m
//  BridgePattern
//
//  Created by zhulin on 2018/9/22.
//  Copyright © 2018年 zhulin. All rights reserved.
//

#import "FormatTransformer.h"

@implementation FormatTransformer

- (void)setupFormat:(TransformToType)type {
    [self.DB transform:type];
}

@end
