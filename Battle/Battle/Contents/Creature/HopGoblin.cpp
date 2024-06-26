#include "pch.h"
#include "HopGoblin.h"

HopGoblin::HopGoblin()
: Monster("Hop", 50000, 30),
_aggroSystem(make_shared<AggroSystem>())
{
}

HopGoblin::~HopGoblin()
{
	//delete _aggroSystem;
}

void HopGoblin::Attack_Hop()
{
	shared_ptr<vector<shared_ptr<Creature>>> players_for_attack = _aggroSystem->Pop(_attackRange);

	for (auto player : *players_for_attack)
	{
		player->TakeDamage(_atk, shared_from_this());
	}
}

void HopGoblin::TakeDamage(int amount, shared_ptr<Creature> attacker)
{
	//Creature::TakeDamage(amount, attacker);
	Monster::TakeDamage(amount, attacker);

	_aggroSystem->Push(attacker, amount);
}
