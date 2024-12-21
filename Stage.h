#pragma once
#include "Engine/GameObject.h"

struct CONSTANT_BUFFER_STAGE
{
    XMFLOAT4 lightPosition;//�����ʒu
    XMFLOAT4 eyePosition;//���_�̈ʒu
};

class Stage : public GameObject
{
    int hModel_;    //���f���ԍ�
    int hRoom_;
    int hGround;
    int hRing_;//�ŏ��̓z
    int hRing_LambertTexture_;//�e�N�X�`������@phong�Ȃ��̃g�[���X(lambert)
    int hRing_PhongCollar_;//�e�N�X�`���Ȃ��Aphong����A�F����
    int hRing_Lambert;//�e�N�X�`���Ȃ��Alambert�̂�
    ID3D11Buffer* pConstantBuffer_;

    void InitConstantBuffer();

public:
    //�R���X�g���N�^
    Stage(GameObject* parent);

    //�f�X�g���N�^
    ~Stage();

    //������
    void Initialize() override;

    //�X�V
    void Update() override;

    //�`��
    void Draw() override;

    //�J��
    void Release() override;

};