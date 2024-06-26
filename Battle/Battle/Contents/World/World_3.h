#pragma once
class World_3
{
public:
	World_3();
	~World_3();

	void CreateObjects();

	void Battle();

	bool End();

private:
	//Creature* _boss;
	shared_ptr<Creature> _boss;
	vector<shared_ptr<Creature>> _players;
};

