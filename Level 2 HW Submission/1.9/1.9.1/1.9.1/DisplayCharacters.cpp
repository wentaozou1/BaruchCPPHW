// DisplayCharacters.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include <stdio.h>

#ifndef MAX_LENGTH
#define MAX_LENGTH 10000
#endif

void main()
{ 
	int char_input;
	int n_count = 0;
	char str[MAX_LENGTH];
	
	//我不太确定，如果有问题的话，就uncomment下面这一行
    //void echo_char(char str[MAX_LENGTH], int n_count);

	
	printf("Please input characters. Press ENTER to ehco characters line by line or CTRL + A to end.\n");

	while ((char_input = getchar()) != 1)
	{
		if (char_input == 10 && n_count > 0)
		{
			echo_char(str, n_count);
			n_count = 0;
			continue;
        }else{
            str[n_count] = char_input;
            n_count++;
        }
	}
	if (n_count > 0)
	{
		echo_char(str, n_count);
	}
	printf("CTRL + A is a correct ending.\n");
}

void echo_char(char str[MAX_LENGTH], int n_count)
{
	for (int i = 0; i <= n_count - 1; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
