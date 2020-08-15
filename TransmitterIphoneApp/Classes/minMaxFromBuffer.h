/*
 Source: https://developer.apple.com/library/content/samplecode/AVCamPhotoFilter/Listings/README_md.html
See LICENSE.txt for this sample’s licensing information.

Abstract:
Defines a function which extracts the smallest and largest values from a pixel buffer.
*/

#ifndef minMaxFromBuffer_h
#define minMaxFromBuffer_h

#import <CoreVideo/CoreVideo.h>
#import <Metal/Metal.h>

/**
 TODO add here
 - Authors: [Apple](https://www.apple.com/)
 - Note: Based on [VideoLiveStreaming](https://developer.apple.com/library/content/samplecode/AVCamPhotoFilter/) from [Apple](https://www.apple.com/)
 */
void minMaxFromPixelBuffer(CVPixelBufferRef pixelBuffer, float* minValue, float* maxValue, MTLPixelFormat pixelFormat);

#endif /* minMaxFromBuffer_h */
