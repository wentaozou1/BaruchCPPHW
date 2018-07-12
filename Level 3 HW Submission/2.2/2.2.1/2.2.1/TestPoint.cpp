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
	double x, y;

	cout << "Please input x and y separated by space" << endl;

	if (!(cin >> x >> y))
	{
		cout << "Input Error." << endl;
		return;
	}

	Point p;

	p.SetX(x);
	p.SetY(y);

	cout << p.ToString() << endl;

	cout << p.GetX() << "," << p.GetY() << endl;
}
