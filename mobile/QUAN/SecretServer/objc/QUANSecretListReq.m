// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

#import "QUANSecretListReq.h"

@implementation QUANSecretListReq

@synthesize JV2_PROP_NM(o,0,tUserId);
@synthesize JV2_PROP_NM(o,1,tRange);
@synthesize JV2_PROP_NM(o,2,iCount);

+ (void)initialize
{
    if (self == [QUANSecretListReq class]) {
        [QUANIdRange initialize];
        [QUANUserId initialize];
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(tUserId) = nil;
    JV2_PROP(tRange) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"QUAN.SecretListReq";
}

@end