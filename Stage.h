#pragma once
#include "Engine/GameObject.h"
#include "Engine/Fbx.h"

struct CONSTANT_BUFFER_STAGE
{
    XMFLOAT4 lightPosition;
    XMFLOAT4 eyePosition;
};

class Stage : public GameObject
{
    int ShaderNum_;

    int hModel_;
    int hRoom_;
    int hGround;
    int hRing_;
    int hRing_LambertTexture_;
    int hRing_PhongCollar_;
    int hRing_Lambert;
    ID3D11Buffer* pConstantBuffer_;
    Fbx pfbx;

    void InitConstantBuffer();

public:
    Stage(GameObject* parent);
    ~Stage();
    void Initialize() override;
    void Update() override;
    void Draw() override;
    void Release() override;
};
