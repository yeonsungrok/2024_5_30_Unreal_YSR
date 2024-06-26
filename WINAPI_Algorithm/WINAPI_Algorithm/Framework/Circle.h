#pragma once
class Circle
{
public:
	Circle(Vector2 center, Vector2 halfSize);
	~Circle() {}

	void Update();
	void Render(HDC hdc);

private:
	// �ɹ�
	Vector2 _center;
	Vector2 _halfsize;

};

