#include "../Header Files/FileWrite.h"
#include <fstream>
#include <iostream>

FileWrite::FileWrite() 
{
}

FileWrite::~FileWrite() 
{
}

void FileWrite::writeToFile(const std::string& filename, const Triangulation& triangulation) 
{
    std::ofstream outfile(filename);
    if (!outfile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    for (const auto& triangle : triangulation.triangles) {
        outfile << triangle.getP1().getX() << " " << triangle.getP1().getY() << " " << triangle.getP1().getZ() << std::endl;
        outfile << triangle.getP2().getX() << " " << triangle.getP2().getY() << " " << triangle.getP2().getZ() << std::endl;
        outfile << triangle.getP3().getX() << " " << triangle.getP3().getY() << " " << triangle.getP3().getZ() << std::endl;
    }

    outfile.close();
}