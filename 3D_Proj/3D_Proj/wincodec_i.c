

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Feb 23 10:57:21 2017
 */
/* Compiler settings for wincodec.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IWICColorContext,0x3c613a02,0x34b2,0x44ea,0x9a,0x7c,0x45,0xae,0xa9,0xc6,0xfd,0x6d);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapSource,0x00000120,0xa8f2,0x4877,0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapLock,0x00000123,0xa8f2,0x4877,0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapFlipRotator,0x5009834f,0x2d6a,0x41ce,0x9e,0x1b,0x17,0xc5,0xaf,0xf7,0xa7,0x82);


MIDL_DEFINE_GUID(IID, IID_IWICBitmap,0x00000121,0xa8f2,0x4877,0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94);


MIDL_DEFINE_GUID(IID, IID_IWICPalette,0x00000040,0xa8f2,0x4877,0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94);


MIDL_DEFINE_GUID(IID, IID_IWICComponentInfo,0x23bc3f0a,0x698b,0x4357,0x88,0x6b,0xf2,0x4d,0x50,0x67,0x13,0x34);


MIDL_DEFINE_GUID(IID, IID_IWICMetadataQueryReader,0x30989668,0xe1c9,0x4597,0xb3,0x95,0x45,0x8e,0xed,0xb8,0x08,0xdf);


MIDL_DEFINE_GUID(IID, IID_IWICMetadataQueryWriter,0xa721791a,0x0def,0x4d06,0xbd,0x91,0x21,0x18,0xbf,0x1d,0xb1,0x0b);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapFrameDecode,0x3b16811b,0x6a43,0x4ec9,0xa8,0x13,0x3d,0x93,0x0c,0x13,0xb9,0x40);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapCodecInfo,0xe87a44c4,0xb76e,0x4c47,0x8b,0x09,0x29,0x8e,0xb1,0x2a,0x27,0x14);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapDecoderInfo,0xd8cd007f,0xd08f,0x4191,0x9b,0xfc,0x23,0x6e,0xa7,0xf0,0xe4,0xb5);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapDecoder,0x9edde9e7,0x8dee,0x47ea,0x99,0xdf,0xe6,0xfa,0xf2,0xed,0x44,0xbf);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapFrameEncode,0x00000105,0xa8f2,0x4877,0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapEncoderInfo,0x94c9b4ee,0xa09f,0x4f92,0x8a,0x1e,0x4a,0x9b,0xce,0x7e,0x76,0xfb);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapEncoder,0x00000103,0xa8f2,0x4877,0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94);


MIDL_DEFINE_GUID(IID, IID_IWICFormatConverter,0x00000301,0xa8f2,0x4877,0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94);


MIDL_DEFINE_GUID(IID, IID_IWICFormatConverterInfo,0x9f34fb65,0x13f4,0x4f15,0xbc,0x57,0x37,0x26,0xb5,0xe5,0x3d,0x9f);


MIDL_DEFINE_GUID(IID, IID_IWICStream,0x135ff860,0x22b7,0x4ddf,0xb0,0xf6,0x21,0x8f,0x4f,0x29,0x9a,0x43);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapScaler,0x00000302,0xa8f2,0x4877,0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94);


MIDL_DEFINE_GUID(IID, IID_IWICBitmapClipper,0xe4fbcf03,0x223d,0x4e81,0x93,0x33,0xd6,0x35,0x55,0x6d,0xd1,0xb5);


MIDL_DEFINE_GUID(IID, IID_IWICColorTransform,0xb66f034f,0xd0e2,0x40ab,0xb4,0x36,0x6d,0xe3,0x9e,0x32,0x1a,0x94);


MIDL_DEFINE_GUID(IID, IID_IWICFastMetadataEncoder,0xb84e2c09,0x78c9,0x4ac4,0x8b,0xd3,0x52,0x4a,0xe1,0x66,0x3a,0x2f);


MIDL_DEFINE_GUID(IID, IID_IWICImagingFactory,0xec5ec8a9,0xc395,0x4314,0x9c,0x77,0x54,0xd7,0xa9,0x35,0xff,0x70);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


