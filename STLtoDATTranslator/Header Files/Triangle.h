#pragma once

#include "Point.h"

class Triangle 
{
    Point p1, p2, p3;
public:
    Triangle(const Point& p1, const Point& p2, const Point& p3);
    ~Triangle();

    const Point& getP1() const { return p1; }
    const Point& getP2() const { return p2; }
    const Point& getP3() const { return p3; }
};