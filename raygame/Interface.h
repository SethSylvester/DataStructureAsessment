#include "Player.h"
#pragma once

class Interface
{
public:
	Interface(int screenHeight, int screenWidth, Player * p);
	~Interface() {}

	void Update();
	void Display();
};

