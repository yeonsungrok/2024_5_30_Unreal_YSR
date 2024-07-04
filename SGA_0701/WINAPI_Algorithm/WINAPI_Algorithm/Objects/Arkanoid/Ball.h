#pragma once
class Ball
{

public:
	Ball();
	~Ball();

	void Update();
	void Render(HDC hdc);

	

	void SetStartBall(Vector2 startPos, Vector2 direction); // 발사세팅

	bool IsOut();
	void OutControll();

	/*Vector2 GetEndPos() { return _line->_end; }*/
	Vector2 GetDirection() { return _direction; }

	void SetStart(bool isStart);
	bool IsStart() { return _isStart; }

	void SetPosition(Vector2 pos) { _ball->_center = pos; }

private:
	bool _isStart = false;
	shared_ptr<CircleCollider> _ball;
	
	//shared_ptr<class Player_Rectangle> _player;



	Vector2 _direction = Vector2(1, 0); // 방향
	float _speed = 7.0f;

};

