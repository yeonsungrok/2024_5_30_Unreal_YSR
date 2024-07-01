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

	void TurnPattern(shared_ptr<Cannon> other); // �������� ����
	void CheckCollision(shared_ptr<Cannon> other);

	bool isFireOne = false; // �Ѿ� �߻� üũ! VK_SPACE) & 0x0001�� 0000���� ����..

	bool isControlled = false;



	shared_ptr<Collider> GetCollider() { return _body; } // �ٵ� bullet���� ����ϱ����� �������� �Լ�.

	vector<shared_ptr<class Bullet>>& GetBullets() { return _bullets; } // �Ȱ���.. ĳ������� ���ҷ��ͼ� ����

private:
	shared_ptr<Collider> _body;
	shared_ptr<class Barrel> _barrel;
	vector<shared_ptr<class Bullet>> _bullets;
	
	int _hp = 5;
	
	float _angle = 0.0f;
};

