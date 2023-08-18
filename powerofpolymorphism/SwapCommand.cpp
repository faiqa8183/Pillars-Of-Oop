#include <iostream>
#include "SwapCommand.h"
#include "GameCore.h"
void SwapCommand::execute()
{
	GameCore::Swap();
}