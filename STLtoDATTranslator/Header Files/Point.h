#pragma once

class Point {
public:
    double x, y, z;

    Point(double x, double y, double z);
    double getX() const;
    double getY() const;
    double getZ() const;

    bool operator<(const Point& other) const;
    bool operator==(const Point& other) const;
};