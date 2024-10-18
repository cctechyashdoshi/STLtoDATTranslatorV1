#include "../Header Files/Triangle.h"

Triangle::Triangle(Point p1, Point p2, Point p3)
{
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = p3;
}

Point Triangle::getPointP1(){return p1;};
Point Triangle::getPointP2(){return p2;};
Point Triangle::getPointP3(){return p3;};

Triangle::~Triangle(){};
