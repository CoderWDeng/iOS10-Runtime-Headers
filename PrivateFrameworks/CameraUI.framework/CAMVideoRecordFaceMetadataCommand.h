/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoRecordFaceMetadataCommand : CAMCaptureCommand {
    BOOL  __enabled;
}

@property (getter=_isEnabled, nonatomic, readonly) BOOL _enabled;

- (void)_addMetadataConnectionForPortType:(id)arg1 videoDeviceInput:(id)arg2 movieFileOutput:(id)arg3 captureSession:(id)arg4;
- (id)_connectionForMovieFileOutput:(id)arg1 metadataPortType:(id)arg2;
- (BOOL)_isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(BOOL)arg1;

@end