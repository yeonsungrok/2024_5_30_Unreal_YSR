#pragma once
class Block_Rectangle : public RectCollider
{
public:

	/*enum class BlockType
	{
		BLOCKGREEN,
		BLOCKRED
	};*/

	Block_Rectangle();
	~Block_Rectangle();
	virtual void Update() override;
	virtual void Render(HDC hdc) override;

	void SetPosition(Vector2 pos);

	/*void IsCollision(shared_ptr<class Ball> ball);*/
	/*void SetBlockType(BlockType type);
	BlockType GetBlockType() { return _type; }*/


private:
	//BlockType _type = BlockType::BLOCKGREEN;
	//vector<HBRUSH> _brushes;

	//shared_ptr<RectCollider> _block;   혹시나 구성한것임
};

