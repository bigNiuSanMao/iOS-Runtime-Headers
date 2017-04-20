/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardSwitcherPresentationInteraction : PBCodable <NSCopying> {
    BOOL  _didCommit;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int didCommit : 1; 
    }  _has;
    NSString * _source;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL didCommit;
@property (nonatomic) BOOL hasDidCommit;
@property (nonatomic, readonly) BOOL hasSource;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSString *source;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)didCommit;
- (BOOL)hasDidCommit;
- (BOOL)hasSource;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDidCommit:(BOOL)arg1;
- (void)setHasDidCommit:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)source;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end