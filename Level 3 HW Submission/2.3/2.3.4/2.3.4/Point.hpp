// Point.hpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#ifndef Point_HPP
#define Point_HPP

#include <iostream>
using namespace std;

class Point
{
private:
	double m_x;
	double m_y;

public:
	Point();
	Point(const Point& point);
	Point(double x, double y);

	~Point();

	double X() const;
	double Y() const;
    
	void X(double x);
	void Y(double y);

	string ToString() const;

	double Distance() const;
	double Distance(const Point& p) const; 
};

#endif
