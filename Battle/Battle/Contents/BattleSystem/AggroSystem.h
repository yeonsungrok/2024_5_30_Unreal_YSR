#pragma once

class Creature;
class AggroSystem
{
public:
	void Push(shared_ptr<Creature> attacker, int damage);
	shared_ptr<vector<shared_ptr<Creature>>> Pop(int count);

private:
	// 전방선언... class라는 정보만 알려줌... 선언은 가능
	//vector<class AggroInfo> _aggroTable;
	vector<class AggroInfo> _aggroTable;
};

