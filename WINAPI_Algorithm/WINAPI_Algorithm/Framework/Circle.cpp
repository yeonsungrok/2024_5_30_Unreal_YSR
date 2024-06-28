#include "pch.h"
#include "Circle.h"



CircleCollider::CircleCollider(Vector2 center, float radius)
: _center(center), _radius(radius)
{

	_pens.push_back(CreatePen(PS_SOLID, 3, GREEN));
	_pens.push_back(CreatePen(PS_SOLID, 3, RED));

	SetColor(GREEN_COLOR);

}

CircleCollider::~CircleCollider()
{
	for (auto pen : _pens)
		DeleteObject(pen);

}

void CircleCollider::Update()
{

}


void CircleCollider::Render(HDC hdc)
{
	SelectObject(hdc, _curPen);
	int left = _center._x - _radius;
	int right = _center._x + _radius;
	int top = _center._y - _radius;
	int bottom = _center._y + _radius;

	Ellipse(hdc, left, top, right, bottom);

}

bool CircleCollider::IsCollision(Vector2 point)
{
	float distance =  _center.Distance(point);

	return distance < _radius;
}

bool CircleCollider::IsCollision(shared_ptr<CircleCollider> other)
{
	float distance = _center.Distance(other->_center);
	
	return distance < _radius + other->_radius;
}


bool CircleCollider::IsCollision(shared_ptr<RectCollider> other)
{
	// 과제....사각형...
	// 충돌 방법 2가지
	// AABB (회전하지 않는다는 조건), OBB(회전이 가능하다(directX에서나 회전됨..))

	// 사각형 내용접근
	float rectLeft = other->Left();
	float rectRight = other->Right();
	float rectTop = other->Top();
	float rectBottom = other->Bottom();

	// 원형과 거리계산
	// 원행 중심 x좌표와 사각형 경계를 비교
	float nearX;
	if (_center._x < rectLeft)
		nearX = rectLeft; // 원중심 사각형 왼쪽에 있을때
	else if (_center._x > rectRight)
		nearX = rectRight; // 원중심 사각형 오른쪽 있을때
	else
		nearX = _center._x; // 원의 중심이 사각형의 경계 안에 있을 때
	
	float nearY;
	if (_center._y < rectTop) // 원의 중심이 사각형의 위쪽에 있을 때
		nearY = rectTop;
	else if (_center._y > rectBottom) // 원의 중심이 사각형의 아래쪽에 있을 때
		nearY = rectBottom;
	else
		nearY = _center._y; // 원의 중심이 사각형의 경계 안에 있을 때

	float distanceX = _center._x - nearX; //원의 중심과 가장 가까운 점 사이의 x 거리 계산
	float distanceY = _center._y - nearY; //원의 중심과 가장 가까운 점 사이의 y 거리 계산

	//두 거리의 제곱을 합하여 거리 제곱 계산
	float distance = (distanceX * distanceX) + (distanceY * distanceY);




	// this->_center.Distance(other->shared_from_this());

	//if (this->Right() > other->Left() &&
	//	this->Left() < other->Right() &&
	//	this->Bottom() > other->Top() &&
	//	this->Top() < other->Bottom())
	//{
	//	return true;
	//}
	//return false;


	/*
	강사님이 사용한내용
	
	*/



	// 거리 제곱이 원의 반지름의 제곱보다 작은지 비교하여 충돌 여부를 반환

	return distance < (_radius * _radius);
}


void CircleCollider::SetColor(ColorNum num)
{
	_curPen = _pens[num];
}
