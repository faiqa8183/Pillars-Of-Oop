#include <iostream>
#include "JumpCommand.h"
#include "GameCore.h"

void JumpCommand::execute()
{
	GameCore::Fire();
}