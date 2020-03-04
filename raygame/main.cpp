/*******************************************************************************************
*
*   raylib [core] example - basic window
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "AABB.h"
#include "Actor.h"
#include "Player.h"
#include "Enemy.h"
#include "UnorderdList.h"

int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 1000;
	int screenHeight = 650;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);

	Player p;

	Enemy e = Enemy(&p);
	e.x = 500;
	e.y = 50;

	Camera2D camera = { 0 };
	Vector2 playerTracking = {p.x, p.y};

	camera.rotation = 0.0f;
	camera.zoom = 1.0f;

	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose()) // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		p.Update();
		e.Update();

		//Center the camera on the player
		playerTracking = { p.x, p.y };

		camera.target = playerTracking;

		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
		
		ClearBackground(BLACK);

		BeginMode2D(camera);

		EndMode2D();

		DrawText("Congrats! Dead meme!", 190, 200, 20, RAYWHITE);

		EndDrawing();

		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}
