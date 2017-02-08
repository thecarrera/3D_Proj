struct FS_IN
{
	float4 Pos : SV_POSITION;
	float4 Norm : NORMAL;
	float2 Tex : TEXCOORD;
	float4 wPos : POSITION;
};

float4 FS_main(FS_IN input) : SV_Target
{
	//float3 lightPos = { 0.0f, 0.0f, -20.0f };
	//float3 lightDir = normalize(lightPos - input.wPos.xyz);
	///*float3 r = reflect(-lightDir, input.Norm.xyz);*/
	//float cos = dot(lightDir, input.Norm.xyz);

	/*float spec = dot(r, -input.wPos.xyz);*/

	/*float3 s = * cos + pow(spec, 2) * float3(1, 1, 1);*/
    return float4(0.0f,1.0f,1.0f, 1.0f);
}