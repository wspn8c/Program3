#pragma once
#include <iostream>
#include "Character.h"
using namespace std;

class Player : public Character
{
public:
	void SelectAction(); //takes no arguments, returns no value
};