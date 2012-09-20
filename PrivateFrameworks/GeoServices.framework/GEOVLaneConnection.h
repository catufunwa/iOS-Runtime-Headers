/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLaneConnection : PBCodable  {
    unsigned int _firstLaneIndex;
    unsigned int _firstRoadIndex;
    unsigned int _secondLaneIndex;
    unsigned int _secondRoadIndex;
}

@property unsigned int firstRoadIndex;
@property unsigned int firstLaneIndex;
@property unsigned int secondRoadIndex;
@property unsigned int secondLaneIndex;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setSecondLaneIndex:(unsigned int)arg1;
- (unsigned int)secondLaneIndex;
- (void)setSecondRoadIndex:(unsigned int)arg1;
- (unsigned int)secondRoadIndex;
- (void)setFirstLaneIndex:(unsigned int)arg1;
- (unsigned int)firstLaneIndex;
- (void)setFirstRoadIndex:(unsigned int)arg1;
- (unsigned int)firstRoadIndex;
- (BOOL)readFrom:(id)arg1;

@end