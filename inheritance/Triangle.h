#pragma once
#ifndef  _TRIANGLE_H_
#define  _TRIANGLE_H_
#include "Shape.h"
#include <iostream>
using namespace std;
class Triangle : public Shape
{
private:
	double triangleBase;
	double triangleheight;
public:
	Triangle(double base, double height);// : overloaded constructor
	double GetArea();// : calculate area and returns it;
	void Print(); //: Prints just triangleBaseand trriangleHeight with a tab space
	~Triangle();// : prints “Triangle Destructor called”
};
#endif
