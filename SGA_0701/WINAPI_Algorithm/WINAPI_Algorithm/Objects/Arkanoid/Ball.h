#pragma once
class Ball
{

public:
	Ball();
	~Ball();

	void Update();
	void Render(HDC hdc);

	void SetPosition(Vector2 pos) { _circle->_center = pos; }
	void SetDir(Vector2 dir) { _dir = dir; }
	Vector2 GetDir() { return _dir; }


	void Move();
	shared_ptr<CircleCollider>GetCircleCollider() { return _circle; }
	
	Vector2 SetRightBottom() { return rightBottom; }

private:
	bool _isFired = false;
	float _speed = 10.0f;


	Vector2 leftTop = { 0,0 };
	Vector2 rightBottom = { WIN_WIDTH, WIN_HEIGHT };
	Vector2 _dir = Vector2(0, 0); // πÊ«‚

	shared_ptr<CircleCollider> _circle;
	
	
	



	
};

