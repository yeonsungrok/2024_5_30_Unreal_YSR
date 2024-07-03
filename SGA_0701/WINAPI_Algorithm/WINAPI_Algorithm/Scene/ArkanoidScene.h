#pragma once

class Player_Rectangle;
class ball;

class ArkanoidScene : public Scene
{
public:


	ArkanoidScene();
	~ArkanoidScene();

	
	void Update() override;
	void Render(HDC hdc) override;

private:
	shared_ptr<Player_Rectangle> _playerRec;
};

