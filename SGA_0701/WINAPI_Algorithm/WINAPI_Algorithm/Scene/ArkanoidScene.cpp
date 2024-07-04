#include "pch.h"
#include "ArkanoidScene.h"
#include "Objects/Arkanoid/Ball.h"
#include "Objects/Arkanoid/Player_Rectangle.h"

ArkanoidScene::ArkanoidScene()
{
	_playerRec = make_shared<Player_Rectangle>();
	_ball = make_shared<Ball>();
	_playerRec->SetBall(_ball);
}

ArkanoidScene::~ArkanoidScene()
{
}

void ArkanoidScene::Update()
{
	_playerRec->Update();
	_ball->Update();
}

void ArkanoidScene::Render(HDC hdc)
{
	_playerRec->Render(hdc);
	_ball->Render(hdc);
}
