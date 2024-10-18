#include "../Header Files/FileWrite.h"
#include "../Header Files/FileRead.h"
#include "../Header Files/Triangulation.h"
#include <string>

int main() {
    Read reader;
    std::string input = reader.read();

    Triangulation triangulation;
    triangulation.processString(input);
    triangulation.createTriangles(input);

    Write writer;
    writer.writeFile("output.dat", triangulation.getTriangles(), triangulation.getUniqueVertices());

    return 0;
}
