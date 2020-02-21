#include "Room.h"

//Creates a default sized room of 16 by 16
Room::Room()
{
	roomSize.x = 16;
	roomSize.y = 16;
}

//Creates a custom sized room
Room::Room(int roomSizeX, int roomSizeY)
{
	roomSize.x = roomSizeX;
	roomSize.y = roomSizeY;
}

Room::~Room()
{

}