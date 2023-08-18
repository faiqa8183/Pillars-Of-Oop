#include <iostream>
#include "InputHandler.h"
using namespace std; 

InputHandler::InputHandler()
{
	ButtonX = new JumpCommand();
	ButtonY = new FireCommand();
	ButtonA = new SwapCommand();
	ButtonB = new LurchCommand();
}
void InputHandler::HandleInput()
{
	char inputCharacter = '\0';
	cin >> inputCharacter;
	switch (inputCharacter)
	{
	case 'X' :
		ButtonX->execute();
		break;
	case 'Y' :
		ButtonY->execute();
		break;
	case 'A' :
		ButtonA->execute();
		break;
	case 'B' :
		ButtonB->execute();
		break;
	default:
		break;
	}
}
