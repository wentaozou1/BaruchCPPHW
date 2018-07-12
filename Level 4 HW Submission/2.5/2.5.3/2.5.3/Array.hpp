// Array.hpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#ifndef Array_HPP
#define Array_HPP

#include "Point.hpp"
using namespace std;

class Array
{
private:
	Point* m_data;
	int m_size;

public:
	Array();
	Array(int size);
	Array(const Array& pp);
	~Array();

	Array& operator = (const Array& source);
	Point& operator [] (int index);
	const Point& operator [] (int index) const;

    int Size() const;
	Point& GetElement(int index) const;
	
	void SetElement(int index, const Point& newP);
};

#endif
