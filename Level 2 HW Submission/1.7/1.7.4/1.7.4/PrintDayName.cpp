// PrintDayName.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include <stdio.h>

void main()
{
	int n_Day = 0;

	void DayName(int n_Day);

	printf("Please input a day number (integers from 1 to 7).\n");

	if (scanf_s("%d", &n_Day))
	{
		DayName(n_Day % 7);
	}
	else
	{
		printf("Input Error.\n");
	}	
}

void DayName(int n_Day)
{
	const char *day_string[7];
	a[0] = "Sunday";
	a[1] = "Monday";
	a[2] = "Tuesday";
	a[3] = "Wednesday";
	a[4] = "Thursday";
	a[5] = "Friday";
	a[6] = "Saturday";
	
	printf("Day %d is a %s.\n", n_Day, day_string[n_Day - 1]);
}
