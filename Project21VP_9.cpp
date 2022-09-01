#include <iostream>
#include "Circle.h"
#include "Octagon.h"
#include "ComplexFigure.h"
#include "Fstack.h"
const int NotUsed = system("color F0");
int main() {
	SetConsoleTitle((LPCWSTR)L"21VP1_9_CircleOctagon");
	Octagon* octagon1 = new Octagon(350, 350, 400, RGB(60, 0, 120));
	Octagon* octagon2 = new Octagon(600, 250, 50, RGB(150, 255, 70));
	Octagon* octagon3 = new Octagon(300, 250, 80, RGB(255, 100, 0));

	Circle* circle1 = new Circle(155, 155, 100, RGB(0, 0, 255));
	Circle* circle2 = new Circle(600, 250, 150, RGB(100, 0, 255));
	ComplexFigure* c = new ComplexFigure(800, 250, 111, RGB(67, 255, 67));
	try {
		octagon1->show();
		circle1->show();
		c->show();

		circle1->move(500, 250);
		Fstack* stack = new Fstack();
		stack->add(circle1);
		stack->add(octagon2);
		cout << stack->top()->R;
		stack->del();
	}
	catch (Figure::Border) {
		cout << "Breaking window borders" << endl;
	}
	return 0;
}