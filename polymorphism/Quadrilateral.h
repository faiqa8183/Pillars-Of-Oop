#pragma once
#include"point.h"
#include<cmath>
#include<iostream>
using namespace std;
class Quadrilateral
{
	Point a, b, c, d;
public:
	Quadrilateral()
	{
		
	}
	double getdistab()
	{
		return a.getDistance(b);
	}
	double getdistbc()
	{
		return b.getDistance(c);
	}
	double getdistcd()
	{
		return c.getDistance(d);
	}
	double getdistda()
	{
		return d.getDistance(a);
	}
	double getdistac()
	{
		return a.getDistance(c);
	}
	double getdistbd()
	{
		return b.getDistance(d);
	}
	bool isCyclicQuadrilateral()
	{
		if ((getdistab() * getdistcd()) + (getdistbc() * getdistda()) == getdistbd() * getdistac())
			return true;
		return false;
	}
	Quadrilateral(Quadrilateral& quad)
	{
		a = quad.a;
		b = quad.b;
		c = quad.c;
		d = quad.d;
	}
	Quadrilateral(Point& p1, Point& p2, Point& p3, Point& p4)
	{
		a = p1;
		b = p2;
		c = p3;
		d = p4;
	}
	friend ostream& operator<<(ostream& output, Quadrilateral& quad)
	{
		cout << quad.a << endl;
		cout << quad.b << endl;
		cout << quad.c << endl;
		cout << quad.d << endl;
		return output;
	}
	double Getparameter()
	{		
		 return (getdistab() + getdistcd() + getdistbc() + getdistda());
	}
	void output()
	{
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
		cout << d << endl;
	}
	void seta(int a, int b)
	{
		this->a.setX(a);
		this->a.setY(b);
	}
	void setb(int a, int b)
	{
		this->b.setX(a);
		this->b.setY(b);

	}
	void setc(int a, int b)
	{
		this->c.setX(a);
		this->c.setY(b);
	}
	void setd(int a, int b)
	{
		this->d.setX(a);
		this->d.setY(b);
	}
	double GetArea()
	{
		double final;
		double dis1, dis2, ar1, ar2;

		dis1 = (getdistab() + getdistbc() + getdistac()) / 2;
		dis2 = (getdistac() + getdistcd() + getdistda()) / 2;
		ar1 = sqrt(s1 * (s1 - getdistab())) * (s1 - getdistbc()) * (s1 - getdistac());
		ar2 = sqrt(s2 *(s2 - getdistac()) *(s2 - getdistcd()) *(s2 - getdistda()));
		final = a1 + a2;
		return final;
	}
	double slopeab()
	{
		return a.getSlope(b);
	}
	double slopebc()
	{
		return b.getSlope(c);
	}
	double slopecd()
	{
		return c.getSlope(d);
	}
	double slopeda()
	{
		return d.getSlope(a);
	}
	Quadrilateral getquad()
	{
		return *this;
	}
};