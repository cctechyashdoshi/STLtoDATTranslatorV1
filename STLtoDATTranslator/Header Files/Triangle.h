#pragma once

#include "Point.h"

class Triangle {
public:
    Point p1, p2, p3;

    Triangle(const Point& p1, const Point& p2, const Point& p3) : p1(p1), p2(p2), p3(p3) {}
};