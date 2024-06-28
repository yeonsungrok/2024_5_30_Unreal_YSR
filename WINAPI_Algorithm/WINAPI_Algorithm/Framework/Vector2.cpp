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
	//�������� = ��ֺ���(����ȭ�� ����)

	float length = Length();
	// �̰Թ���..

	Vector2 temp = *this;
	temp.Nomalize();

	return temp;
}

bool Vector2::IsBetween(Vector2 v1, Vector2 v2)
{
	float Cross1 = this->Cross(v1); // +
	float Cross2 = this->Cross(v2); // -

	bool result = (Cross1 * Cross2) < 0;

	return result;
}
