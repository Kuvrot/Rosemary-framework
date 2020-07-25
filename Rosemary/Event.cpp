#include "Event.h"

void rm::Event::Input () {

	if (_kbhit()) {

		rm::Event::key = _getch();
	}
	

}

void rm::Event::Write(std::string msg, int speed) {

	for (int i = 0; i < std::size(msg); i++) {

		std::cout << msg[i];
		Sleep(speed);  

	}

	std::cout << std::endl;

}

