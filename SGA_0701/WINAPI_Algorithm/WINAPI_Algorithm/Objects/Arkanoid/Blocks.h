#pragma once
class Block_Rectangle;

#define MAXCOUNT_X 10
#define MAXCOUNT_Y 3

class Blocks
{
public:
	Blocks();
	~Blocks();

	void Update();
	void Render(HDC hdc);

	//void CreatePattern();


private:

	vector<vector<shared_ptr<Block_Rectangle>>> _blocks;
};

