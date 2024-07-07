#include "pch.h"
#include "Player_Rectangle.h"
#include "Objects/Arkanoid/Ball.h"

PlayerBar::PlayerBar()
{
	Vector2 temp = CENTER;
	temp._y += 250; // 플래이어 Bar 위치 y
	_rect = make_shared<RectCollider>(temp, Vector2(65, 12));
}

PlayerBar::~PlayerBar()
{
}

void PlayerBar::Update()
{
	Input();
	_rect->Update();
}
	


void PlayerBar::Render(HDC hdc)
{
	
	_rect->Render(hdc);
	
}

void PlayerBar::Input()
{
	if (GetAsyncKeyState(VK_RIGHT))
	{
		_rect->_center._x += 2.0f * _speed;
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		_rect->_center._x -= 2.0f * _speed;
	}

	if (_rect->Left() < 0)
	{
		_rect->_center._x = _rect->_halfSize._x;
	}
	if (_rect->Right() > WIN_WIDTH)
	{
		_rect->_center._x = WIN_WIDTH - _rect->_halfSize._x;
	}
}


//player Bar가 공과 맞았을때 반사
void PlayerBar::IsCollision(shared_ptr<class Ball> ball) 
{
	if (ball->GetDir().Length() <= 0.001f)
	{
		return;
	}
	if (_rect->IsCollision(ball->GetCircleCollider()) == false)
		return;

	Vector2 cirPos = ball->GetCircleCollider()->_center;
	Vector2 rectPos = _rect->_center;

	Vector2 dir = cirPos - rectPos;
	dir.Normalize();
	ball->SetDir(dir);


}


