#include "Enemy.h"

//Kyra's code 

Enemy::Enemy()
{
	m_facing = north;

}


void Enemy::Update()
{
	
	movement();
}

//the enemy's movement in general
void Enemy::movement()
{
	switch (m_facing)
	{
	case north:
		m_moveUp();
		break;
	case east:
		m_moveLeft();
		break;
	case south:
		m_moveDown();
		break;
	case west:
		m_moveRight();
		break;
	}
	
}

//
//void Enemy::attack()
//{
//
//}

//
void Enemy::m_moveUp()
{
	
	y += -(speed)* GetFrameTime();
	if (y <= 33)
	{
		
		m_facing = east;
	}

}

//
void Enemy::m_moveDown()
{
	y += (speed)* GetFrameTime();
	if (y >= 400)
	{
		m_facing = west;
	}
}

//
void Enemy::m_moveLeft()
{
	x += -(speed)* GetFrameTime();
	if (x <= 33)
	{
		m_facing = south;
	}
}

//
void Enemy::m_moveRight()
{
	x += (speed)* GetFrameTime();
	if (x >= 400)
	{
		m_facing = north;
	}
}


