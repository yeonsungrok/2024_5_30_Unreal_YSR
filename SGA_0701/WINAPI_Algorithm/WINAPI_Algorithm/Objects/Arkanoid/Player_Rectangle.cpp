#include "pch.h"
#include "Player_Rectangle.h"
#include "Objects/Arkanoid/Ball.h"

Player_Rectangle::Player_Rectangle()
{
	_body = make_shared<RectCollider>(Vector2(1280 * 0.5f, 1200 * 0.5f), Vector2(45, 10));
	//_ballCircle = make_shared<Ball>();				 // �ּ� ����غ���
		
	for (int i = 0; i < 1; i++)
	{
		auto _ballCircle = make_shared<Ball>();    // �ּ� ����غ���
		_ballCircle->SetStart(false);
		_ballCircles.push_back(_ballCircle);
	}

	//SetBallPosition();
	Move();

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
	
	for (auto& _ballCircle : _ballCircles)
	{
		_ballCircle->Update();
	}

}

void Player_Rectangle::Render(HDC hdc)
{
	////if (!_isStart) return;
	//_body->Render(hdc);
	//_ballCircle->Render(hdc);				// �ּ� ����غ���

	_body->Render(hdc);
	for (auto& _ballCircle : _ballCircles)
	{
		_ballCircle->Render(hdc);
	}


}

void Player_Rectangle::SetBallPosition()
{
	//if (_ballCircle == nullptr) return;

	if (_isStart) return;

	Vector2 playerPos = _body->_center;
	Vector2 playerSize = _body->_halfSize;
	Vector2 ballPos = playerPos;
	ballPos._y -= (playerSize._y + 6.0f); // Player_Rectangle �������� 6.0f ��ŭ �̵�
	//_ballCircle->SetPosition(ballPos);
	
	for (auto& _ballCircle : _ballCircles)
	{
		if (!_ballCircle->IsStart())
		{
			_ballCircle->SetPosition(ballPos);
		}
	}

	
	

}

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



void Player_Rectangle::StartPlay()
{

	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	{
		// _bullets... ���� ��(isActive == false)�� �ִ��� Ȯ���ϰ�
		// -> ���� �ָ� ã�Ƽ� Fire
		

		/*for (auto _ballCircle : _ballCircles)
		{
			if (_ballCircle->IsStart() == false)
			{
				_ballCircle->SetStart(_ballCircle->(), _ballCircle->GetDirection());
				break;
			}

		}*/
		if (_isStart) return;

		auto iter = std::find_if(_ballCircles.begin(), _ballCircles.end(),
			[](shared_ptr<Ball> _ballCircle) -> bool
			{
				/*if (! ball->IsStart())return true;       // �ּ� ����غ���
				return false;*/

				return !_ballCircle->IsStart();

			});

		if (iter != _ballCircles.end())
		{
			Vector2 startPosition = _body->_center;
			startPosition._y -= _body->_halfSize._y + 12.0f;
			Vector2 direction = Vector2(0.0f, -1.0f);
			(*iter)->SetStartBall(startPosition, direction);
			_isStart = true; // �Ѿ� �߻����!
		}





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

void Player_Rectangle::SetStart(bool isStart)
{
	_isStart = isStart;
}

//void Player_Rectangle::SetStart(Vector2 ballPos)
//{
//	_body->Top();
//
//
//}
//

