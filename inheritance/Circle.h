#pragma once

#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include <iostream>
#include "Shape.h"
using namespace std;
class Circle : public Shape 
{
	double radius;
	const double PI = 3.14;
public:
	Circle(double radius);// : overloaded constructor
	double  GetArea();// : calculate area and returns it;
	 void  Print();// : Prints just radius
	~Circle();// : prints “Circle Destructor called”
};
#endif