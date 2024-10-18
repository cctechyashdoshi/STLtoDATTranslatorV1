#pragma once

#include <vector>
#include "Triangle.h"

class Triangulation {
public:
    std::vector<Triangle> triangles;
    std::vector<Point> uniquePoints;

    Triangulation();
    ~Triangulation();
};