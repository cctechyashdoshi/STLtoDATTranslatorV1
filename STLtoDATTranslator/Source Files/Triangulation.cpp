#include "../Header Files/Triangulation.h"

Triangulation::Triangulation() {
    // Constructor implementation
}

Triangulation::~Triangulation() {
    // Destructor implementation
}

std::vector<Triangle>& Triangulation::getTriangles()
{
    return triangles;
}

std::vector<Point>& Triangulation::getUniquePoints() 
{
    return uniquePoints;
}