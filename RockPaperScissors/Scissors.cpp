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
