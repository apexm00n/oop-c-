#include "Circle.h"
using namespace std;
Circle::Circle(int x0, int y0, int R0, COLORREF col) : Figure(x0, y0, R0) {
	color = col;
};
void Circle::show() {
	HPEN pen;
	HBRUSH brush;
	if (((x - R) <= rt.left) ||
		((x + R) >= rt.right) ||
		((y - R) <= rt.top) ||
		((y + R) >= rt.bottom)
		) throw Border();
	pen = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	brush = CreateSolidBrush(color);
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Ellipse(hdc, x - R, y - R, x + R, y + R);
	DeleteObject(pen);
	DeleteObject(brush);
};
void Circle::hide() {
	HPEN pen;
	HBRUSH brush;
	pen = CreatePen(PS_SOLID, 3, RGB(242, 242, 242));
	brush = CreateSolidBrush(RGB(242, 242, 242));
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Ellipse(hdc, x - R, y - R, x + R, y + R);
	DeleteObject(pen);
	DeleteObject(brush);
};
void Circle :: move(int x0, int y0) {
	hide();
	x = x0; y = y0;
	show();
}