/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABItemLabelPicker : UIView <ABSimpleTextInputViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _addLabelDisabled;
    NSMutableArray * _additionalLabels;
    void * _addressBook;
    id  _delegate;
    bool  _didCreateNewLabel;
    id  _editedItem;
    long long  _itemIndex;
    int  _property;
    ABPropertyGroup * _propertyGroup;
    NSString * _savedLabel;
    NSString * _selectedLabel;
    NSIndexPath * _selectedPath;
    struct __CFArray { } * _sortedCustomItemLabelInfos;
    void * _sortedCustomItemLabelInfosMemory;
    struct __CFArray { } * _sortedDefaultItemLabelInfos;
    void * _sortedDefaultItemLabelInfosMemory;
    ABStyleProvider * _styleProvider;
    UITableView * _tableView;
}

@property (getter=isAddLabelDisabled, nonatomic) bool addLabelDisabled;
@property (nonatomic) void*addressBook;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didCreateNewLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ABStyleProvider *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

+ (id)_defaultLabelsForProperty:(int)arg1 person:(id)arg2 propertyGroup:(id)arg3 index:(long long)arg4 addressBook:(void*)arg5 outBestLabelIndex:(long long*)arg6 forceIncludeLabels:(id)arg7;
+ (id)builtInLabelsForProperty:(int)arg1;
+ (struct __CFDictionary { }*)copyLabelUsageForProperty:(int)arg1 person:(id)arg2;
+ (struct __CFDictionary { }*)copyLabelUsageForPropertyGroup:(id)arg1 person:(id)arg2;
+ (id)defaultLabelForProperty:(int)arg1 person:(id)arg2 addressBook:(void*)arg3;
+ (id)defaultLabelsForProperty:(int)arg1 person:(id)arg2 addressBook:(void*)arg3 outBestLabelIndex:(long long*)arg4 forceIncludeLabels:(id)arg5;
+ (id)defaultLabelsForProperty:(int)arg1 policy:(void*)arg2;
+ (id)defaultLabelsForPropertyGroup:(id)arg1 index:(long long)arg2 addressBook:(void*)arg3 outBestLabelIndex:(long long*)arg4 forceIncludeLabels:(id)arg5;

- (void)_didEndPickingAndConfirmed:(bool)arg1 animate:(bool)arg2;
- (void)_matchSelectedPathWithSelectedLabel;
- (void)_setSelectedLabel:(id)arg1;
- (void)_setSelectedLabel:(id)arg1 atPath:(id)arg2;
- (void)_setSelectedPath:(id)arg1;
- (void*)addressBook;
- (bool)allowsCustomLabels;
- (void)buildUI;
- (bool)canEdit;
- (void)createNewCustomLabel;
- (void)dealloc;
- (bool)didCreateNewLabel;
- (void)displayScrollerIndicators;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAddLabelDisabled;
- (bool)isEditing;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)reloadItemLabels;
- (void)resetLabelCaches;
- (id)savedLabel;
- (id)selectedLabel;
- (void)setAddLabelDisabled:(bool)arg1;
- (void)setAdditionalLabels:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidCreateNewLabel:(bool)arg1;
- (void)setIsEditing:(bool)arg1 animate:(bool)arg2;
- (void)setPropertyGroup:(id)arg1 itemIndex:(long long)arg2;
- (void)setSavedLabel:(id)arg1;
- (void)setSelectedLabel:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (bool)shouldPopItem;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;
- (bool)simpleTextInputViewControllerShouldDismissKeyboard:(id)arg1;
- (id)styleProvider;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)toggleEditing;

@end
