#pragma once
class Cannon
{
public:
	Cannon();
	~Cannon();

	void Update();
	void Render(HDC hdc);

	void Move();
	void Fire();

	void TurnPattern();  // 턴 교차?

	bool isControlled = false;
	void Damage(int amount);


	shared_ptr<Collider> GetCollider() { return _body; } // 바디를 bullet에서 사용하기위해 꺼내놓은 함수.

	vector<shared_ptr<class Bullet>>& GetBullets() { return _bullets; } // 똑같이.. 캐논씬에서 못불러와서 만듬

private:
	shared_ptr<Collider> _body;
	shared_ptr<class Barrel> _barrel;
	vector<shared_ptr<class Bullet>> _bullets;
	
	int _hp = 5;
	
	float _angle = 0.0f;
};

