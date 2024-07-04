#include "pch.h"
#include "Ball.h"
#include "Objects/Arkanoid/Ball.h"
#include "Objects/Arkanoid/Player_Rectangle.h"

Ball::Ball()
{
	_ball = make_shared<CircleCollider>(CENTER, 6.0f);   //CENTER
	_ball->SetRed(); 
	
}

Ball::~Ball()
{
}

void Ball::Update()
{
	if (_isStart)
	{
		_ball->_center += _direction * _speed;
		OutControll();
	}
	
	_ball->Update();
	

	
	//OutControll : �ݻ縦 ���� �Լ�
	/*OutControll();
	bool isOut = false;*/

}

void Ball::Render(HDC hdc)
{
	
	//if(_isStart==true)
		_ball->Render(hdc);

}

void Ball::SetStartBall(Vector2 startPos, Vector2 direction)
{

	_isStart = true;
	_ball->_center = startPos; // ������ �������� ���콺 �¿�� ���� �̵������� ���������غ���
	_direction = direction;
	_direction.Normalize();
	

}

bool Ball::IsOut()
{

	if (_ball->_center._x > WIN_WIDTH || _ball->_center._x < 0)
	{
		return true;
	}
	if (_ball->_center._y > WIN_HEIGHT || _ball->_center._y < 0)
		return true;

	return false;
}

void Ball::OutControll()
{
	Vector2 center = _ball->_center;
	if (center._x > WIN_WIDTH || center._x < 0)
	{
		_direction._x *= -1.0f;
	}
	if (center._y > WIN_HEIGHT || center._y < 0)
	{
		_direction._y *= -1.0f;
	}

}

void Ball::SetStart(bool isStart)
{
	_isStart = isStart;
}

//void Ball::SetActive(bool isActive)
//{
//	_isActive = isActive;
//}


