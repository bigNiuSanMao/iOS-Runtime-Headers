/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFWebMessageDocument : MFWebAttachmentSource {
    MFAttachmentManager *_attachmentManager;
    NSURL *_baseURL;
    NSData *_htmlData;
    MFMimePart *_htmlPart;
    MFLock *_lock;
    MFMimeBody *_mimeBody;
    NSMutableDictionary *_partsByFilename;
    NSMutableDictionary *_partsByURL;
    unsigned long _preferredEncoding;
    unsigned int _uniqueId;
}

@property (nonatomic, retain) MFAttachmentManager *attachmentManager;
@property (readonly) NSURL *baseURL;
@property (readonly) NSData *htmlData;
@property (readonly) MFMimeBody *mimeBody;
@property (readonly) MFMimePart *mimePart;
@property unsigned long preferredEncoding;

+ (id)sourceForURL:(id)arg1;

- (id)_initWithMimePart:(id)arg1 htmlData:(id)arg2;
- (id)attachmentForCID:(id)arg1;
- (id)attachmentForURL:(id)arg1;
- (id)attachmentManager;
- (id)attachmentsInDocument;
- (id)baseURL;
- (void)dealloc;
- (id)fileWrapper;
- (id)htmlData;
- (id)init;
- (id)initWithMimeBody:(id)arg1;
- (id)initWithMimePart:(id)arg1;
- (id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned long)arg3;
- (id)mimeBody;
- (id)mimePart;
- (id)mimePartForURL:(id)arg1;
- (id)preferredCharacterSet;
- (unsigned long)preferredEncoding;
- (void)setAttachmentManager:(id)arg1;
- (void)setPreferredEncoding:(unsigned long)arg1;

@end