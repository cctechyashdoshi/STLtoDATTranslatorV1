#include "../Header Files/FileWrite.h"
#include <fstream>
#include <iostream>

FileWrite::FileWrite() {}

FileWrite::~FileWrite() {}

void FileWrite::writeToFile(const std::string& filename, const Triangulation& triangulation) {
    std::ofstream outfile(filename);
    if (!outfile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

    for (const auto& triangle : triangulation.triangles) {
        outfile << triangle.p1.getX() << " " << triangle.p1.getY() << " " << triangle.p1.getZ() << std::endl;
        outfile << triangle.p2.getX() << " " << triangle.p2.getY() << " " << triangle.p2.getZ() << std::endl;
        outfile << triangle.p3.getX() << " " << triangle.p3.getY() << " " << triangle.p3.getZ() << std::endl;
    }

    outfile.close();
}