#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include "Point.h"
#include "Triangle.h"
#include "Triangulation.h"

class Read {
public:
    Read();
    void readFile(const std::string& filename, Triangulation& triangulation);
    ~Read();
};