#include "Character.h"
#include <string>
using namespace std;

Character::Character()
{
	/*m_hp=0;
	m_atk = 0;
	m_def = 0;
	m_name = " ";*/
}

void Character::Setup(const string& name, int hp, int atk, int def)
{
	 m_hp = hp;
	 m_atk = atk;
	 m_def = def;
	 m_name = name;
}

void Character::DisplayStats()//utilize cout to display characters name, HP, ATK, and DEF
{
	cout << "Name: "<< m_name << endl;
	cout << "HP = " << m_hp << endl;
	cout << "ATK =" << m_atk << endl;
	cout << "DEF =" << m_def << endl;
}

void Character::SelectAction()
{
	;// need to define this!!
}

int Character::GetAttack()
{
	char choice;
	bool select = false;
	while (select == false)
	{
		cout << "Please choose your attack type:\n";
		cout << "1. Offense\n";
		cout << "2. Defense\n";
		cin >> choice;
		switch (choice)
		{
		case '1': return 1; select = true; break;
		case '2': return 2; select = true; break;
		default: select = false;
		}
	}
}

void Character::GetHit(int attack)
{
	;//need to define this!!
	//this will get the attack int from Enemy class and return it to user
}

int Character::GetHP() const
{
	cout << m_hp << endl;
	return m_hp;
}
