#pragma once
class LineScene : public Scene
{
public:
	LineScene();
	~LineScene();

	void Update() override;
	void Render(HDC hdc) override;

private:

	shared_ptr<Line> _line1;  // 밑 바닥 선
	shared_ptr<Line> _line2;  // 끝 마우스 포인터 선

	shared_ptr<Line> _line3; // 가운데 짧은 선



};

