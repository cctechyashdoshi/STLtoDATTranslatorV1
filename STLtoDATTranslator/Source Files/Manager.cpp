#include "../Header Files/FileRead.h"
#include "../Header Files/FileWrite.h"
#include "../Header Files/Triangulation.h"
#include "../Header Files/Manager.h"

int managerMain() {
    Read reader;
    FileWrite writer;
    Triangulation triangulation;

    reader.readFile("cube.stl", triangulation);
    writer.writeToFile("output.dat", triangulation);

    return 0;
}