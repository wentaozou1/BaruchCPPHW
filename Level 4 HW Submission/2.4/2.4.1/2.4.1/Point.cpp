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

Point::Point(double xValue, double yValue) : m_x(xValue), m_y(yValue) 
{
}

Point::~Point()
{
}

double Point::X() const
{
	return m_x;
}

double Point::Y() const
{
	return m_y;
}

void Point::X(double x)
{
	m_x = x;
}

void Point::Y(double y)
{
	m_y = y;
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

Point Point::operator - () const
{

	return Point(- m_x, - m_y);
}

Point Point::operator * (double factor) const
{
	
	return Point(m_x * factor, m_y * factor);
}

Point Point::operator + (const Point& p) const
{

	return Point(m_x + p.m_x, m_y + p.m_y);
}

bool Point::operator == (const Point& p) const
{

	if (m_x == p.m_x && m_y == p.m_y)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Point& Point::operator = (const Point& source)
{

	if (this == &source)
	{
		return *this;
	}

	this.m_x = source.m_x;
	this.m_y = source.m_y;

	return *this;
}

Point& Point::operator *= (double factor)
{

	m_x *= factor;
	m_y *= factor;

	return *this;
}
