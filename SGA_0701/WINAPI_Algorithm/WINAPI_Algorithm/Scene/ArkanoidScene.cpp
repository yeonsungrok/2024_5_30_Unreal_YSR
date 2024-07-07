#include "pch.h"
#include "ArkanoidScene.h"
#include "Objects/Arkanoid/Ball.h"
#include "Objects/Arkanoid/Player_Rectangle.h"
#include "Objects/Arkanoid/Blocks.h"
//#include "Objects/Arkanoid/Block_Rectangle.h"

ArkanoidScene::ArkanoidScene()
{
	_playerBar = make_shared<PlayerBar>();
	_ball = make_shared<Ball>();
	_blocks = make_shared<Blocks>();
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

	BeforeFireUpdate();
	Fire();
	

	_playerBar->IsCollision(_ball);
	_blocks->IsCollision(_ball);
	
	_playerBar->Update();
	_ball->Update();
	_blocks->Update();
	Reset();

}

void ArkanoidScene::Render(HDC hdc)
{
	_playerBar->Render(hdc);
	_ball->Render(hdc);
	_blocks->Render(hdc);
}
	


void ArkanoidScene::Reset()
{
	if (_ball->GetCircleCollider()->_center._y > _ball->SetRightBottom()._y)
	{
		_isFired = false;
		BeforeFireUpdate();
	}
		
	
}
