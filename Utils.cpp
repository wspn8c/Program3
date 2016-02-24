#include <random>
#include <iostream>
#include "Utils.h"

using namespace std;

int Utils::GetUserInput() // Promt user for input, validate input, return users input once valid
{
	int numberChoice;
	bool input = false;
	while (input == false)
	{
		cout << "Please enter a number between 1 and 20.\n";
		cin >> numberChoice;
		if (numberChoice > 0 && numberChoice < 21)
		{
			maximum = numberChoice; // set max value to userinput
			minimum = 0; // set min value
			cout << numberChoice; //return int is users input int
			input = true;
		}
		else
			input = false;
	}
	return numberChoice; //return int is users input int
}


int Utils::GetRandom() // generate randum number between min and max value
{
	int x = 0;
	x = (rand() % 3) + 1;
	// return random number between 1 and 3
	return x; //return int is a random num generated between min and max
}