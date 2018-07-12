// TestCircle.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include "Circle.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{
	double x, y;
	double r;

	cout << "Please input x and y of the center separated by space" << endl;

	if (!(cin >> x >> y))
	{
		cout << "Input Error." << endl;
		return;
	}

	cout << "Please input radius" << endl;

	if (!(cin >> r))
	{
		cout << "Input Error." << endl;
		return;
	}

	Point p(x, y);

	Circle circle(p, r);

	cout << circle.ToString() << endl;
	cout << "Diameter: " << circle.Diameter() << endl;
	cout << "Area: " << circle.Area() << endl;
	cout << "Circumference: " << circle.Circumference() << endl;
}
