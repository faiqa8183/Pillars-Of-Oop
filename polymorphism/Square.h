#pragma once
#include"point.h"
#include"Rectangle.h"
#include"Quadrilateral.h"
#include<iostream>
using namespace std;
class Square :public Rectangle
{
public:
	Square()
	{

	}
	Square(Quadrilateral& quad) :Rectangle(quad)
	{
		setattributes();
	}
	Square(Rectangle& quad) :Rectangle(quad)
	{
		setattributes();
	}
	Square(Point a, Point b, Point c, Point d) :Rectangle(a, b, c, d)
	{
		setattributes();
	}
	Square(Square& sq)
	{
		this->getquad() = sq.getquad();
	}
	double GetArea()
	{
		return getdistab() * getdistda();
	}
	double GetParameter()
	{
		return (getdistab() + getdistda()) * 2;
	
	}
	void setattributes()
	{
		if (getlength() != getwidth())
		{
			return;
		}
		else
		{
			getquad().seta(0, 0);
			getquad().setb(0, 5);
			getquad().setc(5, 5);
			getquad().setd(5, 0);
		}
		setlength(5);
		setwidth(5);
	}
	friend ostream& operator<<(ostream& output, Square& sqr)
	{
		sqr.output();
		return output;
	}
};