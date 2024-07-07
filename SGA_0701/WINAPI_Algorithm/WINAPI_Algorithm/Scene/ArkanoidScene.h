#pragma once

class Blocks;
class PlayerBar;
class Ball;

class ArkanoidScene : public Scene
{
public:
	ArkanoidScene();
	~ArkanoidScene();

	void BeforeFireUpdate();
	
	void Fire();
	void Update() override;
	void Render(HDC hdc) override;
	void Reset();

private:
	bool _isFired = false;

	shared_ptr<PlayerBar> _playerBar;
	shared_ptr<Ball> _ball;

	shared_ptr<class Blocks> _blocks;
};

