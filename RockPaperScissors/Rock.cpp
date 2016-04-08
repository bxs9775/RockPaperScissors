#include "Rock.h"


//Creates a rock player with a name.
Rock::Rock(string name):Player(name,'r')
{
}

//Destructs the rock player.
Rock::~Rock()
{
	cout << name << "\'s rock is pretty heavy!\n";
}

//Prints out the player's throw.
void Rock::print()
{
	cout << name << " throws O (Rock).\n";
}
