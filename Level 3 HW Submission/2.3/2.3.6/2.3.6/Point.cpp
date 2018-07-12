// Point.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include "Point.hpp"
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;

Point::Point()
{
}

Point::Point(const Point& point) : m_x(point.m_x), m_y(point.m_y)
{
}

Point::Point(double x, double y) : m_x(x), m_y(y)
{
}

Point::~Point() 
{
}

string Point::ToString() const
{
	stringstream stream;

	stream << "Point(" << m_x << "," << m_y << ")";

	return stream.str();
}

double Point::Distance() const
{
	return sqrt(pow(m_x, 2) + pow(m_y, 2));
}

double Point::Distance(const Point& p) const
{
	return sqrt(pow(m_x - p.m_x, 2) + pow(m_y - p.m_y, 2));
}
