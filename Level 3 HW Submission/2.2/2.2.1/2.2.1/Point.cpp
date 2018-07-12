// Point.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include "Point.hpp"
#include <sstream>
using namespace std;

Point::Point()
{
}

Point::~Point() 
{
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
