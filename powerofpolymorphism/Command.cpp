#include <iostream>
#include "Command.h"
using namespace std;

Command::~Command()
{
	cout << "Destructor of parent Command is called " << endl;
};