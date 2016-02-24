#pragma once
#include "Utils.h"
#include <iostream>
using namespace std;

class Character : public Utils
{
public:
	Character();
	void Setup(const string& name, int hp, int atk, int def);//takes 4 arguments name:const string&, hp:int, atk:int, def:int 
	void DisplayStats();//arguments none, return none
	void SelectAction();//arguments none, returns none
	int GetAttack();//arguments none, return int
	void GetHit(int attack);//arguments 1: int attack value, return none
	int GetHP() const;//arguments none; returns value of m_hp
protected:
	int m_hp;
	int m_atk;
	int m_def;
	string m_name ;
	enum AttackType {OFFENSIVE = 1, DEFENSIVE = 2};
	AttackType m_attackType;
};