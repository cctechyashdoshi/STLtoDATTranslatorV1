#include "../Header Files/Manager.h"
#include "../Header Files/FileRead.h"
#include "../Header Files/FileWrite.h"
#include "../Header Files/Triangulation.h"

void Manager::managerMain() 
{
    STLReader reader;
    FileWrite writer;
    Triangulation triangulation;

    std::string inputFile = "cube.stl";
    reader.read(inputFile, triangulation);
    writer.writeToFile("output.dat", triangulation);
}
