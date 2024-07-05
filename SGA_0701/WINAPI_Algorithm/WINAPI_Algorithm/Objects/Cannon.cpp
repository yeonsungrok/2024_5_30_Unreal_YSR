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
	if (!_isActive) return;

	_barrel->Render(hdc);
	_body->Render(hdc);
	
	for (auto bullet : _bullets)
		bullet->Render(hdc);
	




	wstring Life = to_wstring(_hp); // L"5";
	
	int textWidth = Life.size() * 10;
	int textHeight = 20;
	int textPosX = static_cast<int>(_body->_center._x) - textWidth / 2;
	int textPosY = static_cast<int>(_body->_center._y) - textHeight / 2;

	COLORREF oldColor = SetTextColor(hdc, RGB(200, 0, 0));

	TextOut(hdc, textPosX, textPosY, Life.c_str(), Life.size());

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
		// _bullets... 꺼진 애(isActive == false)가 있는지 확인하고
		// -> 꺼진 애를 찾아서 Fire
		
	/*	for (auto bullet : _bullets)
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
			isFireOne = true; // 총알 발사췌끄!
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

//void Cannon::CheckCollision(shared_ptr<Cannon> other)
//{
//	
//	for (auto& bullet : _bullets)
//	{
//		//Collider::IsCollision()
//		
//		/*_playerBar->IsCollision(other->GetCollider());*/
//		//bullet->SetActive(true) && GetBullets->GetCollider()->IsCollider(other->GetCollider());
//			//_playerBar->IsCollision(other->_bullets)
//			
//		//bullet->SetActive(true);
//		//_playerBar->
//
//		if (bullet->IsActive() && _playerBar->IsCollision(other->GetCollider()))
//		{
//			other->Damage(1);
//			other->TurnColor(_playerBar);
//			bullet->SetActive(false);
//			break;
//		}
//	/*	if (other->GetCollider()->IsCollision(_playerBar))
//		{
//			
//			other->Damage(1);
//			other->TurnColor(_playerBar);
//			bullet->SetActive(false);
//			
//
//			break;
//		}*/
//	}
//
//}

void Cannon::SetActive(bool isActive)
{
	_isActive = isActive;
}

//void Cannon::TurnColor(shared_ptr<Collider> Collider)
//{
//	Collider->SetRed();
//}
//
//void Cannon::FinishColor(shared_ptr<Collider> Collider)
//{
//	Collider->SetBlack();
//}

//void Cannon::TextLife(wstring life)
//{
//	wstring Life = to_wstring(_hp); // L"5";
//	int textWidth = Life.size() * 10;
//	int textHeight = 20;
//	int textPosX = static_cast<int>(_playerBar->_center._x) - textWidth / 2;
//	int textPosY = static_cast<int>(_playerBar->_center._y) - textHeight / 2;
//
//	TextOut(hdc, textPosX, textPosY, Life.c_str(), Life.size());
//}





void Cannon::Damage(int amount) 
{

	_hp -= amount;

	if (_hp <= 0)
	{
		_isActive = false;
		//_playerBar->SetBlack(); 
	}



	//if (_hp <= 0)
	//{
	//	_playerBar->Render(false);
	//	_barrel->Render(false);
	//}

}

bool Cannon::isDead()
{
	if (_hp == 0)
		return true;
	return false;
}

//wstring Cannon::TextLife()
//{
//	//캐논 씬 랜더에 해볼것.
//	wstring Life = L"Hello Maze!!!";
//	TextOut(hdc, CENTER._x - 100, 100, Life.c_str(), Life.size());
//	//TextOut(hdc, CENTER._x - 100, 100, Life.c_str(), Life.size());
//	//_maze->Render(hdc);*/
//
//	/*if (_hp == 5)
//		cout << L"5";*/
//	return Life;
//}

//void Cannon::HP_END()
//{
//	_playerBar->Render(false);
//	_barrel->Render(false);
//}
