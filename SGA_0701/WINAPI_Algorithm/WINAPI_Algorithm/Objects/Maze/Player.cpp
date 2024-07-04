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
	RightHand();
}

void Player::RightHand()
{
	//실습
	// 우수법을 이용해서 미로를 끝점까지 가면 된다.
	// 찾은길은 _path에다 넣는다.
	//방향...

	enum Direction
	{
		UP,
		LEFT,
		BOTTOM,
		RIGHT,

		DIR_COUNT = 4
	};

	Vector2 pos = _pos;
	_path.push_back(pos);
	Vector2 endPos = Vector2(23, 23);

	Direction dir = Direction::BOTTOM;


	Vector2 FrontPos[4] =
	{
		Vector2 {0,-1},		// Up
		Vector2 {-1,0},		// Left
		Vector2 {0,1},		// Bottom
		Vector2 {1,0}		// Right
	};

	while (true)
	{
		if (pos == endPos)
			break;
		//.................2...+1...+4...%4 = 3 //enum Direction (0,1,2,3,4)
		// %연산은 알고리즘에서 순환구조에서 많이 쓰인다.
		int newDir = (dir - 1 + DIR_COUNT) % DIR_COUNT;
		Vector2 oldDirVector2 = FrontPos[dir];
		Vector2 newDirVector2 = FrontPos[newDir]; 

		//우수법 오른쪽으로가다가..
		Vector2 newPos = pos + newDirVector2; // 내 오른쪽 방향
		Vector2 oldPos = pos + oldDirVector2; // 내 앞방향

		// 오른쪽으로 갈수 있으면 방향을 바꾸고 오른쪽으로 진행
		if (Cango(newPos._y, newPos._x))
		{
			dir = static_cast<Direction>(newDir);
			pos += newDirVector2;
			_path.push_back(pos);
		}
		// 오른쪽이 막혀있고 앞쪽으로 갈 수 있으면 방향 그대로 앞으로 진행
		else if (Cango(oldPos._y, oldPos._x))
		{
			pos += oldDirVector2;
			_path.push_back(pos);
		}
		// 오른쪽, 앞 둘다 막혀있을때 왼쪽으로 회전
		else
		{
			dir = static_cast<Direction>((dir + 1 + DIR_COUNT) % DIR_COUNT);
		}
		

	}

	stack<Vector2> s; // path에 겹쳐서 중복되는 부분을 삭제하려고하는 방식
	for (int i = 0; i < _path.size() - 1; i++) 
	{
		if (s.empty() == false && s.top() == _path[i + 1])
			s.pop();
		else
			s.push(_path[i]);
	}
	s.push(_path.back());

	_path.clear();
	while (true)
	{
		if (s.empty() == true)
			break;

		_path.push_back(s.top());
		s.pop();
	}
	std::reverse(_path.begin(), _path.end());


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
	_time += 0.06f;
	if (_time > 1.0f)
	{
		_time = 0.0f;
		_pos = _path[_pathIndex];

		if (_pathIndex != 0)
		{
			_maze->SetPlayerPos(_pos); // 위치를 maze에 넘겨서 player표시를 해줌
		}
		_pathIndex++;
	}

}
