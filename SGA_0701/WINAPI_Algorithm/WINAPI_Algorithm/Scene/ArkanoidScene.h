#pragma once
class ArkanoidScene : public Scene
{
public:


	ArkanoidScene();
	~ArkanoidScene();

	// Scene을(를) 통해 상속됨
	void Update() override;
	void Render(HDC hdc) override;

private:

};

