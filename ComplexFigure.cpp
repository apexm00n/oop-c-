#include "ComplexFigure.h"
#include "Circle.h"
#include "Octagon.h"
using namespace std;


ComplexFigure::ComplexFigure(int x, int y, int R, COLORREF col) {
	c = new Circle(x, y, R, col);
	o = new Octagon(x, y, R, col);
};
void ComplexFigure :: show() {
	this->o->show();
	this->c->show();
}
void ComplexFigure::hide() {
	this->o->hide();
	this->c->hide();
}
void ComplexFigure::move(int x0, int y0) {
	this->o->move(x0, y0);
	this->c->x = x0;
	this->c->y = y0;
	this->c->show();
}