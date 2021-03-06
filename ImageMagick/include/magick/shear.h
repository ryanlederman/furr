/*
  ImageMagick Image Stream Methods.
*/
#ifndef _MAGICK_SHEAR_H
#define _MAGICK_SHEAR_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

extern MagickExport Image
  *AffineTransformImage(const Image *,const AffineMatrix *,ExceptionInfo *),
  *RotateImage(const Image *,const double,ExceptionInfo *),
  *ShearImage(const Image *,const double,const double,ExceptionInfo *);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
