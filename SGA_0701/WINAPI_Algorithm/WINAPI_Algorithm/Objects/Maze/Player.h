#pragma once

class Maze;
class Block;

class Player
{
public:
	Player(shared_ptr<Maze> maze);
	~Player();

	void BeginPlay();
	void RightHand(); // 갈수있는 길을 찾아서 path에 넣는것

	bool Cango(int y, int x);  //이동 판별

	void Update();

private:
	Vector2 _pos = {1,1};

	vector<Vector2> _path;
	int _pathIndex = 0;
	float _time = 0.0f;

	shared_ptr<Maze> _maze;

	Vector2 _dir = Vector2(0, 1);
};

