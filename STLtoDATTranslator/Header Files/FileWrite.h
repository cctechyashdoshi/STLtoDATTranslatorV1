#pragma once

#include <string>
#include "Triangulation.h"

class FileWrite 
{
public:
    FileWrite();
    ~FileWrite();
    void writeToFile(const std::string& filename, Triangulation& triangulation);
};