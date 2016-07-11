/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPClient : NSObject <NSXPCListenerDelegate, WPXPCClientProtocol, WPXPCDaemonProtocol> {
    long long  _advertiserState;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSLock * _connectionLock;
    NSObject<OS_dispatch_queue> * _daemonDeliveryQueue;
    NSObject<OS_dispatch_semaphore> * _daemonRegisteredSemaphore;
    NSString * _machName;
    bool  _needsToRegister;
    bool  _peerTrackingSlotsAvailable;
    bool  _registering;
    long long  _scannerState;
    bool  _servicesAdded;
    long long  _state;
    unsigned char  _type;
    NSXPCConnection * _xpcConnection;
}

@property long long advertiserState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSLock *connectionLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *daemonDeliveryQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *daemonRegisteredSemaphore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *machName;
@property bool needsToRegister;
@property bool peerTrackingSlotsAvailable;
@property bool registering;
@property long long scannerState;
@property bool servicesAdded;
@property long long state;
@property (readonly) Class superclass;
@property unsigned char type;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (bool)holdVoucherForConnections;
+ (id)stateAsString:(long long)arg1;

- (void).cxx_destruct;
- (void)addServices;
- (long long)advertiserState;
- (void)advertiserStateDidChange:(long long)arg1;
- (void)checkAllowDuplicates:(id /* block */)arg1;
- (id)clientAsString;
- (id)clientQueue;
- (void)connectToPeer:(id)arg1;
- (id)connection;
- (id)connectionLock;
- (id)daemonDeliveryQueue;
- (id)daemonRegisteredSemaphore;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)destroyConnection;
- (void)disconnectFromPeer:(id)arg1;
- (void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (void)enableTestMode;
- (void)establishConnection;
- (void)getAllTrackedZones;
- (void)getPowerLogStats:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 machName:(id)arg2;
- (void)invalidate;
- (void)listenToBandwidthNotifications;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)machName;
- (bool)needsToRegister;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (bool)peerTrackingSlotsAvailable;
- (void)populateClientGATT:(id /* block */)arg1;
- (void)registeredWithDaemonAndContinuingSession:(bool)arg1;
- (bool)registering;
- (long long)scannerState;
- (void)scannerStateDidChange:(long long)arg1;
- (void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3;
- (bool)servicesAdded;
- (void)setAdvertiserState:(long long)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setConnectionLock:(id)arg1;
- (void)setDaemonDeliveryQueue:(id)arg1;
- (void)setDaemonRegisteredSemaphore:(id)arg1;
- (void)setMachName:(id)arg1;
- (void)setNeedsToRegister:(bool)arg1;
- (void)setPeerTrackingSlotsAvailable:(bool)arg1;
- (void)setRegistering:(bool)arg1;
- (void)setScannerState:(long long)arg1;
- (void)setServicesAdded:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setType:(unsigned char)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setupMachXPCService;
- (void)shouldSubscribe:(bool)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4;
- (void)startAdvertising:(id)arg1;
- (void)startScanning:(id)arg1;
- (void)startScanning:(id)arg1 andAdvertising:(id)arg2;
- (void)startTrackingPeerWithRequest:(id)arg1;
- (void)startTrackingZone:(id)arg1;
- (long long)state;
- (void)stateDidChange:(long long)arg1;
- (void)stopAdvertising:(id)arg1;
- (void)stopScanning:(id)arg1;
- (void)stopTrackingAllZones;
- (void)stopTrackingPeerWithRequest:(id)arg1;
- (void)stopTrackingZones:(id)arg1;
- (unsigned char)type;
- (void)whitelistConnectionMethods:(id)arg1;
- (id)xpcConnection;

@end