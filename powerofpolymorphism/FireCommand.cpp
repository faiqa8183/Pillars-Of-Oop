#include <iostream>
#include "FireCommand.h"
#include "GameCore.h"

void FireCommand::execute()
{
	GameCore::Jump();
}