// Macro.c
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include <stdio.h>
#include "Defs.h"

void main()
{
	char str1[20], char str2[20];

	// Ask the user to input a and b.
	printf("Please input two strings separated by space");
	
	if (scanf_s("%s %s", str1, str2))
	{
		// Print variable a.
		PRINT1(str1, str2);

		// Print variable a and b.
		PRINT2(str1, str2;
	}
	else
	{
		printf("Input Error.\n");
	}	
}
