// TestPoint.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{
	double x1, y1;
	double x2, y2;

	cout << "Please input x and y of Point1 separated by space" << endl;

	if (!(cin >> x1 >> y1))
	{
		cout << "Input Error." << endl;
		return;
	}

	Point p1(x1, y1);

	cout << p1.ToString() << endl;
	cout << p1.X() << " " << p1.Y() << endl;

	cout << "Please input x and y of Point2 separated by space" << endl;

	if (!(cin >> x2 >> y2))
	{
		cout << "Input Error." << endl;
		return;
	}

	Point p2(x2, y2);

	cout << p2.ToString() << endl;
	cout << p2.X() << " " << p2.Y() << endl;

	cout << "The distance between origin and " << p1.ToString() << " is "
		<< p1.Distance() << "." << endl;

	cout << "The distance between " << p1.ToString() << " and " << p2.ToString()
		<< " is " << p1.Distance(p2) << "." << endl;

	const Point cp(1.5, 3.9);
	cout << cp.X() << endl;
}
