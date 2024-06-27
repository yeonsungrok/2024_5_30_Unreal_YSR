#include "pch.h"
#include "paintScene.h"

PaintScene::PaintScene()
{
    _rect = make_shared<RectCollider>(Vector2(0.0f, 0.0f), Vector2(50.0f, 50.0f));
    _circle = make_shared<CircleCollider>(Vector2(50.0f, 50.0f), 15.0f);

    /*_brushes.push_back(CreateSolidBrush(PANTON));
    _brushes.push_back(CreateSolidBrush(SKYCOLOR));*/

    /*_pens.push_back(CreatePen(PS_SOLID, 3, PANTON));
    _pens.push_back(CreatePen(PS_SOLID, 3, SKYCOLOR));*/

}

PaintScene::~PaintScene()
{


}

void PaintScene::Update()
{
    _rect->_center = _rect->_center + Vector2(0.5f, 0.5f);

    _circle->_center = LERP(_circle->_center, mousePos, 0.1f);

    _rect->Update();
    _circle->Update();
  
}

void PaintScene::Render(HDC hdc)
{
    // 색 입히기 : Red
  /*  HBRUSH redBrush = CreateSolidBrush(RGB(255, 0, 0));*/
  
    // 색 입히기 : blue
    /*HBRUSH blueBrush = CreateSolidBrush(RGB(0, 0, 255));*/
    //Ellipse(hdc, 200, 200, 300, 300);
    
    // 선 색깔 고르기
    /*HPEN greenPen = CreatePen(PS_SOLID, 3, RGB(0, 255, 0));*/
   // SelectObject(hdc, greenPen);




    // 사각형 그리기
 /*   SelectObject(hdc, _brushes[0]);
    SelectObject(hdc, _pens[0]);*/
    _rect->Render(hdc);


    
    // 원 그리기
  /*  SelectObject(hdc, _brushes[1]);
    SelectObject(hdc, _pens[1]);*/
    _circle->Render(hdc);
    

    // 선 그리기 
   // MoveToEx(hdc, 100, 100, nullptr);
   /* LineTo(hdc, 200, 200);*/

}