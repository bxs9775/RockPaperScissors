#pragma once

#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

//Default player class. Parent for Rock, Paper, and Scissors classes.
class Player
{
public:
	Player(string name, char type);
	virtual ~Player();

	string getName();
	char getType();
	virtual void print() = 0;
protected:
	string name;
	char type;
};

