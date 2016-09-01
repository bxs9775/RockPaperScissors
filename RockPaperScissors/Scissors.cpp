#include "Scissors.h"


//Costructs a scissors player.
Scissors::Scissors(string name):Player(name,'s')
{
}

//Destroys a scissors player.
Scissors::~Scissors()
{
	cout << name << "'s scissors are getting rusty!\n";
}

//Player throws scissors.
void Scissors::print() {
	cout << name << " throws 8>< (Scissors).\n";
}

/*Operator overriders*/

//Compares with another player. Returns true if the other player's type is paper(which loses to this player).
bool Scissors::operator>(Player * other)
{
	return (other->getType() == 'p');
}

//Compares with another player. Returns true if the other player's type is rock(which beats this player).
bool Scissors::operator<(Player * other)
{
	return (other->getType() == 'r');
}

//Compares with another player. Returns true if the other player's type is scissors(which matches this player).
bool Scissors::operator==(Player * other)
{
	return (other->getType() == 's');
}
