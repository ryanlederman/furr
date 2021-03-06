/*
  Image Compression/Decompression Methods.
*/
#ifndef _MAGICK_COMPRESS_H
#define _MAGICK_COMPRESS_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

extern MagickExport MagickBooleanType
  HuffmanDecodeImage(Image *),
  HuffmanEncodeImage(const ImageInfo *,Image *),
  Huffman2DEncodeImage(const ImageInfo *,Image *),
  JPEGEncodeImage(const ImageInfo *,Image *),
  LZWEncodeImage(Image *,const size_t,unsigned char *),
  PackbitsEncodeImage(Image *,const size_t,unsigned char *),
  ZLIBEncodeImage(Image *,const size_t,const unsigned long,unsigned char *);

extern MagickExport void
  Ascii85Encode(Image *,const unsigned char),
  Ascii85Flush(Image *),
  Ascii85Initialize(Image *);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
