Texture2D txDiffuse : register(t0);
SamplerState sampAni;
cbuffer CBUFFER : register(b0)
{
	float3 Kd;
	float3 Ka;
	float3 Ks;
}

struct FS_IN
{
	float4 Pos : SV_POSITION;
	float4 Norm : NORMAL;
	float2 Tex : TEXCOORD;
	float4 wPos : POSITION;
};

float4 FS_main(FS_IN input) : SV_Target
{
	float3 lightPos = { 1.0f, 0.0f, -10.0f };
	float3 lightDir = normalize(lightPos - input.wPos.xyz);
	float3 r = reflect(lightDir, input.Norm.xyz);
	float cos = dot(lightDir, input.Norm.xyz);

	float spec = dot(r, -input.wPos.xyz);

	float3 s = txDiffuse.Sample(sampAni, input.Tex).xyz * cos /*+ pow(Ks,2.f) * 1*/;

	clamp(s, 0, 1);

	return float4(s, 1.f);
}