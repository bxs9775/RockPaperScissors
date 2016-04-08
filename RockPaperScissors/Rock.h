#pragma once

#include<string>
#include<vector>
#include "Player.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Rock :
	public Player
{
public:
	Rock(string name);
	~Rock();

	void print();
};

