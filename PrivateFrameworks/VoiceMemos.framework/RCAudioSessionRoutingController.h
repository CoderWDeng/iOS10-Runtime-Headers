/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAudioSessionRoutingController : NSObject <RCAudioSessionRoutingMPAVRoutingControllerDelegate> {
    NSArray * _cachedPickableOutputRoutes;
    AVAudioSessionPortDescription * _cachedPickedInputRoutePortDescription;
    MPAVRoute * _cachedPickedOutputRoute;
    BOOL  _canReportStateUsingCachedPickedOutputRoute;
    BOOL  _enableProximityMonitorIfAppropriateForInputRoute;
    BOOL  _enableProximityMonitorIfAppropriateForOutputRoute;
    BOOL  _hasYetToPickARouteAndHeadphonesArePresent;
    RCAudioSessionRoutingMPAVRoutingController * _mpRoutingController;
    BOOL  _shouldInitializeRouteUsingUserDefaults;
    BOOL  _useVoiceMemoSettings;
    struct __CFArray { } * _weakSessionRoutingAssertions;
}

@property (nonatomic, readonly) NSString *activeInputRouteName;
@property (nonatomic, readonly) unsigned int availableRoutesMask;
@property (nonatomic, readonly) NSArray *cachedPickableOutputRoutes;
@property (nonatomic, readonly) AVAudioSessionPortDescription *cachedPickedInputRoutePortDescription;
@property (nonatomic, readonly) MPAVRoute *cachedPickedOutputRoute;
@property (nonatomic, readonly) BOOL canReportStateUsingCachedPickedOutputRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableProximityMonitorIfAppropriateForInputRoute;
@property (nonatomic) BOOL enableProximityMonitorIfAppropriateForOutputRoute;
@property (nonatomic, readonly) BOOL hasYetToPickARouteAndHeadphonesArePresent;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isRoutingToPhoneCall;
@property (nonatomic, readonly) RCAudioSessionRoutingMPAVRoutingController *mpRoutingController;
@property (nonatomic, readonly) NSString *selectedRouteName;
@property (nonatomic, readonly) int selectedRouteType;
@property (nonatomic, readonly) BOOL shouldInitializeRouteUsingUserDefaults;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useVoiceMemoSettings;
@property (nonatomic, readonly) struct __CFArray { }*weakSessionRoutingAssertions;

+ (id)sharedRouteController;

- (void).cxx_destruct;
- (unsigned int)_RCAudioRouteMaskForRoutes:(id)arg1;
- (id)_activeAudioRouteUsageStatisticName;
- (id)_activeAudioSessionRoutingAssertion;
- (void)_applyUserDefaultAudioRoute;
- (void)_applyUserDefaultAudioRouteAllowingDefaultOverride:(BOOL)arg1;
- (unsigned int)_availableRoutesMask;
- (BOOL)_isRoutingToAirPlayDestination;
- (void)_pickAudioDeviceRouteType:(int)arg1;
- (void)_pickHandsetAudioDeviceRoute;
- (void)_pickSpeakerAudioDeviceRoute;
- (BOOL)_routeDefaultBoolForKey:(id)arg1 nonVoiceMemoAppValue:(BOOL)arg2;
- (void)_setShouldRouteToSpeakerUserDefaultValue:(BOOL)arg1;
- (void)_setWeakSessionRoutingAssertions:(struct __CFArray { }*)arg1;
- (BOOL)_speakerIsUserDefaultRoute;
- (BOOL)_speakerRouteIsPickedOrPreferred;
- (void)_updateProximitySetting;
- (void)_updateSpeakerRouteDefault;
- (BOOL)_wirelessRouteIsPickedOrPreferred;
- (id)activeInputRouteName;
- (void)addRouteAssertion:(id)arg1;
- (unsigned int)availableRoutesMask;
- (id)cachedPickableOutputRoutes;
- (id)cachedPickedInputRoutePortDescription;
- (id)cachedPickedOutputRoute;
- (BOOL)canReportStateUsingCachedPickedOutputRoute;
- (void)dealloc;
- (BOOL)enableProximityMonitorIfAppropriateForInputRoute;
- (BOOL)enableProximityMonitorIfAppropriateForOutputRoute;
- (void)fetchActiveInputRouteWithCompletionHandler:(id /* block */)arg1;
- (BOOL)hasYetToPickARouteAndHeadphonesArePresent;
- (id)init;
- (BOOL)isRoutingToPhoneCall;
- (id)mpRoutingController;
- (void)removeRouteAssertion:(id)arg1;
- (void)routingController:(id)arg1 didChangeAirPlayMirrorDestinationToActive:(BOOL)arg2;
- (void)routingController:(id)arg1 willChangeCategoryActiveStateToActive:(BOOL)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)selectedRouteName;
- (int)selectedRouteType;
- (void)setEnableProximityMonitorIfAppropriateForInputRoute:(BOOL)arg1;
- (void)setEnableProximityMonitorIfAppropriateForOutputRoute:(BOOL)arg1;
- (void)setUseVoiceMemoSettings:(BOOL)arg1;
- (BOOL)shouldInitializeRouteUsingUserDefaults;
- (void)showAvailableRoutes;
- (void)toggleSpeaker;
- (BOOL)useVoiceMemoSettings;
- (struct __CFArray { }*)weakSessionRoutingAssertions;

@end