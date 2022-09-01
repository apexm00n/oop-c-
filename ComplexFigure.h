#pragma once
#include "Figure.h"
#include "Circle.h"
#include "Octagon.h"
class ComplexFigure : public Figure {
private:
	Octagon* o;
	Circle* c;
public:
	ComplexFigure(int x, int y, int R, COLORREF col);
	~ComplexFigure() {};
	void show()override;
	void hide()override;
	void move(int x0, int y0) override;
};