cbuffer CBUFFER : register(b0)
{
	float4x4 worldM;
	float4x4 viewM;
	float4x4 projM;
	int verteciesAmount;
}

struct GS_IN
{
	float3 Pos : POSITION;
	float3 Col : COLOR;
	float3 Norm : NORMAL;
};

struct FS_OUT
{
	float4 Pos : POSITION;
	float3 Col : COLOR;
	float4 Norm : NORMAL;
	float4 wPos : WPOSITION;
};

[maxvertexcount(3)]
void GS_main(triangle GS_IN input[3], inout TriangleStream <FS_OUT> OutputStream)
{
	FS_OUT output = (FS_OUT)0;

	for (int i = 0; i < 3; i++)
	{
		float4 mPos = float4(input[i].Pos, 1.f) + float4(input[i].Norm, 1.f);
		output.Pos = mul(mul(mul(float4(input[i].Pos, 1.0f), worldM), viewM), projM);
		output.Norm = mul(mul(mul(float4(input[i].Norm, 1.f), worldM), viewM), projM);
		output.wPos = mul(mPos, worldM);
		output.Col = input[i].Col;

		OutputStream.Append(output);
	}

	OutputStream.RestartStrip();

	for (int j = 0; j < 3; j++)
	{
		float4 mPos = float4(input[j].Pos, 1.f) + float4(input[j].Norm, 1.f);
		output.Pos = mul(mul(mul((float4(input[j].Pos, 1.0f) + float4(input[j].Norm, 1.f)), worldM), viewM), projM);
		output.Norm = mul(mul(mul(float4(input[j].Norm, 1.f), worldM), viewM), projM);
		output.Col = input[j].Col;
		output.wPos = mul(mPos, worldM);

		OutputStream.Append(output);
	}

	OutputStream.RestartStrip();
}