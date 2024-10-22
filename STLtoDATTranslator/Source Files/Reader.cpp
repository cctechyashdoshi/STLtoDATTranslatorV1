#include "../Header Files/Reader.h"

using namespace std;

Reader::Reader()
{
}

Reader::~Reader()
{
}

void Reader::read(string& inputFile, Triangulation& triangulation)
{
}

bool Reader::equalChecker(double num1, double num2)
{
	if (fabs(num1 - num2) > TOLERANCE)
		return false;
	return true;
}