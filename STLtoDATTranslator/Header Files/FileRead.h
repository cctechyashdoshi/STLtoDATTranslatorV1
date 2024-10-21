#pragma once

#include <string>
#include "Triangulation.h"

class Read 
{
public:
    Read();
    ~Read();
    void readFile(const std::string& filename, Triangulation& triangulation);
};