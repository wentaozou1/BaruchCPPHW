// Circle.hpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#ifndef Circle_HPP
#define Circle_HPP

#include "Point.hpp"

class Circle
{
private:
	Point m_center;
	double m_radius;

public:
	Circle();
	Circle(const Point& c, double r);
	Circle(const Circle& circle);

	~Circle();
	
	Point CentrePoint() const;
	double Radius() const;

	void CentrePoint(const Point& c);
	void Radius(double r);
	
	double Diameter() const;
	double Area() const;
	double Circumference() const;

	string ToString() const; 
};

#endif
