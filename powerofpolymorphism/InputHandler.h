#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include <iostream>
#include "Command.h"
#include "FireCommand.h"
#include "GameCore.h"
#include "LurchCommand.h"
#include "JumpCommand.h"
#include "SwapCommand.h"
using namespace std;
class InputHandler
{
	Command *ButtonX;
	Command *ButtonY;
	Command *ButtonA;
	Command *ButtonB;
public:
	InputHandler();
	void HandleInput();


};
#endif