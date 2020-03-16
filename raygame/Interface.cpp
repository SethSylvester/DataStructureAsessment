#include "Interface.h"
#include <string>

int height;
int width;
Player * player;

char * health;

Interface::Interface(int screenHeight, int screenWidth, Player * p)
{
	height = screenHeight;
	width = screenWidth;
	player = p;
}

void Interface::Update()
{
	static char buffer[10];

	std::string str = std::to_string(player->HP);
	sprintf_s(buffer, "%d", player->HP);
}

void Interface::Display()
{
	DrawText(health, height/2, width - 100, 20, RAYWHITE);
}
