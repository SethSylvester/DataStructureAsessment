#pragma once
class Actor
{
	//Seth TM watermark
public:
	float x = 50;
	float y = 100;

	virtual void Update();
	virtual void Draw();

	Actor();
	~Actor();
};

