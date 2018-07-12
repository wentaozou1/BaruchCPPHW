// Line.hpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#ifndef Line_HPP
#define Line_HPP

#include "Point.hpp"
#include <iostream>
using namespace std;

class Line
{
private:
	Point p1;
	Point p2;

public:
	Line();
	Line(const Point& p1, const Point& p2);
	Line(const Line& line); /

	~Line();

	Point P1() const;
	Point P2() const;

	void P1(const Point& p1);
	void P2(const Point& p2);

	double Length() const;
	string ToString() const; 
};

#endif
