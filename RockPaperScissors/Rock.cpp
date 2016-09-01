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

/*Operator overriders*/

//Compares with another player. Returns true if the other player's type is scissors(which loses to this player).
bool Rock::operator>(Player * other)
{
	return (other->getType() == 's');
}

//Compares with another player. Returns true if the other player's type is paper(which beats this player).
bool Rock::operator<(Player * other)
{
	return (other->getType() == 'p');
}

//Compares with another player. Returns true if the other player's type is rock(which matches this player).
bool Rock::operator==(Player * other)
{
	return (other->getType() == 'r');
}
