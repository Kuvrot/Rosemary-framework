#include "Object.h"

void rm::Object::move(int _x , int _y) {

	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD c;

	c.X = _x;
	c.Y = _y;

	SetConsoleCursorPosition(hCon, c);


}

int rm::Object::distance(int tx , int ty,  int d) {

	d = std::sqrt(std::pow(tx - rm::Object::x , 2) + std::pow(ty - rm::Object::y , 2));

	return d;

}

