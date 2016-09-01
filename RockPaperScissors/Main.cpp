#include "Main.h"

//Creates a vector of players and runs interactions.
int main() {
	Game* game1 = new Game();
	game1->assemble();
	cout << "\n";
	game1->run();
	cout << "\n";

	delete game1;

	cout << "(Press any key to continue.)\n";
	cin.ignore();
	cin.get();

	return 0;
}