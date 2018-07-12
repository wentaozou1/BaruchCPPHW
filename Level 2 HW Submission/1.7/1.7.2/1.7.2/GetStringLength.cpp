// GetStringLength.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include <stdio.h>
#define MAXLINE 30

int length(char str[]);

int main()
{
	char string[MAXLINE + 1];
	int c;
	int i = 0;

	printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);

	while ((c = getchar()) != EOF && i < MAXLINE)
	{
		string[i++] = (char)c;
	}

	string[i] = '\0';

	printf("String length is %d\n", length(string));

	return 0;
}

int length(char str[])
{
	int len = 0;
	
	while (str[len] != '\0')
	{
		len++;
	}

	return len;
}
