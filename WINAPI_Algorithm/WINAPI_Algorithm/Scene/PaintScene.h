#pragma once
class PaintScene :public Scene
{
public:
	PaintScene();
	~PaintScene();

	virtual void Update() override;
	virtual void Render(HDC hdc) override;

private:

	shared_ptr<Rect> _rect;
	// circle Ãß°¡
	
};

