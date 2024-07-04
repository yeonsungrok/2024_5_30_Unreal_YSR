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
	void SetPosition(Vector2 pos);
	void StartPlay(); // ����

	void SetBall(shared_ptr<class Ball> ball) { _ballCircle = ball; }

	/*void SetStart()( return _body->Top());*/
	

private:

	shared_ptr<class Ball> _ballCircle;
	//shared_ptr<CircleCollider> _circle;
	//shared_ptr<RectCollider> 

	shared_ptr<RectCollider> _body;
	
	
};

