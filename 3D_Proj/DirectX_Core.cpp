#include "DirectX.h"

DX::DX()
{
	this->amountOfVertecies = 0;
	this->vertexCapacity = 150;

	this->vertexArray = new VertexInfo[this->vertexCapacity];

}
DX::~DX()
{
	this->Clean();
}

void DX::CreateD3D(HWND* wndHandle)
{
	this->CreateDirect3DContext(wndHandle);

	this->LoadModel();

	this->SetViewport();

	this->ConstantBuffer();

	this->CreateShaders();


	//this->CreateTriangleData();
}
void DX::Clean()
{
	SAFE_RELEASE(this->gDevice);
	SAFE_RELEASE(this->gDeviceContext);
	SAFE_RELEASE(this->gSwapChain);
	SAFE_RELEASE(this->gBackBufferRTV);
	SAFE_RELEASE(this->gVertexShader);
	SAFE_RELEASE(this->gVertexLayout);
	SAFE_RELEASE(this->gVertexBuffer);
	SAFE_RELEASE(this->gGeometryShader);
	SAFE_RELEASE(this->gFragmentShader);
	SAFE_RELEASE(this->gCBuffer);
}

void DX::CreateDirect3DContext(HWND* wndHandle)
{
	DXGI_SWAP_CHAIN_DESC scd;

	ZeroMemory(&scd, sizeof(DXGI_SWAP_CHAIN_DESC));

	scd.BufferCount = 1;
	scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	scd.OutputWindow = *wndHandle;
	scd.SampleDesc.Count = 4;
	scd.Windowed = TRUE;

	HRESULT hr = D3D11CreateDeviceAndSwapChain(
		NULL,
		D3D_DRIVER_TYPE_HARDWARE,
		NULL,
		NULL,
		NULL,
		NULL,
		D3D11_SDK_VERSION,
		&scd,
		&this->gSwapChain,
		&this->gDevice,
		NULL,
		&this->gDeviceContext);

	if (SUCCEEDED(hr))
	{
		ID3D11Texture2D* pBackBuffer = nullptr;
		this->gSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		this->DepthBuffer();

		D3D11_DEPTH_STENCIL_VIEW_DESC descDSV;

		descDSV.Format = DXGI_FORMAT_D32_FLOAT;
		descDSV.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
		descDSV.Texture2D.MipSlice = 0;

		hr = gDevice->CreateDepthStencilView(this->gDepthStencil, nullptr, &this->gDSV);

		gDevice->CreateRenderTargetView(pBackBuffer, NULL, &this->gBackBufferRTV);

		pBackBuffer->Release();

		gDeviceContext->OMSetRenderTargets(1, &this->gBackBufferRTV, this->gDSV);
	}
}
void DX::SetViewport()
{
	D3D11_VIEWPORT vp;
	vp.Width = WIDTH;
	vp.Height = HEIGHT;
	vp.MinDepth = 0.0f;
	vp.MaxDepth = 1.0f;
	vp.TopLeftX = 0;
	vp.TopLeftY = 0;

	this->gDeviceContext->RSSetViewports(1, &vp);
}
void DX::Render()
{
	float clearColor[] = { 0, 0, 1, 1 };

	this->gDeviceContext->ClearRenderTargetView(this->gBackBufferRTV, clearColor);

	UINT32 vertexSize = sizeof(vertexPos);
	UINT32 offset = 0;

	this->gDeviceContext->IASetInputLayout(this->gVertexLayout);
	this->gDeviceContext->IASetVertexBuffers(0, 1, &this->gVertexBuffer, &vertexSize, &offset);

	this->gDeviceContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	this->gDeviceContext->VSSetShader(this->gVertexShader, nullptr, 0);
	this->gDeviceContext->GSSetShader(this->gGeometryShader, nullptr, 0);
	this->gDeviceContext->PSSetShader(this->gFragmentShader, nullptr, 0);

	//D3D11_MAPPED_SUBRESOURCE dataPtr;
	//gDeviceContext->Map(this->gCBuffer, 0, D3D11_MAP_WRITE_DISCARD, 0, &dataPtr);

	//values.viewM *= DirectX::XMMatrixRotationY(-0.02f);
	//memcpy(dataPtr.pData, &this->values, sizeof(this->values));

	//gDeviceContext->Unmap(this->gCBuffer, 0);

	gDeviceContext->GSSetConstantBuffers(0, 1, &this->gCBuffer);

	//kamera jävla nöt

	gDeviceContext->Draw(this->amountOfVertecies,0);

}

void DX::CreateShaders()
{
	ID3DBlob* error = nullptr;

	//Vertex Shader
	ID3DBlob* pVS = nullptr;
	D3DCompileFromFile(
		L"VertexShader.hlsl",
		nullptr,
		nullptr,
		"VS_main",
		"vs_5_0",
		0,
		0,
		&pVS,
		&error
	);

	this->gDevice->CreateVertexShader(pVS->GetBufferPointer(), pVS->GetBufferSize(), nullptr, &this->gVertexShader);

	if (error)
	{
		OutputDebugStringA((char*)error->GetBufferPointer());
	}

	D3D11_INPUT_ELEMENT_DESC inputDesc[] = {
		{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "COLOR", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0 }
	};

	gDevice->CreateInputLayout(inputDesc, ARRAYSIZE(inputDesc), pVS->GetBufferPointer(), pVS->GetBufferSize(), &this->gVertexLayout);

	SAFE_RELEASE(pVS);

	//Geometric Shader
	ID3DBlob* pGS = nullptr;

	D3DCompileFromFile(
		L"GeometryShader.hlsl",
		nullptr,
		nullptr,
		"GS_main",
		"gs_5_0",
		0,
		0,
		&pGS,
		&error
	);
	gDevice->CreateGeometryShader(pGS->GetBufferPointer(), pGS->GetBufferSize(), nullptr, &this->gGeometryShader);

	if (error)
	{
		OutputDebugStringA((char*)error->GetBufferPointer());
	}

	SAFE_RELEASE(pGS);

	//Fragment Shader
	ID3DBlob* pFS = nullptr;
	D3DCompileFromFile(
		L"FragmentShader.hlsl", // filename
		nullptr,		// optional macros
		nullptr,		// optional include files
		"FS_main",		// entry point
		"ps_5_0",		// shader model (target)
		0,				// shader compile options
		0,				// effect compile options
		&pFS,			// double pointer to ID3DBlob		
		&error			// pointer for Error Blob messages.
						// how to use the Error blob, see here
						// https://msdn.microsoft.com/en-us/library/windows/desktop/hh968107(v=vs.85).aspx
	);

	gDevice->CreatePixelShader(pFS->GetBufferPointer(), pFS->GetBufferSize(), nullptr, &this->gFragmentShader);

	if (error)
	{
		OutputDebugStringA((char*)error->GetBufferPointer());
	}

	SAFE_RELEASE(pFS);
	SAFE_RELEASE(error);
}
void DX::ConstantBuffer()
{
	this->cameraPos = { 0, 0, -50 };
	this->lookAT = { 0 };
	DirectX::XMVECTOR upVec = { 0, 1, 0 };

	float FOV = { 0.45f * PI };
	float ARO = (float)WIDTH / (float)HEIGHT;
	float nPlane = 0.1f;
	float fPlane = 100.0f;

	DirectX::XMMATRIX worldM = { 1,0,0,0,
								 0,1,0,0,
								 0,0,1,0,
								 0,0,0,1 };

	DirectX::XMMATRIX viewM = DirectX::XMMatrixLookAtLH(cameraPos, lookAT, upVec);
	DirectX::XMMATRIX projM = DirectX::XMMatrixPerspectiveFovLH(FOV, ARO, nPlane, fPlane);

	this->values = { DirectX::XMMatrixTranspose(worldM), DirectX::XMMatrixTranspose(viewM), DirectX::XMMatrixTranspose(projM), this->amountOfVertecies };

	D3D11_BUFFER_DESC cBufferDesc;
	cBufferDesc.Usage = D3D11_USAGE_DYNAMIC;
	cBufferDesc.ByteWidth = sizeof(cTOg);
	cBufferDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	cBufferDesc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
	cBufferDesc.MiscFlags = 0;
	cBufferDesc.StructureByteStride = 0;

	HRESULT hr = 0;
	D3D11_SUBRESOURCE_DATA data;
	data.pSysMem = &this->values;

	hr = gDevice->CreateBuffer(&cBufferDesc, &data, &this->gCBuffer);

	if (FAILED(hr))
	{
		exit(-1);
	}

}
void DX::DepthBuffer() 
{
	HRESULT hr;
	D3D11_TEXTURE2D_DESC dBufferDesc;
	dBufferDesc.Width = (UINT)WIDTH;
	dBufferDesc.Height = (UINT)HEIGHT;
	dBufferDesc.MipLevels = 1;
	dBufferDesc.ArraySize = 1;
	dBufferDesc.Format = DXGI_FORMAT_D32_FLOAT;
	dBufferDesc.SampleDesc.Count = 4;
	dBufferDesc.SampleDesc.Quality = 0;
	dBufferDesc.Usage = D3D11_USAGE_DEFAULT;
	dBufferDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;
	dBufferDesc.CPUAccessFlags = 0;
	dBufferDesc.MiscFlags = 0;

	hr = gDevice->CreateTexture2D(&dBufferDesc, NULL, &this->gDepthStencil);

	if (FAILED(hr))
	{
		return exit(-1);
	}
}

void DX::LoadModel()
{
	std::ifstream ss("Samurai.obj", std::ifstream::in);

	char cmd[256] = { 0 };
	char tmpInfo[256] = { 0 };
	int tempV = 0;

	while (ss.good())
	{
		ss >> cmd;
		if (!ss)
		{
			break;
		}
		else if (strcmp(cmd, "v") == 0)
		{
			if (tempV >= this->vertexCapacity)
			{
				this->ExpandVertexArray(tempV);
			}
			ss >> this->vertexArray[tempV].x >> this->vertexArray[tempV].y >> this->vertexArray[tempV].z;
			tempV++;


			//ss >> x >> y >> z;
			//vertexPos.push_back(x);
			//vertexPos.push_back(y);
			//vertexPos.push_back(z);

		}
		else if (strcmp(cmd, "vn") == 0)
		{
			
		}
		else if (strcmp(cmd, "f") == 0)
		{
			
		}
	}

	for (int i = 0; i < tempV; i++)
	{
		std::cout << this->vertexArray[i].x << ',' << this->vertexArray[i].y << ',' << this->vertexArray[i].z << '\n';
	}

	//for (int i = vertexPos.begin(); i != vertexPos.end(); ++i)
	//{
	//	std::cout << ' ' << i;
	//}

	//D3D11_BUFFER_DESC bufferDesc;
	//memset(&bufferDesc, 0, sizeof(bufferDesc));
	//bufferDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
	//bufferDesc.Usage = D3D11_USAGE_DEFAULT;
	//bufferDesc.ByteWidth = sizeof(this->vertexArray);

	//D3D11_SUBRESOURCE_DATA data;
	//data.pSysMem = this->vertexArray;
	//this->gDevice->CreateBuffer(&bufferDesc, &data, &this->gVertexBuffer);

}
void DX::ExpandVertexArray(int tmpi)
{
	this->vertexCapacity = this->vertexCapacity + 300;
	VertexInfo* tempArray = new VertexInfo[this->vertexCapacity];

	for (int i = 0; i < tmpi; i++)
	{
		tempArray[i] = this->vertexArray[i];
	}

	delete[] this->vertexArray;

	this->vertexArray = tempArray;
}