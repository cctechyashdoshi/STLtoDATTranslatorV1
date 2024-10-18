#pragma once
#include<vector>
#include<unordered_map>
#include<sstream>
#include "Triangle.h"

using namespace std;

class Triangulation {
    vector<double> uniqueVertices;
    unordered_map<double, int> vertexIndexMap;  
    vector<Triangle> triangles;
public:
    std::vector<double> getUniqueVertices();
    void processString(const std::string& data);
    vector<Triangle> getTriangles();
    vector<Triangle> createTriangles(const std::string& data); 
};
