#include "Octagon.h"
#include <cmath>
using namespace std;
Octagon::Octagon(int x0, int y0, int R0, COLORREF col) : Figure(x0, y0, R0) {
	color = col;
};
void Octagon::show() {
	HPEN pen;
	HBRUSH brush;
	int r = 2 * R * (sqrt(2) - 1) / sqrt(2 - sqrt(2));
	if (((x - R) <= rt.left) ||
		((x + R) >= rt.right) ||
		((y - R) <= rt.top) ||
		((y + R) >= rt.bottom)
		) throw Border();
	POINT points[] = { {x, y + r}, {x + sqrt(2) / 2 * r, y + sqrt(2) / 2 * r}, {x + r, y},
	{x + sqrt(2) / 2 * r, y - sqrt(2) / 2 * r}, {x , y - r}, {x - sqrt(2) / 2 * r, y - sqrt(2) / 2 * r},
	{x - r, y}, {x - sqrt(2) / 2 * r, y + sqrt(2) / 2 * r} };
	pen = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	brush = CreateSolidBrush(color);
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Polygon(hdc, points, 8);
	DeleteObject(pen);
	DeleteObject(brush);
}
void Octagon:: hide() {
	HPEN pen;
	HBRUSH brush;
	int r = 2 * R * (sqrt(2) - 1) / sqrt(2 - sqrt(2));
	POINT points[] = { {x, y + r}, {x + sqrt(2) / 2 * r, y + sqrt(2) / 2 * r}, {x + r, y},
	{x + sqrt(2) / 2 * r, y - sqrt(2) / 2 * r}, {x , y - r}, {x - sqrt(2) / 2 * r, y - sqrt(2) / 2 * r},
	{x - r, y}, {x - sqrt(2) / 2 * r, y + sqrt(2) / 2 * r} };
	pen = CreatePen(PS_SOLID, 3, RGB(242, 242, 242));
	brush = CreateSolidBrush(RGB(242, 242, 242));
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Polygon(hdc, points, 8);
	DeleteObject(pen);
	DeleteObject(brush);
}
void Octagon::move(int x0, int y0) {
	hide();
	x = x0; y = y0;
	show();
}