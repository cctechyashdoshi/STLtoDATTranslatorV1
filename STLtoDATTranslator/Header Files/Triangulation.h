#pragma once

#include <vector>
#include "Triangle.h"
#include "Point.h"

class Triangulation 
{
    std::vector<Triangle> triangles;
    std::vector<double> uniquePoints;
public:
    Triangulation();
    ~Triangulation();

    std::vector<Triangle>& getTriangles();
    std::vector<double>& getUniquePoints();
    void insertTriangles(Triangle& triangle);
};