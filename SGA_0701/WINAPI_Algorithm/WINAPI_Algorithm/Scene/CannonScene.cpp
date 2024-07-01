#include "pch.h"
#include "CannonScene.h"
#include "Objects/Cannon.h"
#include "Objects/Bullet.h"

// ��缭 (�����ϱ���.. 7/3..)
// ���� ��Ʈ����
// �� cannon�� �ϸ��� ���� ��Ʈ���� �޾Ƽ� ����
// cannon�� HP�� 5
// ������ hp -1, hp�� 0�̸� cannon�� �����(false�� �����߰���?)

CannonScene::CannonScene()
{
	_cannon1 = make_shared<Cannon>();
	_cannon2 = make_shared<Cannon>();

	_cannon1->isControlled = true;
	/*
	if (_cannon1->isControlled = true)
	{
		for (auto bullet : _cannon1->GetBullets())
		{
			bullet->SetTarget(_cannon2);
			_cannon1->isControlled = false;
		}
		_cannon2->isControlled = true;
	}
	else
	{
		for (auto bullet : _cannon2->GetBullets())
		{
			bullet->SetTarget(_cannon1);
			_cannon2->isControlled = false;
		}
		_cannon1->isControlled = true;
	}*/

	

	//����2
	for (auto bullet : _cannon1->GetBullets())
	{
		bullet->SetTarget(_cannon2);
	}

	for (auto bullet : _cannon2->GetBullets())
	{
		bullet->SetTarget(_cannon1);
	}

}

CannonScene::~CannonScene()
{
}

void CannonScene::Update()
{
	_cannon1->Update();
	_cannon2->Update();

	//���� 1
	//for (auto bullet : _cannon1->GetBullets())
	//{
	//	bullet->Attack_Cannon(_cannon2);
	//}
}

void CannonScene::Render(HDC hdc)
{
	_cannon1->Render(hdc);
	_cannon2->Render(hdc);
}
