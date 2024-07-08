#include "pch.h"
#include "Player.h"

#include "Maze.h"
#include "Block.h"

//DFS를 위한 아웃 선언 : visited
vector<vector<bool>> visited = vector<vector<bool>>(MAXCOUNT_Y, vector<bool>(MAXCOUNT_X, false));


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
	_pos = _maze->GetStarPos();
	//BFS(_pos);
	DFS(_pos);

	//RightHand();


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
	Vector2 endPos = _maze->GetEndPos();
	
	//Vector2 endPos = Vector2(23, 23);

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

void Player::DFS(Vector2 start)
{
	Vector2 FrontPos[8] =
	{
		Vector2 {0,-1},   // Up
		Vector2 {-1,0},   // Left
		Vector2 {0,1},    // Bottom
		Vector2 {1,0},    // Right

		Vector2 {-1,-1},  // UpLeft
		Vector2 {-1,1},   // Left Bottom
		Vector2 {1,1},    // Bottom Right
		Vector2 {1,-1}    // Right Up
	};
	
	
	Vector2 endPos = _maze->GetEndPos();
	Vector2 here = start;

	if (_path.size() == 0)
	{
		_path.push_back(start);
	}

	visited[here._y][here._x] = true;

	for (int i = 0; i < 8; i++)
	{
		Vector2 there = here + FrontPos[i];

		if (!Cango(there._y, there._x)) continue;

		if (visited[there._y][there._x] == true) continue;

		if (there == endPos)
		{
			_path.push_back(there);
			break;
		}

		_path.push_back(there);
		DFS(there);
	}

}

void Player::BFS(Vector2 start)
{

	Vector2 FrontPos[8] =
	{
		Vector2 {0,-1},		// Up
		Vector2 {-1,0},		// Left
		Vector2 {0,1},		// Bottom
		Vector2 {1,0},		// Right

		Vector2 {-1,-1},		// UpLeft
		Vector2 {-1,1},		// Left Bottom
		Vector2 {1,1},		// Bottom Right
		Vector2 {1,-1}		// Right Up

	};

	vector<vector<bool>> discovered = vector<vector<bool>>(MAXCOUNT_Y,vector<bool>(MAXCOUNT_X, false));
	vector<vector<Vector2>> parent = vector<vector<Vector2>>(MAXCOUNT_Y, vector<Vector2>(MAXCOUNT_X, Vector2(-1,-1)));
	Vector2 pos = start;
	Vector2 endPos = _maze->GetEndPos();
	
	discovered[start._y][start._x] = true;
	parent[start._y][start._x] = start;

	queue<Vector2> q;
	q.push(start);

	while (true)
	{
		if (q.empty()) break;

		Vector2 here = q.front();
		q.pop();

		// 지금 큐의 front가 도착점이면 break
		if (here == endPos)
			break;


		for (int i = 0; i < 8; i++)
		{
			Vector2 there = here + FrontPos[i];
			
			// there 가 갈 수 있는 블럭인지 확인.
			if (!Cango(there._y, there._x))
				continue;
			// there 가 방문되어있는지 확인.
			if (discovered[there._y][there._x] == true)
				continue;

			q.push(there);
			discovered[there._y][there._x] = true;
			parent[there._y][there._x] = here;
		}
	}


	Vector2 check = endPos;
	_path.push_back(check);
	while (true)
	{
		if (check == start) break;

		check = parent[check._y][check._x];
		_path.push_back(check);
	}

	std::reverse(_path.begin(), _path.end());

}

void Player::DIJKSTRA(Vector2 start)
{
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

	_time += 0.1f;
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
