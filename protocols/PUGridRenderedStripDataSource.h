/* Generated by RuntimeBrowser.
 */

@protocol PUGridRenderedStripDataSource <NSObject>

@required

- (void)renderedStrip:(void *)arg1 enumerateAssetsForVisualSection:(void *)arg2 inVisualItemRange:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 11: PUGridRenderedStrip *, int, struct _NSRange { unsigned int x1; unsigned int x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, PHAsset *, BOOL*, void*
- (NSData *)renderedStrip:(PUGridRenderedStrip *)arg1 imageDataForAsset:(PHAsset *)arg2 imageWidth:(int*)arg3 imageHeight:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;

@end
