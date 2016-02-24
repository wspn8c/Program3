#pragma once
#include <string>
#include "Player.h"

void Player::SelectAction()
{
	//function will promt user for option (1 for offense, 2 for defense). based on their answer, the m_attackType will be set, to 
	//prepare for their GetAttack()/GetHit() functions
	char choice;
	cout << "Select attack type:\n";
	cout << "1. Offensive\n";
	cout << "2. Defensive\n";
	cin >> choice;
	switch (choice)
	{
	case '1': break;
	case '2': break;
	default: break;
	}
}