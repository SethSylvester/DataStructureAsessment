#include "Actor.h"
#pragma once

class AABB : public Actor
{
	//Seth TM watermark
public:
	float Width = 50;
	float Height = 50;

	float Top();
	float Bottom();
	float Left();
	float Right();

	void SetX(float value);
	void SetY(float value);

	bool DetectCollision(AABB other);

	//void SetColor(Color color);
	void Draw();

	//void Update();

	AABB();
	AABB(float Wid, float Hei);
	~AABB();
};

