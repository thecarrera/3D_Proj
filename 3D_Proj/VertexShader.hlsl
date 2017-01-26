struct VS_IN
{
	float3 Pos : POSITION;
	float3 Col : COLOR;
	float3 Norm : NORMAL;
};

struct GS_OUT
{
	float3 Pos : POSITION;
	float3 Col : COLOR;
	float3 Norm : NORMAL;
};

GS_OUT VS_main(VS_IN input)
{
	GS_OUT output = (GS_OUT)0;

	output.Pos = input.Pos;
	output.Col = input.Col;
	output.Norm = input.Norm;

	return output;

}