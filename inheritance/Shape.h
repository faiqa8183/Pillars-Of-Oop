#pragma once
#ifndef _SHAPE_H_
#define _SHAPE_H_

#include <iostream>
using namespace std;
//#ifndef MANAGER_H
//#define MANAGER_H


class Shape
{
public:
	
	virtual double GetArea()=0 ;
	virtual void Print()=0 ;
	~Shape();

};
#endif
