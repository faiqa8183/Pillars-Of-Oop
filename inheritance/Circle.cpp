#include <iostream>
#include "Circle.h"
using namespace std; 

Circle::Circle(double rad)
{
	radius = rad;
}
double Circle::GetArea()
{
	return  PI*radius*radius;
}
void Circle::Print()
{
	cout << " radius is :" << radius;
	
}
Circle :: ~Circle()
{
	cout << " desctructor of circle is called" << endl;
}
