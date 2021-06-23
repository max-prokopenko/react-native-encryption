#import <React/RCTBridgeModule.h>

@interface SymmetricEncryption : NSObject <RCTBridgeModule>

- (NSString*)generateSecureKey;

- (void)generateSymmetricKey:(RCTPromiseResolveBlock)resolve;

- (void)encryptStringWithSymmetricKey:(RCTPromiseResolveBlock)resolve props:(NSDictionary*)props;

- (void)decryptStringWithSymmetricKey:(RCTPromiseResolveBlock)resolve                   props:(NSDictionary*)props;

@end