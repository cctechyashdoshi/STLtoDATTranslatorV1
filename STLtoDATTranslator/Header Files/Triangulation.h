#pragma once

#include <vector>
#include "Triangle.h"
#include "Point.h"

class Triangulation 
{
    std::vector<Triangle> triangles;
    std::vector<Point> uniquePoints;
public:
    Triangulation();
    ~Triangulation();

    std::vector<Triangle>& getTriangles();
    std::vector<Point>& getUniquePoints();

};