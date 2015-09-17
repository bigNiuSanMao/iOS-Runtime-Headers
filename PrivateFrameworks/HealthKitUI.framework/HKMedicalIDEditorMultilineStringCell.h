/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKMedicalIDEditorMultilineStringCell : HKMedicalIDEditorCell <UITextViewDelegate> {
    <HKMedicalIDEditorCellHeightChangeDelegate> *_heightChangeDelegate;
    UILabel *_labelLabel;
    float _lastSeenTextViewContentHeight;
    UILabel *_placeholderLabel;
    UITextView *_textView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _textViewExtraMargins;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <HKMedicalIDEditorCellHeightChangeDelegate> *heightChangeDelegate;
@property (nonatomic, retain) NSString *placeholder;
@property (nonatomic, retain) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textViewExtraMargins;

+ (BOOL)showsLabelAndValue;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_labelTapped:(id)arg1;
- (void)commitEditing;
- (void)dealloc;
- (id)heightChangeDelegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setHeightChangeDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTextViewExtraMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)stringValue;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textViewExtraMargins;

@end