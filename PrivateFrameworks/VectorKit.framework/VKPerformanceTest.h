/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKMapView;

@interface VKPerformanceTest : NSObject {
    int _loopCounter;
    VKMapView *_mapView;
    int _resultCount;
    struct VKPerformanceTestResult_struct { char *x1; float x2[5]; } *_results;
    BOOL _running;
}

+ (void)runWithMapView:(id)arg1;

- (void)abort;
- (void)dealloc;
- (id)initWithMapView:(id)arg1;
- (void)loop;
- (void)printResults;
- (void)runTest:(int)arg1 step:(int)arg2;
- (void)tick:(int)arg1;

@end
