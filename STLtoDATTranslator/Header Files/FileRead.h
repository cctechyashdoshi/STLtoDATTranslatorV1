#pragma once

#include<iostream>
#include<string>
#include<fstream>

class Read {
std::string line, data;
public:
    Read();
    std::string read();
    ~Read();
};
