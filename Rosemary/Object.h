#pragma once
#include "Screen.h"

namespace rm {

	class Object {

	public:
		int x , y;

	//The only reason of why there is a move function when you can use gotoxy or even move another object with this function
	//it's because the move function saves the x and y coordinates of the object.

	//The distance function uses Pythagorean theorem
	public:
		void move(int _x , int _y);
		int distance(int tx , int ty, int d = 0);


	};


}