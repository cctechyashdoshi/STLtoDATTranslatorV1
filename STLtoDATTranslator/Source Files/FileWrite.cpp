#include "../Header Files/FileWrite.h"
#include <fstream>
#include <iostream>

FileWrite::FileWrite() 
{
}

FileWrite::~FileWrite() 
{
}

void FileWrite::writeToFile(const std::string& filename, Triangulation& triangulation) 
{
    std::ofstream outfile(filename);
    if (!outfile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }

	for (const auto& triangle : triangulation.getTriangles()) {
		outfile << triangulation.getUniquePoints()[triangle.getP1().getX()] << " " << triangulation.getUniquePoints()[triangle.getP1().getY()] << " " << triangulation.getUniquePoints()[triangle.getP1().getZ()] << std::endl;
		outfile << triangulation.getUniquePoints()[triangle.getP2().getX()] << " " << triangulation.getUniquePoints()[triangle.getP2().getY()] << " " << triangulation.getUniquePoints()[triangle.getP2().getZ()] << std::endl;
		outfile << triangulation.getUniquePoints()[triangle.getP3().getX()] << " " << triangulation.getUniquePoints()[triangle.getP3().getY()] << " " << triangulation.getUniquePoints()[triangle.getP3().getZ()] << std::endl;
		outfile << triangulation.getUniquePoints()[triangle.getP1().getX()] << " " << triangulation.getUniquePoints()[triangle.getP1().getY()] << " " << triangulation.getUniquePoints()[triangle.getP1().getZ()] << std::endl;
		outfile << std::endl;
		outfile << std::endl;
	}
	outfile.close();
}