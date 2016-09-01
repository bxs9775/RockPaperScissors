#include "Paper.h"


//Creates a paper player with a name. 
Paper::Paper(string name):Player(name,'p')
{
}

//Destructs paper player.
Paper::~Paper()
{
	cout << name << "\'s paper is crumpled!\n";
}

//Player throws paper.
void Paper::print()
{
	cout << name << " throws --- (Paper)\n";
}

/*Operator overriders*/

//Compares with another player. Returns true if the other player's type is rock(which loses to this player).
bool Paper::operator>(Player * other)
{
	return (other->getType() == 'r');
}

//Compares with another player. Returns true if the other player's type is scissors(which beats this player).
bool Paper::operator<(Player * other)
{
	return (other->getType() == 's');
}

//Compares with another player. Returns true if the other player's type is paper(which matches this player).
bool Paper::operator==(Player * other)
{
	return (other->getType() == 'p');
}