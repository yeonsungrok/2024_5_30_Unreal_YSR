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

	//내적 두가지방법 
	/*
	A, B... |a||b|
	
	1.    A.Dot(b) = |a||b| cos@
	2.    A.Dot(b) = (x1 * x2 + y1 * y2)
	
	*/
	//단위벡터 투입
	Vector2 a = (_line2->_end - _line2->_start);
	Vector2 b = (_line1->_end - _line1->_start);

	Vector2 bNormal = b.NormalVector2(); // b의단위백터

	float line2Length = a.Dot(bNormal); // 그림자 길이.. 투영됬을때 길이(크기)

	//b가 방향과 크기를 갖고있음 
	Vector2 line3Delta = bNormal * line2Length;
	_line3->_end = _line3->_start + line3Delta;


	//OBB는 보통 외적으로 한다..(3D)





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
