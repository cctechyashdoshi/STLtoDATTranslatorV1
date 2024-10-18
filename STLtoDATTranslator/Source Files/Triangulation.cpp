#include "../Header Files/Triangulation.h"

std::vector<double> Triangulation::getUniqueVertices(){return uniqueVertices;};

std::vector<Triangle> Triangulation::getTriangles(){return triangles;};

void Triangulation::processString(const string& data){
    std::istringstream iss(data);
    double value;
    int currentIndex = 0;

    while (iss >> value) {
        if (vertexIndexMap.find(value) == vertexIndexMap.end()) {
            vertexIndexMap[value] = currentIndex;
            uniqueVertices.push_back(value);
            currentIndex++;
        }
    }
};

vector<Triangle> Triangulation::createTriangles(const std::string& data){
    vector<Triangle> triangles;
    istringstream iss(data);
    vector<int> indices;
    double val;
    
    while (iss >> val) {
        indices.push_back(vertexIndexMap[val]);

        if (indices.size() == 9) {
            Point p1(indices[0], indices[1], indices[2]);
            Point p2(indices[3], indices[4], indices[5]);
            Point p3(indices[6], indices[7], indices[8]);
            triangles.emplace_back(p1, p2, p3);
            indices.clear();
        }
    }
    return triangles;
};
