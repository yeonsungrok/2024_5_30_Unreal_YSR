#pragma once
class CollisionScene : public Scene
{
public:
	CollisionScene();
	~CollisionScene();

	void Update() override;
	void Render(HDC hdc) override;

private:
	shared_ptr<CircleCollider> _circle1;
	shared_ptr<CircleCollider> _moveCircle;
	shared_ptr<RectCollider> _rect1;
	shared_ptr<RectCollider> _moveRect;
};

