#include "Screen.h"

void rm::Screen::SetUp(int w , int h) {

	HWND console;
	console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);
	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, w, h, TRUE);
	rm::Screen::x = w  * 127/ 800;
	rm::Screen::y = h * 40 / 600;
	rm::Screen::m_x = w;
	rm::Screen::m_y = h;

}

void rm::Screen::gotoxy(int x , int y) {

	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD c;

	c.X = x;
	c.Y = y;

	SetConsoleCursorPosition(hCon , c);

}

void rm::Screen::HideCursor() {

	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 1;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(hCon , &info );
}

void rm::Screen::Frame(int d) {

	for (int i = d; i < (rm::Screen::m_x * 127) / 800; i++) {

		rm::Screen::gotoxy(i, d);
		printf("%c", 205);

		rm::Screen::gotoxy(i, (rm::Screen::m_y * 40) / 600);
		printf("%c", 205);
	}

	for (int i = d; i < (rm::Screen::m_y * 40) / 600; i++) {

		rm::Screen::gotoxy(d, i);
		printf("%c", 186);

		rm::Screen::gotoxy((rm::Screen::m_x * 127) / 800 , i);
		printf("%c", 186);
	}

	

}

void rm::Screen::Clear() {

	system("cls");


}

