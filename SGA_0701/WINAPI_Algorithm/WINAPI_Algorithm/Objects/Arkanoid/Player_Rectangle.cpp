#include "pch.h"
#include "Player_Rectangle.h"
#include "Objects/Arkanoid/Ball.h"

Player_Rectangle::Player_Rectangle()
{
	_body = make_shared<RectCollider>(Vector2(1280 * 0.5f, 1200 * 0.5f), Vector2(45, 10));
	_ballCircle = make_shared<Ball>();

	//Vector2(_body->Top(), _ballCircle->)


	//SetBallPosition();
	//Move();
}
	
	

Player_Rectangle::~Player_Rectangle()
{
}

void Player_Rectangle::Update()
{
	Move();
	SetBallPosition();
	StartPlay();

	_body->Update();
	_ballCircle->Update();
}

void Player_Rectangle::Render(HDC hdc)
{
	_body->Render(hdc);
	_ballCircle->Render(hdc);
}

void Player_Rectangle::SetBallPosition()
{
	if (_ballCircle == nullptr) return;

	//if (발사중인 상태이다) return;

	Vector2 playerPos = _body->_center;
	Vector2 playerSize = _body->_halfSize;
	Vector2 ballPos = playerPos;
	ballPos._y -= (playerSize._y + 6.0f); // Player_Rectangle 위쪽으로 6.0f 만큼 이동
	_ballCircle->SetPosition(ballPos);

}

//void Player_Rectangle::SetStart(Vector2 start)
//{
//	_ballCircle->   //= start;
//}

void Player_Rectangle::Move()
{

	if (GetAsyncKeyState(VK_RIGHT))
	{
		_body->_center._x += 3.0f;
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		_body->_center._x -= 3.0f;
	}

}

void Player_Rectangle::SetPosition(Vector2 pos)
{
	
}

void Player_Rectangle::StartPlay()
{

	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	{
		// _bullets... 꺼진 애(isActive == false)가 있는지 확인하고
		// -> 꺼진 애를 찾아서 Fire
		
		/*if (_ballCircle->IsActive() == false)
		{
			_ballCircle->SetStartBall(_ballCircle->GetDirection());
			break;
		}*/


		//_ballCircle->SetStartBall(_ballCircle->GetDirection(),_ballCircle->SetPosition());
		/*for(auto ball : _ball)

		_ballCircle->SetStartBall(_ballCircle->GetDirection());*/

		/*for (auto bullet : _bullets)
		{
			if (bullet->IsActive() == false)
			{
				bullet->Fire(_ballCircle->GetDirection());
				break;
			}

		}*/


		




	}

}

//void Player_Rectangle::SetStart(Vector2 ballPos)
//{
//	_body->Top();
//
//
//}
//

