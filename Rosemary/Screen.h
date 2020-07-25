#pragma once
#include <windows.h>
#include <cstdio>
#include <cmath>

namespace rm {

class Screen {

	public:
		 int x, y;

		//Setup function will ask the width, the height , and the cursor visibilty.
		//Hide cursos will hide the cursor
		//Frame will create a frame on the window, the d valor is the range of this one
		//if the valor is 1 will take the values of the screen size and will substract 1
		//The clear function will clear all the elements of the screen

	public:
		 void SetUp(int w, int h);
		 void HideCursor();
		 void Frame(int d = 1);
		 void Clear();


	private:
		 void gotoxy(int x, int y);
	
	//This variables are exclusive to use for the frame function
	private:
		int m_x, m_y;

		
	};

}
