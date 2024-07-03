#include "pch.h"
#include "ArkanoidScene.h"
#include "Objects/Arkanoid/Ball.h"
#include "Objects/Arkanoid/Player_Rectangle.h"

ArkanoidScene::ArkanoidScene()
{
	_playerRec = make_shared<Player_Rectangle>();

}

ArkanoidScene::~ArkanoidScene()
{
}

void ArkanoidScene::Update()
{
	_playerRec->Update();
}

void ArkanoidScene::Render(HDC hdc)
{
	_playerRec->Render(hdc);
}
