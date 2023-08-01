Shader "Custom/PlanetHeightShader"
{
    Properties
    {
        _WaterRadius ("Water Radius", Float) = 20
        _MountainRadius ("Mountain Radius", Float) = 30
        _WaterColor ("Water Color", Color) = (0, 0, 1, 1)
        _TerrainColor ("Terrain Color", Color) = (0, 1, 0, 1)
        _MountainColor ("Mountain Color", Color) = (0.3, 0.3, 0.3, 1)
        _Glossiness ("Smoothness", Range(0,1)) = 0.5
        _Metallic ("Metallic", Range(0,1)) = 0.0
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 200

        CGPROGRAM
        // Physically based Standard lighting model, and enable shadows on all light types
        #pragma surface surf Standard fullforwardshadows

        // Use shader model 3.0 target, to get nicer looking lighting
        #pragma target 3.0

        struct Input {
            float3 worldPos;
            float3 normal;
        };

        fixed4 _TerrainColor;
        fixed4 _MountainColor;
        fixed4 _WaterColor;
        float _WaterRadius;
        float _MountainRadius;
        half _Glossiness;
        half _Metallic;

        void surf (Input IN, inout SurfaceOutputStandard o)
        {
            fixed4 c = length(IN.worldPos) > _WaterRadius + 0.1 ? lerp(_TerrainColor, _MountainColor, clamp((length(IN.worldPos) - _MountainRadius) * 0.1, 0, 1)) : _WaterColor;
            
            o.Albedo = c.rgb;
            o.Alpha = c.a;
            o.Metallic = _Metallic;
            o.Smoothness = _Glossiness;
        }
        ENDCG
    }
    FallBack "Diffuse"
}
