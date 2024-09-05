#include "Point.h"
#include <math.h>

Point::Point(double x, double y)
{
    this->_x = x;
    this->_y = y;
}
Point::operator+(const Point& other) const
{
    Point newPoint = new Point(_x + other._x, _y + other->_y);
    return newPoint;
}
Point::Point& operator+=(const Point& other)
{
    this->_x += other->_x;
    this->_y += other->_y;
    return *this;
}
Point::double distance(Point& other)
{
    int d_1 = (other->_x - _x)*(other->_x - _x);
    int d_2 = (other->_y - _y)*(other->_y - _y);
    return sqrt(d_1+d_2);
}

