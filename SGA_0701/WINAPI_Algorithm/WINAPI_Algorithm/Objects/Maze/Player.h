#pragma once

class Maze;
class Block;

class Player
{
public:
	struct Vertex_Djikstra
	{
		bool operator<(const Vertex_Djikstra& other) const
		{
			if (g < other.g)return true;
			return false;
		}

		bool operator>(const Vertex_Djikstra& other) const
		{
			if (g > other.g)return true;
			return false;
		}
		


		float g;
		Vector2 pos;

	};

	struct Vertex
	{
		bool operator<(const Vertex& other) const
		{
			if (f < other.f) 
				return true;
			return false;
		}

		bool operator>(const Vertex& other) const
		{
			if (f > other.f) 
				return true;
			return false;
		}

		float g;
		float h; // 휴리스틱 함수 => 맨하튼 거리함수
		float f; // 
		Vector2 pos;

	};



	Player(shared_ptr<Maze> maze);
	~Player();

	void BeginPlay();
	void RightHand(); // 갈수있는 길을 찾아서 path에 넣는것

	void DFS(Vector2 here);
	void BFS(Vector2 start);
	void Djikstra(Vector2 start);
	void AStart(Vector2 start, Vector2 end);

	bool Cango(int y, int x);  //이동 판별

	void Update();

private:
	Vector2 _pos = {1,1};

	vector<Vector2> _path;
	int _pathIndex = 0;
	float _time = 0.0f;

	shared_ptr<Maze> _maze;

	Vector2 _dir = Vector2(0, 1);

	//DFS
	vector<vector<bool>> _visited;

	// Djikstra
	

};

