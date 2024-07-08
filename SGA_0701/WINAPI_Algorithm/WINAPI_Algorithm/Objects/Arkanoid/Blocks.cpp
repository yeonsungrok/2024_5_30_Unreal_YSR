#include "pch.h"
#include "Blocks.h"
#include "Objects/Arkanoid/Blocks.h"

#include "Objects/Arkanoid/Ball.h"


Blocks::Blocks()
{
	Vector2 offSet = Vector2(180, 80);
	_blocks.reserve(MAXCOUNT_Y); //세로 3
	

	for (int i = 0; i < MAXCOUNT_Y; i++) // 세로 3
	{
		
		vector<shared_ptr<RectCollider>> blocks_X;
		blocks_X.reserve(MAXCOUNT_X);

		for (int j = 0; j < MAXCOUNT_X; j++)
		{
			Vector2 blockOffset = offSet + Vector2(100.0f * j, 55.0f * i); //(x, y값)

			_block = make_shared<RectCollider>(blockOffset, Vector2(35, 15));

			blocks_X.push_back(_block);

		}
		
		_blocks.push_back(blocks_X);
		
		
	}

}

Blocks::~Blocks()
{
	
}

void Blocks::Update()
{
	for (auto blocks_X : _blocks)
	{
		for (auto block : blocks_X)
		{

			block->Update();
			
		}
	}
	
}

void Blocks::Render(HDC hdc)
{
	
	for (auto blocks_X : _blocks)
	{
		for (auto block : blocks_X)
		{
			block->Render(hdc);
		
		}
	}
}

void Blocks::IsCollision(shared_ptr<class Ball> ball)
{
	for (auto& blocks_X : _blocks)
	{
		for (auto it = blocks_X.begin(); it != blocks_X.end();)
		{
			auto& block = *it;

			if (block && block->IsCollision(ball->GetCircleCollider()))
			{

				Vector2 ballDir = ball->GetDir();


				if (ball->GetCircleCollider()->_center._x > block->Left())
				{
					ballDir._x = abs(ballDir._x);
					//ballDir._x = +ballDir._x;
					
				}
				else 
				{
					ballDir._x = -abs(ballDir._x);
					//ballDir._x = -ballDir._x;
				}

				if (ball->GetCircleCollider()->_center._y > block->Top()) 
				{
					ballDir._y = abs(ballDir._y);
					//ballDir._y = -ballDir._y;
				}
				else 
				{
					ballDir._y = -abs(ballDir._y);
					//ballDir._y = +ballDir._y;
				}

				ball->SetDir(ballDir);

				it = blocks_X.erase(it);
			
			}
			else
			{
				++it;
			}

		}
	}

}








