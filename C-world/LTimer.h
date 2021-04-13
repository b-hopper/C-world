#pragma once

#include "pch.h"
#include <SDL.h>
#include <stdio.h>
#include <string>
#include <sstream>

class LTimer
{
public:
	LTimer();

	void start();
	void stop();
	void pause();
	void unpause();

	Uint32 getTicks();

	bool isStarted();
	bool isPaused();

private:
	Uint32 mStartTicks;

	Uint32 mPausedTicks;

	bool mPaused;
	bool mStarted;

};

