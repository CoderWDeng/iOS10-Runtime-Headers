/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileSystemManager : NSObject {
    NSString * _currentSnapshotName;
    NSString * _currentSnapshotPath;
    NSString * _fileSystemType;
    bool  _supportsLocalSnapshots;
}

@property (nonatomic, readonly) NSString *currentSnapshotName;
@property (nonatomic, readonly) NSString *currentSnapshotPath;
@property (nonatomic, retain) NSString *fileSystemType;
@property (nonatomic, readonly) bool supportsLocalSnapshots;

+ (unsigned long long)availableCacheSize;
+ (unsigned long long)fileSystemCapacity;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_isFileSystemAPFS;
- (id)_snapshotName:(id)arg1;
- (id)currentSnapshotName;
- (id)currentSnapshotPath;
- (id)description;
- (id)fileSystemType;
- (id)init;
- (bool)mountSnapshot:(id)arg1 withError:(id*)arg2;
- (bool)removeSnapshot:(id)arg1 withError:(id*)arg2;
- (void)setFileSystemType:(id)arg1;
- (bool)snapshotFilesystem:(id)arg1 withError:(id*)arg2;
- (bool)supportsLocalSnapshots;
- (bool)unmountCurrentSnapshotAndRemove:(bool)arg1 withError:(id*)arg2;

@end