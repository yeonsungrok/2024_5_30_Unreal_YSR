#include "pch.h"
#include "Player.h"

#include "Maze.h"
#include "Block.h"

//DFS�� ���� �ƿ� ���� : visited
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
	//�ǽ�
	// ������� �̿��ؼ� �̷θ� �������� ���� �ȴ�.
	// ã������ _path���� �ִ´�.
	//����...

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
		// %������ �˰��򿡼� ��ȯ�������� ���� ���δ�.
		int newDir = (dir - 1 + DIR_COUNT) % DIR_COUNT;
		Vector2 oldDirVector2 = FrontPos[dir];
		Vector2 newDirVector2 = FrontPos[newDir]; 

		//����� ���������ΰ��ٰ�..
		Vector2 newPos = pos + newDirVector2; // �� ������ ����
		Vector2 oldPos = pos + oldDirVector2; // �� �չ���

		// ���������� ���� ������ ������ �ٲٰ� ���������� ����
		if (Cango(newPos._y, newPos._x))
		{
			dir = static_cast<Direction>(newDir);
			pos += newDirVector2;
			_path.push_back(pos);
		}
		// �������� �����ְ� �������� �� �� ������ ���� �״�� ������ ����
		else if (Cango(oldPos._y, oldPos._x))
		{
			pos += oldDirVector2;
			_path.push_back(pos);
		}
		// ������, �� �Ѵ� ���������� �������� ȸ��
		else
		{
			dir = static_cast<Direction>((dir + 1 + DIR_COUNT) % DIR_COUNT);
		}
		

	}

	stack<Vector2> s; // path�� ���ļ� �ߺ��Ǵ� �κ��� �����Ϸ����ϴ� ���
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

		// ���� ť�� front�� �������̸� break
		if (here == endPos)
			break;


		for (int i = 0; i < 8; i++)
		{
			Vector2 there = here + FrontPos[i];
			
			// there �� �� �� �ִ� ������ Ȯ��.
			if (!Cango(there._y, there._x))
				continue;
			// there �� �湮�Ǿ��ִ��� Ȯ��.
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

	// maze���� �˼�����..
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
			_maze->SetPlayerPos(_pos); // ��ġ�� maze�� �Ѱܼ� playerǥ�ø� ����
		}
		_pathIndex++;
	}

}
