#include "Fstack.h"
void Fstack ::add(Figure* f) { 
	sf.push(f);
}


void Fstack ::pop() { sf.pop(); };


Figure* Fstack:: top() { return sf.top(); };


bool Fstack:: empty() { return sf.empty(); };


void Fstack::del() {
	while (!sf.empty()) {
			sf.pop();
		}
}


Fstack::~Fstack() {
	del();
}