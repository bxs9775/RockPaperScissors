#pragma once

#include<string>
#include<vector>
#include "Player.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
class Scissors :
	public Player
{
public:
	Scissors(string name);
	~Scissors();

	void print();
};

