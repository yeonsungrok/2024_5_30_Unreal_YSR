#include "pch.h"
#include "Cannon.h"
#include "Objects/Barrel.h"
#include "Objects/Bullet.h"


Cannon::Cannon()
{
	_body = make_shared<CircleCollider>(CENTER, 50.0f);
	_barrel = make_shared<Barrel>();
	
	
	for (int i = 0; i < 30; i++)
	{
		shared_ptr<Bullet> bullet = make_shared<Bullet>();
		bullet->SetActive(false);
		_bullets.push_back(bullet);
	}

	Move();
	
}

Cannon::~Cannon()
{
}

void Cannon::Update()
{
	
	if (isControlled)
	{
		Move();
		Fire();
	}
	

	_body->Update();
	_barrel->Update();
	for (auto bullet : _bullets)
		bullet->Update();

}

void Cannon::Render(HDC hdc)
{
	_barrel->Render(hdc);
	_body->Render(hdc);
	
	for (auto bullet : _bullets)
		bullet->Render(hdc);

}

void Cannon::Move()
{
	//TurnPattern();
	if (GetAsyncKeyState(VK_RIGHT))
	{
		_body->_center._x += 1.0f;
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		_body->_center._x -= 1.0f;
	}
	if (GetAsyncKeyState(VK_UP))
	{
		_angle -= 0.01f;
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		_angle += 0.01f;
	}

	_barrel->SetAngle(_angle);

	_barrel->SetStart(_body->_center);
	
}

void Cannon::Fire()
{
	// KEY DOWN
	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	{
		// _bullets... ≤®¡¯ æ÷(isActive == false)∞° ¿÷¥¬¡ˆ »Æ¿Œ«œ∞Ì
		// -> ≤®¡¯ æ÷∏¶ √£æ∆º≠ Fire
		
		/*for (auto bullet : _bullets)
		{
			if (bullet->IsActive() == false)
			{
				bullet->Fire(_barrel->GetEndPos(), _barrel->GetDirection());
				break;
			}

		}*/


		auto iter = std::find_if(_bullets.begin(), _bullets.end(), 
			[](shared_ptr<Bullet> bullet)->bool 
			{
				if (!bullet->IsActive())return true;
				return false;
			});

		if (iter != _bullets.end())
		{
			(*iter)->Fire(_barrel->GetEndPos(), _barrel->GetDirection());
			isFireOne = true; // √—æÀ πﬂªÁ√È≤Ù!
		}
	
	}

}

void Cannon::TurnPattern(shared_ptr<Cannon> other)
{
	if (isFireOne)
	{
		isControlled = false;
		other->isControlled = true;
		isFireOne = false;
	}
}

void Cannon::CheckCollision(shared_ptr<Cannon> other)
{
	for (auto& bullet : _bullets)
	{
		if (bullet->IsActive() && _body->IsCollision(other->GetCollider()))
		{
			other->Damage(1);
			bullet->SetActive(false);
			break;
		}
	}

}

void Cannon::Damage(int amount) 
{

	_hp -= amount;

	/*if (_hp <= 0)
	{
		_body->Render(false);
		_barrel->Render(false);
	}*/

}

//void Cannon::HP_END()
//{
//	_body->Render(false);
//	_barrel->Render(false);
//}
