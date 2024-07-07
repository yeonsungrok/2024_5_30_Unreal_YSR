#include "pch.h"
#include "Block_Rectangle.h"
#include "Objects/Arkanoid/Ball.h"

Block_Rectangle::Block_Rectangle()
: RectCollider(Vector2(), Vector2(35, 15))
{
	/*_brushes.push_back(CreateSolidBrush(GREEN));
	_brushes.push_back(CreateSolidBrush(RED));*/
	
	//SetGreen();
}

Block_Rectangle::~Block_Rectangle()
{
	//for (auto brush : _brushes)
	//{
	//	DeleteObject(brush);
	//}
}

void Block_Rectangle::Update()
{
	//RectCollider::Update();
}

void Block_Rectangle::Render(HDC hdc)
{
	
	RectCollider::Render(hdc);
}

void Block_Rectangle::SetPosition(Vector2 pos)
{
	_center = pos;
}

//void Block_Rectangle::IsCollision(shared_ptr<Ball> ball)
//{
//	if (ball->GetCircleCollider()->_center._y > Top())
//	{
//		ball->GetDir()._y *= -1;
//	}
//		
//
//
//	//if (ball->GetDir().Length() <= 0.001f)
//	//{
//	//	return;
//	//}
//	//if (_rect->IsCollision(ball->GetCircleCollider()) == false)
//	//	return;
//
//	//Vector2 cirPos = ball->GetCircleCollider()->_center;
//	//Vector2 rectPos = _rect->_center;
//
//	//Vector2 dir = cirPos - rectPos;
//	//dir.Normalize();
//	//ball->SetDir(dir);
//
//
//
//	//// 상하좌우 반사
//	//if (_circle->_center._x < leftTop._x || _circle->_center._x > rightBottom._x)
//	//{
//	//	_dir._x *= -1;
//	//}
//	//if (_circle->_center._y < leftTop._y /*|| _circle->_center._y > rightBottom._y*/)
//	//{
//	//	_dir._y *= -1;
//	//}
//
//
//
//}


//void Block_Rectangle::SetBlockType(BlockType type)
//{
//	_type = type;
//	
//}

