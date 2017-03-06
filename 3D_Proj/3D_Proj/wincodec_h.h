

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __wincodec_h_h__
#define __wincodec_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWICColorContext_FWD_DEFINED__
#define __IWICColorContext_FWD_DEFINED__
typedef interface IWICColorContext IWICColorContext;

#endif 	/* __IWICColorContext_FWD_DEFINED__ */


#ifndef __IWICBitmapSource_FWD_DEFINED__
#define __IWICBitmapSource_FWD_DEFINED__
typedef interface IWICBitmapSource IWICBitmapSource;

#endif 	/* __IWICBitmapSource_FWD_DEFINED__ */


#ifndef __IWICBitmapLock_FWD_DEFINED__
#define __IWICBitmapLock_FWD_DEFINED__
typedef interface IWICBitmapLock IWICBitmapLock;

#endif 	/* __IWICBitmapLock_FWD_DEFINED__ */


#ifndef __IWICBitmapFlipRotator_FWD_DEFINED__
#define __IWICBitmapFlipRotator_FWD_DEFINED__
typedef interface IWICBitmapFlipRotator IWICBitmapFlipRotator;

#endif 	/* __IWICBitmapFlipRotator_FWD_DEFINED__ */


#ifndef __IWICBitmap_FWD_DEFINED__
#define __IWICBitmap_FWD_DEFINED__
typedef interface IWICBitmap IWICBitmap;

#endif 	/* __IWICBitmap_FWD_DEFINED__ */


#ifndef __IWICPalette_FWD_DEFINED__
#define __IWICPalette_FWD_DEFINED__
typedef interface IWICPalette IWICPalette;

#endif 	/* __IWICPalette_FWD_DEFINED__ */


#ifndef __IWICComponentInfo_FWD_DEFINED__
#define __IWICComponentInfo_FWD_DEFINED__
typedef interface IWICComponentInfo IWICComponentInfo;

#endif 	/* __IWICComponentInfo_FWD_DEFINED__ */


#ifndef __IWICMetadataQueryReader_FWD_DEFINED__
#define __IWICMetadataQueryReader_FWD_DEFINED__
typedef interface IWICMetadataQueryReader IWICMetadataQueryReader;

#endif 	/* __IWICMetadataQueryReader_FWD_DEFINED__ */


#ifndef __IWICMetadataQueryWriter_FWD_DEFINED__
#define __IWICMetadataQueryWriter_FWD_DEFINED__
typedef interface IWICMetadataQueryWriter IWICMetadataQueryWriter;

#endif 	/* __IWICMetadataQueryWriter_FWD_DEFINED__ */


#ifndef __IWICBitmapFrameDecode_FWD_DEFINED__
#define __IWICBitmapFrameDecode_FWD_DEFINED__
typedef interface IWICBitmapFrameDecode IWICBitmapFrameDecode;

#endif 	/* __IWICBitmapFrameDecode_FWD_DEFINED__ */


#ifndef __IWICBitmapCodecInfo_FWD_DEFINED__
#define __IWICBitmapCodecInfo_FWD_DEFINED__
typedef interface IWICBitmapCodecInfo IWICBitmapCodecInfo;

#endif 	/* __IWICBitmapCodecInfo_FWD_DEFINED__ */


#ifndef __IWICBitmapDecoderInfo_FWD_DEFINED__
#define __IWICBitmapDecoderInfo_FWD_DEFINED__
typedef interface IWICBitmapDecoderInfo IWICBitmapDecoderInfo;

#endif 	/* __IWICBitmapDecoderInfo_FWD_DEFINED__ */


#ifndef __IWICBitmapDecoder_FWD_DEFINED__
#define __IWICBitmapDecoder_FWD_DEFINED__
typedef interface IWICBitmapDecoder IWICBitmapDecoder;

#endif 	/* __IWICBitmapDecoder_FWD_DEFINED__ */


#ifndef __IWICBitmapFrameEncode_FWD_DEFINED__
#define __IWICBitmapFrameEncode_FWD_DEFINED__
typedef interface IWICBitmapFrameEncode IWICBitmapFrameEncode;

#endif 	/* __IWICBitmapFrameEncode_FWD_DEFINED__ */


#ifndef __IWICBitmapEncoderInfo_FWD_DEFINED__
#define __IWICBitmapEncoderInfo_FWD_DEFINED__
typedef interface IWICBitmapEncoderInfo IWICBitmapEncoderInfo;

#endif 	/* __IWICBitmapEncoderInfo_FWD_DEFINED__ */


#ifndef __IWICBitmapEncoder_FWD_DEFINED__
#define __IWICBitmapEncoder_FWD_DEFINED__
typedef interface IWICBitmapEncoder IWICBitmapEncoder;

#endif 	/* __IWICBitmapEncoder_FWD_DEFINED__ */


#ifndef __IWICFormatConverter_FWD_DEFINED__
#define __IWICFormatConverter_FWD_DEFINED__
typedef interface IWICFormatConverter IWICFormatConverter;

#endif 	/* __IWICFormatConverter_FWD_DEFINED__ */


#ifndef __IWICFormatConverterInfo_FWD_DEFINED__
#define __IWICFormatConverterInfo_FWD_DEFINED__
typedef interface IWICFormatConverterInfo IWICFormatConverterInfo;

#endif 	/* __IWICFormatConverterInfo_FWD_DEFINED__ */


#ifndef __IWICStream_FWD_DEFINED__
#define __IWICStream_FWD_DEFINED__
typedef interface IWICStream IWICStream;

#endif 	/* __IWICStream_FWD_DEFINED__ */


#ifndef __IWICBitmapScaler_FWD_DEFINED__
#define __IWICBitmapScaler_FWD_DEFINED__
typedef interface IWICBitmapScaler IWICBitmapScaler;

#endif 	/* __IWICBitmapScaler_FWD_DEFINED__ */


#ifndef __IWICBitmapClipper_FWD_DEFINED__
#define __IWICBitmapClipper_FWD_DEFINED__
typedef interface IWICBitmapClipper IWICBitmapClipper;

#endif 	/* __IWICBitmapClipper_FWD_DEFINED__ */


#ifndef __IWICColorTransform_FWD_DEFINED__
#define __IWICColorTransform_FWD_DEFINED__
typedef interface IWICColorTransform IWICColorTransform;

#endif 	/* __IWICColorTransform_FWD_DEFINED__ */


#ifndef __IWICFastMetadataEncoder_FWD_DEFINED__
#define __IWICFastMetadataEncoder_FWD_DEFINED__
typedef interface IWICFastMetadataEncoder IWICFastMetadataEncoder;

#endif 	/* __IWICFastMetadataEncoder_FWD_DEFINED__ */


#ifndef __IWICImagingFactory_FWD_DEFINED__
#define __IWICImagingFactory_FWD_DEFINED__
typedef interface IWICImagingFactory IWICImagingFactory;

#endif 	/* __IWICImagingFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "propidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wincodec_0000_0000 */
/* [local] */ 

#define WINCODEC_SDK_VERSION 0x0236
typedef 
enum WICDecodeOptions
    {
        WICDecodeMetadataCacheOnDemand	= 0,
        WICDecodeMetadataCacheOnLoad	= 0x1,
        WICMETADATACACHEOPTION_FORCE_DWORD	= 0x7fffffff
    } 	WICDecodeOptions;

typedef 
enum WICBitmapCreateCacheOption
    {
        WICBitmapNoCache	= 0,
        WICBitmapCacheOnDemand	= 0x1,
        WICBitmapCacheOnLoad	= 0x2,
        WICBITMAPCREATECACHEOPTION_FORCE_DWORD	= 0x7fffffff
    } 	WICBitmapCreateCacheOption;

typedef 
enum WICBitmapAlphaChannelOption
    {
        WICBitmapUseAlpha	= 0,
        WICBitmapUsePremultipliedAlpha	= 0x1,
        WICBitmapIgnoreAlpha	= 0x2,
        WICBITMAPALPHACHANNELOPTIONS_FORCE_DWORD	= 0x7fffffff
    } 	WICBitmapAlphaChannelOption;

typedef 
enum WICBitmapDecoderCapabilities
    {
        WICBitmapDecoderCapabilitySameEncoder	= 0x1,
        WICBitmapDecoderCapabilityCanDecodeAllImages	= 0x2,
        WICBitmapDecoderCapabilityCanDecodeSomeImages	= 0x4,
        WICBitmapDecoderCapabilityCanEnumerateMetadata	= 0x8,
        WICBitmapDecoderCapabilityCanDecodeThumbnail	= 0x10
    } 	WICBitmapDecoderCapabilities;

typedef 
enum WICBitmapDitherType
    {
        WICBitmapDitherTypeNone	= 0,
        WICBitmapDitherTypeSolid	= 0,
        WICBitmapDitherTypeOrdered4x4	= 0x1,
        WICBitmapDitherTypeOrdered8x8	= 0x2,
        WICBitmapDitherTypeOrdered16x16	= 0x3,
        WICBitmapDitherTypeSpiral4x4	= 0x4,
        WICBitmapDitherTypeSpiral8x8	= 0x5,
        WICBitmapDitherTypeDualSpiral4x4	= 0x6,
        WICBitmapDitherTypeDualSpiral8x8	= 0x7,
        WICBitmapDitherTypeErrorDiffusion	= 0x8,
        WICBITMAPDITHERTYPE_FORCE_DWORD	= 0x7fffffff
    } 	WICBitmapDitherType;

typedef 
enum WICBitmapEncoderCacheOption
    {
        WICBitmapEncoderCacheInMemory	= 0,
        WICBitmapEncoderCacheTempFile	= 0x1,
        WICBitmapEncoderNoCache	= 0x2,
        WICBITMAPENCODERCACHEOPTION_FORCE_DWORD	= 0x7fffffff
    } 	WICBitmapEncoderCacheOption;

typedef 
enum WICBitmapInterpolationMode
    {
        WICBitmapInterpolationModeNearestNeighbor	= 0,
        WICBitmapInterpolationModeLinear	= 0x1,
        WICBitmapInterpolationModeCubic	= 0x2,
        WICBitmapInterpolationModeFant	= 0x3,
        WICBITMAPINTERPOLATIONMODE_FORCE_DWORD	= 0x7fffffff
    } 	WICBitmapInterpolationMode;

typedef 
enum WICBitmapPaletteType
    {
        WICBitmapPaletteTypeCustom	= 0,
        WICBitmapPaletteTypeMedianCut	= 0x1,
        WICBitmapPaletteTypeFixedBW	= 0x2,
        WICBitmapPaletteTypeFixedHalftone8	= 0x3,
        WICBitmapPaletteTypeFixedHalftone27	= 0x4,
        WICBitmapPaletteTypeFixedHalftone64	= 0x5,
        WICBitmapPaletteTypeFixedHalftone125	= 0x6,
        WICBitmapPaletteTypeFixedHalftone216	= 0x7,
        WICBitmapPaletteTypeFixedWebPalette	= WICBitmapPaletteTypeFixedHalftone216,
        WICBitmapPaletteTypeFixedHalftone252	= 0x8,
        WICBitmapPaletteTypeFixedHalftone256	= 0x9,
        WICBitmapPaletteTypeFixedGray4	= 0xa,
        WICBitmapPaletteTypeFixedGray16	= 0xb,
        WICBitmapPaletteTypeFixedGray256	= 0xc,
        WICBITMAPPALETTETYPE_FORCE_DWORD	= 0x7fffffff
    } 	WICBitmapPaletteType;

typedef 
enum WICBitmapTransformOptions
    {
        WICBitmapTransformRotate0	= 0,
        WICBitmapTransformRotate90	= 0x1,
        WICBitmapTransformRotate180	= 0x2,
        WICBitmapTransformRotate270	= 0x3,
        WICBitmapTransformFlipHorizontal	= 0x8,
        WICBitmapTransformFlipVertical	= 0x10,
        WICBITMAPTRANSFORMOPTIONS_FORCE_DWORD	= 0x7fffffff
    } 	WICBitmapTransformOptions;

typedef 
enum WICColorContextType
    {
        WICColorContextUninitialized	= 0,
        WICColorContextProfile	= 0x1,
        WICColorContextExifColorSpace	= 0x2
    } 	WICColorContextType;

typedef 
enum WICComponentType
    {
        WICDecoder	= 0x1,
        WICEncoder	= 0x2,
        WICPixelFormatConverter	= 0x4,
        WICMetadataReader	= 0x8,
        WICMetadataWriter	= 0x10,
        WICPixelFormat	= 0x20,
        WICCOMPONENTTYPE_FORCE_DWORD	= 0x7fffffff
    } 	WICComponentType;

typedef 
enum WICComponentSigning
    {
        WICComponentSigned	= 0x1,
        WICComponentUnsigned	= 0x2,
        WICComponentSafe	= 0x4,
        WICComponentDisabled	= 0x80000000
    } 	WICComponentSigning;

typedef 
enum WICComponentEnumerateOptions
    {
        WICComponentEnumerateDefault	= 0,
        WICComponentEnumerateRefresh	= 0x1,
        WICComponentEnumerateBuiltInOnly	= 0x20000000,
        WICComponentEnumerateUnsigned	= 0x40000000,
        WICComponentEnumerateDisabled	= 0x80000000
    } 	WICComponentEnumerateOptions;

typedef GUID WICPixelFormatGUID;

typedef REFGUID REFWICPixelFormatGUID;

DEFINE_GUID(GUID_WICPixelFormatDontCare, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x00);
#define GUID_WICPixelFormatUndefined GUID_WICPixelFormatDontCare
DEFINE_GUID(GUID_WICPixelFormat1bppIndexed, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x01);
DEFINE_GUID(GUID_WICPixelFormat2bppIndexed, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x02);
DEFINE_GUID(GUID_WICPixelFormat4bppIndexed, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x03);
DEFINE_GUID(GUID_WICPixelFormat8bppIndexed, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x04);
DEFINE_GUID(GUID_WICPixelFormatBlackWhite, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x05);
DEFINE_GUID(GUID_WICPixelFormat2bppGray, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x06);
DEFINE_GUID(GUID_WICPixelFormat4bppGray, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x07);
DEFINE_GUID(GUID_WICPixelFormat8bppGray, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x08);
DEFINE_GUID(GUID_WICPixelFormat16bppGray, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x0b);
DEFINE_GUID(GUID_WICPixelFormat16bppBGR555, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x09);
DEFINE_GUID(GUID_WICPixelFormat16bppBGR565, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x0a);
DEFINE_GUID(GUID_WICPixelFormat16bppBGRA5551, 0x05ec7c2b,0xf1e6,0x4961,0xad,0x46,0xe1,0xcc,0x81,0x0a,0x87,0xd2);
DEFINE_GUID(GUID_WICPixelFormat24bppBGR, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x0c);
DEFINE_GUID(GUID_WICPixelFormat32bppBGR, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x0e);
DEFINE_GUID(GUID_WICPixelFormat32bppBGRA, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x0f);
DEFINE_GUID(GUID_WICPixelFormat32bppPBGRA, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x10);
DEFINE_GUID(GUID_WICPixelFormat48bppRGB, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x15);
DEFINE_GUID(GUID_WICPixelFormat64bppRGBA, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x16);
DEFINE_GUID(GUID_WICPixelFormat64bppPRGBA, 0x6fddc324,0x4e03,0x4bfe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x17);
DEFINE_GUID(GUID_WICPixelFormat32bppCMYK, 0x6fddc324,0x4e03,0x4fbe,0xb1,0x85,0x3d,0x77,0x76,0x8d,0xc9,0x1c);
typedef struct WICRect
    {
    INT X;
    INT Y;
    INT Width;
    INT Height;
    } 	WICRect;

typedef struct WICBitmapPattern
    {
    ULARGE_INTEGER Position;
    ULONG Length;
    BYTE *Pattern;
    BYTE *Mask;
    BOOL EndOfStream;
    } 	WICBitmapPattern;

typedef UINT32 WICColor;

#define WINCODEC_ERR_WRONGSTATE 0x88982f04
#define WINCODEC_ERR_VALUEOUTOFRANGE 0x88982f05
#define WINCODEC_ERR_NOTINITIALIZED 0x88982f0c
#define WINCODEC_ERR_CODECNOTHUMBNAIL 0x88982f44
#define WINCODEC_ERR_PALETTEUNAVAILABLE 0x88982f45
#define WINCODEC_ERR_COMPONENTNOTFOUND 0x88982f50
#define WINCODEC_ERR_FRAMEMISSING 0x88982f62
#define WINCODEC_ERR_UNSUPPORTEDPIXELFORMAT 0x88982f80
#define WINCODEC_ERR_UNSUPPORTEDOPERATION 0x88982f81
#define WINCODEC_ERR_INSUFFICIENTBUFFER 0x88982f8c



extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0000_v0_0_s_ifspec;

#ifndef __IWICColorContext_INTERFACE_DEFINED__
#define __IWICColorContext_INTERFACE_DEFINED__

/* interface IWICColorContext */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICColorContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3c613a02-34b2-44ea-9a7c-45aea9c6fd6d")
    IWICColorContext : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromFilename( 
            /* [in] */ LPCWSTR wzFilename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromMemory( 
            /* [size_is][in] */ const BYTE *pbBuffer,
            /* [in] */ UINT cbBufferSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromExifColorSpace( 
            /* [in] */ UINT value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ WICColorContextType *pType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProfileBytes( 
            /* [in] */ UINT cbBuffer,
            /* [size_is][unique][out][in] */ BYTE *pbBuffer,
            /* [out] */ UINT *pcbActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExifColorSpace( 
            /* [out] */ UINT *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICColorContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICColorContext * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICColorContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICColorContext * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromFilename )( 
            IWICColorContext * This,
            /* [in] */ LPCWSTR wzFilename);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromMemory )( 
            IWICColorContext * This,
            /* [size_is][in] */ const BYTE *pbBuffer,
            /* [in] */ UINT cbBufferSize);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromExifColorSpace )( 
            IWICColorContext * This,
            /* [in] */ UINT value);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IWICColorContext * This,
            /* [out] */ WICColorContextType *pType);
        
        HRESULT ( STDMETHODCALLTYPE *GetProfileBytes )( 
            IWICColorContext * This,
            /* [in] */ UINT cbBuffer,
            /* [size_is][unique][out][in] */ BYTE *pbBuffer,
            /* [out] */ UINT *pcbActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetExifColorSpace )( 
            IWICColorContext * This,
            /* [out] */ UINT *pValue);
        
        END_INTERFACE
    } IWICColorContextVtbl;

    interface IWICColorContext
    {
        CONST_VTBL struct IWICColorContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICColorContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICColorContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICColorContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICColorContext_InitializeFromFilename(This,wzFilename)	\
    ( (This)->lpVtbl -> InitializeFromFilename(This,wzFilename) ) 

#define IWICColorContext_InitializeFromMemory(This,pbBuffer,cbBufferSize)	\
    ( (This)->lpVtbl -> InitializeFromMemory(This,pbBuffer,cbBufferSize) ) 

#define IWICColorContext_InitializeFromExifColorSpace(This,value)	\
    ( (This)->lpVtbl -> InitializeFromExifColorSpace(This,value) ) 

#define IWICColorContext_GetType(This,pType)	\
    ( (This)->lpVtbl -> GetType(This,pType) ) 

#define IWICColorContext_GetProfileBytes(This,cbBuffer,pbBuffer,pcbActual)	\
    ( (This)->lpVtbl -> GetProfileBytes(This,cbBuffer,pbBuffer,pcbActual) ) 

#define IWICColorContext_GetExifColorSpace(This,pValue)	\
    ( (This)->lpVtbl -> GetExifColorSpace(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICColorContext_INTERFACE_DEFINED__ */


#ifndef __IWICBitmapSource_INTERFACE_DEFINED__
#define __IWICBitmapSource_INTERFACE_DEFINED__

/* interface IWICBitmapSource */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000120-a8f2-4877-ba0a-fd2b6645fb94")
    IWICBitmapSource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ UINT *puiWidth,
            /* [out] */ UINT *puiHeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPixelFormat( 
            /* [out] */ WICPixelFormatGUID *pPixelFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResolution( 
            /* [out] */ double *pDpiX,
            /* [out] */ double *pDpiY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyPalette( 
            /* [in] */ IWICPalette *pIPalette) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyPixels( 
            /* [in] */ const WICRect *prc,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][out] */ BYTE *pbBuffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWICBitmapSource * This,
            /* [out] */ UINT *puiWidth,
            /* [out] */ UINT *puiHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IWICBitmapSource * This,
            /* [out] */ WICPixelFormatGUID *pPixelFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetResolution )( 
            IWICBitmapSource * This,
            /* [out] */ double *pDpiX,
            /* [out] */ double *pDpiY);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )( 
            IWICBitmapSource * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )( 
            IWICBitmapSource * This,
            /* [in] */ const WICRect *prc,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][out] */ BYTE *pbBuffer);
        
        END_INTERFACE
    } IWICBitmapSourceVtbl;

    interface IWICBitmapSource
    {
        CONST_VTBL struct IWICBitmapSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapSource_GetSize(This,puiWidth,puiHeight)	\
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) ) 

#define IWICBitmapSource_GetPixelFormat(This,pPixelFormat)	\
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) ) 

#define IWICBitmapSource_GetResolution(This,pDpiX,pDpiY)	\
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) ) 

#define IWICBitmapSource_CopyPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) ) 

#define IWICBitmapSource_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer)	\
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapSource_INTERFACE_DEFINED__ */


#ifndef __IWICBitmapLock_INTERFACE_DEFINED__
#define __IWICBitmapLock_INTERFACE_DEFINED__

/* interface IWICBitmapLock */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapLock;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000123-a8f2-4877-ba0a-fd2b6645fb94")
    IWICBitmapLock : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ UINT *pWidth,
            /* [out] */ UINT *pHeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStride( 
            /* [out] */ UINT *pcbStride) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDataPointer( 
            /* [out] */ UINT *pcbBufferSize,
            /* [size_is][size_is][out] */ BYTE **ppbData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPixelFormat( 
            /* [out] */ WICPixelFormatGUID *pPixelFormat) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapLockVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapLock * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapLock * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapLock * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWICBitmapLock * This,
            /* [out] */ UINT *pWidth,
            /* [out] */ UINT *pHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetStride )( 
            IWICBitmapLock * This,
            /* [out] */ UINT *pcbStride);
        
        HRESULT ( STDMETHODCALLTYPE *GetDataPointer )( 
            IWICBitmapLock * This,
            /* [out] */ UINT *pcbBufferSize,
            /* [size_is][size_is][out] */ BYTE **ppbData);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IWICBitmapLock * This,
            /* [out] */ WICPixelFormatGUID *pPixelFormat);
        
        END_INTERFACE
    } IWICBitmapLockVtbl;

    interface IWICBitmapLock
    {
        CONST_VTBL struct IWICBitmapLockVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapLock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapLock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapLock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapLock_GetSize(This,pWidth,pHeight)	\
    ( (This)->lpVtbl -> GetSize(This,pWidth,pHeight) ) 

#define IWICBitmapLock_GetStride(This,pcbStride)	\
    ( (This)->lpVtbl -> GetStride(This,pcbStride) ) 

#define IWICBitmapLock_GetDataPointer(This,pcbBufferSize,ppbData)	\
    ( (This)->lpVtbl -> GetDataPointer(This,pcbBufferSize,ppbData) ) 

#define IWICBitmapLock_GetPixelFormat(This,pPixelFormat)	\
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapLock_INTERFACE_DEFINED__ */


#ifndef __IWICBitmapFlipRotator_INTERFACE_DEFINED__
#define __IWICBitmapFlipRotator_INTERFACE_DEFINED__

/* interface IWICBitmapFlipRotator */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapFlipRotator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5009834f-2d6a-41ce-9e1b-17c5aff7a782")
    IWICBitmapFlipRotator : public IWICBitmapSource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWICBitmapSource *pISource,
            /* [in] */ WICBitmapTransformOptions options) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapFlipRotatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapFlipRotator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapFlipRotator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapFlipRotator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWICBitmapFlipRotator * This,
            /* [out] */ UINT *puiWidth,
            /* [out] */ UINT *puiHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IWICBitmapFlipRotator * This,
            /* [out] */ WICPixelFormatGUID *pPixelFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetResolution )( 
            IWICBitmapFlipRotator * This,
            /* [out] */ double *pDpiX,
            /* [out] */ double *pDpiY);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )( 
            IWICBitmapFlipRotator * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )( 
            IWICBitmapFlipRotator * This,
            /* [in] */ const WICRect *prc,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][out] */ BYTE *pbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWICBitmapFlipRotator * This,
            /* [in] */ IWICBitmapSource *pISource,
            /* [in] */ WICBitmapTransformOptions options);
        
        END_INTERFACE
    } IWICBitmapFlipRotatorVtbl;

    interface IWICBitmapFlipRotator
    {
        CONST_VTBL struct IWICBitmapFlipRotatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapFlipRotator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapFlipRotator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapFlipRotator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapFlipRotator_GetSize(This,puiWidth,puiHeight)	\
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) ) 

#define IWICBitmapFlipRotator_GetPixelFormat(This,pPixelFormat)	\
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) ) 

#define IWICBitmapFlipRotator_GetResolution(This,pDpiX,pDpiY)	\
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) ) 

#define IWICBitmapFlipRotator_CopyPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) ) 

#define IWICBitmapFlipRotator_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer)	\
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) ) 


#define IWICBitmapFlipRotator_Initialize(This,pISource,options)	\
    ( (This)->lpVtbl -> Initialize(This,pISource,options) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapFlipRotator_INTERFACE_DEFINED__ */


#ifndef __IWICBitmap_INTERFACE_DEFINED__
#define __IWICBitmap_INTERFACE_DEFINED__

/* interface IWICBitmap */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000121-a8f2-4877-ba0a-fd2b6645fb94")
    IWICBitmap : public IWICBitmapSource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Lock( 
            /* [in] */ const WICRect *prcLock,
            /* [in] */ DWORD flags,
            /* [out] */ IWICBitmapLock **ppILock) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPalette( 
            /* [in] */ IWICPalette *pIPalette) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetResolution( 
            /* [in] */ double dpiX,
            /* [in] */ double dpiY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmap * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWICBitmap * This,
            /* [out] */ UINT *puiWidth,
            /* [out] */ UINT *puiHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IWICBitmap * This,
            /* [out] */ WICPixelFormatGUID *pPixelFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetResolution )( 
            IWICBitmap * This,
            /* [out] */ double *pDpiX,
            /* [out] */ double *pDpiY);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )( 
            IWICBitmap * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )( 
            IWICBitmap * This,
            /* [in] */ const WICRect *prc,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][out] */ BYTE *pbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *Lock )( 
            IWICBitmap * This,
            /* [in] */ const WICRect *prcLock,
            /* [in] */ DWORD flags,
            /* [out] */ IWICBitmapLock **ppILock);
        
        HRESULT ( STDMETHODCALLTYPE *SetPalette )( 
            IWICBitmap * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *SetResolution )( 
            IWICBitmap * This,
            /* [in] */ double dpiX,
            /* [in] */ double dpiY);
        
        END_INTERFACE
    } IWICBitmapVtbl;

    interface IWICBitmap
    {
        CONST_VTBL struct IWICBitmapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmap_GetSize(This,puiWidth,puiHeight)	\
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) ) 

#define IWICBitmap_GetPixelFormat(This,pPixelFormat)	\
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) ) 

#define IWICBitmap_GetResolution(This,pDpiX,pDpiY)	\
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) ) 

#define IWICBitmap_CopyPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) ) 

#define IWICBitmap_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer)	\
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) ) 


#define IWICBitmap_Lock(This,prcLock,flags,ppILock)	\
    ( (This)->lpVtbl -> Lock(This,prcLock,flags,ppILock) ) 

#define IWICBitmap_SetPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> SetPalette(This,pIPalette) ) 

#define IWICBitmap_SetResolution(This,dpiX,dpiY)	\
    ( (This)->lpVtbl -> SetResolution(This,dpiX,dpiY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmap_INTERFACE_DEFINED__ */


#ifndef __IWICPalette_INTERFACE_DEFINED__
#define __IWICPalette_INTERFACE_DEFINED__

/* interface IWICPalette */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICPalette;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000040-a8f2-4877-ba0a-fd2b6645fb94")
    IWICPalette : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializePredefined( 
            /* [in] */ WICBitmapPaletteType ePaletteType,
            /* [in] */ BOOL fAddTransparentColor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeCustom( 
            /* [size_is][in] */ WICColor *pColors,
            /* [in] */ UINT colorCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromBitmap( 
            /* [in] */ IWICBitmapSource *pISurface,
            /* [in] */ UINT colorCount,
            /* [in] */ BOOL fAddTransparentColor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromPalette( 
            /* [in] */ IWICPalette *pIPalette) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ WICBitmapPaletteType *pePaletteType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColorCount( 
            /* [out] */ UINT *pcCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColors( 
            /* [in] */ UINT colorCount,
            /* [size_is][out] */ WICColor *pColors,
            /* [out] */ UINT *pcActualColors) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsBlackWhite( 
            /* [out] */ BOOL *pfIsBlackWhite) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsGrayscale( 
            /* [out] */ BOOL *pfIsGrayscale) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasAlpha( 
            /* [out] */ BOOL *pfHasAlpha) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICPaletteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICPalette * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICPalette * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICPalette * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializePredefined )( 
            IWICPalette * This,
            /* [in] */ WICBitmapPaletteType ePaletteType,
            /* [in] */ BOOL fAddTransparentColor);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeCustom )( 
            IWICPalette * This,
            /* [size_is][in] */ WICColor *pColors,
            /* [in] */ UINT colorCount);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromBitmap )( 
            IWICPalette * This,
            /* [in] */ IWICBitmapSource *pISurface,
            /* [in] */ UINT colorCount,
            /* [in] */ BOOL fAddTransparentColor);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromPalette )( 
            IWICPalette * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IWICPalette * This,
            /* [out] */ WICBitmapPaletteType *pePaletteType);
        
        HRESULT ( STDMETHODCALLTYPE *GetColorCount )( 
            IWICPalette * This,
            /* [out] */ UINT *pcCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetColors )( 
            IWICPalette * This,
            /* [in] */ UINT colorCount,
            /* [size_is][out] */ WICColor *pColors,
            /* [out] */ UINT *pcActualColors);
        
        HRESULT ( STDMETHODCALLTYPE *IsBlackWhite )( 
            IWICPalette * This,
            /* [out] */ BOOL *pfIsBlackWhite);
        
        HRESULT ( STDMETHODCALLTYPE *IsGrayscale )( 
            IWICPalette * This,
            /* [out] */ BOOL *pfIsGrayscale);
        
        HRESULT ( STDMETHODCALLTYPE *HasAlpha )( 
            IWICPalette * This,
            /* [out] */ BOOL *pfHasAlpha);
        
        END_INTERFACE
    } IWICPaletteVtbl;

    interface IWICPalette
    {
        CONST_VTBL struct IWICPaletteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICPalette_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICPalette_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICPalette_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICPalette_InitializePredefined(This,ePaletteType,fAddTransparentColor)	\
    ( (This)->lpVtbl -> InitializePredefined(This,ePaletteType,fAddTransparentColor) ) 

#define IWICPalette_InitializeCustom(This,pColors,colorCount)	\
    ( (This)->lpVtbl -> InitializeCustom(This,pColors,colorCount) ) 

#define IWICPalette_InitializeFromBitmap(This,pISurface,colorCount,fAddTransparentColor)	\
    ( (This)->lpVtbl -> InitializeFromBitmap(This,pISurface,colorCount,fAddTransparentColor) ) 

#define IWICPalette_InitializeFromPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> InitializeFromPalette(This,pIPalette) ) 

#define IWICPalette_GetType(This,pePaletteType)	\
    ( (This)->lpVtbl -> GetType(This,pePaletteType) ) 

#define IWICPalette_GetColorCount(This,pcCount)	\
    ( (This)->lpVtbl -> GetColorCount(This,pcCount) ) 

#define IWICPalette_GetColors(This,colorCount,pColors,pcActualColors)	\
    ( (This)->lpVtbl -> GetColors(This,colorCount,pColors,pcActualColors) ) 

#define IWICPalette_IsBlackWhite(This,pfIsBlackWhite)	\
    ( (This)->lpVtbl -> IsBlackWhite(This,pfIsBlackWhite) ) 

#define IWICPalette_IsGrayscale(This,pfIsGrayscale)	\
    ( (This)->lpVtbl -> IsGrayscale(This,pfIsGrayscale) ) 

#define IWICPalette_HasAlpha(This,pfHasAlpha)	\
    ( (This)->lpVtbl -> HasAlpha(This,pfHasAlpha) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICPalette_INTERFACE_DEFINED__ */


#ifndef __IWICComponentInfo_INTERFACE_DEFINED__
#define __IWICComponentInfo_INTERFACE_DEFINED__

/* interface IWICComponentInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICComponentInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23bc3f0a-698b-4357-886b-f24d50671334")
    IWICComponentInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetComponentType( 
            /* [out] */ WICComponentType *pType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCLSID( 
            /* [out] */ CLSID *pclsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSigningStatus( 
            /* [out] */ DWORD *pStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAuthor( 
            /* [in] */ UINT cchAuthor,
            /* [size_is][unique][out][in] */ WCHAR *wzAuthor,
            /* [out] */ UINT *pcchActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVendorGUID( 
            /* [out] */ GUID *pguidVendor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [in] */ UINT cchVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzVersion,
            /* [out] */ UINT *pcchActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpecVersion( 
            /* [in] */ UINT cchSpecVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzSpecVersion,
            /* [out] */ UINT *pcchActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFriendlyName( 
            /* [in] */ UINT cchFriendlyName,
            /* [size_is][unique][out][in] */ WCHAR *wzFriendlyName,
            /* [out] */ UINT *pcchActual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICComponentInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICComponentInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICComponentInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICComponentInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )( 
            IWICComponentInfo * This,
            /* [out] */ WICComponentType *pType);
        
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )( 
            IWICComponentInfo * This,
            /* [out] */ CLSID *pclsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )( 
            IWICComponentInfo * This,
            /* [out] */ DWORD *pStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )( 
            IWICComponentInfo * This,
            /* [in] */ UINT cchAuthor,
            /* [size_is][unique][out][in] */ WCHAR *wzAuthor,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )( 
            IWICComponentInfo * This,
            /* [out] */ GUID *pguidVendor);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IWICComponentInfo * This,
            /* [in] */ UINT cchVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )( 
            IWICComponentInfo * This,
            /* [in] */ UINT cchSpecVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzSpecVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )( 
            IWICComponentInfo * This,
            /* [in] */ UINT cchFriendlyName,
            /* [size_is][unique][out][in] */ WCHAR *wzFriendlyName,
            /* [out] */ UINT *pcchActual);
        
        END_INTERFACE
    } IWICComponentInfoVtbl;

    interface IWICComponentInfo
    {
        CONST_VTBL struct IWICComponentInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICComponentInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICComponentInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICComponentInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICComponentInfo_GetComponentType(This,pType)	\
    ( (This)->lpVtbl -> GetComponentType(This,pType) ) 

#define IWICComponentInfo_GetCLSID(This,pclsid)	\
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) ) 

#define IWICComponentInfo_GetSigningStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) ) 

#define IWICComponentInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual)	\
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) ) 

#define IWICComponentInfo_GetVendorGUID(This,pguidVendor)	\
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) ) 

#define IWICComponentInfo_GetVersion(This,cchVersion,wzVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) ) 

#define IWICComponentInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) ) 

#define IWICComponentInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual)	\
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICComponentInfo_INTERFACE_DEFINED__ */


#ifndef __IWICMetadataQueryReader_INTERFACE_DEFINED__
#define __IWICMetadataQueryReader_INTERFACE_DEFINED__

/* interface IWICMetadataQueryReader */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICMetadataQueryReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30989668-e1c9-4597-b395-458eedb808df")
    IWICMetadataQueryReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContainerFormat( 
            /* [out] */ GUID *pguidContainerFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLocation( 
            /* [in] */ UINT cchMaxLength,
            /* [size_is][unique][out][in] */ WCHAR *wzNamespace,
            /* [out] */ UINT *pcchActualLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMetadataByName( 
            /* [in] */ LPCWSTR wzName,
            /* [unique][out][in] */ PROPVARIANT *pvarValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [out] */ IEnumString **ppIEnumString) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICMetadataQueryReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICMetadataQueryReader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICMetadataQueryReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICMetadataQueryReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )( 
            IWICMetadataQueryReader * This,
            /* [out] */ GUID *pguidContainerFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            IWICMetadataQueryReader * This,
            /* [in] */ UINT cchMaxLength,
            /* [size_is][unique][out][in] */ WCHAR *wzNamespace,
            /* [out] */ UINT *pcchActualLength);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadataByName )( 
            IWICMetadataQueryReader * This,
            /* [in] */ LPCWSTR wzName,
            /* [unique][out][in] */ PROPVARIANT *pvarValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IWICMetadataQueryReader * This,
            /* [out] */ IEnumString **ppIEnumString);
        
        END_INTERFACE
    } IWICMetadataQueryReaderVtbl;

    interface IWICMetadataQueryReader
    {
        CONST_VTBL struct IWICMetadataQueryReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICMetadataQueryReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICMetadataQueryReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICMetadataQueryReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICMetadataQueryReader_GetContainerFormat(This,pguidContainerFormat)	\
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) ) 

#define IWICMetadataQueryReader_GetLocation(This,cchMaxLength,wzNamespace,pcchActualLength)	\
    ( (This)->lpVtbl -> GetLocation(This,cchMaxLength,wzNamespace,pcchActualLength) ) 

#define IWICMetadataQueryReader_GetMetadataByName(This,wzName,pvarValue)	\
    ( (This)->lpVtbl -> GetMetadataByName(This,wzName,pvarValue) ) 

#define IWICMetadataQueryReader_GetEnumerator(This,ppIEnumString)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppIEnumString) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICMetadataQueryReader_INTERFACE_DEFINED__ */


#ifndef __IWICMetadataQueryWriter_INTERFACE_DEFINED__
#define __IWICMetadataQueryWriter_INTERFACE_DEFINED__

/* interface IWICMetadataQueryWriter */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICMetadataQueryWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a721791a-0def-4d06-bd91-2118bf1db10b")
    IWICMetadataQueryWriter : public IWICMetadataQueryReader
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetMetadataByName( 
            /* [in] */ LPCWSTR wzName,
            /* [in] */ const PROPVARIANT *pvarValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveMetadataByName( 
            /* [in] */ LPCWSTR wzName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICMetadataQueryWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICMetadataQueryWriter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICMetadataQueryWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICMetadataQueryWriter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )( 
            IWICMetadataQueryWriter * This,
            /* [out] */ GUID *pguidContainerFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            IWICMetadataQueryWriter * This,
            /* [in] */ UINT cchMaxLength,
            /* [size_is][unique][out][in] */ WCHAR *wzNamespace,
            /* [out] */ UINT *pcchActualLength);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadataByName )( 
            IWICMetadataQueryWriter * This,
            /* [in] */ LPCWSTR wzName,
            /* [unique][out][in] */ PROPVARIANT *pvarValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IWICMetadataQueryWriter * This,
            /* [out] */ IEnumString **ppIEnumString);
        
        HRESULT ( STDMETHODCALLTYPE *SetMetadataByName )( 
            IWICMetadataQueryWriter * This,
            /* [in] */ LPCWSTR wzName,
            /* [in] */ const PROPVARIANT *pvarValue);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveMetadataByName )( 
            IWICMetadataQueryWriter * This,
            /* [in] */ LPCWSTR wzName);
        
        END_INTERFACE
    } IWICMetadataQueryWriterVtbl;

    interface IWICMetadataQueryWriter
    {
        CONST_VTBL struct IWICMetadataQueryWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICMetadataQueryWriter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICMetadataQueryWriter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICMetadataQueryWriter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICMetadataQueryWriter_GetContainerFormat(This,pguidContainerFormat)	\
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) ) 

#define IWICMetadataQueryWriter_GetLocation(This,cchMaxLength,wzNamespace,pcchActualLength)	\
    ( (This)->lpVtbl -> GetLocation(This,cchMaxLength,wzNamespace,pcchActualLength) ) 

#define IWICMetadataQueryWriter_GetMetadataByName(This,wzName,pvarValue)	\
    ( (This)->lpVtbl -> GetMetadataByName(This,wzName,pvarValue) ) 

#define IWICMetadataQueryWriter_GetEnumerator(This,ppIEnumString)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppIEnumString) ) 


#define IWICMetadataQueryWriter_SetMetadataByName(This,wzName,pvarValue)	\
    ( (This)->lpVtbl -> SetMetadataByName(This,wzName,pvarValue) ) 

#define IWICMetadataQueryWriter_RemoveMetadataByName(This,wzName)	\
    ( (This)->lpVtbl -> RemoveMetadataByName(This,wzName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICMetadataQueryWriter_INTERFACE_DEFINED__ */


#ifndef __IWICBitmapFrameDecode_INTERFACE_DEFINED__
#define __IWICBitmapFrameDecode_INTERFACE_DEFINED__

/* interface IWICBitmapFrameDecode */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapFrameDecode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3b16811b-6a43-4ec9-a813-3d930c13b940")
    IWICBitmapFrameDecode : public IWICBitmapSource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMetadataQueryReader( 
            /* [out] */ IWICMetadataQueryReader **ppIMetadataQueryReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColorContexts( 
            /* [in] */ UINT cCount,
            /* [size_is][unique][out][in] */ IWICColorContext **ppIColorContexts,
            /* [out] */ UINT *pcActualCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThumbnail( 
            /* [out] */ IWICBitmapSource **ppIThumbnail) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapFrameDecodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapFrameDecode * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapFrameDecode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapFrameDecode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWICBitmapFrameDecode * This,
            /* [out] */ UINT *puiWidth,
            /* [out] */ UINT *puiHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IWICBitmapFrameDecode * This,
            /* [out] */ WICPixelFormatGUID *pPixelFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetResolution )( 
            IWICBitmapFrameDecode * This,
            /* [out] */ double *pDpiX,
            /* [out] */ double *pDpiY);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )( 
            IWICBitmapFrameDecode * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )( 
            IWICBitmapFrameDecode * This,
            /* [in] */ const WICRect *prc,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][out] */ BYTE *pbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryReader )( 
            IWICBitmapFrameDecode * This,
            /* [out] */ IWICMetadataQueryReader **ppIMetadataQueryReader);
        
        HRESULT ( STDMETHODCALLTYPE *GetColorContexts )( 
            IWICBitmapFrameDecode * This,
            /* [in] */ UINT cCount,
            /* [size_is][unique][out][in] */ IWICColorContext **ppIColorContexts,
            /* [out] */ UINT *pcActualCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetThumbnail )( 
            IWICBitmapFrameDecode * This,
            /* [out] */ IWICBitmapSource **ppIThumbnail);
        
        END_INTERFACE
    } IWICBitmapFrameDecodeVtbl;

    interface IWICBitmapFrameDecode
    {
        CONST_VTBL struct IWICBitmapFrameDecodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapFrameDecode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapFrameDecode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapFrameDecode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapFrameDecode_GetSize(This,puiWidth,puiHeight)	\
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) ) 

#define IWICBitmapFrameDecode_GetPixelFormat(This,pPixelFormat)	\
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) ) 

#define IWICBitmapFrameDecode_GetResolution(This,pDpiX,pDpiY)	\
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) ) 

#define IWICBitmapFrameDecode_CopyPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) ) 

#define IWICBitmapFrameDecode_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer)	\
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) ) 


#define IWICBitmapFrameDecode_GetMetadataQueryReader(This,ppIMetadataQueryReader)	\
    ( (This)->lpVtbl -> GetMetadataQueryReader(This,ppIMetadataQueryReader) ) 

#define IWICBitmapFrameDecode_GetColorContexts(This,cCount,ppIColorContexts,pcActualCount)	\
    ( (This)->lpVtbl -> GetColorContexts(This,cCount,ppIColorContexts,pcActualCount) ) 

#define IWICBitmapFrameDecode_GetThumbnail(This,ppIThumbnail)	\
    ( (This)->lpVtbl -> GetThumbnail(This,ppIThumbnail) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapFrameDecode_INTERFACE_DEFINED__ */


#ifndef __IWICBitmapCodecInfo_INTERFACE_DEFINED__
#define __IWICBitmapCodecInfo_INTERFACE_DEFINED__

/* interface IWICBitmapCodecInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapCodecInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e87a44c4-b76e-4c47-8b09-298eb12a2714")
    IWICBitmapCodecInfo : public IWICComponentInfo
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContainerFormat( 
            /* [out] */ GUID *pguidContainerFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPixelFormats( 
            /* [in] */ UINT cFormats,
            /* [size_is][unique][out][in] */ GUID *pguidPixelFormats,
            /* [out] */ UINT *pcActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColorManagementVersion( 
            /* [in] */ UINT cchColorManagementVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzColorManagementVersion,
            /* [out] */ UINT *pcchActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeviceManufacturer( 
            /* [in] */ UINT cchDeviceManufacturer,
            /* [size_is][unique][out][in] */ WCHAR *wzDeviceManufacturer,
            /* [out] */ UINT *pcchActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeviceModels( 
            /* [in] */ UINT cchDeviceModels,
            /* [size_is][unique][out][in] */ WCHAR *wzDeviceModels,
            /* [out] */ UINT *pcchActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMimeTypes( 
            /* [in] */ UINT cchMimeTypes,
            /* [size_is][unique][out][in] */ WCHAR *wzMimeTypes,
            /* [out] */ UINT *pcchActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileExtensions( 
            /* [in] */ UINT cchFileExtensions,
            /* [size_is][unique][out][in] */ WCHAR *wzFileExtensions,
            /* [out] */ UINT *pcchActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportAnimation( 
            /* [out] */ BOOL *pfSupportAnimation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportChromaKey( 
            /* [out] */ BOOL *pfSupportChromaKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportLossless( 
            /* [out] */ BOOL *pfSupportLossless) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportMultiframe( 
            /* [out] */ BOOL *pfSupportMultiframe) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MatchesMimeType( 
            /* [in] */ LPCWSTR wzMimeType,
            /* [out] */ BOOL *pfMatches) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapCodecInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapCodecInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapCodecInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )( 
            IWICBitmapCodecInfo * This,
            /* [out] */ WICComponentType *pType);
        
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )( 
            IWICBitmapCodecInfo * This,
            /* [out] */ CLSID *pclsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )( 
            IWICBitmapCodecInfo * This,
            /* [out] */ DWORD *pStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ UINT cchAuthor,
            /* [size_is][unique][out][in] */ WCHAR *wzAuthor,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )( 
            IWICBitmapCodecInfo * This,
            /* [out] */ GUID *pguidVendor);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ UINT cchVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ UINT cchSpecVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzSpecVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ UINT cchFriendlyName,
            /* [size_is][unique][out][in] */ WCHAR *wzFriendlyName,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )( 
            IWICBitmapCodecInfo * This,
            /* [out] */ GUID *pguidContainerFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormats )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ UINT cFormats,
            /* [size_is][unique][out][in] */ GUID *pguidPixelFormats,
            /* [out] */ UINT *pcActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetColorManagementVersion )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ UINT cchColorManagementVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzColorManagementVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceManufacturer )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ UINT cchDeviceManufacturer,
            /* [size_is][unique][out][in] */ WCHAR *wzDeviceManufacturer,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceModels )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ UINT cchDeviceModels,
            /* [size_is][unique][out][in] */ WCHAR *wzDeviceModels,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetMimeTypes )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ UINT cchMimeTypes,
            /* [size_is][unique][out][in] */ WCHAR *wzMimeTypes,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileExtensions )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ UINT cchFileExtensions,
            /* [size_is][unique][out][in] */ WCHAR *wzFileExtensions,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportAnimation )( 
            IWICBitmapCodecInfo * This,
            /* [out] */ BOOL *pfSupportAnimation);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportChromaKey )( 
            IWICBitmapCodecInfo * This,
            /* [out] */ BOOL *pfSupportChromaKey);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportLossless )( 
            IWICBitmapCodecInfo * This,
            /* [out] */ BOOL *pfSupportLossless);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportMultiframe )( 
            IWICBitmapCodecInfo * This,
            /* [out] */ BOOL *pfSupportMultiframe);
        
        HRESULT ( STDMETHODCALLTYPE *MatchesMimeType )( 
            IWICBitmapCodecInfo * This,
            /* [in] */ LPCWSTR wzMimeType,
            /* [out] */ BOOL *pfMatches);
        
        END_INTERFACE
    } IWICBitmapCodecInfoVtbl;

    interface IWICBitmapCodecInfo
    {
        CONST_VTBL struct IWICBitmapCodecInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapCodecInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapCodecInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapCodecInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapCodecInfo_GetComponentType(This,pType)	\
    ( (This)->lpVtbl -> GetComponentType(This,pType) ) 

#define IWICBitmapCodecInfo_GetCLSID(This,pclsid)	\
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) ) 

#define IWICBitmapCodecInfo_GetSigningStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) ) 

#define IWICBitmapCodecInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual)	\
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) ) 

#define IWICBitmapCodecInfo_GetVendorGUID(This,pguidVendor)	\
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) ) 

#define IWICBitmapCodecInfo_GetVersion(This,cchVersion,wzVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) ) 

#define IWICBitmapCodecInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) ) 

#define IWICBitmapCodecInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual)	\
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) ) 


#define IWICBitmapCodecInfo_GetContainerFormat(This,pguidContainerFormat)	\
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) ) 

#define IWICBitmapCodecInfo_GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual)	\
    ( (This)->lpVtbl -> GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual) ) 

#define IWICBitmapCodecInfo_GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual) ) 

#define IWICBitmapCodecInfo_GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual)	\
    ( (This)->lpVtbl -> GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) ) 

#define IWICBitmapCodecInfo_GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual)	\
    ( (This)->lpVtbl -> GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) ) 

#define IWICBitmapCodecInfo_GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual)	\
    ( (This)->lpVtbl -> GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual) ) 

#define IWICBitmapCodecInfo_GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual)	\
    ( (This)->lpVtbl -> GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual) ) 

#define IWICBitmapCodecInfo_DoesSupportAnimation(This,pfSupportAnimation)	\
    ( (This)->lpVtbl -> DoesSupportAnimation(This,pfSupportAnimation) ) 

#define IWICBitmapCodecInfo_DoesSupportChromaKey(This,pfSupportChromaKey)	\
    ( (This)->lpVtbl -> DoesSupportChromaKey(This,pfSupportChromaKey) ) 

#define IWICBitmapCodecInfo_DoesSupportLossless(This,pfSupportLossless)	\
    ( (This)->lpVtbl -> DoesSupportLossless(This,pfSupportLossless) ) 

#define IWICBitmapCodecInfo_DoesSupportMultiframe(This,pfSupportMultiframe)	\
    ( (This)->lpVtbl -> DoesSupportMultiframe(This,pfSupportMultiframe) ) 

#define IWICBitmapCodecInfo_MatchesMimeType(This,wzMimeType,pfMatches)	\
    ( (This)->lpVtbl -> MatchesMimeType(This,wzMimeType,pfMatches) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapCodecInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wincodec_0000_0011 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0011_v0_0_s_ifspec;

#ifndef __IWICBitmapDecoderInfo_INTERFACE_DEFINED__
#define __IWICBitmapDecoderInfo_INTERFACE_DEFINED__

/* interface IWICBitmapDecoderInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapDecoderInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d8cd007f-d08f-4191-9bfc-236ea7f0e4b5")
    IWICBitmapDecoderInfo : public IWICBitmapCodecInfo
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetPatterns( 
            /* [in] */ UINT cbSizePatterns,
            /* [unique][out][in] */ WICBitmapPattern *pPatterns,
            /* [unique][out][in] */ UINT *pcPatterns,
            /* [unique][out][in] */ UINT *pcbPatternsActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MatchesPattern( 
            /* [in] */ IStream *pIStream,
            /* [out] */ BOOL *pfMatches) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateInstance( 
            /* [out] */ IWICBitmapDecoder **ppIBitmapDecoder) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapDecoderInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapDecoderInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapDecoderInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )( 
            IWICBitmapDecoderInfo * This,
            /* [out] */ WICComponentType *pType);
        
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )( 
            IWICBitmapDecoderInfo * This,
            /* [out] */ CLSID *pclsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )( 
            IWICBitmapDecoderInfo * This,
            /* [out] */ DWORD *pStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cchAuthor,
            /* [size_is][unique][out][in] */ WCHAR *wzAuthor,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )( 
            IWICBitmapDecoderInfo * This,
            /* [out] */ GUID *pguidVendor);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cchVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cchSpecVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzSpecVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cchFriendlyName,
            /* [size_is][unique][out][in] */ WCHAR *wzFriendlyName,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )( 
            IWICBitmapDecoderInfo * This,
            /* [out] */ GUID *pguidContainerFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormats )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cFormats,
            /* [size_is][unique][out][in] */ GUID *pguidPixelFormats,
            /* [out] */ UINT *pcActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetColorManagementVersion )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cchColorManagementVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzColorManagementVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceManufacturer )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cchDeviceManufacturer,
            /* [size_is][unique][out][in] */ WCHAR *wzDeviceManufacturer,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceModels )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cchDeviceModels,
            /* [size_is][unique][out][in] */ WCHAR *wzDeviceModels,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetMimeTypes )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cchMimeTypes,
            /* [size_is][unique][out][in] */ WCHAR *wzMimeTypes,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileExtensions )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cchFileExtensions,
            /* [size_is][unique][out][in] */ WCHAR *wzFileExtensions,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportAnimation )( 
            IWICBitmapDecoderInfo * This,
            /* [out] */ BOOL *pfSupportAnimation);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportChromaKey )( 
            IWICBitmapDecoderInfo * This,
            /* [out] */ BOOL *pfSupportChromaKey);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportLossless )( 
            IWICBitmapDecoderInfo * This,
            /* [out] */ BOOL *pfSupportLossless);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportMultiframe )( 
            IWICBitmapDecoderInfo * This,
            /* [out] */ BOOL *pfSupportMultiframe);
        
        HRESULT ( STDMETHODCALLTYPE *MatchesMimeType )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ LPCWSTR wzMimeType,
            /* [out] */ BOOL *pfMatches);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetPatterns )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ UINT cbSizePatterns,
            /* [unique][out][in] */ WICBitmapPattern *pPatterns,
            /* [unique][out][in] */ UINT *pcPatterns,
            /* [unique][out][in] */ UINT *pcbPatternsActual);
        
        HRESULT ( STDMETHODCALLTYPE *MatchesPattern )( 
            IWICBitmapDecoderInfo * This,
            /* [in] */ IStream *pIStream,
            /* [out] */ BOOL *pfMatches);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )( 
            IWICBitmapDecoderInfo * This,
            /* [out] */ IWICBitmapDecoder **ppIBitmapDecoder);
        
        END_INTERFACE
    } IWICBitmapDecoderInfoVtbl;

    interface IWICBitmapDecoderInfo
    {
        CONST_VTBL struct IWICBitmapDecoderInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapDecoderInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapDecoderInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapDecoderInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapDecoderInfo_GetComponentType(This,pType)	\
    ( (This)->lpVtbl -> GetComponentType(This,pType) ) 

#define IWICBitmapDecoderInfo_GetCLSID(This,pclsid)	\
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) ) 

#define IWICBitmapDecoderInfo_GetSigningStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) ) 

#define IWICBitmapDecoderInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual)	\
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) ) 

#define IWICBitmapDecoderInfo_GetVendorGUID(This,pguidVendor)	\
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) ) 

#define IWICBitmapDecoderInfo_GetVersion(This,cchVersion,wzVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) ) 

#define IWICBitmapDecoderInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) ) 

#define IWICBitmapDecoderInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual)	\
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) ) 


#define IWICBitmapDecoderInfo_GetContainerFormat(This,pguidContainerFormat)	\
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) ) 

#define IWICBitmapDecoderInfo_GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual)	\
    ( (This)->lpVtbl -> GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual) ) 

#define IWICBitmapDecoderInfo_GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual) ) 

#define IWICBitmapDecoderInfo_GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual)	\
    ( (This)->lpVtbl -> GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) ) 

#define IWICBitmapDecoderInfo_GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual)	\
    ( (This)->lpVtbl -> GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) ) 

#define IWICBitmapDecoderInfo_GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual)	\
    ( (This)->lpVtbl -> GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual) ) 

#define IWICBitmapDecoderInfo_GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual)	\
    ( (This)->lpVtbl -> GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual) ) 

#define IWICBitmapDecoderInfo_DoesSupportAnimation(This,pfSupportAnimation)	\
    ( (This)->lpVtbl -> DoesSupportAnimation(This,pfSupportAnimation) ) 

#define IWICBitmapDecoderInfo_DoesSupportChromaKey(This,pfSupportChromaKey)	\
    ( (This)->lpVtbl -> DoesSupportChromaKey(This,pfSupportChromaKey) ) 

#define IWICBitmapDecoderInfo_DoesSupportLossless(This,pfSupportLossless)	\
    ( (This)->lpVtbl -> DoesSupportLossless(This,pfSupportLossless) ) 

#define IWICBitmapDecoderInfo_DoesSupportMultiframe(This,pfSupportMultiframe)	\
    ( (This)->lpVtbl -> DoesSupportMultiframe(This,pfSupportMultiframe) ) 

#define IWICBitmapDecoderInfo_MatchesMimeType(This,wzMimeType,pfMatches)	\
    ( (This)->lpVtbl -> MatchesMimeType(This,wzMimeType,pfMatches) ) 


#define IWICBitmapDecoderInfo_GetPatterns(This,cbSizePatterns,pPatterns,pcPatterns,pcbPatternsActual)	\
    ( (This)->lpVtbl -> GetPatterns(This,cbSizePatterns,pPatterns,pcPatterns,pcbPatternsActual) ) 

#define IWICBitmapDecoderInfo_MatchesPattern(This,pIStream,pfMatches)	\
    ( (This)->lpVtbl -> MatchesPattern(This,pIStream,pfMatches) ) 

#define IWICBitmapDecoderInfo_CreateInstance(This,ppIBitmapDecoder)	\
    ( (This)->lpVtbl -> CreateInstance(This,ppIBitmapDecoder) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapDecoderInfo_INTERFACE_DEFINED__ */


#ifndef __IWICBitmapDecoder_INTERFACE_DEFINED__
#define __IWICBitmapDecoder_INTERFACE_DEFINED__

/* interface IWICBitmapDecoder */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapDecoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9edde9e7-8dee-47ea-99df-e6faf2ed44bf")
    IWICBitmapDecoder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryCapability( 
            /* [in] */ IStream *pIStream,
            /* [out] */ DWORD *pdwCapability) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IStream *pIStream,
            /* [in] */ WICDecodeOptions cacheOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContainerFormat( 
            /* [out] */ GUID *pguidContainerFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDecoderInfo( 
            /* [out] */ IWICBitmapDecoderInfo **ppIDecoderInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyPalette( 
            /* [in] */ IWICPalette *pIPalette) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMetadataQueryReader( 
            /* [out] */ IWICMetadataQueryReader **ppIMetadataQueryReader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreview( 
            /* [out] */ IWICBitmapSource **ppIBitmapSource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColorContexts( 
            /* [in] */ UINT cCount,
            /* [size_is][unique][out][in] */ IWICColorContext **ppIColorContexts,
            /* [out] */ UINT *pcActualCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThumbnail( 
            /* [out] */ IWICBitmapSource **ppIThumbnail) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameCount( 
            /* [out] */ UINT *pCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrame( 
            /* [in] */ UINT index,
            /* [out] */ IWICBitmapFrameDecode **ppIBitmapFrame) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapDecoderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapDecoder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapDecoder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapDecoder * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryCapability )( 
            IWICBitmapDecoder * This,
            /* [in] */ IStream *pIStream,
            /* [out] */ DWORD *pdwCapability);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWICBitmapDecoder * This,
            /* [in] */ IStream *pIStream,
            /* [in] */ WICDecodeOptions cacheOptions);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )( 
            IWICBitmapDecoder * This,
            /* [out] */ GUID *pguidContainerFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetDecoderInfo )( 
            IWICBitmapDecoder * This,
            /* [out] */ IWICBitmapDecoderInfo **ppIDecoderInfo);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )( 
            IWICBitmapDecoder * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryReader )( 
            IWICBitmapDecoder * This,
            /* [out] */ IWICMetadataQueryReader **ppIMetadataQueryReader);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreview )( 
            IWICBitmapDecoder * This,
            /* [out] */ IWICBitmapSource **ppIBitmapSource);
        
        HRESULT ( STDMETHODCALLTYPE *GetColorContexts )( 
            IWICBitmapDecoder * This,
            /* [in] */ UINT cCount,
            /* [size_is][unique][out][in] */ IWICColorContext **ppIColorContexts,
            /* [out] */ UINT *pcActualCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetThumbnail )( 
            IWICBitmapDecoder * This,
            /* [out] */ IWICBitmapSource **ppIThumbnail);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameCount )( 
            IWICBitmapDecoder * This,
            /* [out] */ UINT *pCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrame )( 
            IWICBitmapDecoder * This,
            /* [in] */ UINT index,
            /* [out] */ IWICBitmapFrameDecode **ppIBitmapFrame);
        
        END_INTERFACE
    } IWICBitmapDecoderVtbl;

    interface IWICBitmapDecoder
    {
        CONST_VTBL struct IWICBitmapDecoderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapDecoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapDecoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapDecoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapDecoder_QueryCapability(This,pIStream,pdwCapability)	\
    ( (This)->lpVtbl -> QueryCapability(This,pIStream,pdwCapability) ) 

#define IWICBitmapDecoder_Initialize(This,pIStream,cacheOptions)	\
    ( (This)->lpVtbl -> Initialize(This,pIStream,cacheOptions) ) 

#define IWICBitmapDecoder_GetContainerFormat(This,pguidContainerFormat)	\
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) ) 

#define IWICBitmapDecoder_GetDecoderInfo(This,ppIDecoderInfo)	\
    ( (This)->lpVtbl -> GetDecoderInfo(This,ppIDecoderInfo) ) 

#define IWICBitmapDecoder_CopyPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) ) 

#define IWICBitmapDecoder_GetMetadataQueryReader(This,ppIMetadataQueryReader)	\
    ( (This)->lpVtbl -> GetMetadataQueryReader(This,ppIMetadataQueryReader) ) 

#define IWICBitmapDecoder_GetPreview(This,ppIBitmapSource)	\
    ( (This)->lpVtbl -> GetPreview(This,ppIBitmapSource) ) 

#define IWICBitmapDecoder_GetColorContexts(This,cCount,ppIColorContexts,pcActualCount)	\
    ( (This)->lpVtbl -> GetColorContexts(This,cCount,ppIColorContexts,pcActualCount) ) 

#define IWICBitmapDecoder_GetThumbnail(This,ppIThumbnail)	\
    ( (This)->lpVtbl -> GetThumbnail(This,ppIThumbnail) ) 

#define IWICBitmapDecoder_GetFrameCount(This,pCount)	\
    ( (This)->lpVtbl -> GetFrameCount(This,pCount) ) 

#define IWICBitmapDecoder_GetFrame(This,index,ppIBitmapFrame)	\
    ( (This)->lpVtbl -> GetFrame(This,index,ppIBitmapFrame) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapDecoder_INTERFACE_DEFINED__ */


#ifndef __IWICBitmapFrameEncode_INTERFACE_DEFINED__
#define __IWICBitmapFrameEncode_INTERFACE_DEFINED__

/* interface IWICBitmapFrameEncode */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapFrameEncode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000105-a8f2-4877-ba0a-fd2b6645fb94")
    IWICBitmapFrameEncode : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [unique][in] */ IPropertyBag2 *pIEncoderOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSize( 
            /* [in] */ UINT uiWidth,
            /* [in] */ UINT uiHeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetResolution( 
            /* [in] */ double dpiX,
            /* [in] */ double dpiY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPixelFormat( 
            /* [out][in] */ WICPixelFormatGUID *pPixelFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColorContexts( 
            /* [in] */ UINT cCount,
            /* [size_is][in] */ IWICColorContext **ppIColorContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPalette( 
            /* [in] */ IWICPalette *pIPalette) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetThumbnail( 
            /* [in] */ IWICBitmapSource *pIThumbnail) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WritePixels( 
            /* [in] */ UINT lineCount,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][in] */ BYTE *pbPixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteSource( 
            /* [in] */ IWICBitmapSource *pIBitmapSource,
            /* [unique][in] */ WICRect *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMetadataQueryWriter( 
            IWICMetadataQueryWriter **ppIMetadataQueryWriter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapFrameEncodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapFrameEncode * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapFrameEncode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapFrameEncode * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWICBitmapFrameEncode * This,
            /* [unique][in] */ IPropertyBag2 *pIEncoderOptions);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            IWICBitmapFrameEncode * This,
            /* [in] */ UINT uiWidth,
            /* [in] */ UINT uiHeight);
        
        HRESULT ( STDMETHODCALLTYPE *SetResolution )( 
            IWICBitmapFrameEncode * This,
            /* [in] */ double dpiX,
            /* [in] */ double dpiY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPixelFormat )( 
            IWICBitmapFrameEncode * This,
            /* [out][in] */ WICPixelFormatGUID *pPixelFormat);
        
        HRESULT ( STDMETHODCALLTYPE *SetColorContexts )( 
            IWICBitmapFrameEncode * This,
            /* [in] */ UINT cCount,
            /* [size_is][in] */ IWICColorContext **ppIColorContext);
        
        HRESULT ( STDMETHODCALLTYPE *SetPalette )( 
            IWICBitmapFrameEncode * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *SetThumbnail )( 
            IWICBitmapFrameEncode * This,
            /* [in] */ IWICBitmapSource *pIThumbnail);
        
        HRESULT ( STDMETHODCALLTYPE *WritePixels )( 
            IWICBitmapFrameEncode * This,
            /* [in] */ UINT lineCount,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][in] */ BYTE *pbPixels);
        
        HRESULT ( STDMETHODCALLTYPE *WriteSource )( 
            IWICBitmapFrameEncode * This,
            /* [in] */ IWICBitmapSource *pIBitmapSource,
            /* [unique][in] */ WICRect *prc);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IWICBitmapFrameEncode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryWriter )( 
            IWICBitmapFrameEncode * This,
            IWICMetadataQueryWriter **ppIMetadataQueryWriter);
        
        END_INTERFACE
    } IWICBitmapFrameEncodeVtbl;

    interface IWICBitmapFrameEncode
    {
        CONST_VTBL struct IWICBitmapFrameEncodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapFrameEncode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapFrameEncode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapFrameEncode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapFrameEncode_Initialize(This,pIEncoderOptions)	\
    ( (This)->lpVtbl -> Initialize(This,pIEncoderOptions) ) 

#define IWICBitmapFrameEncode_SetSize(This,uiWidth,uiHeight)	\
    ( (This)->lpVtbl -> SetSize(This,uiWidth,uiHeight) ) 

#define IWICBitmapFrameEncode_SetResolution(This,dpiX,dpiY)	\
    ( (This)->lpVtbl -> SetResolution(This,dpiX,dpiY) ) 

#define IWICBitmapFrameEncode_SetPixelFormat(This,pPixelFormat)	\
    ( (This)->lpVtbl -> SetPixelFormat(This,pPixelFormat) ) 

#define IWICBitmapFrameEncode_SetColorContexts(This,cCount,ppIColorContext)	\
    ( (This)->lpVtbl -> SetColorContexts(This,cCount,ppIColorContext) ) 

#define IWICBitmapFrameEncode_SetPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> SetPalette(This,pIPalette) ) 

#define IWICBitmapFrameEncode_SetThumbnail(This,pIThumbnail)	\
    ( (This)->lpVtbl -> SetThumbnail(This,pIThumbnail) ) 

#define IWICBitmapFrameEncode_WritePixels(This,lineCount,cbStride,cbBufferSize,pbPixels)	\
    ( (This)->lpVtbl -> WritePixels(This,lineCount,cbStride,cbBufferSize,pbPixels) ) 

#define IWICBitmapFrameEncode_WriteSource(This,pIBitmapSource,prc)	\
    ( (This)->lpVtbl -> WriteSource(This,pIBitmapSource,prc) ) 

#define IWICBitmapFrameEncode_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#define IWICBitmapFrameEncode_GetMetadataQueryWriter(This,ppIMetadataQueryWriter)	\
    ( (This)->lpVtbl -> GetMetadataQueryWriter(This,ppIMetadataQueryWriter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapFrameEncode_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wincodec_0000_0014 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0014_v0_0_s_ifspec;

#ifndef __IWICBitmapEncoderInfo_INTERFACE_DEFINED__
#define __IWICBitmapEncoderInfo_INTERFACE_DEFINED__

/* interface IWICBitmapEncoderInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapEncoderInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94c9b4ee-a09f-4f92-8a1e-4a9bce7e76fb")
    IWICBitmapEncoderInfo : public IWICBitmapCodecInfo
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateInstance( 
            /* [out] */ IWICBitmapEncoder **ppIBitmapEncoder) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapEncoderInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapEncoderInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapEncoderInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )( 
            IWICBitmapEncoderInfo * This,
            /* [out] */ WICComponentType *pType);
        
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )( 
            IWICBitmapEncoderInfo * This,
            /* [out] */ CLSID *pclsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )( 
            IWICBitmapEncoderInfo * This,
            /* [out] */ DWORD *pStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ UINT cchAuthor,
            /* [size_is][unique][out][in] */ WCHAR *wzAuthor,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )( 
            IWICBitmapEncoderInfo * This,
            /* [out] */ GUID *pguidVendor);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ UINT cchVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ UINT cchSpecVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzSpecVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ UINT cchFriendlyName,
            /* [size_is][unique][out][in] */ WCHAR *wzFriendlyName,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )( 
            IWICBitmapEncoderInfo * This,
            /* [out] */ GUID *pguidContainerFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormats )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ UINT cFormats,
            /* [size_is][unique][out][in] */ GUID *pguidPixelFormats,
            /* [out] */ UINT *pcActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetColorManagementVersion )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ UINT cchColorManagementVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzColorManagementVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceManufacturer )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ UINT cchDeviceManufacturer,
            /* [size_is][unique][out][in] */ WCHAR *wzDeviceManufacturer,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceModels )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ UINT cchDeviceModels,
            /* [size_is][unique][out][in] */ WCHAR *wzDeviceModels,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetMimeTypes )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ UINT cchMimeTypes,
            /* [size_is][unique][out][in] */ WCHAR *wzMimeTypes,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileExtensions )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ UINT cchFileExtensions,
            /* [size_is][unique][out][in] */ WCHAR *wzFileExtensions,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportAnimation )( 
            IWICBitmapEncoderInfo * This,
            /* [out] */ BOOL *pfSupportAnimation);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportChromaKey )( 
            IWICBitmapEncoderInfo * This,
            /* [out] */ BOOL *pfSupportChromaKey);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportLossless )( 
            IWICBitmapEncoderInfo * This,
            /* [out] */ BOOL *pfSupportLossless);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportMultiframe )( 
            IWICBitmapEncoderInfo * This,
            /* [out] */ BOOL *pfSupportMultiframe);
        
        HRESULT ( STDMETHODCALLTYPE *MatchesMimeType )( 
            IWICBitmapEncoderInfo * This,
            /* [in] */ LPCWSTR wzMimeType,
            /* [out] */ BOOL *pfMatches);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )( 
            IWICBitmapEncoderInfo * This,
            /* [out] */ IWICBitmapEncoder **ppIBitmapEncoder);
        
        END_INTERFACE
    } IWICBitmapEncoderInfoVtbl;

    interface IWICBitmapEncoderInfo
    {
        CONST_VTBL struct IWICBitmapEncoderInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapEncoderInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapEncoderInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapEncoderInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapEncoderInfo_GetComponentType(This,pType)	\
    ( (This)->lpVtbl -> GetComponentType(This,pType) ) 

#define IWICBitmapEncoderInfo_GetCLSID(This,pclsid)	\
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) ) 

#define IWICBitmapEncoderInfo_GetSigningStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) ) 

#define IWICBitmapEncoderInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual)	\
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) ) 

#define IWICBitmapEncoderInfo_GetVendorGUID(This,pguidVendor)	\
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) ) 

#define IWICBitmapEncoderInfo_GetVersion(This,cchVersion,wzVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) ) 

#define IWICBitmapEncoderInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) ) 

#define IWICBitmapEncoderInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual)	\
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) ) 


#define IWICBitmapEncoderInfo_GetContainerFormat(This,pguidContainerFormat)	\
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) ) 

#define IWICBitmapEncoderInfo_GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual)	\
    ( (This)->lpVtbl -> GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual) ) 

#define IWICBitmapEncoderInfo_GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual) ) 

#define IWICBitmapEncoderInfo_GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual)	\
    ( (This)->lpVtbl -> GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) ) 

#define IWICBitmapEncoderInfo_GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual)	\
    ( (This)->lpVtbl -> GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) ) 

#define IWICBitmapEncoderInfo_GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual)	\
    ( (This)->lpVtbl -> GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual) ) 

#define IWICBitmapEncoderInfo_GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual)	\
    ( (This)->lpVtbl -> GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual) ) 

#define IWICBitmapEncoderInfo_DoesSupportAnimation(This,pfSupportAnimation)	\
    ( (This)->lpVtbl -> DoesSupportAnimation(This,pfSupportAnimation) ) 

#define IWICBitmapEncoderInfo_DoesSupportChromaKey(This,pfSupportChromaKey)	\
    ( (This)->lpVtbl -> DoesSupportChromaKey(This,pfSupportChromaKey) ) 

#define IWICBitmapEncoderInfo_DoesSupportLossless(This,pfSupportLossless)	\
    ( (This)->lpVtbl -> DoesSupportLossless(This,pfSupportLossless) ) 

#define IWICBitmapEncoderInfo_DoesSupportMultiframe(This,pfSupportMultiframe)	\
    ( (This)->lpVtbl -> DoesSupportMultiframe(This,pfSupportMultiframe) ) 

#define IWICBitmapEncoderInfo_MatchesMimeType(This,wzMimeType,pfMatches)	\
    ( (This)->lpVtbl -> MatchesMimeType(This,wzMimeType,pfMatches) ) 


#define IWICBitmapEncoderInfo_CreateInstance(This,ppIBitmapEncoder)	\
    ( (This)->lpVtbl -> CreateInstance(This,ppIBitmapEncoder) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapEncoderInfo_INTERFACE_DEFINED__ */


#ifndef __IWICBitmapEncoder_INTERFACE_DEFINED__
#define __IWICBitmapEncoder_INTERFACE_DEFINED__

/* interface IWICBitmapEncoder */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapEncoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000103-a8f2-4877-ba0a-fd2b6645fb94")
    IWICBitmapEncoder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IStream *pIStream,
            /* [in] */ WICBitmapEncoderCacheOption cacheOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContainerFormat( 
            /* [out] */ GUID *pguidContainerFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEncoderInfo( 
            /* [out] */ IWICBitmapEncoderInfo **ppIEncoderInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColorContexts( 
            /* [in] */ UINT cCount,
            /* [size_is][in] */ IWICColorContext **ppIColorContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPalette( 
            /* [in] */ IWICPalette *pIPalette) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetThumbnail( 
            /* [in] */ IWICBitmapSource *pIThumbnail) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreview( 
            /* [in] */ IWICBitmapSource *pIPreview) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateNewFrame( 
            /* [out] */ IWICBitmapFrameEncode **ppIFrameEncode,
            /* [unique][out][in] */ IPropertyBag2 **ppIEncoderOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMetadataQueryWriter( 
            /* [out] */ IWICMetadataQueryWriter **ppIMetadataQueryWriter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapEncoderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapEncoder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapEncoder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapEncoder * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWICBitmapEncoder * This,
            /* [in] */ IStream *pIStream,
            /* [in] */ WICBitmapEncoderCacheOption cacheOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainerFormat )( 
            IWICBitmapEncoder * This,
            /* [out] */ GUID *pguidContainerFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetEncoderInfo )( 
            IWICBitmapEncoder * This,
            /* [out] */ IWICBitmapEncoderInfo **ppIEncoderInfo);
        
        HRESULT ( STDMETHODCALLTYPE *SetColorContexts )( 
            IWICBitmapEncoder * This,
            /* [in] */ UINT cCount,
            /* [size_is][in] */ IWICColorContext **ppIColorContext);
        
        HRESULT ( STDMETHODCALLTYPE *SetPalette )( 
            IWICBitmapEncoder * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *SetThumbnail )( 
            IWICBitmapEncoder * This,
            /* [in] */ IWICBitmapSource *pIThumbnail);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreview )( 
            IWICBitmapEncoder * This,
            /* [in] */ IWICBitmapSource *pIPreview);
        
        HRESULT ( STDMETHODCALLTYPE *CreateNewFrame )( 
            IWICBitmapEncoder * This,
            /* [out] */ IWICBitmapFrameEncode **ppIFrameEncode,
            /* [unique][out][in] */ IPropertyBag2 **ppIEncoderOptions);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IWICBitmapEncoder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryWriter )( 
            IWICBitmapEncoder * This,
            /* [out] */ IWICMetadataQueryWriter **ppIMetadataQueryWriter);
        
        END_INTERFACE
    } IWICBitmapEncoderVtbl;

    interface IWICBitmapEncoder
    {
        CONST_VTBL struct IWICBitmapEncoderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapEncoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapEncoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapEncoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapEncoder_Initialize(This,pIStream,cacheOption)	\
    ( (This)->lpVtbl -> Initialize(This,pIStream,cacheOption) ) 

#define IWICBitmapEncoder_GetContainerFormat(This,pguidContainerFormat)	\
    ( (This)->lpVtbl -> GetContainerFormat(This,pguidContainerFormat) ) 

#define IWICBitmapEncoder_GetEncoderInfo(This,ppIEncoderInfo)	\
    ( (This)->lpVtbl -> GetEncoderInfo(This,ppIEncoderInfo) ) 

#define IWICBitmapEncoder_SetColorContexts(This,cCount,ppIColorContext)	\
    ( (This)->lpVtbl -> SetColorContexts(This,cCount,ppIColorContext) ) 

#define IWICBitmapEncoder_SetPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> SetPalette(This,pIPalette) ) 

#define IWICBitmapEncoder_SetThumbnail(This,pIThumbnail)	\
    ( (This)->lpVtbl -> SetThumbnail(This,pIThumbnail) ) 

#define IWICBitmapEncoder_SetPreview(This,pIPreview)	\
    ( (This)->lpVtbl -> SetPreview(This,pIPreview) ) 

#define IWICBitmapEncoder_CreateNewFrame(This,ppIFrameEncode,ppIEncoderOptions)	\
    ( (This)->lpVtbl -> CreateNewFrame(This,ppIFrameEncode,ppIEncoderOptions) ) 

#define IWICBitmapEncoder_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#define IWICBitmapEncoder_GetMetadataQueryWriter(This,ppIMetadataQueryWriter)	\
    ( (This)->lpVtbl -> GetMetadataQueryWriter(This,ppIMetadataQueryWriter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapEncoder_INTERFACE_DEFINED__ */


#ifndef __IWICFormatConverter_INTERFACE_DEFINED__
#define __IWICFormatConverter_INTERFACE_DEFINED__

/* interface IWICFormatConverter */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICFormatConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000301-a8f2-4877-ba0a-fd2b6645fb94")
    IWICFormatConverter : public IWICBitmapSource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWICBitmapSource *pISource,
            /* [in] */ REFWICPixelFormatGUID dstFormat,
            /* [in] */ WICBitmapDitherType dither,
            /* [in] */ IWICPalette *pIPalette,
            /* [in] */ double alphaThresholdPercent,
            /* [in] */ WICBitmapPaletteType paletteTranslate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanConvert( 
            /* [in] */ REFWICPixelFormatGUID srcPixelFormat,
            /* [in] */ REFWICPixelFormatGUID dstPixelFormat,
            /* [out] */ BOOL *pfCanConvert) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICFormatConverterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICFormatConverter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICFormatConverter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICFormatConverter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWICFormatConverter * This,
            /* [out] */ UINT *puiWidth,
            /* [out] */ UINT *puiHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IWICFormatConverter * This,
            /* [out] */ WICPixelFormatGUID *pPixelFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetResolution )( 
            IWICFormatConverter * This,
            /* [out] */ double *pDpiX,
            /* [out] */ double *pDpiY);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )( 
            IWICFormatConverter * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )( 
            IWICFormatConverter * This,
            /* [in] */ const WICRect *prc,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][out] */ BYTE *pbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWICFormatConverter * This,
            /* [in] */ IWICBitmapSource *pISource,
            /* [in] */ REFWICPixelFormatGUID dstFormat,
            /* [in] */ WICBitmapDitherType dither,
            /* [in] */ IWICPalette *pIPalette,
            /* [in] */ double alphaThresholdPercent,
            /* [in] */ WICBitmapPaletteType paletteTranslate);
        
        HRESULT ( STDMETHODCALLTYPE *CanConvert )( 
            IWICFormatConverter * This,
            /* [in] */ REFWICPixelFormatGUID srcPixelFormat,
            /* [in] */ REFWICPixelFormatGUID dstPixelFormat,
            /* [out] */ BOOL *pfCanConvert);
        
        END_INTERFACE
    } IWICFormatConverterVtbl;

    interface IWICFormatConverter
    {
        CONST_VTBL struct IWICFormatConverterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICFormatConverter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICFormatConverter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICFormatConverter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICFormatConverter_GetSize(This,puiWidth,puiHeight)	\
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) ) 

#define IWICFormatConverter_GetPixelFormat(This,pPixelFormat)	\
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) ) 

#define IWICFormatConverter_GetResolution(This,pDpiX,pDpiY)	\
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) ) 

#define IWICFormatConverter_CopyPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) ) 

#define IWICFormatConverter_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer)	\
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) ) 


#define IWICFormatConverter_Initialize(This,pISource,dstFormat,dither,pIPalette,alphaThresholdPercent,paletteTranslate)	\
    ( (This)->lpVtbl -> Initialize(This,pISource,dstFormat,dither,pIPalette,alphaThresholdPercent,paletteTranslate) ) 

#define IWICFormatConverter_CanConvert(This,srcPixelFormat,dstPixelFormat,pfCanConvert)	\
    ( (This)->lpVtbl -> CanConvert(This,srcPixelFormat,dstPixelFormat,pfCanConvert) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICFormatConverter_INTERFACE_DEFINED__ */


#ifndef __IWICFormatConverterInfo_INTERFACE_DEFINED__
#define __IWICFormatConverterInfo_INTERFACE_DEFINED__

/* interface IWICFormatConverterInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICFormatConverterInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9f34fb65-13f4-4f15-bc57-3726b5e53d9f")
    IWICFormatConverterInfo : public IWICComponentInfo
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPixelFormats( 
            /* [in] */ UINT cFormats,
            /* [size_is][out][in] */ WICPixelFormatGUID *pPixelFormatGUIDs,
            /* [out] */ UINT *pcActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateInstance( 
            /* [out] */ IWICFormatConverter **ppIConverter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICFormatConverterInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICFormatConverterInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICFormatConverterInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICFormatConverterInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )( 
            IWICFormatConverterInfo * This,
            /* [out] */ WICComponentType *pType);
        
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )( 
            IWICFormatConverterInfo * This,
            /* [out] */ CLSID *pclsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetSigningStatus )( 
            IWICFormatConverterInfo * This,
            /* [out] */ DWORD *pStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetAuthor )( 
            IWICFormatConverterInfo * This,
            /* [in] */ UINT cchAuthor,
            /* [size_is][unique][out][in] */ WCHAR *wzAuthor,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetVendorGUID )( 
            IWICFormatConverterInfo * This,
            /* [out] */ GUID *pguidVendor);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IWICFormatConverterInfo * This,
            /* [in] */ UINT cchVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecVersion )( 
            IWICFormatConverterInfo * This,
            /* [in] */ UINT cchSpecVersion,
            /* [size_is][unique][out][in] */ WCHAR *wzSpecVersion,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )( 
            IWICFormatConverterInfo * This,
            /* [in] */ UINT cchFriendlyName,
            /* [size_is][unique][out][in] */ WCHAR *wzFriendlyName,
            /* [out] */ UINT *pcchActual);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormats )( 
            IWICFormatConverterInfo * This,
            /* [in] */ UINT cFormats,
            /* [size_is][out][in] */ WICPixelFormatGUID *pPixelFormatGUIDs,
            /* [out] */ UINT *pcActual);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )( 
            IWICFormatConverterInfo * This,
            /* [out] */ IWICFormatConverter **ppIConverter);
        
        END_INTERFACE
    } IWICFormatConverterInfoVtbl;

    interface IWICFormatConverterInfo
    {
        CONST_VTBL struct IWICFormatConverterInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICFormatConverterInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICFormatConverterInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICFormatConverterInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICFormatConverterInfo_GetComponentType(This,pType)	\
    ( (This)->lpVtbl -> GetComponentType(This,pType) ) 

#define IWICFormatConverterInfo_GetCLSID(This,pclsid)	\
    ( (This)->lpVtbl -> GetCLSID(This,pclsid) ) 

#define IWICFormatConverterInfo_GetSigningStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetSigningStatus(This,pStatus) ) 

#define IWICFormatConverterInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual)	\
    ( (This)->lpVtbl -> GetAuthor(This,cchAuthor,wzAuthor,pcchActual) ) 

#define IWICFormatConverterInfo_GetVendorGUID(This,pguidVendor)	\
    ( (This)->lpVtbl -> GetVendorGUID(This,pguidVendor) ) 

#define IWICFormatConverterInfo_GetVersion(This,cchVersion,wzVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetVersion(This,cchVersion,wzVersion,pcchActual) ) 

#define IWICFormatConverterInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual)	\
    ( (This)->lpVtbl -> GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) ) 

#define IWICFormatConverterInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual)	\
    ( (This)->lpVtbl -> GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) ) 


#define IWICFormatConverterInfo_GetPixelFormats(This,cFormats,pPixelFormatGUIDs,pcActual)	\
    ( (This)->lpVtbl -> GetPixelFormats(This,cFormats,pPixelFormatGUIDs,pcActual) ) 

#define IWICFormatConverterInfo_CreateInstance(This,ppIConverter)	\
    ( (This)->lpVtbl -> CreateInstance(This,ppIConverter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICFormatConverterInfo_INTERFACE_DEFINED__ */


#ifndef __IWICStream_INTERFACE_DEFINED__
#define __IWICStream_INTERFACE_DEFINED__

/* interface IWICStream */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("135ff860-22b7-4ddf-b0f6-218f4f299a43")
    IWICStream : public IStream
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromIStream( 
            /* [in] */ IStream *pIStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromFilename( 
            /* [in] */ LPCWSTR wzFileName,
            /* [in] */ DWORD dwAccessMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromMemory( 
            /* [size_is][in] */ BYTE *pbBuffer,
            /* [in] */ DWORD cbBufferSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromIStreamRegion( 
            /* [in] */ IStream *pIStream,
            /* [in] */ ULARGE_INTEGER ulOffset,
            /* [in] */ ULARGE_INTEGER ulMaxSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICStream * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICStream * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IWICStream * This,
            /* [annotation] */ 
            _Out_writes_bytes_to_(cb, *pcbRead)  void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbRead);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            IWICStream * This,
            /* [annotation] */ 
            _In_reads_bytes_(cb)  const void *pv,
            /* [annotation][in] */ 
            _In_  ULONG cb,
            /* [annotation] */ 
            _Out_opt_  ULONG *pcbWritten);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Seek )( 
            IWICStream * This,
            /* [in] */ LARGE_INTEGER dlibMove,
            /* [in] */ DWORD dwOrigin,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *plibNewPosition);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            IWICStream * This,
            /* [in] */ ULARGE_INTEGER libNewSize);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            IWICStream * This,
            /* [annotation][unique][in] */ 
            _In_  IStream *pstm,
            /* [in] */ ULARGE_INTEGER cb,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbRead,
            /* [annotation] */ 
            _Out_opt_  ULARGE_INTEGER *pcbWritten);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IWICStream * This,
            /* [in] */ DWORD grfCommitFlags);
        
        HRESULT ( STDMETHODCALLTYPE *Revert )( 
            IWICStream * This);
        
        HRESULT ( STDMETHODCALLTYPE *LockRegion )( 
            IWICStream * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )( 
            IWICStream * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        HRESULT ( STDMETHODCALLTYPE *Stat )( 
            IWICStream * This,
            /* [out] */ STATSTG *pstatstg,
            /* [in] */ DWORD grfStatFlag);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IWICStream * This,
            /* [out] */ IStream **ppstm);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromIStream )( 
            IWICStream * This,
            /* [in] */ IStream *pIStream);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromFilename )( 
            IWICStream * This,
            /* [in] */ LPCWSTR wzFileName,
            /* [in] */ DWORD dwAccessMode);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromMemory )( 
            IWICStream * This,
            /* [size_is][in] */ BYTE *pbBuffer,
            /* [in] */ DWORD cbBufferSize);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromIStreamRegion )( 
            IWICStream * This,
            /* [in] */ IStream *pIStream,
            /* [in] */ ULARGE_INTEGER ulOffset,
            /* [in] */ ULARGE_INTEGER ulMaxSize);
        
        END_INTERFACE
    } IWICStreamVtbl;

    interface IWICStream
    {
        CONST_VTBL struct IWICStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICStream_Read(This,pv,cb,pcbRead)	\
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) ) 

#define IWICStream_Write(This,pv,cb,pcbWritten)	\
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) ) 


#define IWICStream_Seek(This,dlibMove,dwOrigin,plibNewPosition)	\
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) ) 

#define IWICStream_SetSize(This,libNewSize)	\
    ( (This)->lpVtbl -> SetSize(This,libNewSize) ) 

#define IWICStream_CopyTo(This,pstm,cb,pcbRead,pcbWritten)	\
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) ) 

#define IWICStream_Commit(This,grfCommitFlags)	\
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) ) 

#define IWICStream_Revert(This)	\
    ( (This)->lpVtbl -> Revert(This) ) 

#define IWICStream_LockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) ) 

#define IWICStream_UnlockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) ) 

#define IWICStream_Stat(This,pstatstg,grfStatFlag)	\
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) ) 

#define IWICStream_Clone(This,ppstm)	\
    ( (This)->lpVtbl -> Clone(This,ppstm) ) 


#define IWICStream_InitializeFromIStream(This,pIStream)	\
    ( (This)->lpVtbl -> InitializeFromIStream(This,pIStream) ) 

#define IWICStream_InitializeFromFilename(This,wzFileName,dwAccessMode)	\
    ( (This)->lpVtbl -> InitializeFromFilename(This,wzFileName,dwAccessMode) ) 

#define IWICStream_InitializeFromMemory(This,pbBuffer,cbBufferSize)	\
    ( (This)->lpVtbl -> InitializeFromMemory(This,pbBuffer,cbBufferSize) ) 

#define IWICStream_InitializeFromIStreamRegion(This,pIStream,ulOffset,ulMaxSize)	\
    ( (This)->lpVtbl -> InitializeFromIStreamRegion(This,pIStream,ulOffset,ulMaxSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICStream_INTERFACE_DEFINED__ */


#ifndef __IWICBitmapScaler_INTERFACE_DEFINED__
#define __IWICBitmapScaler_INTERFACE_DEFINED__

/* interface IWICBitmapScaler */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapScaler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000302-a8f2-4877-ba0a-fd2b6645fb94")
    IWICBitmapScaler : public IWICBitmapSource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWICBitmapSource *pISource,
            /* [in] */ UINT uiWidth,
            /* [in] */ UINT uiHeight,
            /* [in] */ WICBitmapInterpolationMode mode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapScalerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapScaler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapScaler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapScaler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWICBitmapScaler * This,
            /* [out] */ UINT *puiWidth,
            /* [out] */ UINT *puiHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IWICBitmapScaler * This,
            /* [out] */ WICPixelFormatGUID *pPixelFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetResolution )( 
            IWICBitmapScaler * This,
            /* [out] */ double *pDpiX,
            /* [out] */ double *pDpiY);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )( 
            IWICBitmapScaler * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )( 
            IWICBitmapScaler * This,
            /* [in] */ const WICRect *prc,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][out] */ BYTE *pbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWICBitmapScaler * This,
            /* [in] */ IWICBitmapSource *pISource,
            /* [in] */ UINT uiWidth,
            /* [in] */ UINT uiHeight,
            /* [in] */ WICBitmapInterpolationMode mode);
        
        END_INTERFACE
    } IWICBitmapScalerVtbl;

    interface IWICBitmapScaler
    {
        CONST_VTBL struct IWICBitmapScalerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapScaler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapScaler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapScaler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapScaler_GetSize(This,puiWidth,puiHeight)	\
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) ) 

#define IWICBitmapScaler_GetPixelFormat(This,pPixelFormat)	\
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) ) 

#define IWICBitmapScaler_GetResolution(This,pDpiX,pDpiY)	\
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) ) 

#define IWICBitmapScaler_CopyPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) ) 

#define IWICBitmapScaler_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer)	\
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) ) 


#define IWICBitmapScaler_Initialize(This,pISource,uiWidth,uiHeight,mode)	\
    ( (This)->lpVtbl -> Initialize(This,pISource,uiWidth,uiHeight,mode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapScaler_INTERFACE_DEFINED__ */


#ifndef __IWICBitmapClipper_INTERFACE_DEFINED__
#define __IWICBitmapClipper_INTERFACE_DEFINED__

/* interface IWICBitmapClipper */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICBitmapClipper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e4fbcf03-223d-4e81-9333-d635556dd1b5")
    IWICBitmapClipper : public IWICBitmapSource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWICBitmapSource *pISource,
            /* [in] */ const WICRect *prc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICBitmapClipperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICBitmapClipper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICBitmapClipper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICBitmapClipper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWICBitmapClipper * This,
            /* [out] */ UINT *puiWidth,
            /* [out] */ UINT *puiHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IWICBitmapClipper * This,
            /* [out] */ WICPixelFormatGUID *pPixelFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetResolution )( 
            IWICBitmapClipper * This,
            /* [out] */ double *pDpiX,
            /* [out] */ double *pDpiY);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )( 
            IWICBitmapClipper * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )( 
            IWICBitmapClipper * This,
            /* [in] */ const WICRect *prc,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][out] */ BYTE *pbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWICBitmapClipper * This,
            /* [in] */ IWICBitmapSource *pISource,
            /* [in] */ const WICRect *prc);
        
        END_INTERFACE
    } IWICBitmapClipperVtbl;

    interface IWICBitmapClipper
    {
        CONST_VTBL struct IWICBitmapClipperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICBitmapClipper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICBitmapClipper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICBitmapClipper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICBitmapClipper_GetSize(This,puiWidth,puiHeight)	\
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) ) 

#define IWICBitmapClipper_GetPixelFormat(This,pPixelFormat)	\
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) ) 

#define IWICBitmapClipper_GetResolution(This,pDpiX,pDpiY)	\
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) ) 

#define IWICBitmapClipper_CopyPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) ) 

#define IWICBitmapClipper_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer)	\
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) ) 


#define IWICBitmapClipper_Initialize(This,pISource,prc)	\
    ( (This)->lpVtbl -> Initialize(This,pISource,prc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICBitmapClipper_INTERFACE_DEFINED__ */


#ifndef __IWICColorTransform_INTERFACE_DEFINED__
#define __IWICColorTransform_INTERFACE_DEFINED__

/* interface IWICColorTransform */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICColorTransform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b66f034f-d0e2-40ab-b436-6de39e321a94")
    IWICColorTransform : public IWICBitmapSource
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWICBitmapSource *pIBitmapSource,
            /* [in] */ IWICColorContext *pIContextSource,
            /* [in] */ IWICColorContext *pIContextDest,
            /* [in] */ REFWICPixelFormatGUID pixelFmtDest) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICColorTransformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICColorTransform * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICColorTransform * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICColorTransform * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWICColorTransform * This,
            /* [out] */ UINT *puiWidth,
            /* [out] */ UINT *puiHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IWICColorTransform * This,
            /* [out] */ WICPixelFormatGUID *pPixelFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetResolution )( 
            IWICColorTransform * This,
            /* [out] */ double *pDpiX,
            /* [out] */ double *pDpiY);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPalette )( 
            IWICColorTransform * This,
            /* [in] */ IWICPalette *pIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *CopyPixels )( 
            IWICColorTransform * This,
            /* [in] */ const WICRect *prc,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][out] */ BYTE *pbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWICColorTransform * This,
            /* [in] */ IWICBitmapSource *pIBitmapSource,
            /* [in] */ IWICColorContext *pIContextSource,
            /* [in] */ IWICColorContext *pIContextDest,
            /* [in] */ REFWICPixelFormatGUID pixelFmtDest);
        
        END_INTERFACE
    } IWICColorTransformVtbl;

    interface IWICColorTransform
    {
        CONST_VTBL struct IWICColorTransformVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICColorTransform_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICColorTransform_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICColorTransform_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICColorTransform_GetSize(This,puiWidth,puiHeight)	\
    ( (This)->lpVtbl -> GetSize(This,puiWidth,puiHeight) ) 

#define IWICColorTransform_GetPixelFormat(This,pPixelFormat)	\
    ( (This)->lpVtbl -> GetPixelFormat(This,pPixelFormat) ) 

#define IWICColorTransform_GetResolution(This,pDpiX,pDpiY)	\
    ( (This)->lpVtbl -> GetResolution(This,pDpiX,pDpiY) ) 

#define IWICColorTransform_CopyPalette(This,pIPalette)	\
    ( (This)->lpVtbl -> CopyPalette(This,pIPalette) ) 

#define IWICColorTransform_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer)	\
    ( (This)->lpVtbl -> CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) ) 


#define IWICColorTransform_Initialize(This,pIBitmapSource,pIContextSource,pIContextDest,pixelFmtDest)	\
    ( (This)->lpVtbl -> Initialize(This,pIBitmapSource,pIContextSource,pIContextDest,pixelFmtDest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICColorTransform_INTERFACE_DEFINED__ */


#ifndef __IWICFastMetadataEncoder_INTERFACE_DEFINED__
#define __IWICFastMetadataEncoder_INTERFACE_DEFINED__

/* interface IWICFastMetadataEncoder */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICFastMetadataEncoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b84e2c09-78c9-4ac4-8bd3-524ae1663a2f")
    IWICFastMetadataEncoder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMetadataQueryWriter( 
            /* [out] */ IWICMetadataQueryWriter **ppIMetadataQueryWriter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICFastMetadataEncoderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICFastMetadataEncoder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICFastMetadataEncoder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICFastMetadataEncoder * This);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IWICFastMetadataEncoder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadataQueryWriter )( 
            IWICFastMetadataEncoder * This,
            /* [out] */ IWICMetadataQueryWriter **ppIMetadataQueryWriter);
        
        END_INTERFACE
    } IWICFastMetadataEncoderVtbl;

    interface IWICFastMetadataEncoder
    {
        CONST_VTBL struct IWICFastMetadataEncoderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICFastMetadataEncoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICFastMetadataEncoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICFastMetadataEncoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICFastMetadataEncoder_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#define IWICFastMetadataEncoder_GetMetadataQueryWriter(This,ppIMetadataQueryWriter)	\
    ( (This)->lpVtbl -> GetMetadataQueryWriter(This,ppIMetadataQueryWriter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICFastMetadataEncoder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wincodec_0000_0023 */
/* [local] */ 

DEFINE_GUID(CLSID_WICImagingFactory, 0xcacaf262,0x9370,0x4615,0xa1,0x3b,0x9f,0x55,0x39,0xda,0x4c,0x0a);


extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0023_v0_0_s_ifspec;

#ifndef __IWICImagingFactory_INTERFACE_DEFINED__
#define __IWICImagingFactory_INTERFACE_DEFINED__

/* interface IWICImagingFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID_IWICImagingFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ec5ec8a9-c395-4314-9c77-54d7a935ff70")
    IWICImagingFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateDecoderFromFilename( 
            /* [in] */ LPCWSTR wzFilename,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [in] */ DWORD dwDesiredAccess,
            /* [in] */ WICDecodeOptions metadataOptions,
            /* [retval][out] */ IWICBitmapDecoder **ppIDecoder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateDecoderFromStream( 
            /* [in] */ IStream *pIStream,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [in] */ WICDecodeOptions metadataOptions,
            /* [retval][out] */ IWICBitmapDecoder **ppIDecoder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateDecoderFromFileHandle( 
            /* [in] */ ULONG_PTR hFile,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [in] */ WICDecodeOptions metadataOptions,
            /* [retval][out] */ IWICBitmapDecoder **ppIDecoder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateComponentInfo( 
            /* [in] */ REFCLSID clsidComponent,
            /* [out] */ IWICComponentInfo **ppIInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateDecoder( 
            /* [in] */ REFGUID guidContainerFormat,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [retval][out] */ IWICBitmapDecoder **ppIDecoder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEncoder( 
            /* [in] */ REFGUID guidContainerFormat,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [retval][out] */ IWICBitmapEncoder **ppIEncoder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreatePalette( 
            /* [out] */ IWICPalette **ppIPalette) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFormatConverter( 
            /* [out] */ IWICFormatConverter **ppIFormatConverter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBitmapScaler( 
            /* [out] */ IWICBitmapScaler **ppIBitmapScaler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBitmapClipper( 
            /* [out] */ IWICBitmapClipper **ppIBitmapClipper) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBitmapFlipRotator( 
            /* [out] */ IWICBitmapFlipRotator **ppIBitmapFlipRotator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateStream( 
            /* [out] */ IWICStream **ppIWICStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateColorContext( 
            /* [out] */ IWICColorContext **ppIWICColorContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateColorTransformer( 
            /* [out] */ IWICColorTransform **ppIWICColorTransform) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBitmap( 
            /* [in] */ UINT uiWidth,
            /* [in] */ UINT uiHeight,
            /* [in] */ REFWICPixelFormatGUID pixelFormat,
            /* [in] */ WICBitmapCreateCacheOption option,
            /* [out] */ IWICBitmap **ppIBitmap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBitmapFromSource( 
            /* [in] */ IWICBitmapSource *piBitmapSource,
            /* [in] */ WICBitmapCreateCacheOption option,
            /* [out] */ IWICBitmap **ppIBitmap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBitmapFromSourceRect( 
            /* [in] */ IWICBitmapSource *piBitmapSource,
            /* [in] */ UINT x,
            /* [in] */ UINT y,
            /* [in] */ UINT width,
            /* [in] */ UINT height,
            /* [out] */ IWICBitmap **ppIBitmap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBitmapFromMemory( 
            /* [in] */ UINT uiWidth,
            /* [in] */ UINT uiHeight,
            /* [in] */ REFWICPixelFormatGUID pixelFormat,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][in] */ BYTE *pbBuffer,
            /* [out] */ IWICBitmap **ppIBitmap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBitmapFromHBITMAP( 
            /* [in] */ HBITMAP hBitmap,
            /* [unique][in] */ HPALETTE hPalette,
            /* [in] */ WICBitmapAlphaChannelOption options,
            /* [out] */ IWICBitmap **ppIBitmap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBitmapFromHICON( 
            /* [in] */ HICON hIcon,
            /* [out] */ IWICBitmap **ppIBitmap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateComponentEnumerator( 
            /* [in] */ DWORD componentTypes,
            /* [in] */ DWORD options,
            /* [out] */ IEnumUnknown **ppIEnumUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFastMetadataEncoderFromDecoder( 
            /* [in] */ IWICBitmapDecoder *pIDecoder,
            /* [out] */ IWICFastMetadataEncoder **ppIFastEncoder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFastMetadataEncoderFromFrameDecode( 
            /* [in] */ IWICBitmapFrameDecode *pIFrameDecoder,
            /* [out] */ IWICFastMetadataEncoder **ppIFastEncoder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateQueryWriter( 
            /* [in] */ REFGUID guidMetadataFormat,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [out] */ IWICMetadataQueryWriter **ppIQueryWriter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateQueryWriterFromReader( 
            /* [in] */ IWICMetadataQueryReader *pIQueryReader,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [out] */ IWICMetadataQueryWriter **ppIQueryWriter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWICImagingFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWICImagingFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWICImagingFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWICImagingFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromFilename )( 
            IWICImagingFactory * This,
            /* [in] */ LPCWSTR wzFilename,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [in] */ DWORD dwDesiredAccess,
            /* [in] */ WICDecodeOptions metadataOptions,
            /* [retval][out] */ IWICBitmapDecoder **ppIDecoder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromStream )( 
            IWICImagingFactory * This,
            /* [in] */ IStream *pIStream,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [in] */ WICDecodeOptions metadataOptions,
            /* [retval][out] */ IWICBitmapDecoder **ppIDecoder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDecoderFromFileHandle )( 
            IWICImagingFactory * This,
            /* [in] */ ULONG_PTR hFile,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [in] */ WICDecodeOptions metadataOptions,
            /* [retval][out] */ IWICBitmapDecoder **ppIDecoder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateComponentInfo )( 
            IWICImagingFactory * This,
            /* [in] */ REFCLSID clsidComponent,
            /* [out] */ IWICComponentInfo **ppIInfo);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDecoder )( 
            IWICImagingFactory * This,
            /* [in] */ REFGUID guidContainerFormat,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [retval][out] */ IWICBitmapDecoder **ppIDecoder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEncoder )( 
            IWICImagingFactory * This,
            /* [in] */ REFGUID guidContainerFormat,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [retval][out] */ IWICBitmapEncoder **ppIEncoder);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePalette )( 
            IWICImagingFactory * This,
            /* [out] */ IWICPalette **ppIPalette);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFormatConverter )( 
            IWICImagingFactory * This,
            /* [out] */ IWICFormatConverter **ppIFormatConverter);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapScaler )( 
            IWICImagingFactory * This,
            /* [out] */ IWICBitmapScaler **ppIBitmapScaler);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapClipper )( 
            IWICImagingFactory * This,
            /* [out] */ IWICBitmapClipper **ppIBitmapClipper);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFlipRotator )( 
            IWICImagingFactory * This,
            /* [out] */ IWICBitmapFlipRotator **ppIBitmapFlipRotator);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStream )( 
            IWICImagingFactory * This,
            /* [out] */ IWICStream **ppIWICStream);
        
        HRESULT ( STDMETHODCALLTYPE *CreateColorContext )( 
            IWICImagingFactory * This,
            /* [out] */ IWICColorContext **ppIWICColorContext);
        
        HRESULT ( STDMETHODCALLTYPE *CreateColorTransformer )( 
            IWICImagingFactory * This,
            /* [out] */ IWICColorTransform **ppIWICColorTransform);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBitmap )( 
            IWICImagingFactory * This,
            /* [in] */ UINT uiWidth,
            /* [in] */ UINT uiHeight,
            /* [in] */ REFWICPixelFormatGUID pixelFormat,
            /* [in] */ WICBitmapCreateCacheOption option,
            /* [out] */ IWICBitmap **ppIBitmap);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromSource )( 
            IWICImagingFactory * This,
            /* [in] */ IWICBitmapSource *piBitmapSource,
            /* [in] */ WICBitmapCreateCacheOption option,
            /* [out] */ IWICBitmap **ppIBitmap);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromSourceRect )( 
            IWICImagingFactory * This,
            /* [in] */ IWICBitmapSource *piBitmapSource,
            /* [in] */ UINT x,
            /* [in] */ UINT y,
            /* [in] */ UINT width,
            /* [in] */ UINT height,
            /* [out] */ IWICBitmap **ppIBitmap);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromMemory )( 
            IWICImagingFactory * This,
            /* [in] */ UINT uiWidth,
            /* [in] */ UINT uiHeight,
            /* [in] */ REFWICPixelFormatGUID pixelFormat,
            /* [in] */ UINT cbStride,
            /* [in] */ UINT cbBufferSize,
            /* [size_is][in] */ BYTE *pbBuffer,
            /* [out] */ IWICBitmap **ppIBitmap);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromHBITMAP )( 
            IWICImagingFactory * This,
            /* [in] */ HBITMAP hBitmap,
            /* [unique][in] */ HPALETTE hPalette,
            /* [in] */ WICBitmapAlphaChannelOption options,
            /* [out] */ IWICBitmap **ppIBitmap);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBitmapFromHICON )( 
            IWICImagingFactory * This,
            /* [in] */ HICON hIcon,
            /* [out] */ IWICBitmap **ppIBitmap);
        
        HRESULT ( STDMETHODCALLTYPE *CreateComponentEnumerator )( 
            IWICImagingFactory * This,
            /* [in] */ DWORD componentTypes,
            /* [in] */ DWORD options,
            /* [out] */ IEnumUnknown **ppIEnumUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFastMetadataEncoderFromDecoder )( 
            IWICImagingFactory * This,
            /* [in] */ IWICBitmapDecoder *pIDecoder,
            /* [out] */ IWICFastMetadataEncoder **ppIFastEncoder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFastMetadataEncoderFromFrameDecode )( 
            IWICImagingFactory * This,
            /* [in] */ IWICBitmapFrameDecode *pIFrameDecoder,
            /* [out] */ IWICFastMetadataEncoder **ppIFastEncoder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateQueryWriter )( 
            IWICImagingFactory * This,
            /* [in] */ REFGUID guidMetadataFormat,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [out] */ IWICMetadataQueryWriter **ppIQueryWriter);
        
        HRESULT ( STDMETHODCALLTYPE *CreateQueryWriterFromReader )( 
            IWICImagingFactory * This,
            /* [in] */ IWICMetadataQueryReader *pIQueryReader,
            /* [unique][in] */ const GUID *pguidVendor,
            /* [out] */ IWICMetadataQueryWriter **ppIQueryWriter);
        
        END_INTERFACE
    } IWICImagingFactoryVtbl;

    interface IWICImagingFactory
    {
        CONST_VTBL struct IWICImagingFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWICImagingFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWICImagingFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWICImagingFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWICImagingFactory_CreateDecoderFromFilename(This,wzFilename,pguidVendor,dwDesiredAccess,metadataOptions,ppIDecoder)	\
    ( (This)->lpVtbl -> CreateDecoderFromFilename(This,wzFilename,pguidVendor,dwDesiredAccess,metadataOptions,ppIDecoder) ) 

#define IWICImagingFactory_CreateDecoderFromStream(This,pIStream,pguidVendor,metadataOptions,ppIDecoder)	\
    ( (This)->lpVtbl -> CreateDecoderFromStream(This,pIStream,pguidVendor,metadataOptions,ppIDecoder) ) 

#define IWICImagingFactory_CreateDecoderFromFileHandle(This,hFile,pguidVendor,metadataOptions,ppIDecoder)	\
    ( (This)->lpVtbl -> CreateDecoderFromFileHandle(This,hFile,pguidVendor,metadataOptions,ppIDecoder) ) 

#define IWICImagingFactory_CreateComponentInfo(This,clsidComponent,ppIInfo)	\
    ( (This)->lpVtbl -> CreateComponentInfo(This,clsidComponent,ppIInfo) ) 

#define IWICImagingFactory_CreateDecoder(This,guidContainerFormat,pguidVendor,ppIDecoder)	\
    ( (This)->lpVtbl -> CreateDecoder(This,guidContainerFormat,pguidVendor,ppIDecoder) ) 

#define IWICImagingFactory_CreateEncoder(This,guidContainerFormat,pguidVendor,ppIEncoder)	\
    ( (This)->lpVtbl -> CreateEncoder(This,guidContainerFormat,pguidVendor,ppIEncoder) ) 

#define IWICImagingFactory_CreatePalette(This,ppIPalette)	\
    ( (This)->lpVtbl -> CreatePalette(This,ppIPalette) ) 

#define IWICImagingFactory_CreateFormatConverter(This,ppIFormatConverter)	\
    ( (This)->lpVtbl -> CreateFormatConverter(This,ppIFormatConverter) ) 

#define IWICImagingFactory_CreateBitmapScaler(This,ppIBitmapScaler)	\
    ( (This)->lpVtbl -> CreateBitmapScaler(This,ppIBitmapScaler) ) 

#define IWICImagingFactory_CreateBitmapClipper(This,ppIBitmapClipper)	\
    ( (This)->lpVtbl -> CreateBitmapClipper(This,ppIBitmapClipper) ) 

#define IWICImagingFactory_CreateBitmapFlipRotator(This,ppIBitmapFlipRotator)	\
    ( (This)->lpVtbl -> CreateBitmapFlipRotator(This,ppIBitmapFlipRotator) ) 

#define IWICImagingFactory_CreateStream(This,ppIWICStream)	\
    ( (This)->lpVtbl -> CreateStream(This,ppIWICStream) ) 

#define IWICImagingFactory_CreateColorContext(This,ppIWICColorContext)	\
    ( (This)->lpVtbl -> CreateColorContext(This,ppIWICColorContext) ) 

#define IWICImagingFactory_CreateColorTransformer(This,ppIWICColorTransform)	\
    ( (This)->lpVtbl -> CreateColorTransformer(This,ppIWICColorTransform) ) 

#define IWICImagingFactory_CreateBitmap(This,uiWidth,uiHeight,pixelFormat,option,ppIBitmap)	\
    ( (This)->lpVtbl -> CreateBitmap(This,uiWidth,uiHeight,pixelFormat,option,ppIBitmap) ) 

#define IWICImagingFactory_CreateBitmapFromSource(This,piBitmapSource,option,ppIBitmap)	\
    ( (This)->lpVtbl -> CreateBitmapFromSource(This,piBitmapSource,option,ppIBitmap) ) 

#define IWICImagingFactory_CreateBitmapFromSourceRect(This,piBitmapSource,x,y,width,height,ppIBitmap)	\
    ( (This)->lpVtbl -> CreateBitmapFromSourceRect(This,piBitmapSource,x,y,width,height,ppIBitmap) ) 

#define IWICImagingFactory_CreateBitmapFromMemory(This,uiWidth,uiHeight,pixelFormat,cbStride,cbBufferSize,pbBuffer,ppIBitmap)	\
    ( (This)->lpVtbl -> CreateBitmapFromMemory(This,uiWidth,uiHeight,pixelFormat,cbStride,cbBufferSize,pbBuffer,ppIBitmap) ) 

#define IWICImagingFactory_CreateBitmapFromHBITMAP(This,hBitmap,hPalette,options,ppIBitmap)	\
    ( (This)->lpVtbl -> CreateBitmapFromHBITMAP(This,hBitmap,hPalette,options,ppIBitmap) ) 

#define IWICImagingFactory_CreateBitmapFromHICON(This,hIcon,ppIBitmap)	\
    ( (This)->lpVtbl -> CreateBitmapFromHICON(This,hIcon,ppIBitmap) ) 

#define IWICImagingFactory_CreateComponentEnumerator(This,componentTypes,options,ppIEnumUnknown)	\
    ( (This)->lpVtbl -> CreateComponentEnumerator(This,componentTypes,options,ppIEnumUnknown) ) 

#define IWICImagingFactory_CreateFastMetadataEncoderFromDecoder(This,pIDecoder,ppIFastEncoder)	\
    ( (This)->lpVtbl -> CreateFastMetadataEncoderFromDecoder(This,pIDecoder,ppIFastEncoder) ) 

#define IWICImagingFactory_CreateFastMetadataEncoderFromFrameDecode(This,pIFrameDecoder,ppIFastEncoder)	\
    ( (This)->lpVtbl -> CreateFastMetadataEncoderFromFrameDecode(This,pIFrameDecoder,ppIFastEncoder) ) 

#define IWICImagingFactory_CreateQueryWriter(This,guidMetadataFormat,pguidVendor,ppIQueryWriter)	\
    ( (This)->lpVtbl -> CreateQueryWriter(This,guidMetadataFormat,pguidVendor,ppIQueryWriter) ) 

#define IWICImagingFactory_CreateQueryWriterFromReader(This,pIQueryReader,pguidVendor,ppIQueryWriter)	\
    ( (This)->lpVtbl -> CreateQueryWriterFromReader(This,pIQueryReader,pguidVendor,ppIQueryWriter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWICImagingFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wincodec_0000_0024 */
/* [local] */ 

HRESULT WINAPI WICConvertBitmapSource(REFWICPixelFormatGUID dstFormat, IWICBitmapSource *pISrc, IWICBitmapSource **ppIDst);
DEFINE_GUID(CLSID_WICBmpDecoder, 0x6b462062,0x7cbf,0x400d,0x9f,0xdb,0x81,0x3d,0xd1,0x0f,0x27,0x78);
DEFINE_GUID(CLSID_WICPngDecoder, 0x389ea17b,0x5078,0x4cde,0xb6,0xef,0x25,0xc1,0x51,0x75,0xc7,0x51);
DEFINE_GUID(CLSID_WICIcoDecoder, 0xc61bfcdf,0x2e0f,0x4aad,0xa8,0xd7,0xe0,0x6b,0xaf,0xeb,0xcd,0xfe);
DEFINE_GUID(CLSID_WICJpegDecoder, 0x9456a480,0xe88b,0x43ea,0x9e,0x73,0x0b,0x2d,0x9b,0x71,0xb1,0xca);
DEFINE_GUID(CLSID_WICGifDecoder, 0x381dda3c,0x9ce9,0x4834,0xa2,0x3e,0x1f,0x98,0xf8,0xfc,0x52,0xbe);
DEFINE_GUID(CLSID_WICTiffDecoder, 0xb54e85d9,0xfe23,0x499f,0x8b,0x88,0x6a,0xce,0xa7,0x13,0x75,0x2b);
DEFINE_GUID(CLSID_WICWmpDecoder, 0xa26cec36,0x234c,0x4950,0xae,0x16,0xe3,0x4a,0xac,0xe7,0x1d,0x0d);
DEFINE_GUID(CLSID_WICBmpEncoder, 0x69be8bb4,0xd66d,0x47c8,0x86,0x5a,0xed,0x15,0x89,0x43,0x37,0x82);
DEFINE_GUID(CLSID_WICPngEncoder, 0x27949969,0x876a,0x41d7,0x94,0x47,0x56,0x8f,0x6a,0x35,0xa4,0xdc);
DEFINE_GUID(CLSID_WICJpegEncoder, 0x1a34f5c1,0x4a5a,0x46dc,0xb6,0x44,0x1f,0x45,0x67,0xe7,0xa6,0x76);
DEFINE_GUID(CLSID_WICGifEncoder, 0x114f5598,0x0b22,0x40a0,0x86,0xa1,0xc8,0x3e,0xa4,0x95,0xad,0xbd);
DEFINE_GUID(CLSID_WICTiffEncoder, 0x0131be10,0x2001,0x4c5f,0xa9,0xb0,0xcc,0x88,0xfa,0xb6,0x4c,0xe8);
DEFINE_GUID(CLSID_WICWmpEncoder, 0xac4ce3cb,0xe1c1,0x44cd,0x82,0x15,0x5a,0x16,0x65,0x50,0x9e,0xc2);
DEFINE_GUID(CLSID_WICDefaultFormatConverter, 0x1a3f11dc,0xb514,0x4b17,0x8c,0x5f,0x21,0x54,0x51,0x38,0x52,0xf1);
DEFINE_GUID(GUID_ContainerFormatBmp, 0x0af1d87e,0xfcfe,0x4188,0xbd,0xeb,0xa7,0x90,0x64,0x71,0xcb,0xe3);
DEFINE_GUID(GUID_ContainerFormatPng, 0x1b7cfaf4,0x713f,0x473c,0xbb,0xcd,0x61,0x37,0x42,0x5f,0xae,0xaf);
DEFINE_GUID(GUID_ContainerFormatIco, 0xa3a860c4,0x338f,0x4c17,0x91,0x9a,0xfb,0xa4,0xb5,0x62,0x8f,0x21);
DEFINE_GUID(GUID_ContainerFormatJpeg, 0x19e4a5aa,0x5662,0x4fc5,0xa0,0xc0,0x17,0x58,0x02,0x8e,0x10,0x57);
DEFINE_GUID(GUID_ContainerFormatTiff, 0x163bcc30,0xe2e9,0x4f0b,0x96,0x1d,0xa3,0xe9,0xfd,0xb7,0x88,0xa3);
DEFINE_GUID(GUID_ContainerFormatGif, 0x1f8a5601,0x7d4d,0x4cbd,0x9c,0x82,0x1b,0xc8,0xd4,0xee,0xb9,0xa5);
DEFINE_GUID(GUID_ContainerFormatWmp, 0x57a37caa,0x367a,0x4540,0x91,0x6b,0xf1,0x83,0xc5,0x09,0x3a,0x4b);
DEFINE_GUID(GUID_VendorMicrosoft, 0xf0e749ca,0xedef,0x4589,0xa7,0x3a,0xee,0x0e,0x62,0x6a,0x2a,0x2b);
DEFINE_GUID(CATID_WICBitmapDecoders, 0x7ed96837,0x96f0,0x4812,0xb2,0x11,0xf1,0x3c,0x24,0x11,0x7e,0xd3);
DEFINE_GUID(CATID_WICBitmapEncoders, 0xac757296,0x3522,0x4e11,0x98,0x62,0xc1,0x7b,0xe5,0xa1,0x76,0x7e);
DEFINE_GUID(CATID_WICFormatConverters, 0x7835eae8,0xbf14,0x49d1,0x93,0xce,0x53,0x3a,0x40,0x7b,0x22,0x48);


extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wincodec_0000_0024_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HBITMAP_UserSize(     unsigned long *, unsigned long            , HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal(  unsigned long *, unsigned char *, HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree(     unsigned long *, HBITMAP * ); 

unsigned long             __RPC_USER  HICON_UserSize(     unsigned long *, unsigned long            , HICON * ); 
unsigned char * __RPC_USER  HICON_UserMarshal(  unsigned long *, unsigned char *, HICON * ); 
unsigned char * __RPC_USER  HICON_UserUnmarshal(unsigned long *, unsigned char *, HICON * ); 
void                      __RPC_USER  HICON_UserFree(     unsigned long *, HICON * ); 

unsigned long             __RPC_USER  HPALETTE_UserSize(     unsigned long *, unsigned long            , HPALETTE * ); 
unsigned char * __RPC_USER  HPALETTE_UserMarshal(  unsigned long *, unsigned char *, HPALETTE * ); 
unsigned char * __RPC_USER  HPALETTE_UserUnmarshal(unsigned long *, unsigned char *, HPALETTE * ); 
void                      __RPC_USER  HPALETTE_UserFree(     unsigned long *, HPALETTE * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


