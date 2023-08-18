#pragma once
#include"Point.h"
#include"Quadrilateral.h"
#include<iostream>
using namespace std;
class Rectangle :public Quadrilateral
{
	double length, width;
public:
	Rectangle()
	{

	}
	Rectangle(Quadrilateral& quad) :Quadrilateral(quad)
	{
		setattributes();
	}
	Rectangle(Point a, Point b, Point c, Point d) :Quadrilateral(a, b, c, d)
	{
		setattributes();
	}
	Rectangle(Rectangle& rect)
	{
		this->getquad() = rect.getquad();
	}
	double GetArea()
	{
		return getdistab() * getdistda();
	}
	double GetParameter()
	{
		return (getdistab() + getdistda()) * 2;

	}
	friend ostream& operator<<(ostream& output, Rectangle& rect)
	{
		rect.output();
		return output;
	}
	double getwidth()
	{
		return width;
	}
	double getlength()
	{
		return length;
	}
	void setwidth(double wid)
	{
		this-> width = wid;
	}
	void setlength(double len)
	{
		this->length = len;
	}
	void setattributes()
	{
		if (slopeab() == slopecd() && slopebc() == slopeda())
		{
			return;
		}
		else
		{	
			getquad().seta(0, 0);
			getquad().setb(0, 5);
			getquad().setc(6, 5);
			getquad().setd(6, 0);
		}
		length = getdistab();
		width = getdistda();
	}
};