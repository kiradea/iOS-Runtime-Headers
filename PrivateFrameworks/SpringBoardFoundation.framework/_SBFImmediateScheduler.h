/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSString;

@interface _SBFImmediateScheduler : NSObject <SBFScheduler> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)afterDelay:(double)arg1 performBlock:(id)arg2;
- (id)performBlock:(id)arg1;
- (id)performCancelableBlock:(id)arg1;

@end