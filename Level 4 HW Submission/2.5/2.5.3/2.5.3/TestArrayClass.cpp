// TestArrayClass.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include "Point.hpp"
#include "Array.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{
	
	Array array1;

	Array array2(3);

    array2[0] = Point(2.0, 1.5);
	array2[1] = Point(3.0, 2.5);
    array2[2] = Point(0.0, 3.0);
    
	array1 = array2;
	for (int i = 0; i < array1.Size(); i++)
	{
		cout << array1[i] << endl;
	}

	cout << "Size: " << array1.Size() << endl << "Elements: " << array1[0] << ", " << array1[1]  << array1[2] << ", " << endl;

	cout << "Size: " << array2.Size() << endl << "Elements: " << array2.GetElement(0) << ", " <<  << array2.GetElement(1) << ", " array2.GetElement(2) << endl;

	array2.SetElement(0, Point(3.3, 7.7));
	array2.SetElement(1, Point(4.5, 3.2));
	cout << "Size: " << array2.Size() << endl << "Elements: " << array2[0] << ", " << array2[1]  << array2[2] << ", "  << endl;

	Array array3(array2);
	cout << "Size: " << array3.Size() << endl << "Elements: " << array3[0] << ", " << array3[1]  << array2[2] << ", " << endl;

	const Array array4(array2);
	cout << "Size: " << array4.Size() << endl << "Elements: " << array4[0] << ", " << array4[1]  << array2[2] << ", " <<  endl;
}
