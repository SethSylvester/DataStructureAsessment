#include <chrono>
#pragma once

class Timer
{
private:
	float currentTime = 0;
	float prevTime = 0;
	float offset = 0;

public:
	double GetSeconds();
	void Restart();

	Timer();
	~Timer();
};

