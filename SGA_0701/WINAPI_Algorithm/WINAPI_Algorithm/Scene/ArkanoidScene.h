#pragma once
class ArkanoidScene : public Scene
{
public:


	ArkanoidScene();
	~ArkanoidScene();

	// Scene��(��) ���� ��ӵ�
	void Update() override;
	void Render(HDC hdc) override;

private:

};

