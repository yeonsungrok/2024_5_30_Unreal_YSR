#pragma once
class Ball;

class Player_Rectangle
{
public:
	Player_Rectangle();
	~Player_Rectangle();

	void Update();
	void Render(HDC hdc);


	void SetBallPosition(); // 시작 볼 위치
	void Move(); // 사각 좌우 움직임

	void StartPlay(); // 시작



private:

	shared_ptr<Ball> _ballCircle;

	//shared_ptr<RectCollider> 

	shared_ptr<RectCollider> _body;

	
};

