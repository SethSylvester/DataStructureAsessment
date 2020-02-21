#pragma once
#include "raylib.h"

class Room
{
public:
	Room();
	Room(int roomSizeX, int roomSizeY);
	~Room();

private:
	//Create a room size
	Vector3 roomSize;
};