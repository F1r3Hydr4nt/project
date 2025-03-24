
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_png_PNGHeader__
#define __gnu_javax_imageio_png_PNGHeader__

#pragma interface

#include <gnu/javax/imageio/png/PNGChunk.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace imageio
      {
        namespace png
        {
            class PNGHeader;
        }
      }
    }
  }
}

class gnu::javax::imageio::png::PNGHeader : public ::gnu::javax::imageio::png::PNGChunk
{

public: // actually protected
  PNGHeader(jint, JArray< jbyte > *, jint);
public:
  PNGHeader(jint, jint, jint, jint, jboolean);
  virtual jboolean isValidChunk();
  virtual jboolean isIndexed();
  virtual jboolean isGrayscale();
  virtual jint getColorType();
  virtual jboolean isInterlaced();
  virtual jint bytesPerPixel();
  virtual jint getScanlineStride();
  virtual jint getWidth();
  virtual jint getHeight();
  virtual jint getDepth();
  virtual ::java::lang::String * toString();
private:
  jint __attribute__((aligned(__alignof__( ::gnu::javax::imageio::png::PNGChunk)))) width;
  jint height;
  jint depth;
  jint colorType;
  jint compression;
  jint filter;
  jint interlace;
public:
  static const jint INTERLACE_NONE = 0;
  static const jint INTERLACE_ADAM7 = 1;
  static const jint GRAYSCALE = 0;
  static const jint RGB = 2;
  static const jint INDEXED = 3;
  static const jint GRAYSCALE_WITH_ALPHA = 4;
  static const jint RGB_WITH_ALPHA = 6;
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_imageio_png_PNGHeader__
