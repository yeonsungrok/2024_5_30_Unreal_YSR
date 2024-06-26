#pragma once
class Circle
{
public:
	Circle(Vector2 center, Vector2 halfSize);
	~Circle() {}

	void Update();
	void Render(HDC hdc);

private:
	// ¸É¹ö
	Vector2 _center;
	Vector2 _halfsize;

};

