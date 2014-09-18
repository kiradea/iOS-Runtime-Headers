/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFModernLabelledAtomListDelegate>, NSDictionary, NSMutableArray, NSString, UIColor, UILabel, UIView;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate> {
    unsigned int _needsReflow : 1;
    unsigned int _isChangingFrame : 1;
    NSMutableArray *_addressAtoms;
    void *_addressBook;
    UIView *_baselineView;
    <MFModernLabelledAtomListDelegate> *_delegate;
    double _firstLineWidth;
    UILabel *_label;
    UIColor *_labelTextColor;
    double _lineSpacing;
    unsigned long long _numberOfRows;
    NSDictionary *_recipients;
    NSString *_title;
    bool_labelVisible;
    bool_primary;
    bool_usePadDisplayStyle;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) UILabel * label;
@property(retain) UIColor * labelTextColor;
@property(getter=isLabelVisible) bool labelVisible;
@property double lineSpacing;
@property(readonly) unsigned long long numberOfRows;
@property bool primary;
@property(readonly) Class superclass;
@property bool usePadDisplayStyle;

+ (double)atomLineHeight;
+ (id)defaultLabelFont;
+ (id)defaultLabelTextColor;
+ (id)primaryLabelFont;
+ (double)spaceBetweenColonAndFirstAtomNaturalEdge;

- (void)_reflow;
- (void)_setNeedsReflow;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;
- (id)addressAtoms;
- (void)addressBookDidChange:(id)arg1;
- (id)atomDisplayStrings;
- (struct CGPoint { double x1; double x2; })baselinePointForRow:(unsigned long long)arg1;
- (void)crossFadeLabelVisibility:(bool)arg1 atomSeparatorStyle:(int)arg2 animationDuration:(double)arg3;
- (void)dealloc;
- (void)enumerateAddressAtomsUsingBlock:(id)arg1;
- (id)initWithLabel:(id)arg1 title:(id)arg2 totalWidth:(double)arg3 firstLineWidth:(double)arg4 addresses:(id)arg5 arePhoneNumbers:(id)arg6 atomPresentationOptions:(unsigned long long)arg7 addressBook:(void*)arg8 completionBlock:(id)arg9;
- (bool)isLabelVisible;
- (id)label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrame;
- (id)labelText;
- (id)labelTextColor;
- (void)layoutSubviews;
- (double)lineSpacing;
- (unsigned long long)numberOfRows;
- (id)passthroughViews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)primary;
- (void)setAddressAtomScale:(double)arg1;
- (void)setAddressAtomSeparatorStyle:(int)arg1;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)setAtomAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstLineWidth:(double)arg1 reflow:(bool)arg2;
- (void)setFirstLineWidth:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLabelTextColor:(id)arg1;
- (void)setLabelVisible:(bool)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setUsePadDisplayStyle:(bool)arg1;
- (id)title;
- (void)updateAtomsForVIP;
- (bool)usePadDisplayStyle;

@end