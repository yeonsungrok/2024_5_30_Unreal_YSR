#include "pch.h"
#include "Circle.h"

Circle::Circle(Vector2 center, Vector2 halfSize)
: _center(center), _halfsize(halfSize)
{
}

void Circle::Update()
{
}

void Circle::Render(HDC hdc)
{

	int left = _center._x - _halfsize._x;
	int right = _center._x + _halfsize._x;
	int top = _center._y - _halfsize._y;
	int bottom = _center._y + _halfsize._y;

	Ellipse(hdc, left, top, right, bottom);

}
