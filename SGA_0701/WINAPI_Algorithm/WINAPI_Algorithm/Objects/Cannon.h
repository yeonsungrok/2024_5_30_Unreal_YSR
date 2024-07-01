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
	void Damage(int amount);
	/*void HP_END();*/

	void TurnPattern(shared_ptr<Cannon> other); // 지정패턴 변경
	void CheckCollision(shared_ptr<Cannon> other);

	bool isFireOne = false; // 총알 발사 체크! VK_SPACE) & 0x0001과 0000으론 힘듬..

	bool isControlled = false;



	shared_ptr<Collider> GetCollider() { return _body; } // 바디를 bullet에서 사용하기위해 꺼내놓은 함수.

	vector<shared_ptr<class Bullet>>& GetBullets() { return _bullets; } // 똑같이.. 캐논씬에서 못불러와서 만듬

private:
	shared_ptr<Collider> _body;
	shared_ptr<class Barrel> _barrel;
	vector<shared_ptr<class Bullet>> _bullets;
	
	int _hp = 5;
	
	float _angle = 0.0f;
};

