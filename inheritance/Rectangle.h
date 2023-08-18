#pragma once

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#include <iostream>
#include "Shape.h"
using namespace std;
class Rectangle :public Shape
{
	double Rheight;
	double Rwidth;
public:
	Rectangle(double rHeight, double rWidth);//  : overloaded constructor
	double GetArea();// : calculate area and returns it;
	void Print();// : Prints rHeight and rWidth with tab space
	~Rectangle();// : prints “Rectangle Destructor called”
};
#endif