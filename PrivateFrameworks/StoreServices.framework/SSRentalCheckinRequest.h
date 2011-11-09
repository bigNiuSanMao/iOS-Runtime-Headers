/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber;

@interface SSRentalCheckinRequest : SSRequest  {
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
}

@property(readonly) NSNumber * accountIdentifier;
@property(readonly) NSNumber * rentalKeyIdentifier;


- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)rentalKeyIdentifier;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)accountIdentifier;

@end