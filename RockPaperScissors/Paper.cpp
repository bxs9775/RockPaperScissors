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
