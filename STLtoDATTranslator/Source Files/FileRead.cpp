#include "../Header Files/FileRead.h"
#include <cassert>
#include <sstream>

Read::Read() 
{
}

Read::~Read() 
{
}

void Read::readFile(const std::string& filename, Triangulation& triangulation) 
{
    std::ifstream infile(filename);
    std::map<Point, int> pointIndexMap;
    std::string line;
    int vertexCount = 0;
    int v1 = -1, v2 = -1, v3 = -1;

    while (getline(infile, line)) {
        if (line.find("vertex") != std::string::npos) {
            std::istringstream vertexStream(line);
            std::string token;
            double x, y, z;
            vertexStream >> token >> x >> y >> z;

            Point point(x, y, z);
            auto it = pointIndexMap.find(point);
            if (it == pointIndexMap.end()) {
                triangulation.getUniquePoints().push_back(point);
                pointIndexMap[point] = static_cast<int>(triangulation.getUniquePoints().size()) - 1;
            }

            if (vertexCount == 0) {
                v1 = pointIndexMap[point];
            } else if (vertexCount == 1) {
                v2 = pointIndexMap[point];
            } else if (vertexCount == 2) {
                v3 = pointIndexMap[point];
            }

            vertexCount = (vertexCount + 1) % 3;

            if (vertexCount == 0) {
                triangulation.getTriangles().push_back(Triangle(
                    triangulation.getUniquePoints()[v1],
                    triangulation.getUniquePoints()[v2],
                    triangulation.getUniquePoints()[v3]
                ));
            }
        }
    }
}
