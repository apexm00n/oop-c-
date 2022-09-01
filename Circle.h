#pragma once
#include "Figure.h"
class Circle : public Figure {
public:
	Circle(int x0, int y0, int R0, COLORREF col);
	virtual ~Circle() {};
	void show() override;
	void hide() override;
	void move(int x0, int y0) override;
};
