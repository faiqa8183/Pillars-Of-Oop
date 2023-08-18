#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double height, double width )
{
	Rheight = height;
	Rwidth = width;
}
double Rectangle::GetArea()
{
	return  Rheight*Rwidth;
}
void Rectangle::Print()
{
	cout << "Height is " << Rheight << " " << "width is " << Rwidth << endl;

}
Rectangle :: ~Rectangle()
{
	cout << " desctructor of rectangle is called" << endl;
}
