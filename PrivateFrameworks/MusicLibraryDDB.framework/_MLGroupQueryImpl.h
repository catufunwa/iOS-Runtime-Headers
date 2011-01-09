/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MusicLibraryDDB.framework/MusicLibraryDDB
 */



@interface _MLGroupQueryImpl : _MLPlaylistItemPtrImpl 
{
    unsigned int _isFromPodcast : 1;
}


- (id)copyQueryResultsDescription;
- (id)stringValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned short)firstCharacterForStringProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (void)evaluate;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (BOOL)entityMatchesPredicates:(id)arg1 entityIndex:(NSUInteger)arg2;
- (NSUInteger)countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;
- (id)representativeTrackForEntityAtIndex:(NSUInteger)arg1;
- (id)containingPlaylist;
- (struct __CFArray { }*)_getPlaylistItemResults;

@end