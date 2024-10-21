#include "../Header Files/Triangle.h"

Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3) : p1(p1), p2(p2), p3(p3) 
{
}

Triangle::~Triangle() 
{
}

const Point& Triangle::getP1() const
{
    return p1;
}

const Point& Triangle::getP2() const
{
    return p2;
}

const Point& Triangle::getP3() const
{
    return p3;
}