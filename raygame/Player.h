#include "raylib.h"
#include "Actor.h"
#include "AABB.h"

#pragma once
static class Player : public Actor
{
	//Seth TM watermark
private:

public:
	Player();
	~Player();

	AABB hitbox;
	AABB swing;

	int HP = 3;

	float speed = 250;
	//DiagonalSpeed = (float)Math.Sqrt((Speed * Speed) + (Speed * Speed))/2;
	float dSpeed = 176.77f;

	float Height;
	float Width;

	float MouseXPos();
	float MouseYPos();

	void Swing();

	void TakeInput();
	void Update();

};

