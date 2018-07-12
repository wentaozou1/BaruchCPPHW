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
	Point(double xValue, double yValue);
	~Point();

	
	double GetX();
	double GetY();
    
	void SetX(double x);
	void SetY(double y);

	string ToString();

	double DistanceOrigin();
	double Distance(const Point& p); 
};

#endif
