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


	vector<shared_ptr<Ball>>& GetBalls() { return _ballCircles; };
	
	void SetBall(shared_ptr<class Ball> ball) { _ballCircle = ball; }

	shared_ptr<Collider> GetCollider() { return _body; }

	void SetStart(bool isStart);
	bool IsStart() { return _isStart; }
private:

	bool _isStart = false;
	shared_ptr<class Ball> _ballCircle;
	vector<shared_ptr<class Ball>> _ballCircles;
	//shared_ptr<CircleCollider> _circle;
	//shared_ptr<RectCollider> 

	shared_ptr<RectCollider> _body;
	
	
};

