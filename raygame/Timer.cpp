#include "Timer.h"
#include <time.h>
#include "raylib.h"

double Timer::GetSeconds()
{
	currentTime = GetTime();
	currentTime -= offset;

	return currentTime;
}

void Timer::Restart()
{
	offset = GetTime();
}

Timer::Timer()
{
}


Timer::~Timer()
{
}