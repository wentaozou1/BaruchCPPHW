// Macro.c
//
// Purpose: Print two variables using macros.
//
// @author Fulin Li
// @version 1.0 11/01/14

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
