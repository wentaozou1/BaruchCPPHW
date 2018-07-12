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
	Point p(1.0, 1.0);
	//if (p == 1.0) cout << "Equal!" << endl;
	//else cout << "Not equal" << endl;
	
	if (p == (Point)1.0) cout << "Equal!" << endl;
}
