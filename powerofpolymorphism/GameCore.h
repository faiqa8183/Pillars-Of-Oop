#ifndef GAMECORE_H
#define GAMECORE_H
#include <iostream>
#include "Command.h"
class GameCore :public Command
{
public:
	static void Jump();
	static void Fire();
	static void Lurch();
	static void Swap();

};
#endif 