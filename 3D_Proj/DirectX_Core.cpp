#include "DirectX.h"

using namespace DirectX;
DX::DX()
{
	this->amountOfVertecies = 0;
	this->vCapacity = 150;
	this->tCapacity = 150;
	this->nCapacity = 150;
	this->fCapacity = 150;

	this->vertexArray = new VertexInfo[this->vCapacity];
	this->textureArray = new VertexInfo[this->tCapacity];
	this->normalArray = new VertexInfo[this->nCapacity];
	this->triangleArray = new TriangleInfo[this->fCapacity];
	this->Xinput = NULL;
}
DX::~DX()
{
	this->Clean();
}

void DX::CreateD3D(HMODULE hModule,HWND* wndHandle)
{
	this->CreateDirect3DContext(wndHandle);

	this->createInput(hModule,*wndHandle);

	this->SetViewport();

	this->ConstantBuffer();

	this->CreateShaders();

	//this->CreateTriangleData();

	this->LoadModel();

	for (int i = 0; i < this->amountOfVertecies; i++)
	{
		std::cout << "\n" << this->triangleArray[i].x << '\n';
		std::cout << this->triangleArray[i].y << '\n';
		std::cout << this->triangleArray[i].z << '\n' << '\n';
	}
}
void DX::Clean()
{
	SAFE_DELETE(this->vertexArray);
	SAFE_DELETE(this->textureArray);
	SAFE_DELETE(this->normalArray);
	SAFE_DELETE(this->triangleArray);
	this->Xinput->~InputManager();

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
	scd.BufferDesc.Width = WIDTH;
	scd.BufferDesc.Height = HEIGHT;
	scd.SampleDesc.Count = PIXELSAMPLE;
	scd.Windowed = TRUE;

	HRESULT hr = D3D11CreateDeviceAndSwapChain(
		NULL,
		D3D_DRIVER_TYPE_HARDWARE,
		NULL,
		D3D11_CREATE_DEVICE_DEBUG,
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

		hr = gDevice->CreateRenderTargetView(pBackBuffer, NULL, &this->gBackBufferRTV);

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
	float clearColor[] = { 0.25, 0.f, .5f, 1 };

	this->gDeviceContext->ClearRenderTargetView(this->gBackBufferRTV, clearColor);
	this->gDeviceContext->ClearDepthStencilView(this->gDSV, D3D11_CLEAR_DEPTH, 1.0f, 0);

	UINT32 vertexSize = sizeof(float) * 8;
	UINT32 offset = 0;

	this->gDeviceContext->IASetInputLayout(this->gVertexLayout);
	this->gDeviceContext->IASetVertexBuffers(0, 1, &this->gVertexBuffer, &vertexSize, &offset);

	this->gDeviceContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	this->gDeviceContext->VSSetShader(this->gVertexShader, nullptr, 0);
	this->gDeviceContext->GSSetShader(this->gGeometryShader, nullptr, 0);
	this->gDeviceContext->PSSetShader(this->gFragmentShader, nullptr, 0);

	D3D11_MAPPED_SUBRESOURCE dataPtr;
	gDeviceContext->Map(this->gCBuffer, 0, D3D11_MAP_WRITE_DISCARD, 0, &dataPtr);
	
	
	//this->UpdateCamera();

	
	memcpy(dataPtr.pData, &this->values, sizeof(this->values));

	gDeviceContext->Unmap(this->gCBuffer, 0);

	gDeviceContext->GSSetConstantBuffers(0, 1, &this->gCBuffer);

	gDeviceContext->Draw(this->amountOfVertecies, 0);

	gSwapChain->Present(1, 0);
}

void DX::UpdateCamera() {
	CamRotationMatrix = DirectX::XMMatrixRotationRollPitchYaw(camPitch, camYaw, 0);
	lookAT		= DirectX::XMVector3TransformCoord(DefaultForward, CamRotationMatrix);
	lookAT		= DirectX::XMVector3Normalize(lookAT);

	DirectX::XMMATRIX RotateYTempMatrix;
	RotateYTempMatrix = DirectX::XMMatrixRotationY(camYaw);

	CamRight	= DirectX::XMVector3TransformCoord(DefaultRight, RotateYTempMatrix);
	upVec		= DirectX::XMVector3TransformCoord(upVec, RotateYTempMatrix);
	CamForward	= DirectX::XMVector3TransformCoord(DefaultForward, RotateYTempMatrix);

	cameraPos	+= moveLeftRight*CamRight;
	cameraPos	+= moveBackForward*CamForward;

	moveLeftRight = 0.0f;
	moveBackForward = 0.0f;

	lookAT = cameraPos + lookAT;

	values.viewM = XMMatrixLookAtLH(cameraPos, lookAT, upVec);

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

	this->gDevice->CreateVertexShader(pVS->GetBufferPointer(), pVS->GetBufferSize(), NULL, &this->gVertexShader);

	if (error)
	{
		OutputDebugStringA((char*)error->GetBufferPointer());
	}

	D3D11_INPUT_ELEMENT_DESC inputDesc[] = {
		{ "SV_POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 24, D3D11_INPUT_PER_VERTEX_DATA, 0 }
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
	gDevice->CreateGeometryShader(pGS->GetBufferPointer(), pGS->GetBufferSize(), NULL, &this->gGeometryShader);

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
	this->cameraPos = { 0, 0, -2 };
	this->lookAT = { 0,0,0 };
	this->upVec = { 0, 1, 0 };

	float FOV = { 0.45f * PI };
	float ARO = (float)WIDTH / (float)HEIGHT;
	float nPlane = 0.1f;
	float fPlane = 20.0f;

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
	dBufferDesc.SampleDesc.Count = PIXELSAMPLE;
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
	std::ifstream ss("Cube.obj", std::ifstream::in);

	char cmd[256] = { 0 };
	char mtlName[256] = { 0 };
	int tempV = 0;
	int tempT = 0;
	int tempN = 0;
	char trash;
	struct VI
	{
		int x, y, z;
	};
	VI temp_vert[3];

	while (ss.good())
	{
		ss >> cmd;
		if (!ss)
		{
			break;
		}
		//else if (strcmp(cmd, "mtllib") == 0)
		//{
		//	/*ss >> mtlName;

		//	std::ifstream mtl(mtlName, std::ifstream::in);

		//	while (mtl.good())
		//	{
		//		ss >> cmd;

		//		if (!ss)
		//		{
		//			break;
		//		}
		//		if ()

		//	}*/

		//}
		else if (strcmp(cmd, "v") == 0)
		{
			if (tempV >= this->vCapacity)
			{
				this->ExpandVertexArray(tempV, &this->vCapacity, this->vertexArray);
			}
			ss >> this->vertexArray[tempV].x >> this->vertexArray[tempV].y >> this->vertexArray[tempV].z;
			this->vertexArray[tempV].z = (this->vertexArray[tempV].z * -1.0f);
			tempV++;
		}
		else if (strcmp(cmd, "vt") == 0)
		{
			if (tempT >= this->tCapacity)
			{
				this->ExpandVertexArray(tempT, &this->tCapacity, this->textureArray);
			}
			ss >> this->textureArray[tempT].x >> this->textureArray[tempT].y;
			this->textureArray[tempT].z = 0;
			tempT++;
		}
		else if (strcmp(cmd, "vn") == 0)
		{
			if (tempN >= this->nCapacity)
			{
				this->ExpandVertexArray(tempN, &this->nCapacity, this->normalArray);
			}
			ss >> this->normalArray[tempN].x >> this->normalArray[tempN].y >> this->normalArray[tempN].z;
			this->normalArray[tempN].z = (this->normalArray[tempN].z * -1.0f);
			tempN++;
		}
		else if (strcmp(cmd, "f") == 0)
		{
			for (int i = 3; i > 0; i--)
			{
				ss >> temp_vert[i - 1].x >> trash >> temp_vert[i - 1].y >> trash >> temp_vert[i - 1].z;
			}

			for (int i = 0; i < 3; i++)
			{
				if (this->amountOfVertecies >= this->fCapacity)
				{
					this->ExpandVertexArray(amountOfVertecies, &this->fCapacity, this->triangleArray);
				}

				this->triangleArray[this->amountOfVertecies].x = this->vertexArray[temp_vert[i].x - 1].x;
				this->triangleArray[this->amountOfVertecies].y = this->vertexArray[temp_vert[i].x - 1].y;
				this->triangleArray[this->amountOfVertecies].z = this->vertexArray[temp_vert[i].x - 1].z;

				this->triangleArray[this->amountOfVertecies].nx = this->normalArray[temp_vert[i].z - 1].x;
				this->triangleArray[this->amountOfVertecies].ny = this->normalArray[temp_vert[i].z - 1].y;
				this->triangleArray[this->amountOfVertecies].nz = this->normalArray[temp_vert[i].z - 1].z;

				this->triangleArray[this->amountOfVertecies].u = this->textureArray[temp_vert[i].y - 1].x;
				this->triangleArray[this->amountOfVertecies].v = this->textureArray[temp_vert[i].y - 1].y;

				this->amountOfVertecies++;
			}
		}
	}

	HRESULT hr;

	D3D11_BUFFER_DESC bufferDesc;
	memset(&bufferDesc, 0, sizeof(bufferDesc));
	bufferDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
	bufferDesc.Usage = D3D11_USAGE_DEFAULT;
	bufferDesc.ByteWidth = sizeof(TriangleInfo) * this->amountOfVertecies;

	D3D11_SUBRESOURCE_DATA data;
	data.pSysMem = this->triangleArray;
	hr = this->gDevice->CreateBuffer(&bufferDesc, &data, &this->gVertexBuffer);

	if (FAILED(hr))
	{
		return exit(-1);
	}

}
void DX::ExpandVertexArray(int tmpi, int* capacity, VertexInfo* gArray)
{
	*capacity = *capacity + 300;

	VertexInfo* tempArray = new VertexInfo[*capacity];

	for (int i = 0; i < tmpi; i++)
	{
		tempArray[i].x = gArray[i].x;
		tempArray[i].y = gArray[i].y;
		tempArray[i].z = gArray[i].z;
	}

	for (int i = 0; i < tmpi; i++)
	{
		std::cout << "\n\n\n" << tempArray[i].x << ' ' << gArray[i].x << "\n";
		std::cout << tempArray[i].y << ' ' << gArray[i].y << "\n";
		std::cout << tempArray[i].z << ' ' << gArray[i].z << "\n\n";
	}

	std::cout << "\n--------------------------------------------------\n";

	SAFE_DELETE(gArray);

	gArray = tempArray;
}
void DX::ExpandVertexArray(int tmpi, int* capacity, TriangleInfo* gArray)
{
	*capacity = *capacity + 300;

	TriangleInfo* tempTri = new TriangleInfo[*capacity];

	for (int i = 0; i < tmpi; i++)
	{
		tempTri[i] = gArray[i];
	}

	SAFE_DELETE(gArray);

	gArray = tempTri;
}

bool DX::createInput(HMODULE hmodule, HWND hwnd) {
	Xinput = new InputManager();
	if (!Xinput->Initialize(hmodule, hwnd, WIDTH, HEIGHT))return false;

	Xinput->Update();

	return true;
}

void DX::Update() {
	this->Render();
	this->Xinput->Update();

}