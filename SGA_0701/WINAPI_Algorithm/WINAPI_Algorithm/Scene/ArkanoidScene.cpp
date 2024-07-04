#include "pch.h"
#include "ArkanoidScene.h"
#include "Objects/Arkanoid/Ball.h"
#include "Objects/Arkanoid/Player_Rectangle.h"

ArkanoidScene::ArkanoidScene()
{
	_playerRec = make_shared<Player_Rectangle>();
	/*_ball = make_shared<Ball>();
	_playerRec->SetBall(_ball);*/
}

ArkanoidScene::~ArkanoidScene()
{
}

void ArkanoidScene::Update()
{
	_playerRec->Update();
	for (auto& _ballCircle : _playerRec->GetBalls())
	{
		_ballCircle->Update();
	}
	
	
	
	/*_ball->Update();*/
}

void ArkanoidScene::Render(HDC hdc)
{
	_playerRec->Render(hdc);
	for (auto& _ballCircle : _playerRec->GetBalls())
	{
		_ballCircle->Render(hdc);
	}
	
	//_ball->Render(hdc);
}
