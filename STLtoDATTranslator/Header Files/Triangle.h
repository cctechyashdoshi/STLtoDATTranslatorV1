#pragma once

#include "Point.h"

class Triangle 
{
    Point p1, p2, p3;
public:
    Triangle(const Point& p1, const Point& p2, const Point& p3);
    ~Triangle();

    const Point& getP1() const;
    const Point& getP2() const;
    const Point& getP3() const;
};