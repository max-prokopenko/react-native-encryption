#import <React/RCTBridgeModule.h>

@interface AsymmetricECCEncryption : NSObject <RCTBridgeModule>

- (void)generateKeyPair:(RCTPromiseResolveBlock)resolve;

- (void)encryptStringWithPublicKey:(RCTPromiseResolveBlock)resolve props:(NSDictionary*)props;

- (void)decryptStringWithPrivateKey:(RCTPromiseResolveBlock)resolve                   props:(NSDictionary*)props;

- (void)decryptGroup:(RCTPromiseResolveBlock)resolve props:(NSDictionary*)props error:(void (^)(NSError *))errorCallback;

- (void)encryptGroup:(RCTPromiseResolveBlock)resolve props:(NSDictionary*)props;

@end
