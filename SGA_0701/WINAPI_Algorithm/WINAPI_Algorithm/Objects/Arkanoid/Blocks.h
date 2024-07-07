#pragma once


#define MAXCOUNT_X 10
#define MAXCOUNT_Y 3

class Blocks 
{
public:
	Blocks();
	~Blocks();

	void Update();
	void Render(HDC hdc);

	
	
	
	void IsCollision(shared_ptr<class Ball> ball);

	

private:
	
	shared_ptr<RectCollider> _block;
	vector<vector<shared_ptr<RectCollider>>> _blocks;
	
};

