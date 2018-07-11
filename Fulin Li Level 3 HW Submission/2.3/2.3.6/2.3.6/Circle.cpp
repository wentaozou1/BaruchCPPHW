// Circle.cpp
//
// Header file for Circles in two dimensions.
// 
// @author Fulin Li
// @version 1.0 11/8/14

#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.hpp"
#include "Point.hpp"
#include <sstream>

Circle::Circle()
{
}

Circle::Circle(const Point& center, double r) : m_center(center), m_radius(r)
{
}

Circle::Circle(const Circle& circle) : m_center(circle.p_center), m_radius(circle.m_radius)
{
}

Circle::~Circle()
{
}

Point Circle::CentrePoint() const
{
	return m_center;
}

double Circle::Radius() const
{
	return m_radius;
}

void Circle::CentrePoint(const Point& center)
{
	p_center = center;
}

void Circle::Radius(double r)
{
	m_radius = r;
}

double Circle::Diameter() const
{
	return 2.0 * m_radius;
}

double Circle::Area() const
{
	return M_PI * pow(m_radius, 2);
}

double Circle::Circumference() const
{
	return 2.0 * M_PI * m_radius;
}

string Circle::ToString() const
{
	stringstream stream;

	stream << "Center: " << p_center.ToString() << endl << "Radius: " << m_radius;

	return stream.str();
}
