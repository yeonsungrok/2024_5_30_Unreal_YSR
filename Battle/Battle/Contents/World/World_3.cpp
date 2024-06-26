#include "pch.h"
#include "World_3.h"

World_3::World_3()
{
	CreateObjects();
}

World_3::~World_3()
{
	/*if(_boss != nullptr)
		delete _boss;

	for (int i = 0; i < _players->size(); i++)
	{
		if(_players[i] != nullptr)
			delete _players[i];
	}*/
}

void World_3::CreateObjects()
{
	_boss = make_shared<HopGoblin>();
	
	for (int i = 0; i < 5; i++)
	{
		int knightAtk = 30 + rand() % 10;
		int knightHp = 100 + rand() % 50;
		auto knight = make_shared <Knight>("Knight" + to_string(i), knightHp, knightAtk);

		int archcerAtk = 45 + rand() % 10;
		int archerHp = 80 + rand() % 50;
		auto archer = make_shared <Archer>("Archer" + to_string(i), archerHp, archcerAtk);

		_players.push_back(knight);
		_players.push_back(archer);
	}
}

void World_3::Battle()
{
	for (auto& player : _players)
	{
		player->Attack(_boss);
	}

	//HopGoblin* hopGoblin = dynamic_cast<HopGoblin*>(_boss);
	
	if (auto hopGoblin = dynamic_pointer_cast<HopGoblin>(_boss))
	{
		hopGoblin->Attack_Hop();
	}
}

bool World_3::End()
{
	bool playerDeadCheck = std::all_of(_players.begin(), _players.end(), [](const shared_ptr<Creature>& player)-> bool
	{
		if(player->IsDead())
			return true;
		return false;
	});

	bool bossDeadCheck = _boss->IsDead();

	if(playerDeadCheck || bossDeadCheck)
		return true;

	return false;
}
