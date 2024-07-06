#include "pch.h"
#include "Block_Rectangle.h"

Block_Rectangle::Block_Rectangle()
:RectCollider(Vector2(), Vector2(35, 15))
{
	/*_brushes.push_back(CreateSolidBrush(GREEN));
	_brushes.push_back(CreateSolidBrush(RED));*/
	
	//SetGreen();
}

Block_Rectangle::~Block_Rectangle()
{
	//for (auto brush : _brushes)
	//{
	//	DeleteObject(brush);
	//}
}

void Block_Rectangle::Update()
{
	//RectCollider::Update();
}

void Block_Rectangle::Render(HDC hdc)
{
	
	RectCollider::Render(hdc);
}

void Block_Rectangle::SetPosition(Vector2 pos)
{
	_center = pos;
}

//void Block_Rectangle::SetBlockType(BlockType type)
//{
//	_type = type;
//	
//}

