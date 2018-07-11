// Point.cpp
//
// Header file for Points in two dimensions.
// 
// Last Modifications:
// 2014-11-8 Add distance functions
// 2014-11-8 Add copy constructor and a constructor that accepts x- and y-coordinates
// 2014-11-8 Pass by reference in the Distance() function
// 2014-11-8 Rename DistanceOrigin() to Distance(), rename getter and setter functions
// 2014-11-8 Mark X(), Y(), Distance() and ToString() as const
//
// @author Fulin Li
// @version 1.5 11/8/14

#include "Point.hpp"
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;

Point::Point() // Default constructor
{
	cout << "Default Constructor Called." << endl;
}

Point::Point(const Point& point) : m_x(point.m_x), m_y(point.m_y) // Copy constructor
{
	cout << "Copy Constructor Called." << endl;
}

Point::Point(double x, double y) : m_x(x), m_y(y) // Constructor that accepts x- and y-coordinates
{
	cout << "Constructor Accepting x- and y-coordinates Called." << endl;
}

Point::~Point() // Destructor
{
	cout << "Destructor Called." << endl;
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
	// p.SetX(); // Result in compiler error.
	return sqrt(pow(m_x - p.m_x, 2) + pow(m_y - p.m_y, 2));
}
