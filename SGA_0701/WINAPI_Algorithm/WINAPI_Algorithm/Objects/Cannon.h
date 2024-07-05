#pragma once

#define GREEN_COLOR		0
#define RED_COLOR		1

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
	bool isDead();


	void TurnPattern(shared_ptr<Cannon> other); // �������� ����
	/*void CheckCollision(shared_ptr<Cannon> other);*/

	bool isFireOne = false; // �Ѿ� �߻� üũ! VK_SPACE) & 0x0001�� 0000���� ����..
	bool isControlled = false;
	
	// ���� on/off�� ���� bool ���޳��� ����
	bool isActive() { return _isActive; }
	void SetActive(bool isActive);

	/*void TurnColor(shared_ptr<Collider> Collider);
	void FinishColor(shared_ptr<Collider> Collider);*/
	
	shared_ptr<Collider> GetCollider() { return _body; } // �ٵ� bullet���� ����ϱ����� �������� �Լ�.

	vector<shared_ptr<class Bullet>>& GetBullets() { return _bullets; } // �Ȱ���.. ĳ������� ���ҷ��ͼ� ����

	/*void TextLife(wstring life);*/
private:
	shared_ptr<Collider> _body;
	shared_ptr<class Barrel> _barrel;
	vector<shared_ptr<class Bullet>> _bullets;
	
	wstring _life;
	int _hp = 5;
	
	float _angle = 0.0f;

	bool _isActive = true; // Ȱ������ �� ����.
};

