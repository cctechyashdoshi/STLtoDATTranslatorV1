#include "../Header Files/Triangulation.h"

Triangulation::Triangulation() 
{
}

Triangulation::~Triangulation() 
{
}

std::vector<Triangle>& Triangulation::getTriangles()
{
    return triangles;
}

std::vector<Point>& Triangulation::getUniquePoints() 
{
    return uniquePoints;
}