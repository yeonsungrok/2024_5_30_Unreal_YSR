#include "pch.h"
#include "ArkanoidScene.h"
#include "Objects/Arkanoid/Ball.h"
#include "Objects/Arkanoid/Player_Rectangle.h"

ArkanoidScene::ArkanoidScene()
{
	_playerBar = make_shared<PlayerBar>();
	_ball = make_shared<Ball>();

	//_map = make_

	BeforeFireUpdate();
}

ArkanoidScene::~ArkanoidScene()
{
}

void ArkanoidScene::BeforeFireUpdate()
{
	if (_isFired == true) return;

	Vector2 pos = _playerBar->GetRectCollider()->_center;
	pos._y = _playerBar->GetRectCollider()->Top();
	pos._y -= _ball->GetCircleCollider()->_radius;

	_ball->SetPosition(pos);
}

void ArkanoidScene::Fire()
{
	if (_isFired == true) return;

	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	{
		_isFired = true;
		_ball->SetDir(Vector2(0, -1));
	}

}

void ArkanoidScene::Update()
{
	//_playerRec->Update();
	/*for (auto& _ballCircle : _playerRec->GetBalls())
	{
		_ballCircle->Update();
	}
	*/

	BeforeFireUpdate();
	Fire();

	_playerBar->IsCollision(_ball);

	_playerBar->Update();
	_ball->Update();


}

void ArkanoidScene::Render(HDC hdc)
{
	//_playerRec->Render(hdc);
	/*for (auto& _ballCircle : _playerRec->GetBalls())
	{
		_ballCircle->Render(hdc);
	}*/
	_playerBar->Render(hdc);
	_ball->Render(hdc);
}
