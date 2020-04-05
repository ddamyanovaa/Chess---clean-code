#include <iostream>
#include <string>
#include "chess.h"

using namespace std;

int main()
{
	Board chess;
	string play;
	bool newGame = true;
	cout << "   _____ _    _ ______  _____ _____ \n  / ____| |  | |  ____|/ ____/ ____| \n | |    | |__| | |__  | (___| (___  \n | |    |  __  |  __|  \\___  \\___ \\ \n | |____| |  | | |____ ____) |___) | \n  \\_____|_|  |_|______|_____/_____/ \n" << endl;
	cout << "A game by George Harter"<<endl;
	cout << "Enter any key to continue" << endl;
	cin >> play;

	while(newGame){
		chess.setBoard();
		while (chess.hasGameBeenPlayed());
		cout << "Do you want to play again? (y for yes, anything else for no) ";
		cin >> play;
		if (play != "y")
			newGame = false;
	}


	return 0;
}
