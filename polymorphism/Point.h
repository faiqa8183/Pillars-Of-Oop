#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class Point
{

	double pointx;
	double pointy;

public: 
	Point()
	{
		pointx = 0;
		pointy = 0;
	}
	Point(double x, double y)
	{
		this->pointx = x;
		this->pointy = y;
	}


	friend ostream& operator << (ostream& output, Point& p)
	{
		output << "('" << p.pointx << "','"<< p.pointy << "')";
		return output;
	}
	Point (Point& p)
	{
		this->pointx = p.x;
		this->pointy = p.y;
	}
	void setX(double x)
	{
		this->pointx = x;
	}
	void setY(double y)
	{
		this->pointy = y;
	}
	double getSlope(Point& b)
	{

		return  (b.pointy - pointy) / (b.pointx - pointx);
	}
	double getDistance(Point& pn)
	{

		return sqrt(((pn.pointx - pointx) * (pn.pointx -pointx)) + ((pn.pointy - pointy)*(pn.pointy - pointy)));
	}
	bool operator ==(Point p2)
	{
		
		if (pointx == p.pointx && y == p.pointy)
		{
			return true;
		}
			return false;
	}
};