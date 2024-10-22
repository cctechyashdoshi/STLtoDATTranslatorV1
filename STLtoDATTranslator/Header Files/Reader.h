#pragma once
#include "Triangulation.h"
#include <string>

#define TOLERANCE 0.000001

using namespace std;

class Reader
{
public:
	Reader();
	~Reader();
	virtual void read(string& inputFile, Triangulation& triangulation) = 0;

	bool equalChecker(double num1, double num2);
};
