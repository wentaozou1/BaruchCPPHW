// TestLine.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include "Line.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{
	double x1, y1;
	double x2, y2;

	cout << "Please input x and y of the start point separated by space" << endl;

	if (!(cin >> x1 >> y1))
	{
		cout << "Input Error." << endl;
		return;
	}

	cout << "Please input x and y of the end point separated by space" << endl;

	if (!(cin >> x2 >> y2))
	{
		cout << "Input Error." << endl;
		return;
	}

	const Point p1(x1, y1);
	const Point p2(x2, y2);

	Line line(p1, p2);

	cout << line.ToString() << ", " << "the length is " << line.Length() << "." << endl;	
}
