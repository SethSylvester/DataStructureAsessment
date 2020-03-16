#include "Player.h"
#include "Timer.h"

//Seth TM watermark

//Timer class1
Timer t;

Player::Player()
{
	hitbox.x = 200;
	hitbox.y = 100;

}


Player::~Player()
{
}

//Gets the X position for the players attack but prevents it from going too far
float Player::MouseXPos() {
	float mX = GetMouseX();
	//Right
	if (mX > x + 20)
	{
		mX = x + 20;
	}
	//Left
	else if (mX < x - 75)
	{
		mX = x - 70;
	}

	//No clipping the players Hitbox
	else if (mX < x && (GetMouseY() < y && GetMouseY() > y - 40))
	{
		mX = x - 70;
	}

	return mX;
}

//Gets the Y position for the players attack but prevents it from going too far
float Player::MouseYPos() {
	float mY = GetMouseY();
	//Bottom
	if (mY > y + 20)
	{
		mY = y + 20;
	}
	//Top
	else if (mY < y - 75)
	{
		mY = y - 70;
	}

	return mY;
}

void Player::Swing() {
	////No swinging too early
	//if (t.GetSeconds() < 1)
	//{
	//	return;
	//}
	//Setting and drawing the hitbox
	swing.SetX(MouseXPos());
	swing.SetY(MouseYPos());
	swing.Draw();

	////restarts the timer
	//t.Restart();

}

void Player::TakeInput() {
	//Up down right
	if (IsKeyDown(87) && IsKeyDown(83) && IsKeyDown(68)) {
		x += speed * GetFrameTime();
	}
	//up right
	else if (IsKeyDown(87) && IsKeyDown(68)) {
		y -= dSpeed * GetFrameTime();
		x += dSpeed * GetFrameTime();
	}	
	//up left
	else if (IsKeyDown(87) && IsKeyDown(65)) {
		y -= dSpeed * GetFrameTime();
		x -= dSpeed * GetFrameTime();
	}
	//down right
	else if (IsKeyDown(83) && IsKeyDown(68)) {
		y += dSpeed * GetFrameTime();
		x += dSpeed * GetFrameTime();
	}
	//down left
	else if (IsKeyDown(83) && IsKeyDown(65)) {
		y += dSpeed * GetFrameTime();
		x -= dSpeed * GetFrameTime();
	}
	//Up
	else if (IsKeyDown(87)) {
		y -= speed * GetFrameTime();
	}
	//Down
	else if (IsKeyDown(83)) {
		y += speed * GetFrameTime();
	}
	//Right
	else if (IsKeyDown(68)) {
		x += speed * GetFrameTime();
	}
	//Left
	else if (IsKeyDown(65)) {
		x -= speed * GetFrameTime();
	}

	//Action on left click
	if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
		Swing();
	}
}

void Player::Update()
{
	TakeInput();

	hitbox.x = x - 25;
	hitbox.y = y - 25;
	hitbox.Draw();

	DrawCircle(x, y, 25, RAYWHITE);
}
