#include<iostream>
#include<string>
#include<vector>
#include <time.h>

#include "Player.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

//Creates a vector of players and runs interactions.
int main() {
	srand((unsigned int)time(0));
	cout << "Welcome to Rock, Paper, Scissiors!\n(Press enter to continue)\n\n";
	vector<Player*>* playerList = new vector<Player*>();

	//Creates the list of players.
	int numPlayers = -1;
	do {
		cin.clear();
		cin.ignore();
		cout << "Number of players (2-10). -> ";
		cin >> numPlayers;
	} while (numPlayers < 2 || numPlayers > 10);

	cout << "\n\n";

	//sets up players.
	string tempName = "";
	for (int i = 0; i < numPlayers; i++) {
		cout << "Give me a name. -> ";
		cin >> tempName;
		switch (rand() % 3) {
		case 0: playerList->push_back(new Rock(tempName));
			break;
		case 1: playerList->push_back(new Paper(tempName));
			break;
		case 2: playerList->push_back(new Scissors(tempName));
			break;
		}
	}

	cout << "\nDuel!\n";
	//Ints added to make sure a player does not duel his/herself.
	int player1 = -1;
	int player2 = -1;

	player1 = rand() % numPlayers;
	do {
		player2 = rand() % numPlayers;
	} while (player1==player2);

	playerList->at(player1)->print();
	playerList->at(player2)->print();
	cout << "\n";

	for (int i = 0; i < numPlayers; i++) {
		delete playerList->at(i);
	}
	delete playerList;

	cout << "\nEnd of game.\n\n";

	cin.ignore();
	cin.get();
	return 0;
}