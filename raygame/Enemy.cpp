#include "Enemy.h"
#include <cstdlib>

Player * player;

//Kyra's code 

Enemy::Enemy()
{
	m_facing = north;
}

Enemy::Enemy(Player * p) {
	speed = 140;
	player = p;
}


void Enemy::Update()
{
	//Seths code
	hitbox.x = x - 25;
	hitbox.y = y - 25;
	hitbox.Draw();

		//detect collision with players fist
		if (hitbox.DetectCollision(player->swing))
		{
			alive = false;
		}

		if (alive == false)
		{
			DrawCircle(x, y, 25, GREEN);
		}

		//Detect collision with player
		else if (hitbox.DetectCollision(player->hitbox)) {
			DrawCircle(x, y, 25, RED);
		}

		else {
			DrawCircle(x, y, 25, BLUE);
		}

		if (alive) {
		movement();
	}
}

//the enemy's movement in general
void Enemy::movement() {
	if (player != nullptr) {
		if (abs(x - player->x) > abs(y - player->y)) {
			//right
			if (player->x > x) {
				x += speed* GetFrameTime();
			}
			//left
			else if (player->x < x) {
				x -= speed* GetFrameTime();
			}
		}
		else {
			//down
			if (player->y > y) {
				y += speed* GetFrameTime();
			}
			//up
			else if (player->y < y) {
				y -= speed* GetFrameTime();
			}
		}
	}

	else {
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
