#pragma once
class Ball;

class Player_Rectangle
{
public:
	Player_Rectangle();
	~Player_Rectangle();

	void Update();
	void Render(HDC hdc);


	void SetBallPosition(); // ���� �� ��ġ
	void Move(); // �簢 �¿� ������

	void StartPlay(); // ����



private:

	shared_ptr<Ball> _ballCircle;

	//shared_ptr<RectCollider> 

	shared_ptr<RectCollider> _body;

	
};

