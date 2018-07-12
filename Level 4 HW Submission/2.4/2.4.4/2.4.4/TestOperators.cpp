// TestOperators.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include "Point.hpp"
#include "Line.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{
    Point p1(1, 2);
    Point p2(-2, -1);
    cout << p1.ToString() << ", " << p2.ToString() << endl;
    
    Point p3 = - p1;
    cout << "- " << p1.ToString() << ", result: " << p3.ToString() << endl;
    
    p3 = p1 + p2;
    cout << p1.ToString() << " + " << p2.ToString() << ", result: " << p3.ToString() << endl;
    
    p3 = p1 * 3;
    cout << p1.ToString() << " * 3, result: " << p3.ToString() << endl;
    
    cout << "(" << p1.ToString() << " == " << p2.ToString() << "), result: " << (p1 == p2) << endl;
    
    p3 = p1;
    cout << "p3 = " << p1.ToString() << ", p3 becomes " << p3.ToString() << endl;
    
    p3 *= 3;
    cout << "p3 *= 3, p3 becomes " << p3.ToString() << endl;
    
    cout << "p1:" << endl;
    cout << p1;
    
    const Point p4(1, 1);
    const Point p5(2, 3);
    Line l1(p4, p5);
    
    cout << "l1: " << endl << l1.ToString() << endl;
    
    Line l2 = l1;
    cout << "l2 = l1" << endl << "l2: " << endl << l2.ToString() << endl;
    
    cout << "l1:" << endl;
    cout << l1;

	const Point p4(0, 0);
	const Point p5(4, 5);
	Line l1(p4, p5);
}
