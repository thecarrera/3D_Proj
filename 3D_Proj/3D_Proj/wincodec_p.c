

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "wincodec_h.h"

#define TYPE_FORMAT_STRING_SIZE   3535                              
#define PROC_FORMAT_STRING_SIZE   5203                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   5            

typedef struct _wincodec_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } wincodec_MIDL_TYPE_FORMAT_STRING;

typedef struct _wincodec_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } wincodec_MIDL_PROC_FORMAT_STRING;

typedef struct _wincodec_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } wincodec_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const wincodec_MIDL_TYPE_FORMAT_STRING wincodec__MIDL_TypeFormatString;
extern const wincodec_MIDL_PROC_FORMAT_STRING wincodec__MIDL_ProcFormatString;
extern const wincodec_MIDL_EXPR_FORMAT_STRING wincodec__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICColorContext_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICColorContext_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapSource_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapSource_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapLock_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapLock_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapFlipRotator_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapFlipRotator_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmap_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmap_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICPalette_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICPalette_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICComponentInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICComponentInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICMetadataQueryReader_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICMetadataQueryReader_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICMetadataQueryWriter_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICMetadataQueryWriter_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapFrameDecode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapFrameDecode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapCodecInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapCodecInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapDecoderInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapDecoderInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapDecoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapDecoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapFrameEncode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapFrameEncode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapEncoderInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapEncoderInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapEncoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapEncoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICFormatConverter_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICFormatConverter_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICFormatConverterInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICFormatConverterInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICStream_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICStream_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapScaler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapScaler_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICBitmapClipper_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICBitmapClipper_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICColorTransform_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICColorTransform_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICFastMetadataEncoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICFastMetadataEncoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWICImagingFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWICImagingFactory_ProxyInfo;


extern const EXPR_EVAL ExprEvalRoutines[];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const wincodec_MIDL_PROC_FORMAT_STRING wincodec__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure InitializeFromFilename */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzFilename */

/* 24 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromMemory */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	NdrFcShort( 0x8 ),	/* 8 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 52 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbBuffer */

/* 60 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter cbBufferSize */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromExifColorSpace */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x5 ),	/* 5 */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 94 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x6 ),	/* 6 */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x22 ),	/* 34 */
/* 128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pType */

/* 138 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProfileBytes */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x7 ),	/* 7 */
/* 158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 162 */	NdrFcShort( 0x24 ),	/* 36 */
/* 164 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 166 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cbBuffer */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbBuffer */

/* 180 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pcbActual */

/* 186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColorCount */


	/* Procedure GetExifColorSpace */

/* 198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x24 ),	/* 36 */
/* 212 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 214 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcCount */


	/* Parameter pValue */

/* 222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSize */


	/* Procedure GetSize */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x3 ),	/* 3 */
/* 242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x40 ),	/* 64 */
/* 248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 250 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWidth */


	/* Parameter puiWidth */

/* 258 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pHeight */


	/* Parameter puiHeight */

/* 264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContainerFormat */


	/* Procedure GetCLSID */


	/* Procedure GetPixelFormat */

/* 276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x4 ),	/* 4 */
/* 284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x4c ),	/* 76 */
/* 290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pguidContainerFormat */


	/* Parameter pclsid */


	/* Parameter pPixelFormat */

/* 300 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 304 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetResolution */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x5 ),	/* 5 */
/* 320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x50 ),	/* 80 */
/* 326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pDpiX */

/* 336 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pDpiY */

/* 342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromPalette */


	/* Procedure CopyPalette */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x6 ),	/* 6 */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIPalette */


	/* Parameter pIPalette */

/* 378 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */


	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyPixels */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x7 ),	/* 7 */
/* 398 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 400 */	NdrFcShort( 0x44 ),	/* 68 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 406 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prc */

/* 414 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 418 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter cbStride */

/* 420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBufferSize */

/* 426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbBuffer */

/* 432 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 436 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 440 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStride */

/* 444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x4 ),	/* 4 */
/* 452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x24 ),	/* 36 */
/* 458 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcbStride */

/* 468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDataPointer */

/* 480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x5 ),	/* 5 */
/* 488 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x24 ),	/* 36 */
/* 494 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 496 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcbBufferSize */

/* 504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppbData */

/* 510 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 514 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */

/* 516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 518 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPixelFormat */

/* 522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x6 ),	/* 6 */
/* 530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x4c ),	/* 76 */
/* 536 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPixelFormat */

/* 546 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 550 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 566 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 568 */	NdrFcShort( 0x6 ),	/* 6 */
/* 570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 572 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 574 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISource */

/* 582 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 586 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter options */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 592 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lock */

/* 600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 608 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 610 */	NdrFcShort( 0x3c ),	/* 60 */
/* 612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 614 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 616 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prcLock */

/* 624 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 628 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter flags */

/* 630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppILock */

/* 636 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 640 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPalette */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x9 ),	/* 9 */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIPalette */

/* 672 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetResolution */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0xa ),	/* 10 */
/* 692 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 694 */	NdrFcShort( 0x20 ),	/* 32 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 700 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dpiX */

/* 708 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 712 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dpiY */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 718 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 722 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializePredefined */

/* 726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x3 ),	/* 3 */
/* 734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 736 */	NdrFcShort( 0xe ),	/* 14 */
/* 738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 742 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ePaletteType */

/* 750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 752 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 754 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter fAddTransparentColor */

/* 756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 758 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeCustom */

/* 768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x4 ),	/* 4 */
/* 776 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 782 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 784 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x1 ),	/* 1 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pColors */

/* 792 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 794 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 796 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter colorCount */

/* 798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 800 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 806 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromBitmap */

/* 810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x5 ),	/* 5 */
/* 818 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 820 */	NdrFcShort( 0x10 ),	/* 16 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 826 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISurface */

/* 834 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 838 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter colorCount */

/* 840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAddTransparentColor */

/* 846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x7 ),	/* 7 */
/* 866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x22 ),	/* 34 */
/* 872 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 874 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pePaletteType */

/* 882 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 886 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Return value */

/* 888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColors */

/* 894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x9 ),	/* 9 */
/* 902 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 906 */	NdrFcShort( 0x24 ),	/* 36 */
/* 908 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 910 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 912 */	NdrFcShort( 0x1 ),	/* 1 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter colorCount */

/* 918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pColors */

/* 924 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 928 */	NdrFcShort( 0xc8 ),	/* Type Offset=200 */

	/* Parameter pcActualColors */

/* 930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsBlackWhite */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0xa ),	/* 10 */
/* 950 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x24 ),	/* 36 */
/* 956 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 958 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfIsBlackWhite */

/* 966 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsGrayscale */

/* 978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0xb ),	/* 11 */
/* 986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x24 ),	/* 36 */
/* 992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 994 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfIsGrayscale */

/* 1002 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameCount */


	/* Procedure HasAlpha */

/* 1014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0xc ),	/* 12 */
/* 1022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1028 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1030 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */


	/* Parameter pfHasAlpha */

/* 1038 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetComponentType */

/* 1050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1064 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1066 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pType */

/* 1074 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1078 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSigningStatus */

/* 1086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1100 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1102 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStatus */

/* 1110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1112 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1118 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAuthor */

/* 1122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1130 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1134 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1136 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1138 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchAuthor */

/* 1146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzAuthor */

/* 1152 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1156 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pcchActual */

/* 1158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1166 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVendorGUID */

/* 1170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1178 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1184 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1186 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pguidVendor */

/* 1194 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1198 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 1200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1202 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVersion */

/* 1206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1218 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1220 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1222 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchVersion */

/* 1230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1232 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzVersion */

/* 1236 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1238 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1240 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pcchActual */

/* 1242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1250 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSpecVersion */

/* 1254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1262 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1266 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1268 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1270 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1272 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchSpecVersion */

/* 1278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzSpecVersion */

/* 1284 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1286 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1288 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pcchActual */

/* 1290 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1298 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFriendlyName */

/* 1302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0xa ),	/* 10 */
/* 1310 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1314 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1316 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1318 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1322 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchFriendlyName */

/* 1326 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzFriendlyName */

/* 1332 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1336 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pcchActual */

/* 1338 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1346 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContainerFormat */

/* 1350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1364 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1366 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pguidContainerFormat */

/* 1374 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1378 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 1380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocation */

/* 1386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1394 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1398 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1400 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1402 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchMaxLength */

/* 1410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzNamespace */

/* 1416 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1420 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pcchActualLength */

/* 1422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1430 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadataByName */

/* 1434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1442 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1448 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1450 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1454 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzName */

/* 1458 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1462 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pvarValue */

/* 1464 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1468 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Return value */

/* 1470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetEnumerator */

/* 1476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1490 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1492 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIEnumString */

/* 1500 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1504 */	NdrFcShort( 0x9c4 ),	/* Type Offset=2500 */

	/* Return value */

/* 1506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMetadataByName */

/* 1512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1520 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1526 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1528 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzName */

/* 1536 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1540 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pvarValue */

/* 1542 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1546 */	NdrFcShort( 0x9b2 ),	/* Type Offset=2482 */

	/* Return value */

/* 1548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveMetadataByName */

/* 1554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1568 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1570 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzName */

/* 1578 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1582 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 1584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadataQueryReader */


	/* Procedure GetMetadataQueryReader */

/* 1590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1598 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1604 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1606 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIMetadataQueryReader */


	/* Parameter ppIMetadataQueryReader */

/* 1614 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1616 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1618 */	NdrFcShort( 0x9de ),	/* Type Offset=2526 */

	/* Return value */


	/* Return value */

/* 1620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1622 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColorContexts */

/* 1626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1634 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1638 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1640 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1642 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cCount */

/* 1650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIColorContexts */

/* 1656 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1658 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1660 */	NdrFcShort( 0x9f4 ),	/* Type Offset=2548 */

	/* Parameter pcActualCount */

/* 1662 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1664 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1670 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetThumbnail */

/* 1674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0xa ),	/* 10 */
/* 1682 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1688 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1690 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIThumbnail */

/* 1698 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1702 */	NdrFcShort( 0xa20 ),	/* Type Offset=2592 */

	/* Return value */

/* 1704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContainerFormat */

/* 1710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0xb ),	/* 11 */
/* 1718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1724 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1726 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pguidContainerFormat */

/* 1734 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1736 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1738 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 1740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1742 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPixelFormats */

/* 1746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0xc ),	/* 12 */
/* 1754 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1758 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1760 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1762 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cFormats */

/* 1770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pguidPixelFormats */

/* 1776 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1780 */	NdrFcShort( 0xa24 ),	/* Type Offset=2596 */

	/* Parameter pcActual */

/* 1782 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1790 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColorManagementVersion */

/* 1794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0xd ),	/* 13 */
/* 1802 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1806 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1808 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1810 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchColorManagementVersion */

/* 1818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzColorManagementVersion */

/* 1824 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1828 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pcchActual */

/* 1830 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1838 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDeviceManufacturer */

/* 1842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0xe ),	/* 14 */
/* 1850 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1854 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1856 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1858 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1860 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchDeviceManufacturer */

/* 1866 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1868 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzDeviceManufacturer */

/* 1872 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1874 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1876 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pcchActual */

/* 1878 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1886 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDeviceModels */

/* 1890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0xf ),	/* 15 */
/* 1898 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1902 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1904 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1906 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchDeviceModels */

/* 1914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzDeviceModels */

/* 1920 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1924 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pcchActual */

/* 1926 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1934 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMimeTypes */

/* 1938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1946 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1950 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1952 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1954 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1956 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchMimeTypes */

/* 1962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1964 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzMimeTypes */

/* 1968 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1970 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1972 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pcchActual */

/* 1974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1976 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1982 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileExtensions */

/* 1986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1992 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1994 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1998 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2000 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2002 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cchFileExtensions */

/* 2010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2012 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wzFileExtensions */

/* 2016 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2018 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2020 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pcchActual */

/* 2022 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2030 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoesSupportAnimation */

/* 2034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2048 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2050 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfSupportAnimation */

/* 2058 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2066 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoesSupportChromaKey */

/* 2070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2084 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2086 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfSupportChromaKey */

/* 2094 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoesSupportLossless */

/* 2106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2120 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2122 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfSupportLossless */

/* 2130 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoesSupportMultiframe */

/* 2142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2150 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2154 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2156 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2158 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pfSupportMultiframe */

/* 2166 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MatchesMimeType */

/* 2178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2186 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2192 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2194 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzMimeType */

/* 2202 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2204 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2206 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pfMatches */

/* 2208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2210 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2216 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MatchesPattern */

/* 2220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2228 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2234 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2236 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 2244 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2246 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2248 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Parameter pfMatches */

/* 2250 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2252 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2258 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance */

/* 2262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2276 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2278 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapDecoder */

/* 2286 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2290 */	NdrFcShort( 0xa38 ),	/* Type Offset=2616 */

	/* Return value */

/* 2292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryCapability */

/* 2298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2306 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2310 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2312 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2314 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 2322 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2326 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Parameter pdwCapability */

/* 2328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 2340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2348 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2350 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2354 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2356 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 2364 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2368 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Parameter cacheOptions */

/* 2370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2374 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 2376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContainerFormat */

/* 2382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2390 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2398 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pguidContainerFormat */

/* 2406 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 2408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2410 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 2412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2414 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDecoderInfo */

/* 2418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2426 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2432 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2434 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIDecoderInfo */

/* 2442 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2446 */	NdrFcShort( 0xa4e ),	/* Type Offset=2638 */

	/* Return value */

/* 2448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyPalette */

/* 2454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2468 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2470 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIPalette */

/* 2478 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2482 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPreview */

/* 2490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2504 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2506 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapSource */

/* 2514 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2518 */	NdrFcShort( 0xa20 ),	/* Type Offset=2592 */

	/* Return value */

/* 2520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColorContexts */

/* 2526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0xa ),	/* 10 */
/* 2534 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2538 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2540 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2542 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2544 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cCount */

/* 2550 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2552 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIColorContexts */

/* 2556 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2558 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2560 */	NdrFcShort( 0x9f4 ),	/* Type Offset=2548 */

	/* Parameter pcActualCount */

/* 2562 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2570 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetThumbnail */

/* 2574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0xb ),	/* 11 */
/* 2582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2588 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2590 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIThumbnail */

/* 2598 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2602 */	NdrFcShort( 0xa20 ),	/* Type Offset=2592 */

	/* Return value */

/* 2604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrame */

/* 2610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0xd ),	/* 13 */
/* 2618 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2624 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2626 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2636 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIBitmapFrame */

/* 2640 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2642 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2644 */	NdrFcShort( 0xa64 ),	/* Type Offset=2660 */

	/* Return value */

/* 2646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 2652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2660 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2666 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2668 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIEncoderOptions */

/* 2676 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2680 */	NdrFcShort( 0xa7a ),	/* Type Offset=2682 */

	/* Return value */

/* 2682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSize */

/* 2688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2696 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2698 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2702 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2704 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uiWidth */

/* 2712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2714 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiHeight */

/* 2718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2726 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetResolution */

/* 2730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2738 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2740 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2744 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2746 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dpiX */

/* 2754 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2758 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dpiY */

/* 2760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2762 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2764 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2768 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPixelFormat */

/* 2772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2782 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2784 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2786 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPixelFormat */

/* 2796 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 2798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2800 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 2802 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetColorContexts */

/* 2808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2816 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2822 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2824 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cCount */

/* 2832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIColorContext */

/* 2838 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2840 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2842 */	NdrFcShort( 0xa0a ),	/* Type Offset=2570 */

	/* Return value */

/* 2844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2846 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPalette */

/* 2850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2858 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2864 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2866 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIPalette */

/* 2874 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2878 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2882 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetThumbnail */

/* 2886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2892 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2894 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2900 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2902 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIThumbnail */

/* 2910 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2914 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 2916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2918 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WritePixels */

/* 2922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2928 */	NdrFcShort( 0xa ),	/* 10 */
/* 2930 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2932 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2936 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2938 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2942 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lineCount */

/* 2946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2948 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbStride */

/* 2952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2954 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBufferSize */

/* 2958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbPixels */

/* 2964 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2966 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2968 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 2970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2972 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteSource */

/* 2976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2982 */	NdrFcShort( 0xb ),	/* 11 */
/* 2984 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2986 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2990 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2992 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIBitmapSource */

/* 3000 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3004 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter prc */

/* 3006 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 3008 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3010 */	NdrFcShort( 0xa94 ),	/* Type Offset=2708 */

	/* Return value */

/* 3012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Commit */

/* 3018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0xc ),	/* 12 */
/* 3026 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3034 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadataQueryWriter */

/* 3048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0xd ),	/* 13 */
/* 3056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3062 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3064 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIMetadataQueryWriter */

/* 3072 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 3074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3076 */	NdrFcShort( 0xa98 ),	/* Type Offset=2712 */

	/* Return value */

/* 3078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance */

/* 3084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3090 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3098 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapEncoder */

/* 3108 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3112 */	NdrFcShort( 0xaae ),	/* Type Offset=2734 */

	/* Return value */

/* 3114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 3120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3130 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3134 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 3144 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3148 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Parameter cacheOption */

/* 3150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3154 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 3156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetEncoderInfo */

/* 3162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3176 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3178 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIEncoderInfo */

/* 3186 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3190 */	NdrFcShort( 0xac4 ),	/* Type Offset=2756 */

	/* Return value */

/* 3192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetColorContexts */

/* 3198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3204 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3212 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3214 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cCount */

/* 3222 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIColorContext */

/* 3228 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3232 */	NdrFcShort( 0xaf0 ),	/* Type Offset=2800 */

	/* Return value */

/* 3234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPalette */

/* 3240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3246 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3254 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIPalette */

/* 3264 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3268 */	NdrFcShort( 0xb06 ),	/* Type Offset=2822 */

	/* Return value */

/* 3270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetThumbnail */

/* 3276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3290 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIThumbnail */

/* 3300 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3304 */	NdrFcShort( 0xb18 ),	/* Type Offset=2840 */

	/* Return value */

/* 3306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPreview */

/* 3312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3318 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3326 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIPreview */

/* 3336 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3340 */	NdrFcShort( 0xb18 ),	/* Type Offset=2840 */

	/* Return value */

/* 3342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateNewFrame */

/* 3348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3354 */	NdrFcShort( 0xa ),	/* 10 */
/* 3356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3362 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIFrameEncode */

/* 3372 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3376 */	NdrFcShort( 0xb2a ),	/* Type Offset=2858 */

	/* Parameter ppIEncoderOptions */

/* 3378 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 3380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3382 */	NdrFcShort( 0xb40 ),	/* Type Offset=2880 */

	/* Return value */

/* 3384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Commit */

/* 3390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0xb ),	/* 11 */
/* 3398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadataQueryWriter */

/* 3420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0xc ),	/* 12 */
/* 3428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3434 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIMetadataQueryWriter */

/* 3444 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3448 */	NdrFcShort( 0xb56 ),	/* Type Offset=2902 */

	/* Return value */

/* 3450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 3456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3464 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3466 */	NdrFcShort( 0x60 ),	/* 96 */
/* 3468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3470 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISource */

/* 3480 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3484 */	NdrFcShort( 0xb18 ),	/* Type Offset=2840 */

	/* Parameter dstFormat */

/* 3486 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 3488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3490 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter dither */

/* 3492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3496 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pIPalette */

/* 3498 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3500 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3502 */	NdrFcShort( 0xb06 ),	/* Type Offset=2822 */

	/* Parameter alphaThresholdPercent */

/* 3504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3506 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3508 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter paletteTranslate */

/* 3510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3512 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3514 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 3516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3518 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CanConvert */

/* 3522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3530 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3532 */	NdrFcShort( 0x88 ),	/* 136 */
/* 3534 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3536 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter srcPixelFormat */

/* 3546 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 3548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3550 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter dstPixelFormat */

/* 3552 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 3554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3556 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter pfCanConvert */

/* 3558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3566 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPixelFormats */

/* 3570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3576 */	NdrFcShort( 0xb ),	/* 11 */
/* 3578 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3582 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3584 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3586 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3590 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cFormats */

/* 3594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPixelFormatGUIDs */

/* 3600 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3604 */	NdrFcShort( 0xa28 ),	/* Type Offset=2600 */

	/* Parameter pcActual */

/* 3606 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance */

/* 3618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0xc ),	/* 12 */
/* 3626 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3632 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3634 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIConverter */

/* 3642 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3646 */	NdrFcShort( 0xb70 ),	/* Type Offset=2928 */

	/* Return value */

/* 3648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromIStream */

/* 3654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0xe ),	/* 14 */
/* 3662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3668 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3670 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 3678 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3682 */	NdrFcShort( 0xb86 ),	/* Type Offset=2950 */

	/* Return value */

/* 3684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromFilename */

/* 3690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0xf ),	/* 15 */
/* 3698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3704 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3706 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzFileName */

/* 3714 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3718 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter dwAccessMode */

/* 3720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromMemory */

/* 3732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3746 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3748 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbBuffer */

/* 3756 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3760 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter cbBufferSize */

/* 3762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3770 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeFromIStreamRegion */

/* 3774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3782 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3784 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3788 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3790 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 3798 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3802 */	NdrFcShort( 0xb86 ),	/* Type Offset=2950 */

	/* Parameter ulOffset */

/* 3804 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 3806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3808 */	NdrFcShort( 0x33e ),	/* Type Offset=830 */

	/* Parameter ulMaxSize */

/* 3810 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 3812 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3814 */	NdrFcShort( 0x33e ),	/* Type Offset=830 */

	/* Return value */

/* 3816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3818 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 3822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3830 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3832 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3836 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3838 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISource */

/* 3846 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3850 */	NdrFcShort( 0xb18 ),	/* Type Offset=2840 */

	/* Parameter uiWidth */

/* 3852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiHeight */

/* 3858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 3864 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3868 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 3870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3872 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 3876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3884 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3886 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3890 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pISource */

/* 3900 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3904 */	NdrFcShort( 0xb18 ),	/* Type Offset=2840 */

	/* Parameter prc */

/* 3906 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 3908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3910 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Return value */

/* 3912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3914 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 3918 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3926 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3928 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3932 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3934 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIBitmapSource */

/* 3942 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3946 */	NdrFcShort( 0xb18 ),	/* Type Offset=2840 */

	/* Parameter pIContextSource */

/* 3948 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3950 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3952 */	NdrFcShort( 0xade ),	/* Type Offset=2782 */

	/* Parameter pIContextDest */

/* 3954 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3958 */	NdrFcShort( 0xade ),	/* Type Offset=2782 */

	/* Parameter pixelFmtDest */

/* 3960 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 3962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3964 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 3966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3968 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Commit */

/* 3972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3978 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadataQueryWriter */

/* 4002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4008 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4016 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4018 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIMetadataQueryWriter */

/* 4026 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4030 */	NdrFcShort( 0xb56 ),	/* Type Offset=2902 */

	/* Return value */

/* 4032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4034 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateDecoderFromFilename */

/* 4038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4044 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4046 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4048 */	NdrFcShort( 0x52 ),	/* 82 */
/* 4050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4052 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4054 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wzFilename */

/* 4062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4066 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pguidVendor */

/* 4068 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 4070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4072 */	NdrFcShort( 0xb98 ),	/* Type Offset=2968 */

	/* Parameter dwDesiredAccess */

/* 4074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter metadataOptions */

/* 4080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4084 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDecoder */

/* 4086 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4088 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4090 */	NdrFcShort( 0xb9c ),	/* Type Offset=2972 */

	/* Return value */

/* 4092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4094 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateDecoderFromStream */

/* 4098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4106 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4108 */	NdrFcShort( 0x4a ),	/* 74 */
/* 4110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4112 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4114 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIStream */

/* 4122 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4126 */	NdrFcShort( 0xb86 ),	/* Type Offset=2950 */

	/* Parameter pguidVendor */

/* 4128 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 4130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4132 */	NdrFcShort( 0xb98 ),	/* Type Offset=2968 */

	/* Parameter metadataOptions */

/* 4134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4138 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDecoder */

/* 4140 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4144 */	NdrFcShort( 0xb9c ),	/* Type Offset=2972 */

	/* Return value */

/* 4146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4148 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateDecoderFromFileHandle */

/* 4152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4160 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4162 */	NdrFcShort( 0x52 ),	/* 82 */
/* 4164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4166 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 4168 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hFile */

/* 4176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pguidVendor */

/* 4182 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 4184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4186 */	NdrFcShort( 0xb98 ),	/* Type Offset=2968 */

	/* Parameter metadataOptions */

/* 4188 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4190 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4192 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIDecoder */

/* 4194 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4196 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4198 */	NdrFcShort( 0xb9c ),	/* Type Offset=2972 */

	/* Return value */

/* 4200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4202 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateComponentInfo */

/* 4206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4212 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4214 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4216 */	NdrFcShort( 0x44 ),	/* 68 */
/* 4218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4220 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4222 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsidComponent */

/* 4230 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 4232 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4234 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter ppIInfo */

/* 4236 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4238 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4240 */	NdrFcShort( 0xbb2 ),	/* Type Offset=2994 */

	/* Return value */

/* 4242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateDecoder */

/* 4248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4254 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4256 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4258 */	NdrFcShort( 0x88 ),	/* 136 */
/* 4260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4262 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4264 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter guidContainerFormat */

/* 4272 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 4274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4276 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter pguidVendor */

/* 4278 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 4280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4282 */	NdrFcShort( 0xb98 ),	/* Type Offset=2968 */

	/* Parameter ppIDecoder */

/* 4284 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4288 */	NdrFcShort( 0xb9c ),	/* Type Offset=2972 */

	/* Return value */

/* 4290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateEncoder */

/* 4296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4304 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4306 */	NdrFcShort( 0x88 ),	/* 136 */
/* 4308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4310 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4312 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter guidContainerFormat */

/* 4320 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 4322 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4324 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter pguidVendor */

/* 4326 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 4328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4330 */	NdrFcShort( 0xb98 ),	/* Type Offset=2968 */

	/* Parameter ppIEncoder */

/* 4332 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4336 */	NdrFcShort( 0xbc8 ),	/* Type Offset=3016 */

	/* Return value */

/* 4338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4340 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreatePalette */

/* 4344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4358 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIPalette */

/* 4368 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4372 */	NdrFcShort( 0xbde ),	/* Type Offset=3038 */

	/* Return value */

/* 4374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFormatConverter */

/* 4380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0xa ),	/* 10 */
/* 4388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4394 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIFormatConverter */

/* 4404 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4408 */	NdrFcShort( 0xb70 ),	/* Type Offset=2928 */

	/* Return value */

/* 4410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapScaler */

/* 4416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4422 */	NdrFcShort( 0xb ),	/* 11 */
/* 4424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4430 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4432 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapScaler */

/* 4440 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4444 */	NdrFcShort( 0xbe2 ),	/* Type Offset=3042 */

	/* Return value */

/* 4446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapClipper */

/* 4452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0xc ),	/* 12 */
/* 4460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4466 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4468 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapClipper */

/* 4476 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4480 */	NdrFcShort( 0xbf8 ),	/* Type Offset=3064 */

	/* Return value */

/* 4482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFlipRotator */

/* 4488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4494 */	NdrFcShort( 0xd ),	/* 13 */
/* 4496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4502 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIBitmapFlipRotator */

/* 4512 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4516 */	NdrFcShort( 0xc0e ),	/* Type Offset=3086 */

	/* Return value */

/* 4518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateStream */

/* 4524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4530 */	NdrFcShort( 0xe ),	/* 14 */
/* 4532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4538 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIWICStream */

/* 4548 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4552 */	NdrFcShort( 0xc24 ),	/* Type Offset=3108 */

	/* Return value */

/* 4554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateColorContext */

/* 4560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0xf ),	/* 15 */
/* 4568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4574 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIWICColorContext */

/* 4584 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4588 */	NdrFcShort( 0xc3a ),	/* Type Offset=3130 */

	/* Return value */

/* 4590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateColorTransformer */

/* 4596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4602 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4610 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppIWICColorTransform */

/* 4620 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4624 */	NdrFcShort( 0xc50 ),	/* Type Offset=3152 */

	/* Return value */

/* 4626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmap */

/* 4632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4638 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4640 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4642 */	NdrFcShort( 0x5a ),	/* 90 */
/* 4644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4646 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 4648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uiWidth */

/* 4656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiHeight */

/* 4662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pixelFormat */

/* 4668 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 4670 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4672 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter option */

/* 4674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4676 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4678 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIBitmap */

/* 4680 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4682 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4684 */	NdrFcShort( 0xc66 ),	/* Type Offset=3174 */

	/* Return value */

/* 4686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4688 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFromSource */

/* 4692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4698 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4700 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4702 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4706 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4708 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter piBitmapSource */

/* 4716 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4720 */	NdrFcShort( 0xc7c ),	/* Type Offset=3196 */

	/* Parameter option */

/* 4722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4726 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIBitmap */

/* 4728 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4732 */	NdrFcShort( 0xc66 ),	/* Type Offset=3174 */

	/* Return value */

/* 4734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4736 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFromSourceRect */

/* 4740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4746 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4748 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4750 */	NdrFcShort( 0x20 ),	/* 32 */
/* 4752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4754 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4756 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter piBitmapSource */

/* 4764 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4768 */	NdrFcShort( 0xc7c ),	/* Type Offset=3196 */

	/* Parameter x */

/* 4770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 4776 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4778 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 4782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4784 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 4788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4790 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIBitmap */

/* 4794 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4796 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4798 */	NdrFcShort( 0xc66 ),	/* Type Offset=3174 */

	/* Return value */

/* 4800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4802 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFromMemory */

/* 4806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4812 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4814 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4816 */	NdrFcShort( 0x64 ),	/* 100 */
/* 4818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4820 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 4822 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uiWidth */

/* 4830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter uiHeight */

/* 4836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pixelFormat */

/* 4842 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 4844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4846 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter cbStride */

/* 4848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4850 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBufferSize */

/* 4854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4856 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbBuffer */

/* 4860 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4862 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4864 */	NdrFcShort( 0xc92 ),	/* Type Offset=3218 */

	/* Parameter ppIBitmap */

/* 4866 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4868 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4870 */	NdrFcShort( 0xc66 ),	/* Type Offset=3174 */

	/* Return value */

/* 4872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4874 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFromHBITMAP */

/* 4878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4884 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4886 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4888 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4892 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4894 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hBitmap */

/* 4902 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4904 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4906 */	NdrFcShort( 0xcda ),	/* Type Offset=3290 */

	/* Parameter hPalette */

/* 4908 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4912 */	NdrFcShort( 0xd2a ),	/* Type Offset=3370 */

	/* Parameter options */

/* 4914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4918 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIBitmap */

/* 4920 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4922 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4924 */	NdrFcShort( 0xc66 ),	/* Type Offset=3174 */

	/* Return value */

/* 4926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4928 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBitmapFromHICON */

/* 4932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4938 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4940 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4946 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4948 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hIcon */

/* 4956 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4960 */	NdrFcShort( 0xd4c ),	/* Type Offset=3404 */

	/* Parameter ppIBitmap */

/* 4962 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4966 */	NdrFcShort( 0xc66 ),	/* Type Offset=3174 */

	/* Return value */

/* 4968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4970 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateComponentEnumerator */

/* 4974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4980 */	NdrFcShort( 0x17 ),	/* 23 */
/* 4982 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4984 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4988 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4990 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter componentTypes */

/* 4998 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5000 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter options */

/* 5004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5006 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIEnumUnknown */

/* 5010 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5012 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5014 */	NdrFcShort( 0xd56 ),	/* Type Offset=3414 */

	/* Return value */

/* 5016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5018 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFastMetadataEncoderFromDecoder */

/* 5022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5028 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5030 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5036 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5038 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIDecoder */

/* 5046 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5048 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5050 */	NdrFcShort( 0xd6c ),	/* Type Offset=3436 */

	/* Parameter ppIFastEncoder */

/* 5052 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5054 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5056 */	NdrFcShort( 0xd7e ),	/* Type Offset=3454 */

	/* Return value */

/* 5058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5060 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFastMetadataEncoderFromFrameDecode */

/* 5064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5070 */	NdrFcShort( 0x19 ),	/* 25 */
/* 5072 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5078 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIFrameDecoder */

/* 5088 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5092 */	NdrFcShort( 0xd94 ),	/* Type Offset=3476 */

	/* Parameter ppIFastEncoder */

/* 5094 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5098 */	NdrFcShort( 0xd7e ),	/* Type Offset=3454 */

	/* Return value */

/* 5100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5102 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateQueryWriter */

/* 5106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5112 */	NdrFcShort( 0x1a ),	/* 26 */
/* 5114 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5116 */	NdrFcShort( 0x88 ),	/* 136 */
/* 5118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5120 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5122 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter guidMetadataFormat */

/* 5130 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 5132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5134 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter pguidVendor */

/* 5136 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 5138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5140 */	NdrFcShort( 0xb98 ),	/* Type Offset=2968 */

	/* Parameter ppIQueryWriter */

/* 5142 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5146 */	NdrFcShort( 0xda6 ),	/* Type Offset=3494 */

	/* Return value */

/* 5148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5150 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateQueryWriterFromReader */

/* 5154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5160 */	NdrFcShort( 0x1b ),	/* 27 */
/* 5162 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5164 */	NdrFcShort( 0x44 ),	/* 68 */
/* 5166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5168 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIQueryReader */

/* 5178 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5182 */	NdrFcShort( 0xdbc ),	/* Type Offset=3516 */

	/* Parameter pguidVendor */

/* 5184 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 5186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5188 */	NdrFcShort( 0xb98 ),	/* Type Offset=2968 */

	/* Parameter ppIQueryWriter */

/* 5190 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5194 */	NdrFcShort( 0xda6 ),	/* Type Offset=3494 */

	/* Return value */

/* 5196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5198 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const wincodec_MIDL_TYPE_FORMAT_STRING wincodec__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x0,	/* FC_RP */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 18 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 20 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 22 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 24 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 26 */	
			0x12, 0x0,	/* FC_UP */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 32 */	NdrFcShort( 0x1 ),	/* 1 */
/* 34 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 36 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 38 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 40 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 42 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 44 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 48 */	NdrFcShort( 0x8 ),	/* Offset= 8 (56) */
/* 50 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 56 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 58 */	NdrFcShort( 0x10 ),	/* 16 */
/* 60 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 62 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 64 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (50) */
			0x5b,		/* FC_END */
/* 68 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 70 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 72 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 74 */	NdrFcLong( 0x40 ),	/* 64 */
/* 78 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 80 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 82 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 84 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 86 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 88 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 90 */	
			0x11, 0x0,	/* FC_RP */
/* 92 */	NdrFcShort( 0x2 ),	/* Offset= 2 (94) */
/* 94 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 96 */	NdrFcShort( 0x10 ),	/* 16 */
/* 98 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 100 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 104 */	
			0x11, 0x0,	/* FC_RP */
/* 106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (108) */
/* 108 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 112 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 116 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 118 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 120 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 122 */	NdrFcShort( 0x2 ),	/* Offset= 2 (124) */
/* 124 */	
			0x13, 0x0,	/* FC_OP */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 132 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 138 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 140 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 142 */	NdrFcLong( 0x120 ),	/* 288 */
/* 146 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 148 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 150 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 152 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 154 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 156 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 158 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 160 */	NdrFcShort( 0x2 ),	/* Offset= 2 (162) */
/* 162 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 164 */	NdrFcLong( 0x123 ),	/* 291 */
/* 168 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 170 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 172 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 174 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 176 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 178 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 180 */	
			0x11, 0x0,	/* FC_RP */
/* 182 */	NdrFcShort( 0x2 ),	/* Offset= 2 (184) */
/* 184 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 188 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 192 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 194 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 196 */	
			0x11, 0x0,	/* FC_RP */
/* 198 */	NdrFcShort( 0x2 ),	/* Offset= 2 (200) */
/* 200 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 202 */	NdrFcShort( 0x4 ),	/* 4 */
/* 204 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 210 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 212 */	
			0x12, 0x0,	/* FC_UP */
/* 214 */	NdrFcShort( 0x2 ),	/* Offset= 2 (216) */
/* 216 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 218 */	NdrFcShort( 0x2 ),	/* 2 */
/* 220 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 224 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 226 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 228 */	
			0x12, 0x0,	/* FC_UP */
/* 230 */	NdrFcShort( 0x8cc ),	/* Offset= 2252 (2482) */
/* 232 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x7,		/* FC_USHORT */
/* 234 */	0x0,		/* Corr desc:  field,  */
			0x59,		/* FC_CALLBACK */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 240 */	NdrFcShort( 0x2 ),	/* Offset= 2 (242) */
/* 242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 244 */	NdrFcShort( 0x61 ),	/* 97 */
/* 246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* Offset= 0 (250) */
/* 252 */	NdrFcLong( 0x1 ),	/* 1 */
/* 256 */	NdrFcShort( 0x0 ),	/* Offset= 0 (256) */
/* 258 */	NdrFcLong( 0x10 ),	/* 16 */
/* 262 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 264 */	NdrFcLong( 0x11 ),	/* 17 */
/* 268 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 270 */	NdrFcLong( 0x2 ),	/* 2 */
/* 274 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 276 */	NdrFcLong( 0x12 ),	/* 18 */
/* 280 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 282 */	NdrFcLong( 0x3 ),	/* 3 */
/* 286 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 288 */	NdrFcLong( 0x13 ),	/* 19 */
/* 292 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 294 */	NdrFcLong( 0x16 ),	/* 22 */
/* 298 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 300 */	NdrFcLong( 0x17 ),	/* 23 */
/* 304 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 306 */	NdrFcLong( 0xe ),	/* 14 */
/* 310 */	NdrFcShort( 0x208 ),	/* Offset= 520 (830) */
/* 312 */	NdrFcLong( 0x14 ),	/* 20 */
/* 316 */	NdrFcShort( 0x202 ),	/* Offset= 514 (830) */
/* 318 */	NdrFcLong( 0x15 ),	/* 21 */
/* 322 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (830) */
/* 324 */	NdrFcLong( 0x4 ),	/* 4 */
/* 328 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 330 */	NdrFcLong( 0x5 ),	/* 5 */
/* 334 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 336 */	NdrFcLong( 0xb ),	/* 11 */
/* 340 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 342 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 346 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 348 */	NdrFcLong( 0xa ),	/* 10 */
/* 352 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 354 */	NdrFcLong( 0x6 ),	/* 6 */
/* 358 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (830) */
/* 360 */	NdrFcLong( 0x7 ),	/* 7 */
/* 364 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 366 */	NdrFcLong( 0x40 ),	/* 64 */
/* 370 */	NdrFcShort( 0x1d2 ),	/* Offset= 466 (836) */
/* 372 */	NdrFcLong( 0x48 ),	/* 72 */
/* 376 */	NdrFcShort( 0x1d4 ),	/* Offset= 468 (844) */
/* 378 */	NdrFcLong( 0x47 ),	/* 71 */
/* 382 */	NdrFcShort( 0x1d2 ),	/* Offset= 466 (848) */
/* 384 */	NdrFcLong( 0x8 ),	/* 8 */
/* 388 */	NdrFcShort( 0x20c ),	/* Offset= 524 (912) */
/* 390 */	NdrFcLong( 0xfff ),	/* 4095 */
/* 394 */	NdrFcShort( 0x21c ),	/* Offset= 540 (934) */
/* 396 */	NdrFcLong( 0x41 ),	/* 65 */
/* 400 */	NdrFcShort( 0x216 ),	/* Offset= 534 (934) */
/* 402 */	NdrFcLong( 0x46 ),	/* 70 */
/* 406 */	NdrFcShort( 0x210 ),	/* Offset= 528 (934) */
/* 408 */	NdrFcLong( 0x1e ),	/* 30 */
/* 412 */	NdrFcShort( 0x21e ),	/* Offset= 542 (954) */
/* 414 */	NdrFcLong( 0x1f ),	/* 31 */
/* 418 */	NdrFcShort( 0x21c ),	/* Offset= 540 (958) */
/* 420 */	NdrFcLong( 0xd ),	/* 13 */
/* 424 */	NdrFcShort( 0x21a ),	/* Offset= 538 (962) */
/* 426 */	NdrFcLong( 0x9 ),	/* 9 */
/* 430 */	NdrFcShort( 0x226 ),	/* Offset= 550 (980) */
/* 432 */	NdrFcLong( 0x42 ),	/* 66 */
/* 436 */	NdrFcShort( 0x232 ),	/* Offset= 562 (998) */
/* 438 */	NdrFcLong( 0x44 ),	/* 68 */
/* 442 */	NdrFcShort( 0x22c ),	/* Offset= 556 (998) */
/* 444 */	NdrFcLong( 0x43 ),	/* 67 */
/* 448 */	NdrFcShort( 0x238 ),	/* Offset= 568 (1016) */
/* 450 */	NdrFcLong( 0x45 ),	/* 69 */
/* 454 */	NdrFcShort( 0x232 ),	/* Offset= 562 (1016) */
/* 456 */	NdrFcLong( 0x49 ),	/* 73 */
/* 460 */	NdrFcShort( 0x23e ),	/* Offset= 574 (1034) */
/* 462 */	NdrFcLong( 0x2010 ),	/* 8208 */
/* 466 */	NdrFcShort( 0x5da ),	/* Offset= 1498 (1964) */
/* 468 */	NdrFcLong( 0x2011 ),	/* 8209 */
/* 472 */	NdrFcShort( 0x5d4 ),	/* Offset= 1492 (1964) */
/* 474 */	NdrFcLong( 0x2002 ),	/* 8194 */
/* 478 */	NdrFcShort( 0x5ce ),	/* Offset= 1486 (1964) */
/* 480 */	NdrFcLong( 0x2012 ),	/* 8210 */
/* 484 */	NdrFcShort( 0x5c8 ),	/* Offset= 1480 (1964) */
/* 486 */	NdrFcLong( 0x2003 ),	/* 8195 */
/* 490 */	NdrFcShort( 0x5c2 ),	/* Offset= 1474 (1964) */
/* 492 */	NdrFcLong( 0x2013 ),	/* 8211 */
/* 496 */	NdrFcShort( 0x5bc ),	/* Offset= 1468 (1964) */
/* 498 */	NdrFcLong( 0x2016 ),	/* 8214 */
/* 502 */	NdrFcShort( 0x5b6 ),	/* Offset= 1462 (1964) */
/* 504 */	NdrFcLong( 0x2017 ),	/* 8215 */
/* 508 */	NdrFcShort( 0x5b0 ),	/* Offset= 1456 (1964) */
/* 510 */	NdrFcLong( 0x2004 ),	/* 8196 */
/* 514 */	NdrFcShort( 0x5aa ),	/* Offset= 1450 (1964) */
/* 516 */	NdrFcLong( 0x2005 ),	/* 8197 */
/* 520 */	NdrFcShort( 0x5a4 ),	/* Offset= 1444 (1964) */
/* 522 */	NdrFcLong( 0x2006 ),	/* 8198 */
/* 526 */	NdrFcShort( 0x59e ),	/* Offset= 1438 (1964) */
/* 528 */	NdrFcLong( 0x2007 ),	/* 8199 */
/* 532 */	NdrFcShort( 0x598 ),	/* Offset= 1432 (1964) */
/* 534 */	NdrFcLong( 0x2008 ),	/* 8200 */
/* 538 */	NdrFcShort( 0x592 ),	/* Offset= 1426 (1964) */
/* 540 */	NdrFcLong( 0x200b ),	/* 8203 */
/* 544 */	NdrFcShort( 0x58c ),	/* Offset= 1420 (1964) */
/* 546 */	NdrFcLong( 0x200e ),	/* 8206 */
/* 550 */	NdrFcShort( 0x586 ),	/* Offset= 1414 (1964) */
/* 552 */	NdrFcLong( 0x2009 ),	/* 8201 */
/* 556 */	NdrFcShort( 0x580 ),	/* Offset= 1408 (1964) */
/* 558 */	NdrFcLong( 0x200d ),	/* 8205 */
/* 562 */	NdrFcShort( 0x57a ),	/* Offset= 1402 (1964) */
/* 564 */	NdrFcLong( 0x200a ),	/* 8202 */
/* 568 */	NdrFcShort( 0x574 ),	/* Offset= 1396 (1964) */
/* 570 */	NdrFcLong( 0x200c ),	/* 8204 */
/* 574 */	NdrFcShort( 0x56e ),	/* Offset= 1390 (1964) */
/* 576 */	NdrFcLong( 0x1010 ),	/* 4112 */
/* 580 */	NdrFcShort( 0x57e ),	/* Offset= 1406 (1986) */
/* 582 */	NdrFcLong( 0x1011 ),	/* 4113 */
/* 586 */	NdrFcShort( 0x578 ),	/* Offset= 1400 (1986) */
/* 588 */	NdrFcLong( 0x1002 ),	/* 4098 */
/* 592 */	NdrFcShort( 0x4e6 ),	/* Offset= 1254 (1846) */
/* 594 */	NdrFcLong( 0x1012 ),	/* 4114 */
/* 598 */	NdrFcShort( 0x4e0 ),	/* Offset= 1248 (1846) */
/* 600 */	NdrFcLong( 0x1003 ),	/* 4099 */
/* 604 */	NdrFcShort( 0x4fa ),	/* Offset= 1274 (1878) */
/* 606 */	NdrFcLong( 0x1013 ),	/* 4115 */
/* 610 */	NdrFcShort( 0x4f4 ),	/* Offset= 1268 (1878) */
/* 612 */	NdrFcLong( 0x1014 ),	/* 4116 */
/* 616 */	NdrFcShort( 0x57e ),	/* Offset= 1406 (2022) */
/* 618 */	NdrFcLong( 0x1015 ),	/* 4117 */
/* 622 */	NdrFcShort( 0x578 ),	/* Offset= 1400 (2022) */
/* 624 */	NdrFcLong( 0x1004 ),	/* 4100 */
/* 628 */	NdrFcShort( 0x592 ),	/* Offset= 1426 (2054) */
/* 630 */	NdrFcLong( 0x1005 ),	/* 4101 */
/* 634 */	NdrFcShort( 0x5ac ),	/* Offset= 1452 (2086) */
/* 636 */	NdrFcLong( 0x100b ),	/* 4107 */
/* 640 */	NdrFcShort( 0x4b6 ),	/* Offset= 1206 (1846) */
/* 642 */	NdrFcLong( 0x100a ),	/* 4106 */
/* 646 */	NdrFcShort( 0x4d0 ),	/* Offset= 1232 (1878) */
/* 648 */	NdrFcLong( 0x1006 ),	/* 4102 */
/* 652 */	NdrFcShort( 0x55a ),	/* Offset= 1370 (2022) */
/* 654 */	NdrFcLong( 0x1007 ),	/* 4103 */
/* 658 */	NdrFcShort( 0x594 ),	/* Offset= 1428 (2086) */
/* 660 */	NdrFcLong( 0x1040 ),	/* 4160 */
/* 664 */	NdrFcShort( 0x5b2 ),	/* Offset= 1458 (2122) */
/* 666 */	NdrFcLong( 0x1048 ),	/* 4168 */
/* 670 */	NdrFcShort( 0x5d0 ),	/* Offset= 1488 (2158) */
/* 672 */	NdrFcLong( 0x1047 ),	/* 4167 */
/* 676 */	NdrFcShort( 0x600 ),	/* Offset= 1536 (2212) */
/* 678 */	NdrFcLong( 0x1008 ),	/* 4104 */
/* 682 */	NdrFcShort( 0x624 ),	/* Offset= 1572 (2254) */
/* 684 */	NdrFcLong( 0x1fff ),	/* 8191 */
/* 688 */	NdrFcShort( 0x654 ),	/* Offset= 1620 (2308) */
/* 690 */	NdrFcLong( 0x101e ),	/* 4126 */
/* 694 */	NdrFcShort( 0x682 ),	/* Offset= 1666 (2360) */
/* 696 */	NdrFcLong( 0x101f ),	/* 4127 */
/* 700 */	NdrFcShort( 0x6b0 ),	/* Offset= 1712 (2412) */
/* 702 */	NdrFcLong( 0x100c ),	/* 4108 */
/* 706 */	NdrFcShort( 0x6d4 ),	/* Offset= 1748 (2454) */
/* 708 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 712 */	NdrFcShort( 0x3d6 ),	/* Offset= 982 (1694) */
/* 714 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 718 */	NdrFcShort( 0x3d0 ),	/* Offset= 976 (1694) */
/* 720 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 724 */	NdrFcShort( 0x384 ),	/* Offset= 900 (1624) */
/* 726 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 730 */	NdrFcShort( 0x37e ),	/* Offset= 894 (1624) */
/* 732 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 736 */	NdrFcShort( 0x37c ),	/* Offset= 892 (1628) */
/* 738 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 742 */	NdrFcShort( 0x376 ),	/* Offset= 886 (1628) */
/* 744 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 748 */	NdrFcShort( 0x370 ),	/* Offset= 880 (1628) */
/* 750 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 754 */	NdrFcShort( 0x36a ),	/* Offset= 874 (1628) */
/* 756 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 760 */	NdrFcShort( 0x36c ),	/* Offset= 876 (1636) */
/* 762 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 766 */	NdrFcShort( 0x36a ),	/* Offset= 874 (1640) */
/* 768 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 772 */	NdrFcShort( 0x354 ),	/* Offset= 852 (1624) */
/* 774 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 778 */	NdrFcShort( 0x390 ),	/* Offset= 912 (1690) */
/* 780 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 784 */	NdrFcShort( 0x34c ),	/* Offset= 844 (1628) */
/* 786 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 790 */	NdrFcShort( 0x356 ),	/* Offset= 854 (1644) */
/* 792 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 796 */	NdrFcShort( 0x34c ),	/* Offset= 844 (1640) */
/* 798 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 802 */	NdrFcShort( 0x684 ),	/* Offset= 1668 (2470) */
/* 804 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 808 */	NdrFcShort( 0x34c ),	/* Offset= 844 (1652) */
/* 810 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 814 */	NdrFcShort( 0x34a ),	/* Offset= 842 (1656) */
/* 816 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 820 */	NdrFcShort( 0x676 ),	/* Offset= 1654 (2474) */
/* 822 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 826 */	NdrFcShort( 0x674 ),	/* Offset= 1652 (2478) */
/* 828 */	NdrFcShort( 0xffff ),	/* Offset= -1 (827) */
/* 830 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 834 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 836 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 840 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 842 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 844 */	
			0x13, 0x0,	/* FC_OP */
/* 846 */	NdrFcShort( 0xfcea ),	/* Offset= -790 (56) */
/* 848 */	
			0x13, 0x0,	/* FC_OP */
/* 850 */	NdrFcShort( 0xe ),	/* Offset= 14 (864) */
/* 852 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 854 */	NdrFcShort( 0x1 ),	/* 1 */
/* 856 */	0x10,		/* Corr desc:  field pointer,  */
			0x59,		/* FC_CALLBACK */
/* 858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 860 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 862 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 864 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 866 */	NdrFcShort( 0xc ),	/* 12 */
/* 868 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 870 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 876 */	0x13, 0x0,	/* FC_OP */
/* 878 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (852) */
/* 880 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 882 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 884 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 886 */	
			0x13, 0x0,	/* FC_OP */
/* 888 */	NdrFcShort( 0xe ),	/* Offset= 14 (902) */
/* 890 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 892 */	NdrFcShort( 0x2 ),	/* 2 */
/* 894 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 896 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 898 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 900 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 902 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 906 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (890) */
/* 908 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 910 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 912 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x4 ),	/* 4 */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0xffde ),	/* Offset= -34 (886) */
/* 922 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 926 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 932 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 934 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 938 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 940 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 942 */	NdrFcShort( 0x4 ),	/* 4 */
/* 944 */	NdrFcShort( 0x4 ),	/* 4 */
/* 946 */	0x13, 0x0,	/* FC_OP */
/* 948 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (922) */
/* 950 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 952 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 954 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 956 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 958 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 960 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 962 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 974 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 976 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 978 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 980 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 982 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 992 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 994 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 996 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 998 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1000 */	NdrFcLong( 0xc ),	/* 12 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1010 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1012 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1014 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1016 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1018 */	NdrFcLong( 0xb ),	/* 11 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1028 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1030 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1032 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1034 */	
			0x13, 0x0,	/* FC_OP */
/* 1036 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1038) */
/* 1038 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1040 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0xc ),	/* Offset= 12 (1056) */
/* 1046 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1048 */	NdrFcShort( 0xfc20 ),	/* Offset= -992 (56) */
/* 1050 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1052 */	NdrFcShort( 0xffca ),	/* Offset= -54 (998) */
/* 1054 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1056 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1058 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1060) */
/* 1060 */	
			0x13, 0x0,	/* FC_OP */
/* 1062 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1946) */
/* 1064 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 1066 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1068 */	NdrFcShort( 0xa ),	/* 10 */
/* 1070 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1074 */	NdrFcShort( 0x5a ),	/* Offset= 90 (1164) */
/* 1076 */	NdrFcLong( 0xd ),	/* 13 */
/* 1080 */	NdrFcShort( 0x7e ),	/* Offset= 126 (1206) */
/* 1082 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1086 */	NdrFcShort( 0x9e ),	/* Offset= 158 (1244) */
/* 1088 */	NdrFcLong( 0xc ),	/* 12 */
/* 1092 */	NdrFcShort( 0x292 ),	/* Offset= 658 (1750) */
/* 1094 */	NdrFcLong( 0x24 ),	/* 36 */
/* 1098 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (1798) */
/* 1100 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 1104 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1814) */
/* 1106 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1110 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (934) */
/* 1112 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1116 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1846) */
/* 1118 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1122 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (1878) */
/* 1124 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1128 */	NdrFcShort( 0x30e ),	/* Offset= 782 (1910) */
/* 1130 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1129) */
/* 1132 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1134 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1136 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1142 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1144 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	0x13, 0x0,	/* FC_OP */
/* 1158 */	NdrFcShort( 0xff00 ),	/* Offset= -256 (902) */
/* 1160 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1162 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1164 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1168 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1170 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1172 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1176 */	0x11, 0x0,	/* FC_RP */
/* 1178 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1132) */
/* 1180 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1182 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1184 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1194 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1198 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1200 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1202 */	NdrFcShort( 0xff10 ),	/* Offset= -240 (962) */
/* 1204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1206 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1218) */
/* 1214 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1218 */	
			0x11, 0x0,	/* FC_RP */
/* 1220 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1184) */
/* 1222 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1232 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1236 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1238 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1240 */	NdrFcShort( 0xfefc ),	/* Offset= -260 (980) */
/* 1242 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1244 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1256) */
/* 1252 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1254 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1256 */	
			0x11, 0x0,	/* FC_RP */
/* 1258 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1222) */
/* 1260 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1262 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1264 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1266 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1268 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1270) */
/* 1270 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1272 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1274 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1278 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 1280 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1284 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1286 */	NdrFcLong( 0x11 ),	/* 17 */
/* 1290 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 1292 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1296 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1298 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1302 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 1304 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1308 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 1310 */	NdrFcLong( 0xb ),	/* 11 */
/* 1314 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1316 */	NdrFcLong( 0xa ),	/* 10 */
/* 1320 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1322 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1326 */	NdrFcShort( 0xfe10 ),	/* Offset= -496 (830) */
/* 1328 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1332 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 1334 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1338 */	NdrFcShort( 0xfe3c ),	/* Offset= -452 (886) */
/* 1340 */	NdrFcLong( 0xd ),	/* 13 */
/* 1344 */	NdrFcShort( 0xfe82 ),	/* Offset= -382 (962) */
/* 1346 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1350 */	NdrFcShort( 0xfe8e ),	/* Offset= -370 (980) */
/* 1352 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1356 */	NdrFcShort( 0xca ),	/* Offset= 202 (1558) */
/* 1358 */	NdrFcLong( 0x24 ),	/* 36 */
/* 1362 */	NdrFcShort( 0xcc ),	/* Offset= 204 (1566) */
/* 1364 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 1368 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (1566) */
/* 1370 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 1374 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (1620) */
/* 1376 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 1380 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (1624) */
/* 1382 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 1386 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (1628) */
/* 1388 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 1392 */	NdrFcShort( 0xf0 ),	/* Offset= 240 (1632) */
/* 1394 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 1398 */	NdrFcShort( 0xee ),	/* Offset= 238 (1636) */
/* 1400 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 1404 */	NdrFcShort( 0xec ),	/* Offset= 236 (1640) */
/* 1406 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 1410 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (1624) */
/* 1412 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 1416 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (1628) */
/* 1418 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 1422 */	NdrFcShort( 0xde ),	/* Offset= 222 (1644) */
/* 1424 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 1428 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (1640) */
/* 1430 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 1434 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (1648) */
/* 1436 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 1440 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (1652) */
/* 1442 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 1446 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (1656) */
/* 1448 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 1452 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (1660) */
/* 1454 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 1458 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (1672) */
/* 1460 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1464 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 1466 */	NdrFcLong( 0x12 ),	/* 18 */
/* 1470 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1472 */	NdrFcLong( 0x13 ),	/* 19 */
/* 1476 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1478 */	NdrFcLong( 0x15 ),	/* 21 */
/* 1482 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 1484 */	NdrFcLong( 0x16 ),	/* 22 */
/* 1488 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1490 */	NdrFcLong( 0x17 ),	/* 23 */
/* 1494 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1496 */	NdrFcLong( 0xe ),	/* 14 */
/* 1500 */	NdrFcShort( 0xb4 ),	/* Offset= 180 (1680) */
/* 1502 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 1506 */	NdrFcShort( 0xb8 ),	/* Offset= 184 (1690) */
/* 1508 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 1512 */	NdrFcShort( 0xb6 ),	/* Offset= 182 (1694) */
/* 1514 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 1518 */	NdrFcShort( 0x6a ),	/* Offset= 106 (1624) */
/* 1520 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 1524 */	NdrFcShort( 0x68 ),	/* Offset= 104 (1628) */
/* 1526 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 1530 */	NdrFcShort( 0x66 ),	/* Offset= 102 (1632) */
/* 1532 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 1536 */	NdrFcShort( 0x5c ),	/* Offset= 92 (1628) */
/* 1538 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 1542 */	NdrFcShort( 0x56 ),	/* Offset= 86 (1628) */
/* 1544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1548) */
/* 1550 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1554 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1554) */
/* 1556 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1555) */
/* 1558 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1560 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1562) */
/* 1562 */	
			0x13, 0x0,	/* FC_OP */
/* 1564 */	NdrFcShort( 0x17e ),	/* Offset= 382 (1946) */
/* 1566 */	
			0x13, 0x0,	/* FC_OP */
/* 1568 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1600) */
/* 1570 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1572 */	NdrFcLong( 0x2f ),	/* 47 */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1582 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1584 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1586 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1588 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1590 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1592 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1594 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1596 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1598 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1600 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1602 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0xa ),	/* Offset= 10 (1616) */
/* 1608 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1610 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1612 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1570) */
/* 1614 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1616 */	
			0x13, 0x0,	/* FC_OP */
/* 1618 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1588) */
/* 1620 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1622 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1624 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1626 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1628 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1630 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1632 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1634 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1636 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1638 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1640 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1642 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1644 */	
			0x13, 0x0,	/* FC_OP */
/* 1646 */	NdrFcShort( 0xfcd0 ),	/* Offset= -816 (830) */
/* 1648 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1650 */	NdrFcShort( 0xfd04 ),	/* Offset= -764 (886) */
/* 1652 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1654 */	NdrFcShort( 0xfd4c ),	/* Offset= -692 (962) */
/* 1656 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1658 */	NdrFcShort( 0xfd5a ),	/* Offset= -678 (980) */
/* 1660 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1662 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1664) */
/* 1664 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1666 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1668) */
/* 1668 */	
			0x13, 0x0,	/* FC_OP */
/* 1670 */	NdrFcShort( 0x114 ),	/* Offset= 276 (1946) */
/* 1672 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1674 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1676) */
/* 1676 */	
			0x13, 0x0,	/* FC_OP */
/* 1678 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1698) */
/* 1680 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1682 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1684 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1686 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1688 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1690 */	
			0x13, 0x0,	/* FC_OP */
/* 1692 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1680) */
/* 1694 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1696 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1698 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1700 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1704) */
/* 1706 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1708 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1710 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1712 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1714 */	NdrFcShort( 0xfe3a ),	/* Offset= -454 (1260) */
/* 1716 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1718 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1720 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1722 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1728 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1730 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1732 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	0x13, 0x0,	/* FC_OP */
/* 1744 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1698) */
/* 1746 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1748 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1750 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1762) */
/* 1758 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1760 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1762 */	
			0x11, 0x0,	/* FC_RP */
/* 1764 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1718) */
/* 1766 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1768 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1770 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1776 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1778 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1780 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	0x13, 0x0,	/* FC_OP */
/* 1792 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (1600) */
/* 1794 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1796 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1798 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1804 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1810) */
/* 1806 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1808 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1810 */	
			0x11, 0x0,	/* FC_RP */
/* 1812 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1766) */
/* 1814 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1816 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0xa ),	/* Offset= 10 (1830) */
/* 1822 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1824 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1826 */	NdrFcShort( 0xf916 ),	/* Offset= -1770 (56) */
/* 1828 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1830 */	
			0x11, 0x0,	/* FC_RP */
/* 1832 */	NdrFcShort( 0xfd78 ),	/* Offset= -648 (1184) */
/* 1834 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1836 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1838 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1844 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1846 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1850 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1852 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1856 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1858 */	0x13, 0x0,	/* FC_OP */
/* 1860 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1834) */
/* 1862 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1864 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1866 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1868 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1870 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1876 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1878 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1882 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1884 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1886 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1888 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1890 */	0x13, 0x0,	/* FC_OP */
/* 1892 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1866) */
/* 1894 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1896 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1898 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1902 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1906 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1908 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1910 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1914 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1916 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1918 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1920 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1922 */	0x13, 0x0,	/* FC_OP */
/* 1924 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1898) */
/* 1926 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1928 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1930 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1934 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1936 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1938 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1940 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1942 */	NdrFcShort( 0xfbae ),	/* Offset= -1106 (836) */
/* 1944 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1946 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1948 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1950 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1930) */
/* 1952 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1952) */
/* 1954 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1956 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1958 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1960 */	NdrFcShort( 0xfc80 ),	/* Offset= -896 (1064) */
/* 1962 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1964 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1968 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0xfc6c ),	/* Offset= -916 (1056) */
/* 1974 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1978 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1982 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1984 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1986 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1990 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1992 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1996 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1998 */	0x13, 0x0,	/* FC_OP */
/* 2000 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1974) */
/* 2002 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2004 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2006 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2010 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2016 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2018 */	NdrFcShort( 0xfb5c ),	/* Offset= -1188 (830) */
/* 2020 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2022 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2026 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2028 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2030 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2032 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2034 */	0x13, 0x0,	/* FC_OP */
/* 2036 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2006) */
/* 2038 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2040 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2042 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2044 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2046 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2052 */	0xa,		/* FC_FLOAT */
			0x5b,		/* FC_END */
/* 2054 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2058 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2060 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2062 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2064 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2066 */	0x13, 0x0,	/* FC_OP */
/* 2068 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2042) */
/* 2070 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2072 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2074 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2078 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2084 */	0xc,		/* FC_DOUBLE */
			0x5b,		/* FC_END */
/* 2086 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2090 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2092 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2094 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2096 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2098 */	0x13, 0x0,	/* FC_OP */
/* 2100 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2074) */
/* 2102 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2104 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2106 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2110 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2116 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2118 */	NdrFcShort( 0xfafe ),	/* Offset= -1282 (836) */
/* 2120 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2122 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2126 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2128 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2132 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2134 */	0x13, 0x0,	/* FC_OP */
/* 2136 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2106) */
/* 2138 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2140 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2142 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2144 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2146 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2152 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2154 */	NdrFcShort( 0xf7ce ),	/* Offset= -2098 (56) */
/* 2156 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2158 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2162 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2164 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2170 */	0x13, 0x0,	/* FC_OP */
/* 2172 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2142) */
/* 2174 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2176 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2178 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2180 */	NdrFcShort( 0xc ),	/* 12 */
/* 2182 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2188 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2190 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2192 */	NdrFcShort( 0xc ),	/* 12 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2202 */	0x13, 0x0,	/* FC_OP */
/* 2204 */	NdrFcShort( 0xfab8 ),	/* Offset= -1352 (852) */
/* 2206 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2208 */	0x0,		/* 0 */
			NdrFcShort( 0xfabf ),	/* Offset= -1345 (864) */
			0x5b,		/* FC_END */
/* 2212 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2216 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2218 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2222 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2224 */	0x13, 0x0,	/* FC_OP */
/* 2226 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (2178) */
/* 2228 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2230 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2232 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2236 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2242 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2246 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2248 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2250 */	NdrFcShort( 0xfac6 ),	/* Offset= -1338 (912) */
/* 2252 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2254 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2258 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2260 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2262 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2264 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2266 */	0x13, 0x0,	/* FC_OP */
/* 2268 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2232) */
/* 2270 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2272 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2274 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2278 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2284 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2286 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2294 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2296 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2298 */	0x13, 0x0,	/* FC_OP */
/* 2300 */	NdrFcShort( 0xfa9e ),	/* Offset= -1378 (922) */
/* 2302 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2304 */	0x0,		/* 0 */
			NdrFcShort( 0xfaa5 ),	/* Offset= -1371 (934) */
			0x5b,		/* FC_END */
/* 2308 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2312 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2314 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2316 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2318 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2320 */	0x13, 0x0,	/* FC_OP */
/* 2322 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (2274) */
/* 2324 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2326 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2328 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2330 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2332 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2338 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2340 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2342 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2352 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2354 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2356 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2358 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2360 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2364 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2366 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2368 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2370 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2372 */	0x13, 0x0,	/* FC_OP */
/* 2374 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2328) */
/* 2376 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2378 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2380 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2382 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2384 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2390 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2392 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2394 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2406 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2408 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2410 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2412 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2416 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2418 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2420 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2422 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2424 */	0x13, 0x0,	/* FC_OP */
/* 2426 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2380) */
/* 2428 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2430 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2432 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2442 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2446 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2448 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2450 */	NdrFcShort( 0x20 ),	/* Offset= 32 (2482) */
/* 2452 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2454 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2466) */
/* 2462 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2464 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2466 */	
			0x13, 0x0,	/* FC_OP */
/* 2468 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2432) */
/* 2470 */	
			0x13, 0x0,	/* FC_OP */
/* 2472 */	NdrFcShort( 0xf9e8 ),	/* Offset= -1560 (912) */
/* 2474 */	
			0x13, 0x0,	/* FC_OP */
/* 2476 */	NdrFcShort( 0xfe00 ),	/* Offset= -512 (1964) */
/* 2478 */	
			0x13, 0x0,	/* FC_OP */
/* 2480 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2482) */
/* 2482 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2484 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2488) */
/* 2490 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 2492 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 2494 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2496 */	NdrFcShort( 0xf728 ),	/* Offset= -2264 (232) */
/* 2498 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2500 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2502 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2504) */
/* 2504 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2506 */	NdrFcLong( 0x101 ),	/* 257 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2516 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2518 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2520 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2522 */	
			0x11, 0x0,	/* FC_RP */
/* 2524 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (2482) */
/* 2526 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2528 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2530) */
/* 2530 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2532 */	NdrFcLong( 0x30989668 ),	/* 815306344 */
/* 2536 */	NdrFcShort( 0xe1c9 ),	/* -7735 */
/* 2538 */	NdrFcShort( 0x4597 ),	/* 17815 */
/* 2540 */	0xb3,		/* 179 */
			0x95,		/* 149 */
/* 2542 */	0x45,		/* 69 */
			0x8e,		/* 142 */
/* 2544 */	0xed,		/* 237 */
			0xb8,		/* 184 */
/* 2546 */	0x8,		/* 8 */
			0xdf,		/* 223 */
/* 2548 */	
			0x12, 0x0,	/* FC_UP */
/* 2550 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2570) */
/* 2552 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2554 */	NdrFcLong( 0x3c613a02 ),	/* 1013004802 */
/* 2558 */	NdrFcShort( 0x34b2 ),	/* 13490 */
/* 2560 */	NdrFcShort( 0x44ea ),	/* 17642 */
/* 2562 */	0x9a,		/* 154 */
			0x7c,		/* 124 */
/* 2564 */	0x45,		/* 69 */
			0xae,		/* 174 */
/* 2566 */	0xa9,		/* 169 */
			0xc6,		/* 198 */
/* 2568 */	0xfd,		/* 253 */
			0x6d,		/* 109 */
/* 2570 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2574 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2576 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2578 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2580 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2584 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2586 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2588 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2552) */
/* 2590 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2592 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2594 */	NdrFcShort( 0xf66a ),	/* Offset= -2454 (140) */
/* 2596 */	
			0x12, 0x0,	/* FC_UP */
/* 2598 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2600) */
/* 2600 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2602 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2604 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2608 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2610 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2612 */	NdrFcShort( 0xf604 ),	/* Offset= -2556 (56) */
/* 2614 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2616 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2618 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2620) */
/* 2620 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2622 */	NdrFcLong( 0x9edde9e7 ),	/* -1629623833 */
/* 2626 */	NdrFcShort( 0x8dee ),	/* -29202 */
/* 2628 */	NdrFcShort( 0x47ea ),	/* 18410 */
/* 2630 */	0x99,		/* 153 */
			0xdf,		/* 223 */
/* 2632 */	0xe6,		/* 230 */
			0xfa,		/* 250 */
/* 2634 */	0xf2,		/* 242 */
			0xed,		/* 237 */
/* 2636 */	0x44,		/* 68 */
			0xbf,		/* 191 */
/* 2638 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2640 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2642) */
/* 2642 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2644 */	NdrFcLong( 0xd8cd007f ),	/* -657653633 */
/* 2648 */	NdrFcShort( 0xd08f ),	/* -12145 */
/* 2650 */	NdrFcShort( 0x4191 ),	/* 16785 */
/* 2652 */	0x9b,		/* 155 */
			0xfc,		/* 252 */
/* 2654 */	0x23,		/* 35 */
			0x6e,		/* 110 */
/* 2656 */	0xa7,		/* 167 */
			0xf0,		/* 240 */
/* 2658 */	0xe4,		/* 228 */
			0xb5,		/* 181 */
/* 2660 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2662 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2664) */
/* 2664 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2666 */	NdrFcLong( 0x3b16811b ),	/* 991330587 */
/* 2670 */	NdrFcShort( 0x6a43 ),	/* 27203 */
/* 2672 */	NdrFcShort( 0x4ec9 ),	/* 20169 */
/* 2674 */	0xa8,		/* 168 */
			0x13,		/* 19 */
/* 2676 */	0x3d,		/* 61 */
			0x93,		/* 147 */
/* 2678 */	0xc,		/* 12 */
			0x13,		/* 19 */
/* 2680 */	0xb9,		/* 185 */
			0x40,		/* 64 */
/* 2682 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2684 */	NdrFcLong( 0x22f55882 ),	/* 586504322 */
/* 2688 */	NdrFcShort( 0x280b ),	/* 10251 */
/* 2690 */	NdrFcShort( 0x11d0 ),	/* 4560 */
/* 2692 */	0xa8,		/* 168 */
			0xa9,		/* 169 */
/* 2694 */	0x0,		/* 0 */
			0xa0,		/* 160 */
/* 2696 */	0xc9,		/* 201 */
			0xc,		/* 12 */
/* 2698 */	0x20,		/* 32 */
			0x4,		/* 4 */
/* 2700 */	
			0x11, 0x0,	/* FC_RP */
/* 2702 */	NdrFcShort( 0xf5aa ),	/* Offset= -2646 (56) */
/* 2704 */	
			0x11, 0x0,	/* FC_RP */
/* 2706 */	NdrFcShort( 0xff78 ),	/* Offset= -136 (2570) */
/* 2708 */	
			0x12, 0x0,	/* FC_UP */
/* 2710 */	NdrFcShort( 0xf5c8 ),	/* Offset= -2616 (94) */
/* 2712 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2714 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2716) */
/* 2716 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2718 */	NdrFcLong( 0xa721791a ),	/* -1490978534 */
/* 2722 */	NdrFcShort( 0xdef ),	/* 3567 */
/* 2724 */	NdrFcShort( 0x4d06 ),	/* 19718 */
/* 2726 */	0xbd,		/* 189 */
			0x91,		/* 145 */
/* 2728 */	0x21,		/* 33 */
			0x18,		/* 24 */
/* 2730 */	0xbf,		/* 191 */
			0x1d,		/* 29 */
/* 2732 */	0xb1,		/* 177 */
			0xb,		/* 11 */
/* 2734 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2736 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2738) */
/* 2738 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2740 */	NdrFcLong( 0x103 ),	/* 259 */
/* 2744 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 2746 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 2748 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 2750 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 2752 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 2754 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 2756 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2758 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2760) */
/* 2760 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2762 */	NdrFcLong( 0x94c9b4ee ),	/* -1798720274 */
/* 2766 */	NdrFcShort( 0xa09f ),	/* -24417 */
/* 2768 */	NdrFcShort( 0x4f92 ),	/* 20370 */
/* 2770 */	0x8a,		/* 138 */
			0x1e,		/* 30 */
/* 2772 */	0x4a,		/* 74 */
			0x9b,		/* 155 */
/* 2774 */	0xce,		/* 206 */
			0x7e,		/* 126 */
/* 2776 */	0x76,		/* 118 */
			0xfb,		/* 251 */
/* 2778 */	
			0x11, 0x0,	/* FC_RP */
/* 2780 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2800) */
/* 2782 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2784 */	NdrFcLong( 0x3c613a02 ),	/* 1013004802 */
/* 2788 */	NdrFcShort( 0x34b2 ),	/* 13490 */
/* 2790 */	NdrFcShort( 0x44ea ),	/* 17642 */
/* 2792 */	0x9a,		/* 154 */
			0x7c,		/* 124 */
/* 2794 */	0x45,		/* 69 */
			0xae,		/* 174 */
/* 2796 */	0xa9,		/* 169 */
			0xc6,		/* 198 */
/* 2798 */	0xfd,		/* 253 */
			0x6d,		/* 109 */
/* 2800 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2804 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2808 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2810 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2814 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2816 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2818 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2782) */
/* 2820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2822 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2824 */	NdrFcLong( 0x40 ),	/* 64 */
/* 2828 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 2830 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 2832 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 2834 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 2836 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 2838 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 2840 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2842 */	NdrFcLong( 0x120 ),	/* 288 */
/* 2846 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 2848 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 2850 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 2852 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 2854 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 2856 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 2858 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2860 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2862) */
/* 2862 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2864 */	NdrFcLong( 0x105 ),	/* 261 */
/* 2868 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 2870 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 2872 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 2874 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 2876 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 2878 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 2880 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 2882 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2884) */
/* 2884 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2886 */	NdrFcLong( 0x22f55882 ),	/* 586504322 */
/* 2890 */	NdrFcShort( 0x280b ),	/* 10251 */
/* 2892 */	NdrFcShort( 0x11d0 ),	/* 4560 */
/* 2894 */	0xa8,		/* 168 */
			0xa9,		/* 169 */
/* 2896 */	0x0,		/* 0 */
			0xa0,		/* 160 */
/* 2898 */	0xc9,		/* 201 */
			0xc,		/* 12 */
/* 2900 */	0x20,		/* 32 */
			0x4,		/* 4 */
/* 2902 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2904 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2906) */
/* 2906 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2908 */	NdrFcLong( 0xa721791a ),	/* -1490978534 */
/* 2912 */	NdrFcShort( 0xdef ),	/* 3567 */
/* 2914 */	NdrFcShort( 0x4d06 ),	/* 19718 */
/* 2916 */	0xbd,		/* 189 */
			0x91,		/* 145 */
/* 2918 */	0x21,		/* 33 */
			0x18,		/* 24 */
/* 2920 */	0xbf,		/* 191 */
			0x1d,		/* 29 */
/* 2922 */	0xb1,		/* 177 */
			0xb,		/* 11 */
/* 2924 */	
			0x11, 0x0,	/* FC_RP */
/* 2926 */	NdrFcShort( 0xfeba ),	/* Offset= -326 (2600) */
/* 2928 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2930 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2932) */
/* 2932 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2934 */	NdrFcLong( 0x301 ),	/* 769 */
/* 2938 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 2940 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 2942 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 2944 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 2946 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 2948 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 2950 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2952 */	NdrFcLong( 0xc ),	/* 12 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2962 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2964 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2966 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2968 */	
			0x12, 0x0,	/* FC_UP */
/* 2970 */	NdrFcShort( 0xf49e ),	/* Offset= -2914 (56) */
/* 2972 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2974 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2976) */
/* 2976 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2978 */	NdrFcLong( 0x9edde9e7 ),	/* -1629623833 */
/* 2982 */	NdrFcShort( 0x8dee ),	/* -29202 */
/* 2984 */	NdrFcShort( 0x47ea ),	/* 18410 */
/* 2986 */	0x99,		/* 153 */
			0xdf,		/* 223 */
/* 2988 */	0xe6,		/* 230 */
			0xfa,		/* 250 */
/* 2990 */	0xf2,		/* 242 */
			0xed,		/* 237 */
/* 2992 */	0x44,		/* 68 */
			0xbf,		/* 191 */
/* 2994 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 2996 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2998) */
/* 2998 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3000 */	NdrFcLong( 0x23bc3f0a ),	/* 599539466 */
/* 3004 */	NdrFcShort( 0x698b ),	/* 27019 */
/* 3006 */	NdrFcShort( 0x4357 ),	/* 17239 */
/* 3008 */	0x88,		/* 136 */
			0x6b,		/* 107 */
/* 3010 */	0xf2,		/* 242 */
			0x4d,		/* 77 */
/* 3012 */	0x50,		/* 80 */
			0x67,		/* 103 */
/* 3014 */	0x13,		/* 19 */
			0x34,		/* 52 */
/* 3016 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3018 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3020) */
/* 3020 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3022 */	NdrFcLong( 0x103 ),	/* 259 */
/* 3026 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 3028 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 3030 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 3032 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 3034 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 3036 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 3038 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3040 */	NdrFcShort( 0xff26 ),	/* Offset= -218 (2822) */
/* 3042 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3044 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3046) */
/* 3046 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3048 */	NdrFcLong( 0x302 ),	/* 770 */
/* 3052 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 3054 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 3056 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 3058 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 3060 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 3062 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 3064 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3066 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3068) */
/* 3068 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3070 */	NdrFcLong( 0xe4fbcf03 ),	/* -453259517 */
/* 3074 */	NdrFcShort( 0x223d ),	/* 8765 */
/* 3076 */	NdrFcShort( 0x4e81 ),	/* 20097 */
/* 3078 */	0x93,		/* 147 */
			0x33,		/* 51 */
/* 3080 */	0xd6,		/* 214 */
			0x35,		/* 53 */
/* 3082 */	0x55,		/* 85 */
			0x6d,		/* 109 */
/* 3084 */	0xd1,		/* 209 */
			0xb5,		/* 181 */
/* 3086 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3088 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3090) */
/* 3090 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3092 */	NdrFcLong( 0x5009834f ),	/* 1342800719 */
/* 3096 */	NdrFcShort( 0x2d6a ),	/* 11626 */
/* 3098 */	NdrFcShort( 0x41ce ),	/* 16846 */
/* 3100 */	0x9e,		/* 158 */
			0x1b,		/* 27 */
/* 3102 */	0x17,		/* 23 */
			0xc5,		/* 197 */
/* 3104 */	0xaf,		/* 175 */
			0xf7,		/* 247 */
/* 3106 */	0xa7,		/* 167 */
			0x82,		/* 130 */
/* 3108 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3112) */
/* 3112 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3114 */	NdrFcLong( 0x135ff860 ),	/* 325056608 */
/* 3118 */	NdrFcShort( 0x22b7 ),	/* 8887 */
/* 3120 */	NdrFcShort( 0x4ddf ),	/* 19935 */
/* 3122 */	0xb0,		/* 176 */
			0xf6,		/* 246 */
/* 3124 */	0x21,		/* 33 */
			0x8f,		/* 143 */
/* 3126 */	0x4f,		/* 79 */
			0x29,		/* 41 */
/* 3128 */	0x9a,		/* 154 */
			0x43,		/* 67 */
/* 3130 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3132 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3134) */
/* 3134 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3136 */	NdrFcLong( 0x3c613a02 ),	/* 1013004802 */
/* 3140 */	NdrFcShort( 0x34b2 ),	/* 13490 */
/* 3142 */	NdrFcShort( 0x44ea ),	/* 17642 */
/* 3144 */	0x9a,		/* 154 */
			0x7c,		/* 124 */
/* 3146 */	0x45,		/* 69 */
			0xae,		/* 174 */
/* 3148 */	0xa9,		/* 169 */
			0xc6,		/* 198 */
/* 3150 */	0xfd,		/* 253 */
			0x6d,		/* 109 */
/* 3152 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3154 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3156) */
/* 3156 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3158 */	NdrFcLong( 0xb66f034f ),	/* -1234238641 */
/* 3162 */	NdrFcShort( 0xd0e2 ),	/* -12062 */
/* 3164 */	NdrFcShort( 0x40ab ),	/* 16555 */
/* 3166 */	0xb4,		/* 180 */
			0x36,		/* 54 */
/* 3168 */	0x6d,		/* 109 */
			0xe3,		/* 227 */
/* 3170 */	0x9e,		/* 158 */
			0x32,		/* 50 */
/* 3172 */	0x1a,		/* 26 */
			0x94,		/* 148 */
/* 3174 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3178) */
/* 3178 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3180 */	NdrFcLong( 0x121 ),	/* 289 */
/* 3184 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 3186 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 3188 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 3190 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 3192 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 3194 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 3196 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3198 */	NdrFcLong( 0x120 ),	/* 288 */
/* 3202 */	NdrFcShort( 0xa8f2 ),	/* -22286 */
/* 3204 */	NdrFcShort( 0x4877 ),	/* 18551 */
/* 3206 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 3208 */	0xfd,		/* 253 */
			0x2b,		/* 43 */
/* 3210 */	0x66,		/* 102 */
			0x45,		/* 69 */
/* 3212 */	0xfb,		/* 251 */
			0x94,		/* 148 */
/* 3214 */	
			0x11, 0x0,	/* FC_RP */
/* 3216 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3218) */
/* 3218 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3222 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3226 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3228 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3230 */	
			0x12, 0x0,	/* FC_UP */
/* 3232 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3234) */
/* 3234 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x88,		/* 136 */
/* 3236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3238 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3240 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 3244 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3246 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 3250 */	NdrFcShort( 0xa ),	/* Offset= 10 (3260) */
/* 3252 */	NdrFcLong( 0x50746457 ),	/* 1349805143 */
/* 3256 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 3258 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3257) */
/* 3260 */	
			0x12, 0x0,	/* FC_UP */
/* 3262 */	NdrFcShort( 0xe ),	/* Offset= 14 (3276) */
/* 3264 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3268 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 3270 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 3272 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3274 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3276 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 3278 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3280 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (3264) */
/* 3282 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3284 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3286 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 3288 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3290 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 3292 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3294 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (3230) */
/* 3300 */	
			0x12, 0x0,	/* FC_UP */
/* 3302 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3304) */
/* 3304 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x88,		/* 136 */
/* 3306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3308 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3310 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 3314 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3316 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 3320 */	NdrFcShort( 0xa ),	/* Offset= 10 (3330) */
/* 3322 */	NdrFcLong( 0x50746457 ),	/* 1349805143 */
/* 3326 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 3328 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3327) */
/* 3330 */	
			0x12, 0x0,	/* FC_UP */
/* 3332 */	NdrFcShort( 0x1c ),	/* Offset= 28 (3360) */
/* 3334 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 3336 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3338 */	0x1,		/* FC_BYTE */
			0x1,		/* FC_BYTE */
/* 3340 */	0x1,		/* FC_BYTE */
			0x1,		/* FC_BYTE */
/* 3342 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3344 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3346 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3348 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 3350 */	NdrFcShort( 0xfffe ),	/* -2 */
/* 3352 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3354 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3356 */	NdrFcShort( 0xffea ),	/* Offset= -22 (3334) */
/* 3358 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3360 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 3362 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3364 */	NdrFcShort( 0xffec ),	/* Offset= -20 (3344) */
/* 3366 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 3368 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3370 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 3372 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3374 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (3300) */
/* 3380 */	
			0x12, 0x0,	/* FC_UP */
/* 3382 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3384) */
/* 3384 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 3386 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3388 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3390 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 3394 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3396 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 3400 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3402 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3401) */
/* 3404 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 3406 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3408 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (3380) */
/* 3414 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3416 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3418) */
/* 3418 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3420 */	NdrFcLong( 0x100 ),	/* 256 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 3430 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3432 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3434 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 3436 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3438 */	NdrFcLong( 0x9edde9e7 ),	/* -1629623833 */
/* 3442 */	NdrFcShort( 0x8dee ),	/* -29202 */
/* 3444 */	NdrFcShort( 0x47ea ),	/* 18410 */
/* 3446 */	0x99,		/* 153 */
			0xdf,		/* 223 */
/* 3448 */	0xe6,		/* 230 */
			0xfa,		/* 250 */
/* 3450 */	0xf2,		/* 242 */
			0xed,		/* 237 */
/* 3452 */	0x44,		/* 68 */
			0xbf,		/* 191 */
/* 3454 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3456 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3458) */
/* 3458 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3460 */	NdrFcLong( 0xb84e2c09 ),	/* -1202836471 */
/* 3464 */	NdrFcShort( 0x78c9 ),	/* 30921 */
/* 3466 */	NdrFcShort( 0x4ac4 ),	/* 19140 */
/* 3468 */	0x8b,		/* 139 */
			0xd3,		/* 211 */
/* 3470 */	0x52,		/* 82 */
			0x4a,		/* 74 */
/* 3472 */	0xe1,		/* 225 */
			0x66,		/* 102 */
/* 3474 */	0x3a,		/* 58 */
			0x2f,		/* 47 */
/* 3476 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3478 */	NdrFcLong( 0x3b16811b ),	/* 991330587 */
/* 3482 */	NdrFcShort( 0x6a43 ),	/* 27203 */
/* 3484 */	NdrFcShort( 0x4ec9 ),	/* 20169 */
/* 3486 */	0xa8,		/* 168 */
			0x13,		/* 19 */
/* 3488 */	0x3d,		/* 61 */
			0x93,		/* 147 */
/* 3490 */	0xc,		/* 12 */
			0x13,		/* 19 */
/* 3492 */	0xb9,		/* 185 */
			0x40,		/* 64 */
/* 3494 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3496 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3498) */
/* 3498 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3500 */	NdrFcLong( 0xa721791a ),	/* -1490978534 */
/* 3504 */	NdrFcShort( 0xdef ),	/* 3567 */
/* 3506 */	NdrFcShort( 0x4d06 ),	/* 19718 */
/* 3508 */	0xbd,		/* 189 */
			0x91,		/* 145 */
/* 3510 */	0x21,		/* 33 */
			0x18,		/* 24 */
/* 3512 */	0xbf,		/* 191 */
			0x1d,		/* 29 */
/* 3514 */	0xb1,		/* 177 */
			0xb,		/* 11 */
/* 3516 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3518 */	NdrFcLong( 0x30989668 ),	/* 815306344 */
/* 3522 */	NdrFcShort( 0xe1c9 ),	/* -7735 */
/* 3524 */	NdrFcShort( 0x4597 ),	/* 17815 */
/* 3526 */	0xb3,		/* 179 */
			0x95,		/* 149 */
/* 3528 */	0x45,		/* 69 */
			0x8e,		/* 142 */
/* 3530 */	0xed,		/* 237 */
			0xb8,		/* 184 */
/* 3532 */	0x8,		/* 8 */
			0xdf,		/* 223 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            },
            {
            HBITMAP_UserSize
            ,HBITMAP_UserMarshal
            ,HBITMAP_UserUnmarshal
            ,HBITMAP_UserFree
            },
            {
            HPALETTE_UserSize
            ,HPALETTE_UserMarshal
            ,HPALETTE_UserUnmarshal
            ,HPALETTE_UserFree
            },
            {
            HICON_UserSize
            ,HICON_UserMarshal
            ,HICON_UserUnmarshal
            ,HICON_UserFree
            }

        };


static void __RPC_USER IWICMetadataQueryReader_PROPVARIANTExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    PROPVARIANT *pS	=	( PROPVARIANT * )(( pStubMsg->StackTop - 8 ) );
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( ( unsigned short  )pS->vt );
}

static void __RPC_USER IWICMetadataQueryReader_CLIPDATAExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    CLIPDATA *pS	=	( CLIPDATA * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( ( pS->cbSize - 4 )  );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IWICMetadataQueryReader_PROPVARIANTExprEval_0000
    ,IWICMetadataQueryReader_CLIPDATAExprEval_0001
    };



/* Standard interface: __MIDL_itf_wincodec_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWICColorContext, ver. 0.0,
   GUID={0x3c613a02,0x34b2,0x44ea,{0x9a,0x7c,0x45,0xae,0xa9,0xc6,0xfd,0x6d}} */

#pragma code_seg(".orpc")
static const unsigned short IWICColorContext_FormatStringOffsetTable[] =
    {
    0,
    36,
    78,
    114,
    150,
    198
    };

static const MIDL_STUBLESS_PROXY_INFO IWICColorContext_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICColorContext_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICColorContext_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICColorContext_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICColorContextProxyVtbl = 
{
    &IWICColorContext_ProxyInfo,
    &IID_IWICColorContext,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICColorContext::InitializeFromFilename */ ,
    (void *) (INT_PTR) -1 /* IWICColorContext::InitializeFromMemory */ ,
    (void *) (INT_PTR) -1 /* IWICColorContext::InitializeFromExifColorSpace */ ,
    (void *) (INT_PTR) -1 /* IWICColorContext::GetType */ ,
    (void *) (INT_PTR) -1 /* IWICColorContext::GetProfileBytes */ ,
    (void *) (INT_PTR) -1 /* IWICColorContext::GetExifColorSpace */
};

const CInterfaceStubVtbl _IWICColorContextStubVtbl =
{
    &IID_IWICColorContext,
    &IWICColorContext_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapSource, ver. 0.0,
   GUID={0x00000120,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapSource_FormatStringOffsetTable[] =
    {
    234,
    276,
    312,
    354,
    390
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapSource_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapSource_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapSource_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapSource_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWICBitmapSourceProxyVtbl = 
{
    &IWICBitmapSource_ProxyInfo,
    &IID_IWICBitmapSource,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */
};

const CInterfaceStubVtbl _IWICBitmapSourceStubVtbl =
{
    &IID_IWICBitmapSource,
    &IWICBitmapSource_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapLock, ver. 0.0,
   GUID={0x00000123,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapLock_FormatStringOffsetTable[] =
    {
    234,
    444,
    480,
    522
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapLock_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapLock_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapLock_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapLock_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWICBitmapLockProxyVtbl = 
{
    &IWICBitmapLock_ProxyInfo,
    &IID_IWICBitmapLock,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapLock::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapLock::GetStride */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapLock::GetDataPointer */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapLock::GetPixelFormat */
};

const CInterfaceStubVtbl _IWICBitmapLockStubVtbl =
{
    &IID_IWICBitmapLock,
    &IWICBitmapLock_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapFlipRotator, ver. 0.0,
   GUID={0x5009834f,0x2d6a,0x41ce,{0x9e,0x1b,0x17,0xc5,0xaf,0xf7,0xa7,0x82}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapFlipRotator_FormatStringOffsetTable[] =
    {
    234,
    276,
    312,
    354,
    390,
    558
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapFlipRotator_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFlipRotator_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapFlipRotator_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFlipRotator_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICBitmapFlipRotatorProxyVtbl = 
{
    &IWICBitmapFlipRotator_ProxyInfo,
    &IID_IWICBitmapFlipRotator,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFlipRotator::Initialize */
};

const CInterfaceStubVtbl _IWICBitmapFlipRotatorStubVtbl =
{
    &IID_IWICBitmapFlipRotator,
    &IWICBitmapFlipRotator_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmap, ver. 0.0,
   GUID={0x00000121,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmap_FormatStringOffsetTable[] =
    {
    234,
    276,
    312,
    354,
    390,
    600,
    648,
    684
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmap_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmap_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmap_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmap_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IWICBitmapProxyVtbl = 
{
    &IWICBitmap_ProxyInfo,
    &IID_IWICBitmap,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmap::Lock */ ,
    (void *) (INT_PTR) -1 /* IWICBitmap::SetPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmap::SetResolution */
};

const CInterfaceStubVtbl _IWICBitmapStubVtbl =
{
    &IID_IWICBitmap,
    &IWICBitmap_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICPalette, ver. 0.0,
   GUID={0x00000040,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICPalette_FormatStringOffsetTable[] =
    {
    726,
    768,
    810,
    354,
    858,
    198,
    894,
    942,
    978,
    1014
    };

static const MIDL_STUBLESS_PROXY_INFO IWICPalette_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPalette_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICPalette_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICPalette_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IWICPaletteProxyVtbl = 
{
    &IWICPalette_ProxyInfo,
    &IID_IWICPalette,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICPalette::InitializePredefined */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::InitializeCustom */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::InitializeFromBitmap */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::InitializeFromPalette */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::GetType */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::GetColorCount */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::GetColors */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::IsBlackWhite */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::IsGrayscale */ ,
    (void *) (INT_PTR) -1 /* IWICPalette::HasAlpha */
};

const CInterfaceStubVtbl _IWICPaletteStubVtbl =
{
    &IID_IWICPalette,
    &IWICPalette_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICComponentInfo, ver. 0.0,
   GUID={0x23bc3f0a,0x698b,0x4357,{0x88,0x6b,0xf2,0x4d,0x50,0x67,0x13,0x34}} */

#pragma code_seg(".orpc")
static const unsigned short IWICComponentInfo_FormatStringOffsetTable[] =
    {
    1050,
    276,
    1086,
    1122,
    1170,
    1206,
    1254,
    1302
    };

static const MIDL_STUBLESS_PROXY_INFO IWICComponentInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICComponentInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICComponentInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICComponentInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IWICComponentInfoProxyVtbl = 
{
    &IWICComponentInfo_ProxyInfo,
    &IID_IWICComponentInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */
};

const CInterfaceStubVtbl _IWICComponentInfoStubVtbl =
{
    &IID_IWICComponentInfo,
    &IWICComponentInfo_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICMetadataQueryReader, ver. 0.0,
   GUID={0x30989668,0xe1c9,0x4597,{0xb3,0x95,0x45,0x8e,0xed,0xb8,0x08,0xdf}} */

#pragma code_seg(".orpc")
static const unsigned short IWICMetadataQueryReader_FormatStringOffsetTable[] =
    {
    1350,
    1386,
    1434,
    1476
    };

static const MIDL_STUBLESS_PROXY_INFO IWICMetadataQueryReader_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICMetadataQueryReader_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICMetadataQueryReader_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICMetadataQueryReader_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWICMetadataQueryReaderProxyVtbl = 
{
    &IWICMetadataQueryReader_ProxyInfo,
    &IID_IWICMetadataQueryReader,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetLocation */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetMetadataByName */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetEnumerator */
};

const CInterfaceStubVtbl _IWICMetadataQueryReaderStubVtbl =
{
    &IID_IWICMetadataQueryReader,
    &IWICMetadataQueryReader_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICMetadataQueryWriter, ver. 0.0,
   GUID={0xa721791a,0x0def,0x4d06,{0xbd,0x91,0x21,0x18,0xbf,0x1d,0xb1,0x0b}} */

#pragma code_seg(".orpc")
static const unsigned short IWICMetadataQueryWriter_FormatStringOffsetTable[] =
    {
    1350,
    1386,
    1434,
    1476,
    1512,
    1554
    };

static const MIDL_STUBLESS_PROXY_INFO IWICMetadataQueryWriter_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICMetadataQueryWriter_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICMetadataQueryWriter_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICMetadataQueryWriter_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICMetadataQueryWriterProxyVtbl = 
{
    &IWICMetadataQueryWriter_ProxyInfo,
    &IID_IWICMetadataQueryWriter,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetLocation */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetMetadataByName */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryReader::GetEnumerator */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryWriter::SetMetadataByName */ ,
    (void *) (INT_PTR) -1 /* IWICMetadataQueryWriter::RemoveMetadataByName */
};

const CInterfaceStubVtbl _IWICMetadataQueryWriterStubVtbl =
{
    &IID_IWICMetadataQueryWriter,
    &IWICMetadataQueryWriter_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapFrameDecode, ver. 0.0,
   GUID={0x3b16811b,0x6a43,0x4ec9,{0xa8,0x13,0x3d,0x93,0x0c,0x13,0xb9,0x40}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapFrameDecode_FormatStringOffsetTable[] =
    {
    234,
    276,
    312,
    354,
    390,
    1590,
    1626,
    1674
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapFrameDecode_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFrameDecode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapFrameDecode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFrameDecode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IWICBitmapFrameDecodeProxyVtbl = 
{
    &IWICBitmapFrameDecode_ProxyInfo,
    &IID_IWICBitmapFrameDecode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameDecode::GetMetadataQueryReader */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameDecode::GetColorContexts */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameDecode::GetThumbnail */
};

const CInterfaceStubVtbl _IWICBitmapFrameDecodeStubVtbl =
{
    &IID_IWICBitmapFrameDecode,
    &IWICBitmapFrameDecode_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapCodecInfo, ver. 0.0,
   GUID={0xe87a44c4,0xb76e,0x4c47,{0x8b,0x09,0x29,0x8e,0xb1,0x2a,0x27,0x14}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapCodecInfo_FormatStringOffsetTable[] =
    {
    1050,
    276,
    1086,
    1122,
    1170,
    1206,
    1254,
    1302,
    1710,
    1746,
    1794,
    1842,
    1890,
    1938,
    1986,
    2034,
    2070,
    2106,
    2142,
    2178
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapCodecInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapCodecInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapCodecInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapCodecInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IWICBitmapCodecInfoProxyVtbl = 
{
    &IWICBitmapCodecInfo_ProxyInfo,
    &IID_IWICBitmapCodecInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetPixelFormats */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetColorManagementVersion */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceManufacturer */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceModels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetMimeTypes */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetFileExtensions */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportAnimation */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportChromaKey */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportLossless */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportMultiframe */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::MatchesMimeType */
};

const CInterfaceStubVtbl _IWICBitmapCodecInfoStubVtbl =
{
    &IID_IWICBitmapCodecInfo,
    &IWICBitmapCodecInfo_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_wincodec_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWICBitmapDecoderInfo, ver. 0.0,
   GUID={0xd8cd007f,0xd08f,0x4191,{0x9b,0xfc,0x23,0x6e,0xa7,0xf0,0xe4,0xb5}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapDecoderInfo_FormatStringOffsetTable[] =
    {
    1050,
    276,
    1086,
    1122,
    1170,
    1206,
    1254,
    1302,
    1710,
    1746,
    1794,
    1842,
    1890,
    1938,
    1986,
    2034,
    2070,
    2106,
    2142,
    2178,
    (unsigned short) -1,
    2220,
    2262
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapDecoderInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapDecoderInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapDecoderInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapDecoderInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IWICBitmapDecoderInfoProxyVtbl = 
{
    &IWICBitmapDecoderInfo_ProxyInfo,
    &IID_IWICBitmapDecoderInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetPixelFormats */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetColorManagementVersion */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceManufacturer */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceModels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetMimeTypes */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetFileExtensions */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportAnimation */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportChromaKey */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportLossless */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportMultiframe */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::MatchesMimeType */ ,
    0 /* IWICBitmapDecoderInfo::GetPatterns */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoderInfo::MatchesPattern */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoderInfo::CreateInstance */
};

const CInterfaceStubVtbl _IWICBitmapDecoderInfoStubVtbl =
{
    &IID_IWICBitmapDecoderInfo,
    &IWICBitmapDecoderInfo_ServerInfo,
    26,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapDecoder, ver. 0.0,
   GUID={0x9edde9e7,0x8dee,0x47ea,{0x99,0xdf,0xe6,0xfa,0xf2,0xed,0x44,0xbf}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapDecoder_FormatStringOffsetTable[] =
    {
    2298,
    2340,
    2382,
    2418,
    2454,
    1590,
    2490,
    2526,
    2574,
    1014,
    2610
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapDecoder_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapDecoder_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapDecoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapDecoder_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IWICBitmapDecoderProxyVtbl = 
{
    &IWICBitmapDecoder_ProxyInfo,
    &IID_IWICBitmapDecoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::QueryCapability */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::Initialize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetDecoderInfo */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetMetadataQueryReader */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetPreview */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetColorContexts */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetThumbnail */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetFrameCount */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapDecoder::GetFrame */
};

const CInterfaceStubVtbl _IWICBitmapDecoderStubVtbl =
{
    &IID_IWICBitmapDecoder,
    &IWICBitmapDecoder_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapFrameEncode, ver. 0.0,
   GUID={0x00000105,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapFrameEncode_FormatStringOffsetTable[] =
    {
    2652,
    2688,
    2730,
    2772,
    2808,
    2850,
    2886,
    2922,
    2976,
    3018,
    3048
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapFrameEncode_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFrameEncode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapFrameEncode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapFrameEncode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IWICBitmapFrameEncodeProxyVtbl = 
{
    &IWICBitmapFrameEncode_ProxyInfo,
    &IID_IWICBitmapFrameEncode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::Initialize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetColorContexts */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::SetThumbnail */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::WritePixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::WriteSource */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::Commit */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapFrameEncode::GetMetadataQueryWriter */
};

const CInterfaceStubVtbl _IWICBitmapFrameEncodeStubVtbl =
{
    &IID_IWICBitmapFrameEncode,
    &IWICBitmapFrameEncode_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_wincodec_0000_0014, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWICBitmapEncoderInfo, ver. 0.0,
   GUID={0x94c9b4ee,0xa09f,0x4f92,{0x8a,0x1e,0x4a,0x9b,0xce,0x7e,0x76,0xfb}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapEncoderInfo_FormatStringOffsetTable[] =
    {
    1050,
    276,
    1086,
    1122,
    1170,
    1206,
    1254,
    1302,
    1710,
    1746,
    1794,
    1842,
    1890,
    1938,
    1986,
    2034,
    2070,
    2106,
    2142,
    2178,
    3084
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapEncoderInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapEncoderInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapEncoderInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapEncoderInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _IWICBitmapEncoderInfoProxyVtbl = 
{
    &IWICBitmapEncoderInfo_ProxyInfo,
    &IID_IWICBitmapEncoderInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetPixelFormats */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetColorManagementVersion */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceManufacturer */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetDeviceModels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetMimeTypes */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::GetFileExtensions */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportAnimation */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportChromaKey */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportLossless */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::DoesSupportMultiframe */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapCodecInfo::MatchesMimeType */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoderInfo::CreateInstance */
};

const CInterfaceStubVtbl _IWICBitmapEncoderInfoStubVtbl =
{
    &IID_IWICBitmapEncoderInfo,
    &IWICBitmapEncoderInfo_ServerInfo,
    24,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapEncoder, ver. 0.0,
   GUID={0x00000103,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapEncoder_FormatStringOffsetTable[] =
    {
    3120,
    276,
    3162,
    3198,
    3240,
    3276,
    3312,
    3348,
    3390,
    3420
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapEncoder_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapEncoder_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapEncoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapEncoder_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IWICBitmapEncoderProxyVtbl = 
{
    &IWICBitmapEncoder_ProxyInfo,
    &IID_IWICBitmapEncoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::Initialize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::GetContainerFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::GetEncoderInfo */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::SetColorContexts */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::SetPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::SetThumbnail */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::SetPreview */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::CreateNewFrame */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::Commit */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapEncoder::GetMetadataQueryWriter */
};

const CInterfaceStubVtbl _IWICBitmapEncoderStubVtbl =
{
    &IID_IWICBitmapEncoder,
    &IWICBitmapEncoder_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICFormatConverter, ver. 0.0,
   GUID={0x00000301,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICFormatConverter_FormatStringOffsetTable[] =
    {
    234,
    276,
    312,
    354,
    390,
    3456,
    3522
    };

static const MIDL_STUBLESS_PROXY_INFO IWICFormatConverter_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFormatConverter_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICFormatConverter_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFormatConverter_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IWICFormatConverterProxyVtbl = 
{
    &IWICFormatConverter_ProxyInfo,
    &IID_IWICFormatConverter,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICFormatConverter::Initialize */ ,
    (void *) (INT_PTR) -1 /* IWICFormatConverter::CanConvert */
};

const CInterfaceStubVtbl _IWICFormatConverterStubVtbl =
{
    &IID_IWICFormatConverter,
    &IWICFormatConverter_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICFormatConverterInfo, ver. 0.0,
   GUID={0x9f34fb65,0x13f4,0x4f15,{0xbc,0x57,0x37,0x26,0xb5,0xe5,0x3d,0x9f}} */

#pragma code_seg(".orpc")
static const unsigned short IWICFormatConverterInfo_FormatStringOffsetTable[] =
    {
    1050,
    276,
    1086,
    1122,
    1170,
    1206,
    1254,
    1302,
    3570,
    3618
    };

static const MIDL_STUBLESS_PROXY_INFO IWICFormatConverterInfo_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFormatConverterInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICFormatConverterInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFormatConverterInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IWICFormatConverterInfoProxyVtbl = 
{
    &IWICFormatConverterInfo_ProxyInfo,
    &IID_IWICFormatConverterInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetComponentType */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetCLSID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSigningStatus */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVendorGUID */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetSpecVersion */ ,
    (void *) (INT_PTR) -1 /* IWICComponentInfo::GetFriendlyName */ ,
    (void *) (INT_PTR) -1 /* IWICFormatConverterInfo::GetPixelFormats */ ,
    (void *) (INT_PTR) -1 /* IWICFormatConverterInfo::CreateInstance */
};

const CInterfaceStubVtbl _IWICFormatConverterInfoStubVtbl =
{
    &IID_IWICFormatConverterInfo,
    &IWICFormatConverterInfo_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISequentialStream, ver. 0.0,
   GUID={0x0c733a30,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}} */


/* Object interface: IStream, ver. 0.0,
   GUID={0x0000000c,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWICStream, ver. 0.0,
   GUID={0x135ff860,0x22b7,0x4ddf,{0xb0,0xf6,0x21,0x8f,0x4f,0x29,0x9a,0x43}} */

#pragma code_seg(".orpc")
static const unsigned short IWICStream_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3654,
    3690,
    3732,
    3774
    };

static const MIDL_STUBLESS_PROXY_INFO IWICStream_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICStream_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICStream_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IWICStreamProxyVtbl = 
{
    &IWICStream_ProxyInfo,
    &IID_IWICStream,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* ISequentialStream_Read_Proxy */ ,
    0 /* ISequentialStream_Write_Proxy */ ,
    0 /* IStream_Seek_Proxy */ ,
    0 /* IStream::SetSize */ ,
    0 /* IStream_CopyTo_Proxy */ ,
    0 /* IStream::Commit */ ,
    0 /* IStream::Revert */ ,
    0 /* IStream::LockRegion */ ,
    0 /* IStream::UnlockRegion */ ,
    0 /* IStream::Stat */ ,
    0 /* IStream::Clone */ ,
    (void *) (INT_PTR) -1 /* IWICStream::InitializeFromIStream */ ,
    (void *) (INT_PTR) -1 /* IWICStream::InitializeFromFilename */ ,
    (void *) (INT_PTR) -1 /* IWICStream::InitializeFromMemory */ ,
    (void *) (INT_PTR) -1 /* IWICStream::InitializeFromIStreamRegion */
};


static const PRPC_STUB_FUNCTION IWICStream_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWICStreamStubVtbl =
{
    &IID_IWICStream,
    &IWICStream_ServerInfo,
    18,
    &IWICStream_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWICBitmapScaler, ver. 0.0,
   GUID={0x00000302,0xa8f2,0x4877,{0xba,0x0a,0xfd,0x2b,0x66,0x45,0xfb,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapScaler_FormatStringOffsetTable[] =
    {
    234,
    276,
    312,
    354,
    390,
    3822
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapScaler_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapScaler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapScaler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapScaler_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICBitmapScalerProxyVtbl = 
{
    &IWICBitmapScaler_ProxyInfo,
    &IID_IWICBitmapScaler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapScaler::Initialize */
};

const CInterfaceStubVtbl _IWICBitmapScalerStubVtbl =
{
    &IID_IWICBitmapScaler,
    &IWICBitmapScaler_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICBitmapClipper, ver. 0.0,
   GUID={0xe4fbcf03,0x223d,0x4e81,{0x93,0x33,0xd6,0x35,0x55,0x6d,0xd1,0xb5}} */

#pragma code_seg(".orpc")
static const unsigned short IWICBitmapClipper_FormatStringOffsetTable[] =
    {
    234,
    276,
    312,
    354,
    390,
    3876
    };

static const MIDL_STUBLESS_PROXY_INFO IWICBitmapClipper_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapClipper_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICBitmapClipper_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICBitmapClipper_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICBitmapClipperProxyVtbl = 
{
    &IWICBitmapClipper_ProxyInfo,
    &IID_IWICBitmapClipper,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapClipper::Initialize */
};

const CInterfaceStubVtbl _IWICBitmapClipperStubVtbl =
{
    &IID_IWICBitmapClipper,
    &IWICBitmapClipper_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICColorTransform, ver. 0.0,
   GUID={0xb66f034f,0xd0e2,0x40ab,{0xb4,0x36,0x6d,0xe3,0x9e,0x32,0x1a,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IWICColorTransform_FormatStringOffsetTable[] =
    {
    234,
    276,
    312,
    354,
    390,
    3918
    };

static const MIDL_STUBLESS_PROXY_INFO IWICColorTransform_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICColorTransform_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICColorTransform_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICColorTransform_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWICColorTransformProxyVtbl = 
{
    &IWICColorTransform_ProxyInfo,
    &IID_IWICColorTransform,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetPixelFormat */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::GetResolution */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPalette */ ,
    (void *) (INT_PTR) -1 /* IWICBitmapSource::CopyPixels */ ,
    (void *) (INT_PTR) -1 /* IWICColorTransform::Initialize */
};

const CInterfaceStubVtbl _IWICColorTransformStubVtbl =
{
    &IID_IWICColorTransform,
    &IWICColorTransform_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWICFastMetadataEncoder, ver. 0.0,
   GUID={0xb84e2c09,0x78c9,0x4ac4,{0x8b,0xd3,0x52,0x4a,0xe1,0x66,0x3a,0x2f}} */

#pragma code_seg(".orpc")
static const unsigned short IWICFastMetadataEncoder_FormatStringOffsetTable[] =
    {
    3972,
    4002
    };

static const MIDL_STUBLESS_PROXY_INFO IWICFastMetadataEncoder_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFastMetadataEncoder_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICFastMetadataEncoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICFastMetadataEncoder_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IWICFastMetadataEncoderProxyVtbl = 
{
    &IWICFastMetadataEncoder_ProxyInfo,
    &IID_IWICFastMetadataEncoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICFastMetadataEncoder::Commit */ ,
    (void *) (INT_PTR) -1 /* IWICFastMetadataEncoder::GetMetadataQueryWriter */
};

const CInterfaceStubVtbl _IWICFastMetadataEncoderStubVtbl =
{
    &IID_IWICFastMetadataEncoder,
    &IWICFastMetadataEncoder_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_wincodec_0000_0023, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWICImagingFactory, ver. 0.0,
   GUID={0xec5ec8a9,0xc395,0x4314,{0x9c,0x77,0x54,0xd7,0xa9,0x35,0xff,0x70}} */

#pragma code_seg(".orpc")
static const unsigned short IWICImagingFactory_FormatStringOffsetTable[] =
    {
    4038,
    4098,
    4152,
    4206,
    4248,
    4296,
    4344,
    4380,
    4416,
    4452,
    4488,
    4524,
    4560,
    4596,
    4632,
    4692,
    4740,
    4806,
    4878,
    4932,
    4974,
    5022,
    5064,
    5106,
    5154
    };

static const MIDL_STUBLESS_PROXY_INFO IWICImagingFactory_ProxyInfo =
    {
    &Object_StubDesc,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICImagingFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWICImagingFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    wincodec__MIDL_ProcFormatString.Format,
    &IWICImagingFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(28) _IWICImagingFactoryProxyVtbl = 
{
    &IWICImagingFactory_ProxyInfo,
    &IID_IWICImagingFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateDecoderFromFilename */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateDecoderFromStream */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateDecoderFromFileHandle */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateComponentInfo */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateDecoder */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateEncoder */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreatePalette */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateFormatConverter */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapScaler */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapClipper */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFlipRotator */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateStream */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateColorContext */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateColorTransformer */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmap */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFromSource */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFromSourceRect */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFromMemory */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFromHBITMAP */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateBitmapFromHICON */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateComponentEnumerator */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateFastMetadataEncoderFromDecoder */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateFastMetadataEncoderFromFrameDecode */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateQueryWriter */ ,
    (void *) (INT_PTR) -1 /* IWICImagingFactory::CreateQueryWriterFromReader */
};

const CInterfaceStubVtbl _IWICImagingFactoryStubVtbl =
{
    &IID_IWICImagingFactory,
    &IWICImagingFactory_ServerInfo,
    28,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_wincodec_0000_0024, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    ExprEvalRoutines,
    0,
    wincodec__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _wincodec_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IWICFormatConverterProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapScalerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICColorContextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapEncoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapClipperProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapFrameEncodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICFastMetadataEncoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICComponentInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICMetadataQueryWriterProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapFrameDecodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapSourceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapLockProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICPaletteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICColorTransformProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapFlipRotatorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICFormatConverterInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICMetadataQueryReaderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapDecoderInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICImagingFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapCodecInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapDecoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWICBitmapEncoderInfoProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _wincodec_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IWICFormatConverterStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapScalerStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICColorContextStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapEncoderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapClipperStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapFrameEncodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICFastMetadataEncoderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICComponentInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICMetadataQueryWriterStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapFrameDecodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapSourceStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapLockStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICPaletteStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICColorTransformStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapFlipRotatorStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICFormatConverterInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICMetadataQueryReaderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapDecoderInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICImagingFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapCodecInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapDecoderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWICBitmapEncoderInfoStubVtbl,
    0
};

PCInterfaceName const _wincodec_InterfaceNamesList[] = 
{
    "IWICFormatConverter",
    "IWICBitmapScaler",
    "IWICColorContext",
    "IWICBitmapEncoder",
    "IWICBitmapClipper",
    "IWICBitmapFrameEncode",
    "IWICFastMetadataEncoder",
    "IWICComponentInfo",
    "IWICMetadataQueryWriter",
    "IWICBitmapFrameDecode",
    "IWICBitmapSource",
    "IWICBitmap",
    "IWICBitmapLock",
    "IWICPalette",
    "IWICColorTransform",
    "IWICBitmapFlipRotator",
    "IWICStream",
    "IWICFormatConverterInfo",
    "IWICMetadataQueryReader",
    "IWICBitmapDecoderInfo",
    "IWICImagingFactory",
    "IWICBitmapCodecInfo",
    "IWICBitmapDecoder",
    "IWICBitmapEncoderInfo",
    0
};

const IID *  const _wincodec_BaseIIDList[] = 
{
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    &IID_IStream,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};


#define _wincodec_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _wincodec, pIID, n)

int __stdcall _wincodec_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _wincodec, 24, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _wincodec, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _wincodec, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _wincodec, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _wincodec, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _wincodec, 24, *pIndex )
    
}

const ExtendedProxyFileInfo wincodec_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _wincodec_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _wincodec_StubVtblList,
    (const PCInterfaceName * ) & _wincodec_InterfaceNamesList,
    (const IID ** ) & _wincodec_BaseIIDList,
    & _wincodec_IID_Lookup, 
    24,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

