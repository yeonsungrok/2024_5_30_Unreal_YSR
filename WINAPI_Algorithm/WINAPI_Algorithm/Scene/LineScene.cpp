#include "pch.h"
#include "LineScene.h"

LineScene::LineScene()
{
	_line1 = make_shared<Line>(Vector2(100, 500), Vector2(1000, 400));
	_line2 = make_shared<Line>(Vector2(100, 450), Vector2(0, 0));
	_line3 = make_shared<Line>(Vector2(100, 470), Vector2(150, 470));
}



LineScene::~LineScene()
{
}

void LineScene::Update()
{
	_line2->_end = mousePos;

	//내적 투영관련
	
	// line2 방향과 크기구하기 = 끝점(x,y) - 시작점(x,y)
	/*Vector2 line2Vector = _line2->_end - _line2->_start;

	Vector2 line3Vector = _line3->_end - _line3->_start;
	float line3Length = line3Vector.Length();*/



	_line1->Update();
	_line2->Update();
	_line3->Update();

}

void LineScene::Render(HDC hdc)
{

	_line1->Render(hdc);
	_line2->Render(hdc);
	_line3->Render(hdc);

}
