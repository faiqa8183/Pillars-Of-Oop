#ifndef COMMAND_H
#define	COMMAND_H
#include <iostream>
using namespace std;
class Command
{
public:
	~Command();
virtual	void execute() = 0;
};
#endif