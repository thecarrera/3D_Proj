#pragma once

#include <iostream>
#include <vector>
#include <fstream>

#include <d3d11.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>

#pragma comment (lib, "d3d11.lib")
#pragma comment (lib, "d3dcompiler.lib")

#include "InputManager.h"

#define WLABEL "JO 3D-Demo"
#define HEIGHT 800
#define WIDTH 640
#define PIXELSAMPLE 1

#define PI 3.14159265359f

#define SAFE_RELEASE(x) if(x) x->Release(), x = nullptr
#define SAFE_DELETE(x) if(x) delete[] x, x = nullptr

class DX
{
public:
	DX();
	~DX();

private:
	ID3D11Device* gDevice = nullptr;
	ID3D11DeviceContext* gDeviceContext = nullptr;
	IDXGISwapChain* gSwapChain = nullptr;
	ID3D11RenderTargetView* gBackBufferRTV = nullptr;

	ID3D11InputLayout* gVertexLayout;
	ID3D11Buffer* gVertexBuffer = nullptr;

	ID3D11DepthStencilState* depthState = nullptr;
	ID3D11DepthStencilView* gDSV = nullptr;
	ID3D11Texture2D* gDepthStencil = nullptr;

	ID3D11VertexShader* gVertexShader = nullptr;
	ID3D11GeometryShader* gGeometryShader = nullptr;
	ID3D11PixelShader* gFragmentShader = nullptr;

	ID3D11Buffer* gCBuffer = nullptr;
	struct cTOg
	{
		DirectX::XMMATRIX worldM;
		DirectX::XMMATRIX viewM;
		DirectX::XMMATRIX projM;
		int verteciesAmount;
	};
	cTOg values;

	struct VertexInfo;
	struct TriangleInfo;

public:
	void CreateD3D(HMODULE hmodule,HWND* wndHandle);
	void Clean();

	void CreateDirect3DContext(HWND* wndHandle);
	void SetViewport();
	void Render();
	void Update();

	void CreateShaders();
	void ConstantBuffer();
	void DepthBuffer();

public:
	void LoadModel();
	void ExpandVertexArray(int i, int *capacity, VertexInfo* gArray);
	void ExpandVertexArray(int i, int *capacity, TriangleInfo* gArray);

private:
	struct VertexInfo
	{
		float x, y, z;
	};
	VertexInfo* vertexArray;
	VertexInfo* textureArray;
	VertexInfo* normalArray;

	struct TriangleInfo
	{
		float x, y, z;
		float nx, ny, nz;
		float u, v;
	};
	TriangleInfo* triangleArray;

	DirectX::XMVECTOR* test;

	std::vector<float> vertexPos;
	std::vector<float> vertexNorm;
	std::vector<float> vertexFace;

	int amountOfVertecies;
	int vCapacity, tCapacity, nCapacity, fCapacity;

	DirectX::XMVECTOR cameraPos;
	DirectX::XMVECTOR lookAT;
	DirectX::XMVECTOR upVec;


public:
	InputManager* getInputManager();
	bool createInput(HMODULE hmodule, HWND hwnd);

	void UpdateCamera();
private:
	InputManager* Xinput;
	DirectX::XMVECTOR DefaultForward = DirectX::XMVectorSet(0.0f,0.0f,1.0f,0.0f);
	DirectX::XMVECTOR DefaultRight = DirectX::XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);
	DirectX::XMVECTOR CamForward = DirectX::XMVectorSet(0.0f, 0.0f, 1.0f, 0.0f);
	DirectX::XMVECTOR CamRight = DirectX::XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	DirectX::XMMATRIX CamRotationMatrix;
	DirectX::XMMATRIX groundWorld;

	float moveLeftRight = 0.0f;
	float moveBackForward = 0.0f;

	float camYaw = 0.0f;
	float camPitch = 0.0f;
};