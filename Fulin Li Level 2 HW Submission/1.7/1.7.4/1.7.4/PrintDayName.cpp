// PrintDayName.cpp
//
// Purpose: Print the day of a given day-number.
//
// @author Fulin Li
// @version 1.0 11/02/14

#include <stdio.h>

void main()
{
	int n_Day = 0; // day-number input

	// Print the day of a given day-number
	// n_Day - day-number
	void DayName(int n_Day);

	// Ask the user to input the day number.
	printf("Please input a day number (integers from 1 to 7).\n");

	if (scanf_s("%d", &n_Day))
	{
		// Call DayName to print the day number and day name.
		DayName(n_Day);
	}
	else
	{
		printf("Input Error.\n");
	}	
}

void DayName(int n_Day)
{
	// A two-dimensional array storing the day name.
	const char *day_string[7];
	a[0] = "Sunday";
	a[1] = "Monday";
	a[2] = "Tuesday";
	a[3] = "Wednesday";
	a[4] = "Thursday";
	a[5] = "Friday";
	a[6] = "Saturday";
	
	// Print the day name.
	printf("Day %d is a %s.\n", n_Day, day_string[n_Day - 1]);
}
