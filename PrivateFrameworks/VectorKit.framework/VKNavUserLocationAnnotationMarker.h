/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKNavUserLocationAnnotationMarker : VKAnnotationMarker {
    float  _arrowBrightness;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _arrowColor;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _arrowColorStale;
    struct shared_ptr<ggl::TextureAlphaMask::MeshPipelineSetup> { 
        struct MeshPipelineSetup {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _arrowPipelineSetup;
    struct shared_ptr<ggl::RenderItem> { 
        struct RenderItem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _arrowRenderItem;
    float  _circleBrightness;
    struct shared_ptr<ggl::TextureWithBrightness::MeshPipelineSetup> { 
        struct MeshPipelineSetup {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _circlePipelineSetup;
    struct shared_ptr<ggl::RenderItem> { 
        struct RenderItem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _circleRenderItem;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _gglPuckRenderState;
    float  _greyPuckAlphaScale;
    BOOL  _needsTextureUpdate;
    double  _presentationCourse;
    BOOL  _puckFlipped;
    double  _puckOffset;
    int  _puckStyle;
    VKTimedAnimation * _puckStyleAnimation;
    float  _scale;
    BOOL  _shouldShowCourse;
    double  _sizePoints;
    BOOL  _stale;
    int  _style;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _textureArrow;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _textureCircle;
}

@property (nonatomic) struct { float x1; float x2; float x3; float x4; } innerColor;
@property (nonatomic) double presentationCourse;
@property (nonatomic) float scale;
@property (nonatomic) BOOL shouldShowCourse;
@property (getter=isStale, nonatomic) BOOL stale;
@property (nonatomic) int style;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updatePuckStyle;
- (void)_updateTexturesIfNeeded;
- (void)appendCommandsToBuffer:(/* Warning: unhandled struct encoding: '{CommandBuffer=^^?*C^{RenderQueue}^{ClearItem}{vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}^^{RenderItem}{__compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}}}{vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}^{Texture2DLoadItem}{__compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}}}{vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}^{BufferLoadItem}{__compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}}}{deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >={__split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}{__compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}}}I{__compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >=L}}{deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> >={__split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}^^{PendingQuery}^^{PendingQuery}{__compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}}}I{__compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> >=L}}@}' */ struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_9_1_3; } x9; }*)arg1 inContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 style:(int)arg2;
- (struct { float x1; float x2; float x3; float x4; })innerColor;
- (BOOL)isStale;
- (double)presentationCourse;
- (float)scale;
- (void)setInnerColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setModel:(id)arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setScale:(float)arg1;
- (void)setShouldShowCourse:(BOOL)arg1;
- (void)setStale:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (BOOL)shouldShowCourse;
- (int)style;
- (void)updateWithStyleQuery:(const struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { struct StylesheetQuery<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)arg1 AtZ:(double)arg2;
- (void)willLayoutWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;

@end
