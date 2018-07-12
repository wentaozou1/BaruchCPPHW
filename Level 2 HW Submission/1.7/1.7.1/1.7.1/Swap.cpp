// Swap.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include <stdio.h>

void main()
{
	double i, j;

	void Swap(double* pi, double* pj);

	printf("Please input two numbers separated by space");

	if (scanf_s("%lf %lf", &i, &j))
	{
		printf("Your i is %lf, and your j is %lf.\n", i, j);

		Swap(&i, &j);

		printf("After swap, your i is now %lf, and j is %lf.\n", i, j);
	}
	else
	{
		printf("Input Error.\n");
	}
}

void Swap(double* p1, double* p2)
{
	double tem;
	
	tem = (*p2);
	(*p2) = (*p1);
	(*p1) = tem;	
}
