#include "../Header Files/Point.h"



Point::Point(int x, int y, int z) 
    : x(x), y(y), z(z) 
{};

int Point::getX(){return x;};
int Point::getY(){return y;};
int Point::getZ(){return z;};

Point::~Point(){};
