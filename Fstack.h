#pragma once
#include <iostream>
#include <stack>
#include "Figure.h"
#include <list>
using namespace std;
class Fstack {
public:
	stack<Figure*, list <Figure*>> sf;
public:
	Fstack() {};
	void add(Figure* f);
	void pop();
	Figure* top();
	bool empty();
	void del();
	~Fstack();
};