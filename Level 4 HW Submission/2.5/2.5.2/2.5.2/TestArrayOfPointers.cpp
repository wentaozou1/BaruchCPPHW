// TestArrayOfPointers.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{
	const int size = 4;

	Point** array_pp = new Point*[size];

	array_pp[0] = new Point(3.0, 3.0);
	array_pp[1] = new Point(1.0, 2.0);
	array_pp[2] = new Point(3.5, 5.5);
    array_pp[3] = new Point(4.5, 2.5);

	for (int i = 0; i < 3; i++)
	{
		cout << *array_pp[i] << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		delete array_pp[i];
	}

	delete[] array_pp;

}
