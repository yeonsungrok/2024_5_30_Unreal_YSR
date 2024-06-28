#pragma once
#include "Framework/Vector2.h"

#define RED			 RGB(255, 0, 0)
#define GREEN		 RGB(0, 255, 0)
#define BLUE		 RGB(0, 0, 255)

#define PANTON		RGB(255,103,32)
#define SKYCOLOR	RGB(123,196,196)

//선형 보관 (원형보관도 따로있음)
#define LERP(s,e,t)		s + (e - s) * t


struct HResult
{
	bool isCollision;
	class Vector2 hitPoint;
};