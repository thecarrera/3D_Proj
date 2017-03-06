#include "Plug-in.h"

PlugIn::PlugIn()
{
}
PlugIn::~PlugIn()
{	
}
void PlugIn::Clean()
{
}

void PlugIn::LoadModel(std::string fileName, ID3D11Device* gDevice, ID3D11Buffer* &gVertexBuffer, ID3D11Buffer* &shaderBuffer)
{
	this->obj.LoadModel(fileName ,gDevice, gVertexBuffer, shaderBuffer);
}

void PlugIn::Texture(ID3D11Device* &gDevice, ID3D11ShaderResourceView* &gTextureRTV)
{
	this->obj.Texture(gDevice, gTextureRTV);
}

int PlugIn::ReturnVertexInfo()
{
	return obj.ReturnVertexInfo();
}

int PlugIn::getAmountOfVerticies()
{
	return this->obj.getAmountOfVertecies();
}