struct VS_IN
{
	float3 Pos : SV_POSITION;
	float3 Col : COLOR;
	float3 Norm : NORMAL;
};

struct GS_OUT
{
	float4 Pos : SV_POSITION;
	float3 Col : COLOR;
	float4 Norm : NORMAL;
};

GS_OUT VS_main(VS_IN input)
{
	GS_OUT output = (GS_OUT)0;

	output.Pos = float4(input.Pos, 1.0f);
	output.Col = input.Col;
	output.Norm = float4(input.Norm, 1.0f);

	return output;
}