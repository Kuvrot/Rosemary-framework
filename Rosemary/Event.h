#pragma once
#include <conio.h>
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
 
namespace rm {

	class Event {

	public:
		unsigned char key;
		
	//The input function needs to be called in a loop and then you can evaluate the key variable. 
	//Write function will print like printf or cout but will type the letter one by one.
	public:
		void Input();
		void Write(std::string msg , int speed = 100);

	};
}