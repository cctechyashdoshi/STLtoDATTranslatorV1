#pragma once
#include "Point.h"

class Triangle {
    Point p1, p2, p3;
public:
    Triangle(Point p1, Point p2, Point p3);
    Point getPointP1();
    Point getPointP2();
    Point getPointP3();
    ~Triangle();
};



