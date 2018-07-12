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
	cout << "Default Constructor Called." << endl;
}

Point::Point(const Point& point) : m_x(point.m_x), m_y(point.m_y)
{
	cout << "Copy Constructor Called." << endl;
}

Point::Point(double xValue, double yValue) : m_x(xValue), m_y(yValue)
{
	cout << "Customer Constructor Called." << endl;
}

Point::~Point()
{
	cout << "Destructor Called." << endl;
}

double Point::GetX()
{
	return m_x;
}

double Point::GetY()
{
	return m_y;
}

void Point::SetX(double x)
{
	m_x = x;
}

void Point::SetY(double y)
{
	m_y = y;
}

string Point::ToString()
{
	stringstream stream;

	stream << "Point(" << m_x << "," << m_y << ")";

	return stream.str();
}

double Point::DistanceOrigin()
{
	return sqrt(pow(m_x, 2) + pow(m_y, 2));
}

double Point::Distance(const Point& p)
{
	return sqrt(pow(m_x - p.m_x, 2) + pow(m_y - p.m_y, 2));
}
