#pragma once
class Ball
{

public:
	Ball();
	~Ball();

	void Update();
	void Render(HDC hdc);

	void SetPosition(Vector2 pos);

	void SetStartBall(Vector2 startPos, Vector2 direction); // 발사세팅

	bool IsOut();
	void OutControll();

	/*Vector2 GetEndPos() { return _line->_end; }*/
	Vector2 GetDirection() { return _direction; }

	void SetActive(bool isActive);
	bool IsActive() { return _isActive; }


private:
	bool _isActive = false;
	shared_ptr<Collider> _ball;

	Vector2 _direction = Vector2(1, 0); // 방향
	float _speed = 7.0f;

};

