#include <iostream>
#include <windows.h>
#include <string>
#include <ctime>

using namespace std;

void DrawGallows(int state)
{
	if (state == 5) {
		cout << endl << endl
			<< "_________		" << endl
			<< "|/				" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|____			" << endl
			<< "				" << endl;
	}
	else if (state == 4) {
		cout << endl << endl
			<< "_________		" << endl
			<< "|/\t |			" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|____			" << endl
			<< "				" << endl;
	}
	else if (state == 3) {
		cout << endl << endl
			<< "_________		" << endl
			<< "|/\t |			" << endl
			<< "|\t(_)			" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|____			" << endl
			<< "				" << endl;
	}
	else if (state == 2) {
		cout << endl << endl
			<< "_________		" << endl
			<< "|/\t |			" << endl
			<< "|\t(_)			" << endl
			<< "|\t\\|/			" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|____			" << endl
			<< "				" << endl;
	}
	else if (state == 1) {
		cout << endl << endl
			<< "_________		" << endl
			<< "|/\t |			" << endl
			<< "|\t(_)			" << endl
			<< "|\t\\|/			" << endl
			<< "|\t |			" << endl
			<< "|				" << endl
			<< "|				" << endl
			<< "|____			" << endl
			<< "				" << endl;
	}
	else if (state == 0) {
		cout << endl << endl
			<< "_________		" << endl
			<< "|/\t |			" << endl
			<< "|\t(_)			" << endl
			<< "|\t\\|/			" << endl
			<< "|\t |			" << endl
			<< "|\t/ \\			" << endl
			<< "|				" << endl
			<< "|____\tGAME OVER" << endl
			<< "				" << endl;
	}


}

void cls(HANDLE hConsole) // Tyhjentää konsolin
{
	COORD coordScreen = { 0, 0 };
	DWORD cCharsWritten;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD dwConSize;

	// Get the number of character cells in the current buffer. 
	if (!GetConsoleScreenBufferInfo(hConsole, &csbi))
	{
		return;
	}

	dwConSize = csbi.dwSize.X * csbi.dwSize.Y;

	// Fill the entire screen with blanks.
	if (!FillConsoleOutputCharacter(hConsole,        // Handle to console screen buffer 
		(TCHAR) ' ',     // Character to write to the buffer
		dwConSize,       // Number of cells to write 
		coordScreen,     // Coordinates of first cell 
		&cCharsWritten))// Receive number of characters written
	{
		return;
	}

	// Get the current text attribute.
	if (!GetConsoleScreenBufferInfo(hConsole, &csbi))
	{
		return;
	}

	// Set the buffer's attributes accordingly.
	if (!FillConsoleOutputAttribute(hConsole,         // Handle to console screen buffer 
		csbi.wAttributes, // Character attributes to use
		dwConSize,        // Number of cells to set attribute 
		coordScreen,      // Coordinates of first cell 
		&cCharsWritten)) // Receive number of characters written
	{
		return;
	}

	// Put the cursor at its home coordinates.
	SetConsoleCursorPosition(hConsole, coordScreen);
}