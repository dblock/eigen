/// Shows an image above a standard metadata view
#import "ARItemThumbnailViewCell.h"
#import "ARFeedImageLoader.h"

typedef NS_ENUM(NSInteger, ARArtworkWithMetadataThumbnailCellImageAlignment) {
    ARArtworkWithMetadataThumbnailCellImageAlignmentCenter = 1,
    ARArtworkWithMetadataThumbnailCellImageAlignmentLeft
};

@class Artwork, ARArtworkThumbnailMetadataView;


@interface ARArtworkWithMetadataThumbnailCell : ARItemThumbnailViewCell

+ (CGFloat)heightForMetadataWithArtwork:(Artwork *)artwork;

- (void)setupWithRepresentedObject:(Artwork *)artwork;

@property (nonatomic, assign) enum ARFeedItemImageSize imageSize;
@property (nonatomic, readonly) ARArtworkThumbnailMetadataView *metadataView;

/// By default, will use UIViewContentModeAspectFill
@property (nonatomic, assign) enum UIViewContentMode imageViewContentMode;

/// By default, will use center alignment
@property (nonatomic, assign) enum ARArtworkWithMetadataThumbnailCellImageAlignment imageAlignment;

@end
