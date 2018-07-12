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

	~Point();
    
	double GetX();
	double GetY();
	
	void SetX(double x);
	void SetY(double y);

	string ToString();

	double DistanceOrigin();
	double Distance(Point p); 
};

#endif
