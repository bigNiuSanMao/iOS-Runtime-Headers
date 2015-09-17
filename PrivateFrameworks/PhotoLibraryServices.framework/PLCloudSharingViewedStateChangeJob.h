/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob {
    NSString *_albumGUID;
    BOOL _albumHasUnseenContent;
    long long _albumUnviewedAssetCount;
    NSString *_assetCollectionGUID;
    BOOL _assetCollectionHasUnreadComments;
    NSDate *_assetCollectionLastViewedCommentDate;
    long long _jobType;
}

@property (nonatomic, retain) NSString *albumGUID;
@property (nonatomic) BOOL albumHasUnseenContent;
@property (nonatomic) long long albumUnviewedAssetCount;
@property (nonatomic, retain) NSString *assetCollectionGUID;
@property (nonatomic) BOOL assetCollectionHasUnreadComments;
@property (nonatomic, retain) NSDate *assetCollectionLastViewedCommentDate;
@property (nonatomic) long long jobType;

+ (void)markAlbum:(id)arg1 asHavingUnseenContent:(BOOL)arg2;
+ (void)markAssetCollection:(id)arg1 asHavingUnreadComments:(BOOL)arg2 inAlbum:(id)arg3;
+ (void)setLastViewedCommentDate:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3;
+ (void)updateUnviewedAssetCollectionCount:(int)arg1 forAlbum:(id)arg2;

- (void)_executeAlbumUnviewedAssetCountChangedWithGroup;
- (void)_executeAlbumViewedStateChanged;
- (void)_executeAssetCommentsReadStateChangedWithGroup;
- (void)_executeAssetLastViewedCommentDateChangedWithGroup;
- (id)albumGUID;
- (BOOL)albumHasUnseenContent;
- (long long)albumUnviewedAssetCount;
- (id)assetCollectionGUID;
- (BOOL)assetCollectionHasUnreadComments;
- (id)assetCollectionLastViewedCommentDate;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (long long)jobType;
- (void)run;
- (void)runDaemonSide;
- (void)setAlbumGUID:(id)arg1;
- (void)setAlbumHasUnseenContent:(BOOL)arg1;
- (void)setAlbumUnviewedAssetCount:(long long)arg1;
- (void)setAssetCollectionGUID:(id)arg1;
- (void)setAssetCollectionHasUnreadComments:(BOOL)arg1;
- (void)setAssetCollectionLastViewedCommentDate:(id)arg1;
- (void)setJobType:(long long)arg1;

@end