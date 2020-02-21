#include "AABB.h"
#include "raylib.h"

//Seth TM watermark
void AABB::SetX(float value) { x = value; }

void AABB::SetY(float value) { y = value; }

bool AABB::DetectCollision(AABB other) {
	return !(Bottom < other.Top || Right < other.Left ||
		Top > other.Bottom || Left > other.Right);
}

void AABB::Draw() {
	Rectangle rec;

	rec.x = x;
	rec.y = y;
	rec.width = Width;
	rec.height = Height;

	DrawRectangleLinesEx(rec, 5, RED);
}

AABB::AABB()
{
}

AABB::AABB(float Wid, float Hei) {
	Width = Wid;
	Height = Hei;
}


AABB::~AABB()
{
}
