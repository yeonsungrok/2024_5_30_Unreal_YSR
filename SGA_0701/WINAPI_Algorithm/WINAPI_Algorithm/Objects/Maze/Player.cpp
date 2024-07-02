#include "pch.h"
#include "Player.h"

#include "Maze.h"
#include "Block.h"

Player::Player(shared_ptr<Maze> maze)
{
	_maze = maze;
}

Player::~Player()
{
	_maze = nullptr;
}

void Player::BeginPlay()
{
	_maze->SetPlayerPos(_pos);
	FindPath();
}

void Player::FindPath()
{
	//실습
	// 우수법을 이용해서 미로를 끝점까지 가면 된다.
	// 찾은길은 _path에다 넣는다.
	/*vector<Vector2> temp =
	{ 
		Vector2(2,1)
		Vector2(3,1)
	};
	_path = temp;*/

}

bool Player::Cango(int y, int x)
{
	// maze에서 알수있음..

	Block::BlockType blockType = _maze->GetBlockType(y, x);
	if (blockType == Block::BlockType::ABLE)
		return true;

	return false;
}

void Player::Update()
{
	if (_pathIndex >= _path.size())
	{
		_pathIndex = 0;
		_path.clear();

		return ;

	}
	_time += 0.3f;
	if (_time > 1.0f)
	{
		_time = 0.0f;
		_pos = _path[_pathIndex];

		if (_pathIndex != 0)
		{
			_maze->SetPlayerPos(_pos);
		}
		_pathIndex++;
	}

}
