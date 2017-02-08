cbuffer CBUFFER : register(b0)
{
	float4x4 worldM;
	float4x4 viewM;
	float4x4 projM;
	int verteciesAmount;
}

struct GS_IN
{
	float4 Pos : SV_POSITION;
	float4 Norm : NORMAL;
	float2 Tex : TEXCOORD;
};

struct FS_OUT
{
	float4 Pos : SV_POSITION;
	float4 Norm : NORMAL;
	float2 Tex : TEXCOORD;
	float4 wPos : POSITION;
};

[maxvertexcount(3)]
void GS_main(triangle GS_IN input[3], inout TriangleStream <FS_OUT> OutputStream)
{
	FS_OUT output = (FS_OUT)0;

	for (int i = 0; i < 3; i++)
	{
		output.Pos = mul(mul(mul(input[i].Pos, worldM), viewM), projM);
		output.Norm = mul(mul(mul(input[i].Norm, worldM), viewM), projM);
		output.wPos = mul(input[i].Pos, worldM);
		output.Tex = input[i].Tex;

		OutputStream.Append(output);
	}

	OutputStream.RestartStrip();
}