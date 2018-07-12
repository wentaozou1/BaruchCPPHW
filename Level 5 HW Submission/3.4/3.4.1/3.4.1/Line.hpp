// Line.hpp
//
// Header file for Lines in two dimensions.
//
// @author Fulin Li
// @version 1.0 11/15/14

#ifndef Line_HPP
#define Line_HPP

#include "Point.hpp"
#include <iostream>
using namespace std;

class Line
{
private:
	Point p1; // Start point
	Point p2; // End point

public:
	// Constructors
	Line();
	Line(const Point& p1, const Point& p2);
	Line(const Line& line);
	~Line();

	// Accessing functions
	Point P1() const;
	Point P2() const;

	// Modifiers
	void P1(const Point& newP1);
	void P2(const Point& newP2);

	double Length() const;
	string ToString() const;

	// Member operator overloading
	Line& operator = (const Line& source); // Assignment operator

	// Global operator overloading
	friend ostream& operator << (ostream& os, const Line& l); // Send to ostream
};

#endif