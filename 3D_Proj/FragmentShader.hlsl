struct FS_IN
{
	float4 Pos : POSITION;
	float4 Norm : NORMAL;
	float3 Col : COLOR;
	float4 wPos : WPOSITION;
};

float4 FS_main(FS_IN input) : SV_Target
{
	float3 lightPos = { 0.0f, 0.0f, -20.0f };
	float3 lightDir = normalize(lightPos - input.wPos.xyz);
	/*float3 r = reflect(-lightDir, input.Norm.xyz);*/
	float cos = dot(lightDir, input.Norm.xyz);

	/*float spec = dot(r, -input.wPos.xyz);*/

	float3 s = input.Col.xyz * float3(0.15, 0.15, 0.15) * cos /*+ pow(spec, 2) * float3(1, 1, 1)*/;
    return float4(s, 1.0f);
}