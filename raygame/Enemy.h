#pragma once
#include "Actor.h"
#include "raylib.h"
#include "AABB.h"
#include "Player.h"

//Kyra's code 

enum Direction
{
	north, east, south, west
};

class Enemy : public Actor
{
public:
	bool alive = true;

	AABB hitbox;

	Enemy();

	Enemy(Player * p);

	~Enemy() {}

	void Update();
	void movement();

protected:
	int health;
	int damage;
	float speed = 70;

private:
	Direction m_facing;
	//void attack();
	void m_moveUp();
	void m_moveDown();
	void m_moveLeft();
	void m_moveRight();
};

