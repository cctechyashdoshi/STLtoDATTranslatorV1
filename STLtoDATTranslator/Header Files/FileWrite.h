#pragma once
#include<fstream>
#include<vector>
#include"Triangle.h"
#include<iomanip>

class Write {
public:
    void writeFile(const std::string& filename, const std::vector<Triangle>& triangles, const std::vector<double>& uniqueVertices);
};


