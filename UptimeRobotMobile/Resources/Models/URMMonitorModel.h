//
//  URMMonitor.h
//  UptimeRobotMobile
//
//  Created by Pasu Huang on 14-9-21.
//  Copyright (c) 2014年 Pasu Huang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "URMAlertContactModel.h"
#import "URMLogModel.h"
#import "URMResponseTimeModel.h"

@interface URMMonitorModel : NSObject
@property (nonatomic) NSInteger id;
@property (nonatomic, strong) NSString *friendfyName;
@property (nonatomic, strong) NSURL *url;
@property (nonatomic) enum monitorTypeEnum type;
@property (nonatomic) enum monitorSubTypeEnum subType;
@property (nonatomic) enum monitorKeywordType keywordType;
@property (nonatomic, strong) NSString *keywordValue;
@property (nonatomic, strong) NSString *httpUserName;
@property (nonatomic, strong) NSString *httpPassword;
@property (nonatomic) NSInteger port;
@property (nonatomic) enum monitorStatusEnum status;
@property (nonatomic) float allTimeUptimeRatio;
@property (nonatomic) float customUptimeRatio;
@property (nonatomic, strong) NSMutableArray *alertContacts;
@property (nonatomic, strong) NSMutableArray *logs;
@property (nonatomic, strong) NSMutableArray *responseTimes;

@end
enum monitorTypeEnum {HTTP=1,KeyWord=2,Ping=3,Port=4};
enum monitorSubTypeEnum {HTTP80=1,HTTPS443=2,FTP21=3,SMTP25=4,POP3110=5,IMAP143=6,CustomPort=99};
enum monitorKeywordType {exists,notexists};
enum monitorStatusEnum {paused,notcheckedyet,up,seemsdown,down};
