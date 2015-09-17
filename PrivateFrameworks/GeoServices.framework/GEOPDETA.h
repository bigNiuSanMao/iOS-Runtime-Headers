/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDETA : PBCodable <NSCopying> {
    unsigned int _distance;
    struct { 
        unsigned int distance : 1; 
        unsigned int time : 1; 
        unsigned int transportType : 1; 
    } _has;
    unsigned int _time;
    int _transportType;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasTime;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int time;
@property (nonatomic) int transportType;

+ (id)etaForPlaceData:(id)arg1 transportType:(int)arg2;
+ (int)recommendedTransportTypeForPlaceData:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (BOOL)hasDistance;
- (BOOL)hasTime;
- (BOOL)hasTransportType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setHasDistance:(BOOL)arg1;
- (void)setHasTime:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setTime:(unsigned int)arg1;
- (void)setTransportType:(int)arg1;
- (unsigned int)time;
- (int)transportType;
- (void)writeTo:(id)arg1;

@end