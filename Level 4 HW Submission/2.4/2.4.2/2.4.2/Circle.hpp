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
	Point m_cetner;
	double m_radius;

public:
	Circle();
	Circle(const Point& center, double r);
	Circle(const Circle& circle);
	~Circle();
	
	Point CentrePoint() const;
	double Radius() const;
	double Diameter() const;
	double Area() const;
	double Circumference() const;

	void CentrePoint(const Point& c);
	void Radius(double r);
		
	string ToString() const;

	Circle& operator = (const Circle& source); 
};
ostream& operator << (ostream& os, const Circle& c);

#endif
