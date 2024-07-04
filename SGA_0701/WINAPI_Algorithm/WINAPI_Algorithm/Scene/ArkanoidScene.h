#pragma once

class Player_Rectangle;
class Ball;

class ArkanoidScene : public Scene
{
public:


	ArkanoidScene();
	~ArkanoidScene();

	
	void Update() override;
	void Render(HDC hdc) override;

private:
	shared_ptr<Player_Rectangle> _playerRec;
	shared_ptr<Ball> _ball;
};

