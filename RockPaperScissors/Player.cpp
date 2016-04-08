#include "Player.h"


//Constructor takes name and player type
Player::Player(string name, char type) {
	this->name = name;
	this->type = type;
}

//Destructs instance of the Player class.
Player::~Player()
{
	cout << "Bye, " << name << "\n";
}

//Gets this player's name.
string Player::getName() {
	return name;
}

//returns the player type("r" for rock, "p" for paper, "s" for scissiors)
char Player::getType() {
	return type;
}
