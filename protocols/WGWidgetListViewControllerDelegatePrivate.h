/* Generated by RuntimeBrowser.
 */

@protocol WGWidgetListViewControllerDelegatePrivate <WGWidgetListViewControllerDelegate>

@required

- (int)activeColumnModeForWidgetListViewController:(WGWidgetListViewController *)arg1;
- (int)widgetListViewController:(WGWidgetListViewController *)arg1 columnModeForTransitionToSize:(struct CGSize { float x1; float x2; })arg2 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;

@optional

- (MTMaterialSettings *)materialSettingsForWidgetListViewController:(WGWidgetListViewController *)arg1;
- (UIView *)widgetListViewController:(WGWidgetListViewController *)arg1 newCustomBackgroundViewForItemInList:(id)arg2;

@end
