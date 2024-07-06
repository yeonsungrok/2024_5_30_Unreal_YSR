#include "pch.h"
#include "Blocks.h"
#include "Objects/Arkanoid/Blocks.h"
#include "Objects/Arkanoid/Block_Rectangle.h"

Blocks::Blocks()
{
	Vector2 offSet = Vector2(180, 50);
	_blocks.reserve(MAXCOUNT_Y); //세로 4

	for (int i = 0; i < MAXCOUNT_Y; i++) // 세로 4
	{
		vector<shared_ptr<Block_Rectangle>> blocks_X;
		blocks_X.reserve(MAXCOUNT_X);

		for (int j = 0; j < MAXCOUNT_X; j++)
		{
			Vector2 blockOffset = offSet + Vector2(100.0f * j, 55.0f * i); //(x, y값)

			shared_ptr<Block_Rectangle> block = make_shared<Block_Rectangle>();

			//block->SetBlockType(Block_Rectangle::BlockType::BLOCKRED);
			block->SetPosition(blockOffset);
			blocks_X.push_back(block);

		}
		_blocks.push_back(blocks_X);
	}

	//CreatePattern();
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

//void Blocks::CreatePattern()
//{
//	for (int y = 0; y < MAXCOUNT_Y; y++)
//	{
//		for (int x = 0; x < MAXCOUNT_X; x++)
//		{
//			_blocks[y][x];
//			//if (x % 2 == 0 || y % 2 == 0)
//			//{
//			//	_blocks[y][x]; /*->SetBlockType(Block_Rectangle::BlockType::BLOCKRED);*/
//			//}
//			//else
//			//{
//			//	_blocks[y][x]; /*->SetBlockType(Block_Rectangle::BlockType::BLOCKGREEN);*/
//			//}
//		}
//
//	}
//
//}
