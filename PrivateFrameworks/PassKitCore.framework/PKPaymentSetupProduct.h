/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupProduct : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _partnerIdentifier;
    NSString * _productIdentifier;
    NSDictionary * _rawPartnerDictionary;
    NSString * _region;
    NSArray * _requiredFields;
    unsigned int  _type;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *partnerIdentifier;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSDictionary *rawPartnerDictionary;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSArray *requiredFields;
@property (nonatomic) unsigned int type;

+ (id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 requiredFields:(id)arg4;
- (id)partnerIdentifier;
- (id)productIdentifier;
- (id)rawPartnerDictionary;
- (id)region;
- (id)requiredFields;
- (void)setDisplayName:(id)arg1;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setRawPartnerDictionary:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setRequiredFields:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end