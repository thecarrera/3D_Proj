#pragma once

#include <iostream>
#include <vector>
#include <fstream>

#include <d3d11.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>

#pragma comment (lib, "d3d11.lib")
#pragma comment (lib, "d3dcompiler.lib")

#define WLABEL "JO 3D-Demo"
#define HEIGHT 800
#define WIDTH 640
#define PIXELSAMPLE 4

#define PI 3.14159265359f

#define SAFE_RELEASE(x) if(x) x->Release(), x = nullptr
#define SAFE_DELETE(x) if(x) delete[] x, x = nullptr