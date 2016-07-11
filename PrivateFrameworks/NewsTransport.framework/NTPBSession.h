/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSession : PBCodable <NSCopying> {
    long long  _appBuild;
    NSString * _appVersion;
    NSString * _campaignId;
    int  _campaignType;
    NSString * _carrier;
    int  _cellularRadioAccessTechnology;
    NSString * _countryCode;
    NSString * _deviceModel;
    NSString * _devicePlatform;
    struct { 
        unsigned int appBuild : 1; 
        unsigned int lastAppOpenDate : 1; 
        unsigned int userStartDate : 1; 
        unsigned int campaignType : 1; 
        unsigned int cellularRadioAccessTechnology : 1; 
        unsigned int osInstallVariant : 1; 
        unsigned int reachabilityStatus : 1; 
        unsigned int textSize : 1; 
        unsigned int utcOffset : 1; 
        unsigned int iosSettingsNotificationsEnabled : 1; 
        unsigned int isNewUser : 1; 
        unsigned int isPaidSubscriber : 1; 
        unsigned int isPaidSubscriberFromAppStore : 1; 
        unsigned int isPaidSubscriberFromNews : 1; 
        unsigned int isPaidSubscriberFromThirdParty : 1; 
        unsigned int notificationsEnabled : 1; 
        unsigned int privateDataSyncOn : 1; 
        unsigned int runningObsolete : 1; 
        unsigned int signedIntoIcloud : 1; 
        unsigned int upgradedFromObsolete : 1; 
    }  _has;
    bool  _iosSettingsNotificationsEnabled;
    bool  _isNewUser;
    bool  _isPaidSubscriber;
    bool  _isPaidSubscriberFromAppStore;
    bool  _isPaidSubscriberFromNews;
    bool  _isPaidSubscriberFromThirdParty;
    NSString * _languageCode;
    long long  _lastAppOpenDate;
    bool  _notificationsEnabled;
    NSString * _originatingCampaignId;
    NSString * _originatingCampaignType;
    NSString * _originatingCreativeId;
    int  _osInstallVariant;
    NSString * _osVersion;
    NSString * _previousAppVersion;
    NSString * _previousOsVersion;
    bool  _privateDataSyncOn;
    int  _reachabilityStatus;
    bool  _runningObsolete;
    NSData * _sessionId;
    bool  _signedIntoIcloud;
    int  _textSize;
    bool  _upgradedFromObsolete;
    NSString * _userId;
    long long  _userStartDate;
    NSString * _userStorefrontId;
    int  _utcOffset;
}

@property (nonatomic) long long appBuild;
@property (nonatomic, retain) NSString *appVersion;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic) int campaignType;
@property (nonatomic, retain) NSString *carrier;
@property (nonatomic) int cellularRadioAccessTechnology;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, retain) NSString *devicePlatform;
@property (nonatomic) bool hasAppBuild;
@property (nonatomic, readonly) bool hasAppVersion;
@property (nonatomic, readonly) bool hasCampaignId;
@property (nonatomic) bool hasCampaignType;
@property (nonatomic, readonly) bool hasCarrier;
@property (nonatomic) bool hasCellularRadioAccessTechnology;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasDeviceModel;
@property (nonatomic, readonly) bool hasDevicePlatform;
@property (nonatomic) bool hasIosSettingsNotificationsEnabled;
@property (nonatomic) bool hasIsNewUser;
@property (nonatomic) bool hasIsPaidSubscriber;
@property (nonatomic) bool hasIsPaidSubscriberFromAppStore;
@property (nonatomic) bool hasIsPaidSubscriberFromNews;
@property (nonatomic) bool hasIsPaidSubscriberFromThirdParty;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic) bool hasLastAppOpenDate;
@property (nonatomic) bool hasNotificationsEnabled;
@property (nonatomic, readonly) bool hasOriginatingCampaignId;
@property (nonatomic, readonly) bool hasOriginatingCampaignType;
@property (nonatomic, readonly) bool hasOriginatingCreativeId;
@property (nonatomic) bool hasOsInstallVariant;
@property (nonatomic, readonly) bool hasOsVersion;
@property (nonatomic, readonly) bool hasPreviousAppVersion;
@property (nonatomic, readonly) bool hasPreviousOsVersion;
@property (nonatomic) bool hasPrivateDataSyncOn;
@property (nonatomic) bool hasReachabilityStatus;
@property (nonatomic) bool hasRunningObsolete;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasSignedIntoIcloud;
@property (nonatomic) bool hasTextSize;
@property (nonatomic) bool hasUpgradedFromObsolete;
@property (nonatomic, readonly) bool hasUserId;
@property (nonatomic) bool hasUserStartDate;
@property (nonatomic, readonly) bool hasUserStorefrontId;
@property (nonatomic) bool hasUtcOffset;
@property (nonatomic) bool iosSettingsNotificationsEnabled;
@property (nonatomic) bool isNewUser;
@property (nonatomic) bool isPaidSubscriber;
@property (nonatomic) bool isPaidSubscriberFromAppStore;
@property (nonatomic) bool isPaidSubscriberFromNews;
@property (nonatomic) bool isPaidSubscriberFromThirdParty;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic) long long lastAppOpenDate;
@property (nonatomic) bool notificationsEnabled;
@property (nonatomic, retain) NSString *originatingCampaignId;
@property (nonatomic, retain) NSString *originatingCampaignType;
@property (nonatomic, retain) NSString *originatingCreativeId;
@property (nonatomic) int osInstallVariant;
@property (nonatomic, retain) NSString *osVersion;
@property (nonatomic, retain) NSString *previousAppVersion;
@property (nonatomic, retain) NSString *previousOsVersion;
@property (nonatomic) bool privateDataSyncOn;
@property (nonatomic) int reachabilityStatus;
@property (nonatomic) bool runningObsolete;
@property (nonatomic, retain) NSData *sessionId;
@property (nonatomic) bool signedIntoIcloud;
@property (nonatomic) int textSize;
@property (nonatomic) bool upgradedFromObsolete;
@property (nonatomic, retain) NSString *userId;
@property (nonatomic) long long userStartDate;
@property (nonatomic, retain) NSString *userStorefrontId;
@property (nonatomic) int utcOffset;

- (void).cxx_destruct;
- (int)StringAsCampaignType:(id)arg1;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (int)StringAsOsInstallVariant:(id)arg1;
- (int)StringAsReachabilityStatus:(id)arg1;
- (long long)appBuild;
- (id)appVersion;
- (id)campaignId;
- (int)campaignType;
- (id)campaignTypeAsString:(int)arg1;
- (id)carrier;
- (int)cellularRadioAccessTechnology;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)deviceModel;
- (id)devicePlatform;
- (id)dictionaryRepresentation;
- (bool)hasAppBuild;
- (bool)hasAppVersion;
- (bool)hasCampaignId;
- (bool)hasCampaignType;
- (bool)hasCarrier;
- (bool)hasCellularRadioAccessTechnology;
- (bool)hasCountryCode;
- (bool)hasDeviceModel;
- (bool)hasDevicePlatform;
- (bool)hasIosSettingsNotificationsEnabled;
- (bool)hasIsNewUser;
- (bool)hasIsPaidSubscriber;
- (bool)hasIsPaidSubscriberFromAppStore;
- (bool)hasIsPaidSubscriberFromNews;
- (bool)hasIsPaidSubscriberFromThirdParty;
- (bool)hasLanguageCode;
- (bool)hasLastAppOpenDate;
- (bool)hasNotificationsEnabled;
- (bool)hasOriginatingCampaignId;
- (bool)hasOriginatingCampaignType;
- (bool)hasOriginatingCreativeId;
- (bool)hasOsInstallVariant;
- (bool)hasOsVersion;
- (bool)hasPreviousAppVersion;
- (bool)hasPreviousOsVersion;
- (bool)hasPrivateDataSyncOn;
- (bool)hasReachabilityStatus;
- (bool)hasRunningObsolete;
- (bool)hasSessionId;
- (bool)hasSignedIntoIcloud;
- (bool)hasTextSize;
- (bool)hasUpgradedFromObsolete;
- (bool)hasUserId;
- (bool)hasUserStartDate;
- (bool)hasUserStorefrontId;
- (bool)hasUtcOffset;
- (unsigned long long)hash;
- (bool)iosSettingsNotificationsEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isNewUser;
- (bool)isPaidSubscriber;
- (bool)isPaidSubscriberFromAppStore;
- (bool)isPaidSubscriberFromNews;
- (bool)isPaidSubscriberFromThirdParty;
- (id)languageCode;
- (long long)lastAppOpenDate;
- (void)mergeFrom:(id)arg1;
- (bool)notificationsEnabled;
- (id)originatingCampaignId;
- (id)originatingCampaignType;
- (id)originatingCreativeId;
- (int)osInstallVariant;
- (id)osInstallVariantAsString:(int)arg1;
- (id)osVersion;
- (id)previousAppVersion;
- (id)previousOsVersion;
- (bool)privateDataSyncOn;
- (int)reachabilityStatus;
- (id)reachabilityStatusAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (bool)runningObsolete;
- (id)sessionId;
- (void)setAppBuild:(long long)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(int)arg1;
- (void)setCarrier:(id)arg1;
- (void)setCellularRadioAccessTechnology:(int)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDevicePlatform:(id)arg1;
- (void)setHasAppBuild:(bool)arg1;
- (void)setHasCampaignType:(bool)arg1;
- (void)setHasCellularRadioAccessTechnology:(bool)arg1;
- (void)setHasIosSettingsNotificationsEnabled:(bool)arg1;
- (void)setHasIsNewUser:(bool)arg1;
- (void)setHasIsPaidSubscriber:(bool)arg1;
- (void)setHasIsPaidSubscriberFromAppStore:(bool)arg1;
- (void)setHasIsPaidSubscriberFromNews:(bool)arg1;
- (void)setHasIsPaidSubscriberFromThirdParty:(bool)arg1;
- (void)setHasLastAppOpenDate:(bool)arg1;
- (void)setHasNotificationsEnabled:(bool)arg1;
- (void)setHasOsInstallVariant:(bool)arg1;
- (void)setHasPrivateDataSyncOn:(bool)arg1;
- (void)setHasReachabilityStatus:(bool)arg1;
- (void)setHasRunningObsolete:(bool)arg1;
- (void)setHasSignedIntoIcloud:(bool)arg1;
- (void)setHasTextSize:(bool)arg1;
- (void)setHasUpgradedFromObsolete:(bool)arg1;
- (void)setHasUserStartDate:(bool)arg1;
- (void)setHasUtcOffset:(bool)arg1;
- (void)setIosSettingsNotificationsEnabled:(bool)arg1;
- (void)setIsNewUser:(bool)arg1;
- (void)setIsPaidSubscriber:(bool)arg1;
- (void)setIsPaidSubscriberFromAppStore:(bool)arg1;
- (void)setIsPaidSubscriberFromNews:(bool)arg1;
- (void)setIsPaidSubscriberFromThirdParty:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLastAppOpenDate:(long long)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setOriginatingCampaignId:(id)arg1;
- (void)setOriginatingCampaignType:(id)arg1;
- (void)setOriginatingCreativeId:(id)arg1;
- (void)setOsInstallVariant:(int)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setPreviousAppVersion:(id)arg1;
- (void)setPreviousOsVersion:(id)arg1;
- (void)setPrivateDataSyncOn:(bool)arg1;
- (void)setReachabilityStatus:(int)arg1;
- (void)setRunningObsolete:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSignedIntoIcloud:(bool)arg1;
- (void)setTextSize:(int)arg1;
- (void)setUpgradedFromObsolete:(bool)arg1;
- (void)setUserId:(id)arg1;
- (void)setUserStartDate:(long long)arg1;
- (void)setUserStorefrontId:(id)arg1;
- (void)setUtcOffset:(int)arg1;
- (bool)signedIntoIcloud;
- (int)textSize;
- (bool)upgradedFromObsolete;
- (id)userId;
- (long long)userStartDate;
- (id)userStorefrontId;
- (int)utcOffset;
- (void)writeTo:(id)arg1;

@end