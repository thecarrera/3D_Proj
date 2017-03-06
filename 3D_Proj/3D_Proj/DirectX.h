#pragma once

#include "Includes.h"

#include "InputManager.h"
#include "Plug-in.h"

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
	ID3D11Buffer* shaderBuffer = nullptr;
	struct cTOg
	{
		DirectX::XMMATRIX worldM;
		DirectX::XMMATRIX viewM;
		DirectX::XMMATRIX projM;
		int verteciesAmount;
	};
	cTOg CameraMatrix;

	ID3D11Resource* gTexResource = nullptr;
	ID3D11ShaderResourceView* gTextureRTV = nullptr;

public:
	void CreateD3D(HMODULE hmodule,HWND* wndHandle);
	void Clean();

	void CreateDirect3DContext(HWND* wndHandle);
	void SetViewport();
	void Render();
	void Update();

	void CreateShaders();
	void CreateTextures();
	void ConstantBuffer();
	void DepthBuffer();

public:
	InputManager* getInputManager();
	bool createInput(HMODULE hmodule, HWND hwnd);

	void UpdateCamera();
private:
	PlugIn plugIn;
	InputManager* Xinput;
	DirectX::XMVECTOR cameraPos;
	DirectX::XMVECTOR lookAT;
	DirectX::XMVECTOR upVec;

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