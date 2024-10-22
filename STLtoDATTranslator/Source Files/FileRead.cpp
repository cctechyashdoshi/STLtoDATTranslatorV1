#include "../Header Files/FileRead.h"
#include "../Header Files/Point.h"
#include <sstream>
#include <iostream>
#include <fstream>

using namespace std;

STLReader::STLReader()
{
}

STLReader::~STLReader()
{
}

void STLReader::read(std::string& inputFile, Triangulation& triangulation) {
    ifstream myfile(inputFile);
    string line;
    int index = 0;
    int x1;
    int y1;
    int z1;
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            istringstream iss(line);
            string vertex;
            double x, y, z;
            if (iss >> vertex >> x >> y >> z)
            {
                if (vertex == "vertex")
                {
                    x1 = findAddValues(x, triangulation);
                    y1 = findAddValues(y, triangulation);
                    z1 = findAddValues(z, triangulation);
                    pointList.push_back(Point(x1, y1, z1));
                }
            }
            if (static_cast<int>(pointList.size()) == 3)
            {
                createTriangles(pointList[0], pointList[1], pointList[2], triangulation);
                pointList.clear();
            }
        }
    }
}

int STLReader::findAddValues(double& value, Triangulation& triangulation)
{

    for (int i = 0; i < triangulation.getUniquePoints().size(); i++)
    {
        if (equalChecker(triangulation.getUniquePoints()[i], value))
            return i;
    }
    triangulation.getUniquePoints().push_back(value);
    int size = triangulation.getUniquePoints().size();
    return size - 1;
}

void STLReader::createTriangles(Point& p1, Point& p2, Point& p3, Triangulation& triangulation)
{
    Triangle tri(p1, p2, p3);
    triangulation.insertTriangles(tri);
}