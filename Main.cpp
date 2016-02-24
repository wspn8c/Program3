#include <iostream>
#include "Enemy.h"
#include "Player.h"
#include <string>
#include <random>
#include <ctime>

using namespace std;

void SetupCharacter();
void ProgramTest();

int main()
{	
	Player GOOD;

	srand(time(NULL));
	Utils start;
	SetupCharacter();
	cout << "\n";
	GOOD.SelectAction();
	cout << "\n";
	start.GetUserInput();
	cout << "\n";
	GOOD.GetHP();

	
	system("pause");
	exit (1);
}

void SetupCharacter()// no arguments and no return type
{
	Player EXAMPLE;
	string Name;
	cout << "Please enter your name:" << endl;
	getline(cin, Name) ;//reads in full line including space
	bool getOption = false;
	while (getOption == false)// start loop for option type
	{
		char choice;
		cout << "-----------------------------\n";
		cout << "| OPTION | Attack | Defense |\n";
		cout << "-----------------------------\n";
		cout << "|   1    |   5    |    15   |\n";
		cout << "-----------------------------\n";
		cout << "|   2    |   15   |    5    |\n";
		cout << "-----------------------------\n";
		cout << "|   3    |   10   |    10   |\n";
		cout << "-----------------------------\n";
		cin >> choice;
		switch (choice)
		{
		case '1': EXAMPLE.Setup(Name, 100, 5, 15); getOption = true; break;
		case '2': EXAMPLE.Setup(Name, 100, 15, 5); getOption = true; break;
		case '3': EXAMPLE.Setup(Name, 100, 10, 10); getOption = true; break;
		default:		
			cout << "Please enter a valid option of 1, 2, or 3.\n";
			getOption = false;
		}
	}
		EXAMPLE.DisplayStats();
}

void ProgramTest()
{

}