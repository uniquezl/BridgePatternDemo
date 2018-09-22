//
//  AllFormatTransformer.m
//  BridgePattern
//
//  Created by zhulin on 2018/9/22.
//  Copyright © 2018年 zhulin. All rights reserved.
//

#import "AllFormatTransformer.h"

@implementation AllFormatTransformer

- (void)text {
    [super setupFormat:TransformToTypeTxt];
}
- (void)xml {
    [super setupFormat:TransformToTypeXml];
}
- (void)pdf {
    [super setupFormat:TransformToTypePdf];
}

@end
