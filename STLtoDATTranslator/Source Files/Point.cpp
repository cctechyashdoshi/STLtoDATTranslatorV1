#include "../Header Files/Point.h"

Point::Point(double x, double y, double z) : x(x), y(y), z(z) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }
double Point::getZ() const { return z; }

bool Point::operator<(const Point& other) const {
    if (x != other.x) return x < other.x;
    if (y != other.y) return y < other.y;
    return z < other.z;
}

bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y && z == other.z;
}