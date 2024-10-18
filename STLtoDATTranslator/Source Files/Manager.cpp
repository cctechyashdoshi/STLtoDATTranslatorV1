// STLtoDATTranslator/Source Files/Manager.cpp
#include "../Header Files/Manager.h"
#include "../Header Files/FileRead.h"
#include "../Header Files/FileWrite.h"
#include "../Header Files/Triangulation.h"

void Manager::managerMain() {
    Read reader;
    FileWrite writer;
    Triangulation triangulation;

    reader.readFile("cube.stl", triangulation);
    writer.writeToFile("output.dat", triangulation);
}