#include "pch.h"
#include "Vector2.h"

float Vector2::Length() const
{
	float result = sqrt(this->_x * this->_x + this->_y * this->_y);

	return result;
}

float Vector2::Distance(Vector2 other) const
{
	Vector2 temp = other - *this;

	return temp.Length();
}

float Vector2::Angle() const
{


	return 0.0f;
}



void Vector2::Nomalize()
{
	float length = Length();
	/*this->_x = this->_x / sqrt((this->_x * this->_x) + (this->_y * this->_y));
	this->_y = this->_y / sqrt((this->_x * this->_x) + (this->_y * this->_y));*/
	_x /= length;
	_y /= length;
}

Vector2 Vector2::NormalVector2()
{
	//법선백터 = 노멀벡터(정규화된 벡터)

	float length = Length();
	// 이게뭐지..

	Vector2 temp = *this;
	temp.Nomalize();

	return temp;
}
