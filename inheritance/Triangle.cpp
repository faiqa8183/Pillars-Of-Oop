#include <iostream>
#include "Triangle.h"
//class Shape;
using namespace std;
Triangle::Triangle(double base, double height)
{
	triangleBase = base;
	triangleheight = height;
}
double Triangle::GetArea()
{
	return  (triangleBase + triangleheight) / 2;
}
void Triangle::Print()
{
	cout << " Triangle Base is :" << triangleBase;
	cout << "   " << " Triaqngle height is" << triangleheight;
}
Triangle :: ~Triangle()
{
	cout << " desctructor of triangle is called" << endl;
}
 