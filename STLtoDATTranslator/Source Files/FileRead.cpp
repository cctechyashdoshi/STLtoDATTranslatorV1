#include <cassert>
#include <sstream>
#include "../Header Files/FileRead.h"

#define FILENAME "../Test cases/cube.stl"

Read::Read() {};

std::string Read::read() {
    std::ifstream infile(FILENAME);
    assert(infile.is_open());
    std::string line;
    while (getline(infile, line)) {
        std::stringstream ss(line);
        std::string word;
        while (ss >> word) {
            if (word == "vertex") {
                std::string x, y, z;
                ss >> x >> y >> z;
                assert(!x.empty() && !y.empty() && !z.empty());
                data += x + " " + y + " " + z + " ";
            }
        }
    }
    return data;
};

Read::~Read() {};
