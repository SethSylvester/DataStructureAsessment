#include "Actor.h"
#pragma once

class AABB : public Actor
{
	//Seth TM watermark
public:
	float Width = 50;
	float Height = 50;

	float Top = (YAbsolute - Height)/2;
	float Bottom = (YAbsolute + Height)/2;
	float Left = (XAbsolute - Width)/2;
	float Right = (XAbsolute + Width)/2;

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

