#pragma once
#include "Figure.h"
class Octagon : public Figure {
public:
	Octagon(int x0, int y0, int R0, COLORREF col);
	void show()override;
	void hide()override;
	void move(int x0, int y0) override;
};
