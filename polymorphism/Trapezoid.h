#pragma once
#include"point.h"
#include"Quadrilateral.h"
#include<iostream>
using namespace std;
class Trapezoid :public Quadrilateral
{
	double b1;
	double b2;
public:
	Trapezoid()
	{
		b1 = this->getdistab();
		b2 = this->getdistda();
	}
	double Parameter()
	{
		return getdistab() +getdistcd() + getdistbc() + getdistda();
	}
	Trapezoid(Quadrilateral& q) :Quadrilateral(q)
	{

	}
	Trapezoid(Point a, Point b, Point c, Point d) :Quadrilateral(a, b, c, d)
	{

	}
	Trapezoid(Trapezoid& trap)
	{
		this->getquad() = trap.getquad();
	}

	friend ostream& operator<<(ostream& output, Trapezoid& trap)
	{
		trap.output();
		return output;
	}
};