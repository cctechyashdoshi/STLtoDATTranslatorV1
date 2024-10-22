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

std::vector<double>& Triangulation::getUniquePoints() 
{
    return uniquePoints;
}

void Triangulation::insertTriangles(Triangle& triangle)
{
    triangles.push_back(triangle);
}
