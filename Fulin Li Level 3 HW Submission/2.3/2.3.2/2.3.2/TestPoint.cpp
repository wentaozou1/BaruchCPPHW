// TestPoint.cpp
//
// Test program for the Point class.
//
// Last Modifications:
// 2014-11-8 Print the distance between the origin and another point
// 2014-11-8 Print the distance between two points using the constructor that accepts x- and y-coordinates
// 
// @author Fulin Li
// @version 1.3 11/08/14

#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{
	double x1, y1;
	double x2, y2;

	// Ask the user for the x- and y-coordinates of point1.
	cout << "Please input x and y of Point1 separated by space" << endl;

	if (!(cin >> x1 >> y1))
	{
		cout << "Input Error." << endl;
		return;
	}

	Point point1(x1, y1);

	cout << point1.ToString() << endl;
	cout << point1.GetX() << " " << point1.GetY() << endl;

	// Ask the user for the x- and y-coordinates of point2.
	cout << "Please input x and y of Point2 separated by space" << endl;

	if (!(cin >> x2 >> y2))
	{
		cout << "Input Error." << endl;
		return;
	}

	Point point2(x2, y2);

	cout << point2.ToString() << endl;
	cout << point2.GetX() << " " << point2.GetY() << endl;

	// Print the distance between the origin and the first point.
	//cout << "The distance between origin and " << point1.ToString() << " is " 
		//<< point1.DistanceOrigin() << "." << endl;

	// Print the distance between the first point and the second point.
	cout << "The distance between " << point1.ToString() << " and " << point2.ToString() 
		<< " is " << point1.Distance(point2) << "." << endl;

	// The constructor that accepts x- and y-coordinates is called twice.
	// The destructor is called twice. 
	// The number of constructor call now is the same as the number of destructor call.
}
